// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpu_system_top__Syms.h"


VL_ATTR_COLD void Vnpu_system_top___024root__trace_full_0_sub_2(Vnpu_system_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root__trace_full_0_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+2169,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [0xeU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xeU])))));
    bufp->fullBit(oldp+2170,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xeU])))));
    bufp->fullBit(oldp+2171,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xeU])))));
    bufp->fullBit(oldp+2172,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [0xeU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xeU])))));
    bufp->fullBit(oldp+2173,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2174,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [2U][0xeU]))),11);
    bufp->fullIData(oldp+2175,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2176,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2177,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2178,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2179,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][0xfU]),16);
    bufp->fullIData(oldp+2180,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2181,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [2U]
                                                [0xfU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][0xfU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [2U]
                                                     [0xfU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0xfU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0xfU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [2U]
                                                         [0xfU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0xfU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2182,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [2U][0xfU] >> 0xfU))));
    bufp->fullCData(oldp+2183,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [2U][0xfU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2184,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [2U][0xfU])),10);
    bufp->fullBit(oldp+2185,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [0xfU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xfU])))));
    bufp->fullBit(oldp+2186,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xfU])))));
    bufp->fullBit(oldp+2187,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xfU])))));
    bufp->fullBit(oldp+2188,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [0xfU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xfU])))));
    bufp->fullBit(oldp+2189,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2190,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [2U][0xfU]))),11);
    bufp->fullIData(oldp+2191,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2192,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2193,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2194,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2195,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][1U]),16);
    bufp->fullIData(oldp+2196,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2197,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [2U]
                                                [1U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][1U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [2U]
                                                     [1U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [1U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [1U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [2U]
                                                         [1U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [1U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2198,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [2U][1U] >> 0xfU))));
    bufp->fullCData(oldp+2199,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [2U][1U] >> 0xaU))),5);
    bufp->fullSData(oldp+2200,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [2U][1U])),10);
    bufp->fullBit(oldp+2201,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [1U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][1U])))));
    bufp->fullBit(oldp+2202,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [1U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][1U])))));
    bufp->fullBit(oldp+2203,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [1U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][1U])))));
    bufp->fullBit(oldp+2204,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [1U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][1U])))));
    bufp->fullBit(oldp+2205,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2206,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [2U][1U]))),11);
    bufp->fullIData(oldp+2207,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2208,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2209,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2210,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2211,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][2U]),16);
    bufp->fullIData(oldp+2212,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2213,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [2U]
                                                [2U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][2U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [2U]
                                                     [2U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [2U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [2U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [2U]
                                                         [2U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [2U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2214,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [2U][2U] >> 0xfU))));
    bufp->fullCData(oldp+2215,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [2U][2U] >> 0xaU))),5);
    bufp->fullSData(oldp+2216,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [2U][2U])),10);
    bufp->fullBit(oldp+2217,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [2U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][2U])))));
    bufp->fullBit(oldp+2218,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [2U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][2U])))));
    bufp->fullBit(oldp+2219,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [2U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][2U])))));
    bufp->fullBit(oldp+2220,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [2U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][2U])))));
    bufp->fullBit(oldp+2221,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2222,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [2U][2U]))),11);
    bufp->fullIData(oldp+2223,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2224,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2225,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2226,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2227,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][3U]),16);
    bufp->fullIData(oldp+2228,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2229,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [2U]
                                                [3U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][3U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [2U]
                                                     [3U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [3U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [3U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [2U]
                                                         [3U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [3U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2230,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [2U][3U] >> 0xfU))));
    bufp->fullCData(oldp+2231,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [2U][3U] >> 0xaU))),5);
    bufp->fullSData(oldp+2232,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [2U][3U])),10);
    bufp->fullBit(oldp+2233,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [3U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][3U])))));
    bufp->fullBit(oldp+2234,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [3U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][3U])))));
    bufp->fullBit(oldp+2235,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [3U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][3U])))));
    bufp->fullBit(oldp+2236,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [3U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][3U])))));
    bufp->fullBit(oldp+2237,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2238,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [2U][3U]))),11);
    bufp->fullIData(oldp+2239,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2240,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2241,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2242,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2243,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][4U]),16);
    bufp->fullIData(oldp+2244,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2245,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [2U]
                                                [4U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][4U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [2U]
                                                     [4U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [4U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [4U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [2U]
                                                         [4U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [4U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2246,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [2U][4U] >> 0xfU))));
    bufp->fullCData(oldp+2247,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [2U][4U] >> 0xaU))),5);
    bufp->fullSData(oldp+2248,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [2U][4U])),10);
    bufp->fullBit(oldp+2249,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [4U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][4U])))));
    bufp->fullBit(oldp+2250,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [4U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][4U])))));
    bufp->fullBit(oldp+2251,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [4U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][4U])))));
    bufp->fullBit(oldp+2252,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [4U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][4U])))));
    bufp->fullBit(oldp+2253,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2254,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [2U][4U]))),11);
    bufp->fullIData(oldp+2255,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2256,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2257,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2258,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2259,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][5U]),16);
    bufp->fullIData(oldp+2260,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2261,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [2U]
                                                [5U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][5U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [2U]
                                                     [5U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [5U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [5U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [2U]
                                                         [5U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [5U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2262,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [2U][5U] >> 0xfU))));
    bufp->fullCData(oldp+2263,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [2U][5U] >> 0xaU))),5);
    bufp->fullSData(oldp+2264,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [2U][5U])),10);
    bufp->fullBit(oldp+2265,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [5U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][5U])))));
    bufp->fullBit(oldp+2266,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [5U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][5U])))));
    bufp->fullBit(oldp+2267,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [5U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][5U])))));
    bufp->fullBit(oldp+2268,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [5U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][5U])))));
    bufp->fullBit(oldp+2269,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2270,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [2U][5U]))),11);
    bufp->fullIData(oldp+2271,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2272,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2273,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2274,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2275,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][6U]),16);
    bufp->fullIData(oldp+2276,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2277,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [2U]
                                                [6U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][6U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [2U]
                                                     [6U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [6U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [6U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [2U]
                                                         [6U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [6U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2278,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [2U][6U] >> 0xfU))));
    bufp->fullCData(oldp+2279,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [2U][6U] >> 0xaU))),5);
    bufp->fullSData(oldp+2280,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [2U][6U])),10);
    bufp->fullBit(oldp+2281,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [6U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][6U])))));
    bufp->fullBit(oldp+2282,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [6U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][6U])))));
    bufp->fullBit(oldp+2283,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [6U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][6U])))));
    bufp->fullBit(oldp+2284,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [6U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][6U])))));
    bufp->fullBit(oldp+2285,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2286,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [2U][6U]))),11);
    bufp->fullIData(oldp+2287,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2288,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2289,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2290,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2291,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][7U]),16);
    bufp->fullIData(oldp+2292,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2293,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [2U]
                                                [7U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][7U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [2U]
                                                     [7U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [7U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [7U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [2U]
                                                         [7U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [7U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2294,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [2U][7U] >> 0xfU))));
    bufp->fullCData(oldp+2295,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [2U][7U] >> 0xaU))),5);
    bufp->fullSData(oldp+2296,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [2U][7U])),10);
    bufp->fullBit(oldp+2297,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [7U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][7U])))));
    bufp->fullBit(oldp+2298,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [7U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][7U])))));
    bufp->fullBit(oldp+2299,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [7U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][7U])))));
    bufp->fullBit(oldp+2300,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [7U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][7U])))));
    bufp->fullBit(oldp+2301,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2302,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [2U][7U]))),11);
    bufp->fullIData(oldp+2303,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2304,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2305,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2306,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2307,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][8U]),16);
    bufp->fullIData(oldp+2308,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2309,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [2U]
                                                [8U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][8U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [2U]
                                                     [8U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [8U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [8U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [2U]
                                                         [8U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [8U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2310,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [2U][8U] >> 0xfU))));
    bufp->fullCData(oldp+2311,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [2U][8U] >> 0xaU))),5);
    bufp->fullSData(oldp+2312,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [2U][8U])),10);
    bufp->fullBit(oldp+2313,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [8U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][8U])))));
    bufp->fullBit(oldp+2314,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [8U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][8U])))));
    bufp->fullBit(oldp+2315,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [8U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][8U])))));
    bufp->fullBit(oldp+2316,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [8U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][8U])))));
    bufp->fullBit(oldp+2317,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2318,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [2U][8U]))),11);
    bufp->fullIData(oldp+2319,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2320,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2321,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2322,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2323,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][9U]),16);
    bufp->fullIData(oldp+2324,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2325,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [2U]
                                                [9U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][9U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [2U]
                                                     [9U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [9U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [9U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [2U]
                                                         [9U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [9U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2326,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [2U][9U] >> 0xfU))));
    bufp->fullCData(oldp+2327,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [2U][9U] >> 0xaU))),5);
    bufp->fullSData(oldp+2328,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [2U][9U])),10);
    bufp->fullBit(oldp+2329,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [9U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][9U])))));
    bufp->fullBit(oldp+2330,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [9U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][9U])))));
    bufp->fullBit(oldp+2331,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [9U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][9U])))));
    bufp->fullBit(oldp+2332,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [9U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][9U])))));
    bufp->fullBit(oldp+2333,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2334,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [2U][9U]))),11);
    bufp->fullIData(oldp+2335,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2336,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2337,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2338,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullBit(oldp+2339,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en));
    bufp->fullSData(oldp+2340,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][0U]),16);
    bufp->fullIData(oldp+2341,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2342,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [3U]
                                                [0U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [3U][0U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [3U]
                                                     [0U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [3U]
                                                         [0U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2343,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [3U][0U] >> 0xfU))));
    bufp->fullCData(oldp+2344,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [3U][0U] >> 0xaU))),5);
    bufp->fullSData(oldp+2345,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [3U][0U])),10);
    bufp->fullBit(oldp+2346,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [0U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0U])))));
    bufp->fullBit(oldp+2347,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [0U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0U])))));
    bufp->fullBit(oldp+2348,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [0U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0U])))));
    bufp->fullBit(oldp+2349,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [0U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0U])))));
    bufp->fullBit(oldp+2350,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2351,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [3U][0U]))),11);
    bufp->fullIData(oldp+2352,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2353,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2354,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2355,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2356,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][0xaU]),16);
    bufp->fullIData(oldp+2357,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2358,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [3U]
                                                [0xaU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [3U][0xaU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [3U]
                                                     [0xaU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0xaU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0xaU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [3U]
                                                         [0xaU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0xaU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2359,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [3U][0xaU] >> 0xfU))));
    bufp->fullCData(oldp+2360,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [3U][0xaU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2361,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [3U][0xaU])),10);
    bufp->fullBit(oldp+2362,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [0xaU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xaU])))));
    bufp->fullBit(oldp+2363,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xaU])))));
    bufp->fullBit(oldp+2364,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xaU])))));
    bufp->fullBit(oldp+2365,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [0xaU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xaU])))));
    bufp->fullBit(oldp+2366,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2367,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [3U][0xaU]))),11);
    bufp->fullIData(oldp+2368,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2369,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2370,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2371,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2372,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][0xbU]),16);
    bufp->fullIData(oldp+2373,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2374,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [3U]
                                                [0xbU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [3U][0xbU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [3U]
                                                     [0xbU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0xbU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0xbU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [3U]
                                                         [0xbU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0xbU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2375,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [3U][0xbU] >> 0xfU))));
    bufp->fullCData(oldp+2376,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [3U][0xbU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2377,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [3U][0xbU])),10);
    bufp->fullBit(oldp+2378,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [0xbU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xbU])))));
    bufp->fullBit(oldp+2379,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xbU])))));
    bufp->fullBit(oldp+2380,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xbU])))));
    bufp->fullBit(oldp+2381,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [0xbU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xbU])))));
    bufp->fullBit(oldp+2382,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2383,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [3U][0xbU]))),11);
    bufp->fullIData(oldp+2384,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2385,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2386,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2387,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2388,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][0xcU]),16);
    bufp->fullIData(oldp+2389,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2390,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [3U]
                                                [0xcU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [3U][0xcU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [3U]
                                                     [0xcU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0xcU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0xcU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [3U]
                                                         [0xcU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0xcU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2391,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [3U][0xcU] >> 0xfU))));
    bufp->fullCData(oldp+2392,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [3U][0xcU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2393,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [3U][0xcU])),10);
    bufp->fullBit(oldp+2394,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [0xcU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xcU])))));
    bufp->fullBit(oldp+2395,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xcU])))));
    bufp->fullBit(oldp+2396,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xcU])))));
    bufp->fullBit(oldp+2397,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [0xcU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xcU])))));
    bufp->fullBit(oldp+2398,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2399,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [3U][0xcU]))),11);
    bufp->fullIData(oldp+2400,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2401,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2402,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2403,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2404,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][0xdU]),16);
    bufp->fullIData(oldp+2405,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2406,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [3U]
                                                [0xdU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [3U][0xdU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [3U]
                                                     [0xdU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0xdU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0xdU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [3U]
                                                         [0xdU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0xdU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2407,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [3U][0xdU] >> 0xfU))));
    bufp->fullCData(oldp+2408,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [3U][0xdU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2409,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [3U][0xdU])),10);
    bufp->fullBit(oldp+2410,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [0xdU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xdU])))));
    bufp->fullBit(oldp+2411,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xdU])))));
    bufp->fullBit(oldp+2412,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xdU])))));
    bufp->fullBit(oldp+2413,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [0xdU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xdU])))));
    bufp->fullBit(oldp+2414,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2415,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [3U][0xdU]))),11);
    bufp->fullIData(oldp+2416,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2417,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2418,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2419,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2420,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][0xeU]),16);
    bufp->fullIData(oldp+2421,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2422,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [3U]
                                                [0xeU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [3U][0xeU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [3U]
                                                     [0xeU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0xeU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0xeU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [3U]
                                                         [0xeU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0xeU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2423,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [3U][0xeU] >> 0xfU))));
    bufp->fullCData(oldp+2424,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [3U][0xeU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2425,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [3U][0xeU])),10);
    bufp->fullBit(oldp+2426,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [0xeU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xeU])))));
    bufp->fullBit(oldp+2427,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xeU])))));
    bufp->fullBit(oldp+2428,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xeU])))));
    bufp->fullBit(oldp+2429,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [0xeU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xeU])))));
    bufp->fullBit(oldp+2430,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2431,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [3U][0xeU]))),11);
    bufp->fullIData(oldp+2432,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2433,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2434,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2435,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2436,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][0xfU]),16);
    bufp->fullIData(oldp+2437,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2438,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [3U]
                                                [0xfU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [3U][0xfU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [3U]
                                                     [0xfU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0xfU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0xfU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [3U]
                                                         [0xfU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [0xfU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2439,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [3U][0xfU] >> 0xfU))));
    bufp->fullCData(oldp+2440,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [3U][0xfU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2441,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [3U][0xfU])),10);
    bufp->fullBit(oldp+2442,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [0xfU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xfU])))));
    bufp->fullBit(oldp+2443,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xfU])))));
    bufp->fullBit(oldp+2444,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xfU])))));
    bufp->fullBit(oldp+2445,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [0xfU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][0xfU])))));
    bufp->fullBit(oldp+2446,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2447,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [3U][0xfU]))),11);
    bufp->fullIData(oldp+2448,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2449,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2450,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2451,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2452,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][1U]),16);
    bufp->fullIData(oldp+2453,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2454,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [3U]
                                                [1U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [3U][1U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [3U]
                                                     [1U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [1U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [1U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [3U]
                                                         [1U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [1U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2455,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [3U][1U] >> 0xfU))));
    bufp->fullCData(oldp+2456,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [3U][1U] >> 0xaU))),5);
    bufp->fullSData(oldp+2457,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [3U][1U])),10);
    bufp->fullBit(oldp+2458,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [1U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][1U])))));
    bufp->fullBit(oldp+2459,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [1U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][1U])))));
    bufp->fullBit(oldp+2460,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [1U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][1U])))));
    bufp->fullBit(oldp+2461,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [1U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][1U])))));
    bufp->fullBit(oldp+2462,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2463,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [3U][1U]))),11);
    bufp->fullIData(oldp+2464,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2465,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2466,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2467,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2468,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][2U]),16);
    bufp->fullIData(oldp+2469,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2470,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [3U]
                                                [2U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [3U][2U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [3U]
                                                     [2U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [2U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [2U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [3U]
                                                         [2U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [2U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2471,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [3U][2U] >> 0xfU))));
    bufp->fullCData(oldp+2472,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [3U][2U] >> 0xaU))),5);
    bufp->fullSData(oldp+2473,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [3U][2U])),10);
    bufp->fullBit(oldp+2474,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [2U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][2U])))));
    bufp->fullBit(oldp+2475,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [2U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][2U])))));
    bufp->fullBit(oldp+2476,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [2U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][2U])))));
    bufp->fullBit(oldp+2477,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [2U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][2U])))));
    bufp->fullBit(oldp+2478,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2479,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [3U][2U]))),11);
    bufp->fullIData(oldp+2480,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2481,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2482,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2483,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2484,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][3U]),16);
    bufp->fullIData(oldp+2485,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2486,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [3U]
                                                [3U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [3U][3U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [3U]
                                                     [3U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [3U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [3U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [3U]
                                                         [3U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [3U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2487,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [3U][3U] >> 0xfU))));
    bufp->fullCData(oldp+2488,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [3U][3U] >> 0xaU))),5);
    bufp->fullSData(oldp+2489,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [3U][3U])),10);
    bufp->fullBit(oldp+2490,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [3U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][3U])))));
    bufp->fullBit(oldp+2491,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [3U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][3U])))));
    bufp->fullBit(oldp+2492,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [3U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][3U])))));
    bufp->fullBit(oldp+2493,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [3U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][3U])))));
    bufp->fullBit(oldp+2494,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2495,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [3U][3U]))),11);
    bufp->fullIData(oldp+2496,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2497,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2498,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2499,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2500,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][4U]),16);
    bufp->fullIData(oldp+2501,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2502,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [3U]
                                                [4U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [3U][4U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [3U]
                                                     [4U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [4U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [4U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [3U]
                                                         [4U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [4U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2503,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [3U][4U] >> 0xfU))));
    bufp->fullCData(oldp+2504,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [3U][4U] >> 0xaU))),5);
    bufp->fullSData(oldp+2505,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [3U][4U])),10);
    bufp->fullBit(oldp+2506,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [4U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][4U])))));
    bufp->fullBit(oldp+2507,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [4U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][4U])))));
    bufp->fullBit(oldp+2508,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [4U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][4U])))));
    bufp->fullBit(oldp+2509,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [4U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][4U])))));
    bufp->fullBit(oldp+2510,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2511,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [3U][4U]))),11);
    bufp->fullIData(oldp+2512,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2513,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2514,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2515,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2516,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][5U]),16);
    bufp->fullIData(oldp+2517,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2518,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [3U]
                                                [5U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [3U][5U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [3U]
                                                     [5U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [5U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [5U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [3U]
                                                         [5U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [5U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2519,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [3U][5U] >> 0xfU))));
    bufp->fullCData(oldp+2520,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [3U][5U] >> 0xaU))),5);
    bufp->fullSData(oldp+2521,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [3U][5U])),10);
    bufp->fullBit(oldp+2522,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [5U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][5U])))));
    bufp->fullBit(oldp+2523,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [5U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][5U])))));
    bufp->fullBit(oldp+2524,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [5U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][5U])))));
    bufp->fullBit(oldp+2525,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [5U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][5U])))));
    bufp->fullBit(oldp+2526,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2527,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [3U][5U]))),11);
    bufp->fullIData(oldp+2528,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2529,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2530,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2531,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2532,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][6U]),16);
    bufp->fullIData(oldp+2533,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2534,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [3U]
                                                [6U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [3U][6U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [3U]
                                                     [6U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [6U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [6U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [3U]
                                                         [6U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [6U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2535,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [3U][6U] >> 0xfU))));
    bufp->fullCData(oldp+2536,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [3U][6U] >> 0xaU))),5);
    bufp->fullSData(oldp+2537,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [3U][6U])),10);
    bufp->fullBit(oldp+2538,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [6U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][6U])))));
    bufp->fullBit(oldp+2539,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [6U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][6U])))));
    bufp->fullBit(oldp+2540,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [6U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][6U])))));
    bufp->fullBit(oldp+2541,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [6U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][6U])))));
    bufp->fullBit(oldp+2542,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2543,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [3U][6U]))),11);
    bufp->fullIData(oldp+2544,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2545,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2546,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2547,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2548,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][7U]),16);
    bufp->fullIData(oldp+2549,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2550,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [3U]
                                                [7U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [3U][7U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [3U]
                                                     [7U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [7U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [7U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [3U]
                                                         [7U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [7U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2551,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [3U][7U] >> 0xfU))));
    bufp->fullCData(oldp+2552,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [3U][7U] >> 0xaU))),5);
    bufp->fullSData(oldp+2553,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [3U][7U])),10);
    bufp->fullBit(oldp+2554,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [7U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][7U])))));
    bufp->fullBit(oldp+2555,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [7U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][7U])))));
    bufp->fullBit(oldp+2556,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [7U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][7U])))));
    bufp->fullBit(oldp+2557,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [7U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][7U])))));
    bufp->fullBit(oldp+2558,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2559,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [3U][7U]))),11);
    bufp->fullIData(oldp+2560,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2561,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2562,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2563,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2564,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][8U]),16);
    bufp->fullIData(oldp+2565,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2566,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [3U]
                                                [8U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [3U][8U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [3U]
                                                     [8U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [8U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [8U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [3U]
                                                         [8U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [8U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2567,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [3U][8U] >> 0xfU))));
    bufp->fullCData(oldp+2568,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [3U][8U] >> 0xaU))),5);
    bufp->fullSData(oldp+2569,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [3U][8U])),10);
    bufp->fullBit(oldp+2570,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [8U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][8U])))));
    bufp->fullBit(oldp+2571,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [8U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][8U])))));
    bufp->fullBit(oldp+2572,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [8U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][8U])))));
    bufp->fullBit(oldp+2573,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [8U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][8U])))));
    bufp->fullBit(oldp+2574,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2575,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [3U][8U]))),11);
    bufp->fullIData(oldp+2576,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2577,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2578,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2579,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2580,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [3U][9U]),16);
    bufp->fullIData(oldp+2581,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2582,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [3U]
                                                [9U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [3U][9U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [3U]
                                                     [9U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [9U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [9U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [3U]
                                                         [9U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [3U]
                                                       [9U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2583,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [3U][9U] >> 0xfU))));
    bufp->fullCData(oldp+2584,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [3U][9U] >> 0xaU))),5);
    bufp->fullSData(oldp+2585,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [3U][9U])),10);
    bufp->fullBit(oldp+2586,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [9U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][9U])))));
    bufp->fullBit(oldp+2587,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [9U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][9U])))));
    bufp->fullBit(oldp+2588,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [3U]
                                                  [9U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][9U])))));
    bufp->fullBit(oldp+2589,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [3U]
                                               [9U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [3U][9U])))));
    bufp->fullBit(oldp+2590,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2591,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [3U][9U]))),11);
    bufp->fullIData(oldp+2592,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2593,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2594,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2595,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__3__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullBit(oldp+2596,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en));
    bufp->fullSData(oldp+2597,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][0U]),16);
    bufp->fullIData(oldp+2598,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2599,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [4U]
                                                [0U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [4U][0U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [4U]
                                                     [0U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [4U]
                                                         [0U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2600,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [4U][0U] >> 0xfU))));
    bufp->fullCData(oldp+2601,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [4U][0U] >> 0xaU))),5);
    bufp->fullSData(oldp+2602,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [4U][0U])),10);
    bufp->fullBit(oldp+2603,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [0U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0U])))));
    bufp->fullBit(oldp+2604,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [0U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0U])))));
    bufp->fullBit(oldp+2605,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [0U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0U])))));
    bufp->fullBit(oldp+2606,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [0U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0U])))));
    bufp->fullBit(oldp+2607,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2608,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [4U][0U]))),11);
    bufp->fullIData(oldp+2609,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2610,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2611,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2612,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2613,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][0xaU]),16);
    bufp->fullIData(oldp+2614,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2615,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [4U]
                                                [0xaU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [4U][0xaU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [4U]
                                                     [0xaU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0xaU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0xaU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [4U]
                                                         [0xaU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0xaU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2616,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [4U][0xaU] >> 0xfU))));
    bufp->fullCData(oldp+2617,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [4U][0xaU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2618,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [4U][0xaU])),10);
    bufp->fullBit(oldp+2619,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [0xaU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xaU])))));
    bufp->fullBit(oldp+2620,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xaU])))));
    bufp->fullBit(oldp+2621,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xaU])))));
    bufp->fullBit(oldp+2622,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [0xaU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xaU])))));
    bufp->fullBit(oldp+2623,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2624,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [4U][0xaU]))),11);
    bufp->fullIData(oldp+2625,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2626,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2627,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2628,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2629,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][0xbU]),16);
    bufp->fullIData(oldp+2630,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2631,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [4U]
                                                [0xbU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [4U][0xbU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [4U]
                                                     [0xbU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0xbU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0xbU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [4U]
                                                         [0xbU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0xbU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2632,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [4U][0xbU] >> 0xfU))));
    bufp->fullCData(oldp+2633,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [4U][0xbU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2634,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [4U][0xbU])),10);
    bufp->fullBit(oldp+2635,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [0xbU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xbU])))));
    bufp->fullBit(oldp+2636,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xbU])))));
    bufp->fullBit(oldp+2637,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xbU])))));
    bufp->fullBit(oldp+2638,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [0xbU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xbU])))));
    bufp->fullBit(oldp+2639,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2640,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [4U][0xbU]))),11);
    bufp->fullIData(oldp+2641,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2642,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2643,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2644,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2645,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][0xcU]),16);
    bufp->fullIData(oldp+2646,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2647,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [4U]
                                                [0xcU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [4U][0xcU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [4U]
                                                     [0xcU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0xcU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0xcU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [4U]
                                                         [0xcU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0xcU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2648,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [4U][0xcU] >> 0xfU))));
    bufp->fullCData(oldp+2649,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [4U][0xcU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2650,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [4U][0xcU])),10);
    bufp->fullBit(oldp+2651,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [0xcU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xcU])))));
    bufp->fullBit(oldp+2652,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xcU])))));
    bufp->fullBit(oldp+2653,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xcU])))));
    bufp->fullBit(oldp+2654,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [0xcU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xcU])))));
    bufp->fullBit(oldp+2655,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2656,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [4U][0xcU]))),11);
    bufp->fullIData(oldp+2657,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2658,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2659,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2660,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2661,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][0xdU]),16);
    bufp->fullIData(oldp+2662,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2663,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [4U]
                                                [0xdU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [4U][0xdU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [4U]
                                                     [0xdU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0xdU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0xdU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [4U]
                                                         [0xdU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0xdU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2664,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [4U][0xdU] >> 0xfU))));
    bufp->fullCData(oldp+2665,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [4U][0xdU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2666,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [4U][0xdU])),10);
    bufp->fullBit(oldp+2667,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [0xdU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xdU])))));
    bufp->fullBit(oldp+2668,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xdU])))));
    bufp->fullBit(oldp+2669,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xdU])))));
    bufp->fullBit(oldp+2670,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [0xdU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xdU])))));
    bufp->fullBit(oldp+2671,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2672,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [4U][0xdU]))),11);
    bufp->fullIData(oldp+2673,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2674,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2675,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2676,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2677,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][0xeU]),16);
    bufp->fullIData(oldp+2678,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2679,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [4U]
                                                [0xeU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [4U][0xeU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [4U]
                                                     [0xeU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0xeU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0xeU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [4U]
                                                         [0xeU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0xeU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2680,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [4U][0xeU] >> 0xfU))));
    bufp->fullCData(oldp+2681,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [4U][0xeU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2682,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [4U][0xeU])),10);
    bufp->fullBit(oldp+2683,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [0xeU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xeU])))));
    bufp->fullBit(oldp+2684,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xeU])))));
    bufp->fullBit(oldp+2685,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xeU])))));
    bufp->fullBit(oldp+2686,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [0xeU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xeU])))));
    bufp->fullBit(oldp+2687,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2688,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [4U][0xeU]))),11);
    bufp->fullIData(oldp+2689,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2690,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2691,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2692,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2693,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][0xfU]),16);
    bufp->fullIData(oldp+2694,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2695,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [4U]
                                                [0xfU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [4U][0xfU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [4U]
                                                     [0xfU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0xfU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0xfU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [4U]
                                                         [0xfU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [0xfU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2696,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [4U][0xfU] >> 0xfU))));
    bufp->fullCData(oldp+2697,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [4U][0xfU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2698,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [4U][0xfU])),10);
    bufp->fullBit(oldp+2699,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [0xfU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xfU])))));
    bufp->fullBit(oldp+2700,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xfU])))));
    bufp->fullBit(oldp+2701,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xfU])))));
    bufp->fullBit(oldp+2702,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [0xfU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][0xfU])))));
    bufp->fullBit(oldp+2703,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2704,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [4U][0xfU]))),11);
    bufp->fullIData(oldp+2705,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2706,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2707,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2708,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2709,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][1U]),16);
    bufp->fullIData(oldp+2710,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2711,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [4U]
                                                [1U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [4U][1U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [4U]
                                                     [1U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [1U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [1U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [4U]
                                                         [1U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [1U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2712,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [4U][1U] >> 0xfU))));
    bufp->fullCData(oldp+2713,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [4U][1U] >> 0xaU))),5);
    bufp->fullSData(oldp+2714,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [4U][1U])),10);
    bufp->fullBit(oldp+2715,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [1U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][1U])))));
    bufp->fullBit(oldp+2716,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [1U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][1U])))));
    bufp->fullBit(oldp+2717,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [1U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][1U])))));
    bufp->fullBit(oldp+2718,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [1U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][1U])))));
    bufp->fullBit(oldp+2719,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2720,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [4U][1U]))),11);
    bufp->fullIData(oldp+2721,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2722,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2723,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2724,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2725,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][2U]),16);
    bufp->fullIData(oldp+2726,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2727,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [4U]
                                                [2U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [4U][2U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [4U]
                                                     [2U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [2U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [2U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [4U]
                                                         [2U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [2U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2728,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [4U][2U] >> 0xfU))));
    bufp->fullCData(oldp+2729,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [4U][2U] >> 0xaU))),5);
    bufp->fullSData(oldp+2730,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [4U][2U])),10);
    bufp->fullBit(oldp+2731,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [2U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][2U])))));
    bufp->fullBit(oldp+2732,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [2U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][2U])))));
    bufp->fullBit(oldp+2733,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [2U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][2U])))));
    bufp->fullBit(oldp+2734,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [2U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][2U])))));
    bufp->fullBit(oldp+2735,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2736,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [4U][2U]))),11);
    bufp->fullIData(oldp+2737,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2738,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2739,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2740,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2741,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][3U]),16);
    bufp->fullIData(oldp+2742,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2743,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [4U]
                                                [3U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [4U][3U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [4U]
                                                     [3U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [3U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [3U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [4U]
                                                         [3U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [3U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2744,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [4U][3U] >> 0xfU))));
    bufp->fullCData(oldp+2745,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [4U][3U] >> 0xaU))),5);
    bufp->fullSData(oldp+2746,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [4U][3U])),10);
    bufp->fullBit(oldp+2747,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [3U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][3U])))));
    bufp->fullBit(oldp+2748,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [3U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][3U])))));
    bufp->fullBit(oldp+2749,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [3U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][3U])))));
    bufp->fullBit(oldp+2750,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [3U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][3U])))));
    bufp->fullBit(oldp+2751,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2752,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [4U][3U]))),11);
    bufp->fullIData(oldp+2753,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2754,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2755,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2756,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2757,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][4U]),16);
    bufp->fullIData(oldp+2758,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2759,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [4U]
                                                [4U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [4U][4U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [4U]
                                                     [4U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [4U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [4U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [4U]
                                                         [4U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [4U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2760,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [4U][4U] >> 0xfU))));
    bufp->fullCData(oldp+2761,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [4U][4U] >> 0xaU))),5);
    bufp->fullSData(oldp+2762,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [4U][4U])),10);
    bufp->fullBit(oldp+2763,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [4U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][4U])))));
    bufp->fullBit(oldp+2764,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [4U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][4U])))));
    bufp->fullBit(oldp+2765,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [4U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][4U])))));
    bufp->fullBit(oldp+2766,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [4U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][4U])))));
    bufp->fullBit(oldp+2767,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2768,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [4U][4U]))),11);
    bufp->fullIData(oldp+2769,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2770,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2771,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2772,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2773,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][5U]),16);
    bufp->fullIData(oldp+2774,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2775,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [4U]
                                                [5U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [4U][5U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [4U]
                                                     [5U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [5U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [5U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [4U]
                                                         [5U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [5U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2776,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [4U][5U] >> 0xfU))));
    bufp->fullCData(oldp+2777,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [4U][5U] >> 0xaU))),5);
    bufp->fullSData(oldp+2778,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [4U][5U])),10);
    bufp->fullBit(oldp+2779,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [5U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][5U])))));
    bufp->fullBit(oldp+2780,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [5U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][5U])))));
    bufp->fullBit(oldp+2781,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [5U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][5U])))));
    bufp->fullBit(oldp+2782,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [5U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][5U])))));
    bufp->fullBit(oldp+2783,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2784,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [4U][5U]))),11);
    bufp->fullIData(oldp+2785,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2786,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2787,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2788,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2789,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][6U]),16);
    bufp->fullIData(oldp+2790,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2791,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [4U]
                                                [6U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [4U][6U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [4U]
                                                     [6U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [6U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [6U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [4U]
                                                         [6U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [6U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2792,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [4U][6U] >> 0xfU))));
    bufp->fullCData(oldp+2793,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [4U][6U] >> 0xaU))),5);
    bufp->fullSData(oldp+2794,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [4U][6U])),10);
    bufp->fullBit(oldp+2795,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [6U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][6U])))));
    bufp->fullBit(oldp+2796,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [6U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][6U])))));
    bufp->fullBit(oldp+2797,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [6U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][6U])))));
    bufp->fullBit(oldp+2798,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [6U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][6U])))));
    bufp->fullBit(oldp+2799,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2800,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [4U][6U]))),11);
    bufp->fullIData(oldp+2801,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2802,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2803,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2804,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2805,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][7U]),16);
    bufp->fullIData(oldp+2806,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2807,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [4U]
                                                [7U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [4U][7U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [4U]
                                                     [7U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [7U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [7U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [4U]
                                                         [7U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [7U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2808,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [4U][7U] >> 0xfU))));
    bufp->fullCData(oldp+2809,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [4U][7U] >> 0xaU))),5);
    bufp->fullSData(oldp+2810,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [4U][7U])),10);
    bufp->fullBit(oldp+2811,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [7U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][7U])))));
    bufp->fullBit(oldp+2812,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [7U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][7U])))));
    bufp->fullBit(oldp+2813,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [7U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][7U])))));
    bufp->fullBit(oldp+2814,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [7U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][7U])))));
    bufp->fullBit(oldp+2815,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2816,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [4U][7U]))),11);
    bufp->fullIData(oldp+2817,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2818,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2819,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2820,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2821,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][8U]),16);
    bufp->fullIData(oldp+2822,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2823,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [4U]
                                                [8U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [4U][8U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [4U]
                                                     [8U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [8U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [8U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [4U]
                                                         [8U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [8U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2824,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [4U][8U] >> 0xfU))));
    bufp->fullCData(oldp+2825,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [4U][8U] >> 0xaU))),5);
    bufp->fullSData(oldp+2826,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [4U][8U])),10);
    bufp->fullBit(oldp+2827,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [8U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][8U])))));
    bufp->fullBit(oldp+2828,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [8U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][8U])))));
    bufp->fullBit(oldp+2829,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [8U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][8U])))));
    bufp->fullBit(oldp+2830,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [8U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][8U])))));
    bufp->fullBit(oldp+2831,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2832,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [4U][8U]))),11);
    bufp->fullIData(oldp+2833,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2834,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2835,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2836,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2837,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [4U][9U]),16);
    bufp->fullIData(oldp+2838,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2839,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [4U]
                                                [9U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [4U][9U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [4U]
                                                     [9U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [9U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [9U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [4U]
                                                         [9U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [4U]
                                                       [9U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2840,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [4U][9U] >> 0xfU))));
    bufp->fullCData(oldp+2841,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [4U][9U] >> 0xaU))),5);
    bufp->fullSData(oldp+2842,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [4U][9U])),10);
    bufp->fullBit(oldp+2843,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [9U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][9U])))));
    bufp->fullBit(oldp+2844,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [9U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][9U])))));
    bufp->fullBit(oldp+2845,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [4U]
                                                  [9U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][9U])))));
    bufp->fullBit(oldp+2846,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [4U]
                                               [9U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [4U][9U])))));
    bufp->fullBit(oldp+2847,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2848,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [4U][9U]))),11);
    bufp->fullIData(oldp+2849,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2850,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2851,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2852,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__4__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullBit(oldp+2853,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en));
    bufp->fullSData(oldp+2854,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][0U]),16);
    bufp->fullIData(oldp+2855,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2856,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [5U]
                                                [0U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [5U][0U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [5U]
                                                     [0U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [5U]
                                                         [0U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2857,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [5U][0U] >> 0xfU))));
    bufp->fullCData(oldp+2858,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [5U][0U] >> 0xaU))),5);
    bufp->fullSData(oldp+2859,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [5U][0U])),10);
    bufp->fullBit(oldp+2860,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [0U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0U])))));
    bufp->fullBit(oldp+2861,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [0U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0U])))));
    bufp->fullBit(oldp+2862,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [0U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0U])))));
    bufp->fullBit(oldp+2863,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [0U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0U])))));
    bufp->fullBit(oldp+2864,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2865,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [5U][0U]))),11);
    bufp->fullIData(oldp+2866,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2867,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2868,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2869,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2870,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][0xaU]),16);
    bufp->fullIData(oldp+2871,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2872,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [5U]
                                                [0xaU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [5U][0xaU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [5U]
                                                     [0xaU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0xaU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0xaU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [5U]
                                                         [0xaU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0xaU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2873,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [5U][0xaU] >> 0xfU))));
    bufp->fullCData(oldp+2874,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [5U][0xaU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2875,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [5U][0xaU])),10);
    bufp->fullBit(oldp+2876,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [0xaU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xaU])))));
    bufp->fullBit(oldp+2877,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xaU])))));
    bufp->fullBit(oldp+2878,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xaU])))));
    bufp->fullBit(oldp+2879,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [0xaU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xaU])))));
    bufp->fullBit(oldp+2880,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2881,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [5U][0xaU]))),11);
    bufp->fullIData(oldp+2882,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2883,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2884,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2885,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2886,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][0xbU]),16);
    bufp->fullIData(oldp+2887,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2888,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [5U]
                                                [0xbU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [5U][0xbU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [5U]
                                                     [0xbU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0xbU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0xbU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [5U]
                                                         [0xbU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0xbU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2889,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [5U][0xbU] >> 0xfU))));
    bufp->fullCData(oldp+2890,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [5U][0xbU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2891,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [5U][0xbU])),10);
    bufp->fullBit(oldp+2892,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [0xbU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xbU])))));
    bufp->fullBit(oldp+2893,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xbU])))));
    bufp->fullBit(oldp+2894,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xbU])))));
    bufp->fullBit(oldp+2895,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [0xbU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xbU])))));
    bufp->fullBit(oldp+2896,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2897,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [5U][0xbU]))),11);
    bufp->fullIData(oldp+2898,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2899,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2900,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2901,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2902,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][0xcU]),16);
    bufp->fullIData(oldp+2903,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2904,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [5U]
                                                [0xcU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [5U][0xcU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [5U]
                                                     [0xcU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0xcU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0xcU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [5U]
                                                         [0xcU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0xcU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2905,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [5U][0xcU] >> 0xfU))));
    bufp->fullCData(oldp+2906,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [5U][0xcU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2907,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [5U][0xcU])),10);
    bufp->fullBit(oldp+2908,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [0xcU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xcU])))));
    bufp->fullBit(oldp+2909,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xcU])))));
    bufp->fullBit(oldp+2910,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xcU])))));
    bufp->fullBit(oldp+2911,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [0xcU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xcU])))));
    bufp->fullBit(oldp+2912,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2913,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [5U][0xcU]))),11);
    bufp->fullIData(oldp+2914,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2915,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2916,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2917,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2918,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][0xdU]),16);
    bufp->fullIData(oldp+2919,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2920,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [5U]
                                                [0xdU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [5U][0xdU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [5U]
                                                     [0xdU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0xdU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0xdU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [5U]
                                                         [0xdU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0xdU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2921,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [5U][0xdU] >> 0xfU))));
    bufp->fullCData(oldp+2922,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [5U][0xdU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2923,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [5U][0xdU])),10);
    bufp->fullBit(oldp+2924,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [0xdU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xdU])))));
    bufp->fullBit(oldp+2925,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xdU])))));
    bufp->fullBit(oldp+2926,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xdU])))));
    bufp->fullBit(oldp+2927,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [0xdU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xdU])))));
    bufp->fullBit(oldp+2928,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2929,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [5U][0xdU]))),11);
    bufp->fullIData(oldp+2930,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2931,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2932,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2933,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2934,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][0xeU]),16);
    bufp->fullIData(oldp+2935,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2936,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [5U]
                                                [0xeU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [5U][0xeU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [5U]
                                                     [0xeU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0xeU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0xeU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [5U]
                                                         [0xeU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0xeU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2937,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [5U][0xeU] >> 0xfU))));
    bufp->fullCData(oldp+2938,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [5U][0xeU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2939,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [5U][0xeU])),10);
    bufp->fullBit(oldp+2940,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [0xeU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xeU])))));
    bufp->fullBit(oldp+2941,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xeU])))));
    bufp->fullBit(oldp+2942,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xeU])))));
    bufp->fullBit(oldp+2943,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [0xeU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xeU])))));
    bufp->fullBit(oldp+2944,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2945,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [5U][0xeU]))),11);
    bufp->fullIData(oldp+2946,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2947,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2948,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2949,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2950,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][0xfU]),16);
    bufp->fullIData(oldp+2951,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2952,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [5U]
                                                [0xfU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [5U][0xfU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [5U]
                                                     [0xfU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0xfU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0xfU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [5U]
                                                         [0xfU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [0xfU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2953,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [5U][0xfU] >> 0xfU))));
    bufp->fullCData(oldp+2954,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [5U][0xfU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2955,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [5U][0xfU])),10);
    bufp->fullBit(oldp+2956,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [0xfU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xfU])))));
    bufp->fullBit(oldp+2957,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xfU])))));
    bufp->fullBit(oldp+2958,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xfU])))));
    bufp->fullBit(oldp+2959,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [0xfU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][0xfU])))));
    bufp->fullBit(oldp+2960,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2961,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [5U][0xfU]))),11);
    bufp->fullIData(oldp+2962,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2963,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2964,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2965,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2966,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][1U]),16);
    bufp->fullIData(oldp+2967,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2968,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [5U]
                                                [1U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [5U][1U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [5U]
                                                     [1U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [1U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [1U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [5U]
                                                         [1U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [1U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2969,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [5U][1U] >> 0xfU))));
    bufp->fullCData(oldp+2970,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [5U][1U] >> 0xaU))),5);
    bufp->fullSData(oldp+2971,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [5U][1U])),10);
    bufp->fullBit(oldp+2972,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [1U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][1U])))));
    bufp->fullBit(oldp+2973,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [1U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][1U])))));
    bufp->fullBit(oldp+2974,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [1U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][1U])))));
    bufp->fullBit(oldp+2975,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [1U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][1U])))));
    bufp->fullBit(oldp+2976,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2977,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [5U][1U]))),11);
    bufp->fullIData(oldp+2978,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2979,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2980,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2981,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2982,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][2U]),16);
    bufp->fullIData(oldp+2983,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2984,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [5U]
                                                [2U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [5U][2U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [5U]
                                                     [2U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [2U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [2U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [5U]
                                                         [2U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [2U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2985,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [5U][2U] >> 0xfU))));
    bufp->fullCData(oldp+2986,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [5U][2U] >> 0xaU))),5);
    bufp->fullSData(oldp+2987,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [5U][2U])),10);
    bufp->fullBit(oldp+2988,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [2U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][2U])))));
    bufp->fullBit(oldp+2989,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [2U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][2U])))));
    bufp->fullBit(oldp+2990,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [2U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][2U])))));
    bufp->fullBit(oldp+2991,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [2U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][2U])))));
    bufp->fullBit(oldp+2992,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2993,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [5U][2U]))),11);
    bufp->fullIData(oldp+2994,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2995,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2996,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2997,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2998,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][3U]),16);
    bufp->fullIData(oldp+2999,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+3000,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [5U]
                                                [3U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [5U][3U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [5U]
                                                     [3U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [3U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [3U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [5U]
                                                         [3U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [3U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+3001,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [5U][3U] >> 0xfU))));
    bufp->fullCData(oldp+3002,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [5U][3U] >> 0xaU))),5);
    bufp->fullSData(oldp+3003,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [5U][3U])),10);
    bufp->fullBit(oldp+3004,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [3U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][3U])))));
    bufp->fullBit(oldp+3005,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [3U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][3U])))));
    bufp->fullBit(oldp+3006,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [3U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][3U])))));
    bufp->fullBit(oldp+3007,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [3U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][3U])))));
    bufp->fullBit(oldp+3008,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+3009,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [5U][3U]))),11);
    bufp->fullIData(oldp+3010,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+3011,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+3012,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+3013,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+3014,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][4U]),16);
    bufp->fullIData(oldp+3015,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+3016,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [5U]
                                                [4U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [5U][4U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [5U]
                                                     [4U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [4U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [4U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [5U]
                                                         [4U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [4U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+3017,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [5U][4U] >> 0xfU))));
    bufp->fullCData(oldp+3018,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [5U][4U] >> 0xaU))),5);
    bufp->fullSData(oldp+3019,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [5U][4U])),10);
    bufp->fullBit(oldp+3020,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [4U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][4U])))));
    bufp->fullBit(oldp+3021,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [4U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][4U])))));
    bufp->fullBit(oldp+3022,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [4U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][4U])))));
    bufp->fullBit(oldp+3023,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [4U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][4U])))));
    bufp->fullBit(oldp+3024,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+3025,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [5U][4U]))),11);
    bufp->fullIData(oldp+3026,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+3027,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+3028,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+3029,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+3030,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][5U]),16);
    bufp->fullIData(oldp+3031,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+3032,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [5U]
                                                [5U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [5U][5U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [5U]
                                                     [5U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [5U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [5U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [5U]
                                                         [5U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [5U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+3033,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [5U][5U] >> 0xfU))));
    bufp->fullCData(oldp+3034,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [5U][5U] >> 0xaU))),5);
    bufp->fullSData(oldp+3035,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [5U][5U])),10);
    bufp->fullBit(oldp+3036,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [5U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][5U])))));
    bufp->fullBit(oldp+3037,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [5U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][5U])))));
    bufp->fullBit(oldp+3038,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [5U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][5U])))));
    bufp->fullBit(oldp+3039,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [5U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][5U])))));
    bufp->fullBit(oldp+3040,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+3041,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [5U][5U]))),11);
    bufp->fullIData(oldp+3042,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+3043,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+3044,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+3045,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+3046,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][6U]),16);
    bufp->fullIData(oldp+3047,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+3048,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [5U]
                                                [6U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [5U][6U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [5U]
                                                     [6U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [6U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [6U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [5U]
                                                         [6U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [6U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+3049,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [5U][6U] >> 0xfU))));
    bufp->fullCData(oldp+3050,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [5U][6U] >> 0xaU))),5);
    bufp->fullSData(oldp+3051,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [5U][6U])),10);
    bufp->fullBit(oldp+3052,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [6U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][6U])))));
    bufp->fullBit(oldp+3053,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [6U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][6U])))));
    bufp->fullBit(oldp+3054,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [6U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][6U])))));
    bufp->fullBit(oldp+3055,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [6U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][6U])))));
    bufp->fullBit(oldp+3056,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+3057,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [5U][6U]))),11);
    bufp->fullIData(oldp+3058,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+3059,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+3060,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+3061,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+3062,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][7U]),16);
    bufp->fullIData(oldp+3063,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+3064,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [5U]
                                                [7U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [5U][7U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [5U]
                                                     [7U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [7U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [7U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [5U]
                                                         [7U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [7U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+3065,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [5U][7U] >> 0xfU))));
    bufp->fullCData(oldp+3066,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [5U][7U] >> 0xaU))),5);
    bufp->fullSData(oldp+3067,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [5U][7U])),10);
    bufp->fullBit(oldp+3068,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [7U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][7U])))));
    bufp->fullBit(oldp+3069,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [7U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][7U])))));
    bufp->fullBit(oldp+3070,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [7U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][7U])))));
    bufp->fullBit(oldp+3071,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [7U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][7U])))));
    bufp->fullBit(oldp+3072,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+3073,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [5U][7U]))),11);
    bufp->fullIData(oldp+3074,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+3075,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+3076,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+3077,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+3078,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][8U]),16);
    bufp->fullIData(oldp+3079,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+3080,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [5U]
                                                [8U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [5U][8U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [5U]
                                                     [8U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [8U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [8U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [5U]
                                                         [8U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [8U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+3081,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [5U][8U] >> 0xfU))));
    bufp->fullCData(oldp+3082,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [5U][8U] >> 0xaU))),5);
    bufp->fullSData(oldp+3083,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [5U][8U])),10);
    bufp->fullBit(oldp+3084,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [8U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][8U])))));
    bufp->fullBit(oldp+3085,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [8U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][8U])))));
    bufp->fullBit(oldp+3086,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [8U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][8U])))));
    bufp->fullBit(oldp+3087,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [8U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][8U])))));
    bufp->fullBit(oldp+3088,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+3089,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [5U][8U]))),11);
    bufp->fullIData(oldp+3090,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+3091,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+3092,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+3093,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+3094,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [5U][9U]),16);
    bufp->fullIData(oldp+3095,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+3096,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [5U]
                                                [9U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [5U][9U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [5U]
                                                     [9U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [9U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [9U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [5U]
                                                         [9U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [5U]
                                                       [9U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+3097,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [5U][9U] >> 0xfU))));
    bufp->fullCData(oldp+3098,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [5U][9U] >> 0xaU))),5);
    bufp->fullSData(oldp+3099,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [5U][9U])),10);
    bufp->fullBit(oldp+3100,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [9U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][9U])))));
    bufp->fullBit(oldp+3101,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [9U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][9U])))));
    bufp->fullBit(oldp+3102,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [5U]
                                                  [9U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][9U])))));
    bufp->fullBit(oldp+3103,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [5U]
                                               [9U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [5U][9U])))));
    bufp->fullBit(oldp+3104,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+3105,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [5U][9U]))),11);
    bufp->fullIData(oldp+3106,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+3107,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+3108,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+3109,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__5__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullBit(oldp+3110,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en));
    bufp->fullSData(oldp+3111,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][0U]),16);
    bufp->fullIData(oldp+3112,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+3113,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [6U]
                                                [0U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [6U][0U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [6U]
                                                     [0U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [6U]
                                                         [0U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+3114,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [6U][0U] >> 0xfU))));
    bufp->fullCData(oldp+3115,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [6U][0U] >> 0xaU))),5);
    bufp->fullSData(oldp+3116,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [6U][0U])),10);
    bufp->fullBit(oldp+3117,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [6U]
                                               [0U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0U])))));
    bufp->fullBit(oldp+3118,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [6U]
                                                  [0U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0U])))));
    bufp->fullBit(oldp+3119,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [6U]
                                                  [0U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0U])))));
    bufp->fullBit(oldp+3120,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [6U]
                                               [0U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0U])))));
    bufp->fullBit(oldp+3121,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+3122,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [6U][0U]))),11);
    bufp->fullIData(oldp+3123,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+3124,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+3125,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+3126,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+3127,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][0xaU]),16);
    bufp->fullIData(oldp+3128,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+3129,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [6U]
                                                [0xaU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [6U][0xaU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [6U]
                                                     [0xaU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0xaU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0xaU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [6U]
                                                         [0xaU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0xaU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+3130,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [6U][0xaU] >> 0xfU))));
    bufp->fullCData(oldp+3131,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [6U][0xaU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+3132,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [6U][0xaU])),10);
    bufp->fullBit(oldp+3133,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [6U]
                                               [0xaU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xaU])))));
    bufp->fullBit(oldp+3134,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [6U]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xaU])))));
    bufp->fullBit(oldp+3135,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [6U]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xaU])))));
    bufp->fullBit(oldp+3136,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [6U]
                                               [0xaU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xaU])))));
    bufp->fullBit(oldp+3137,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+3138,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [6U][0xaU]))),11);
    bufp->fullIData(oldp+3139,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+3140,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+3141,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+3142,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+3143,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][0xbU]),16);
    bufp->fullIData(oldp+3144,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+3145,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [6U]
                                                [0xbU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [6U][0xbU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [6U]
                                                     [0xbU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0xbU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0xbU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [6U]
                                                         [0xbU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0xbU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+3146,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [6U][0xbU] >> 0xfU))));
    bufp->fullCData(oldp+3147,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [6U][0xbU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+3148,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [6U][0xbU])),10);
    bufp->fullBit(oldp+3149,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [6U]
                                               [0xbU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xbU])))));
    bufp->fullBit(oldp+3150,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [6U]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xbU])))));
    bufp->fullBit(oldp+3151,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [6U]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xbU])))));
    bufp->fullBit(oldp+3152,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [6U]
                                               [0xbU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xbU])))));
    bufp->fullBit(oldp+3153,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+3154,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [6U][0xbU]))),11);
    bufp->fullIData(oldp+3155,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+3156,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+3157,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+3158,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+3159,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][0xcU]),16);
    bufp->fullIData(oldp+3160,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+3161,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [6U]
                                                [0xcU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [6U][0xcU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [6U]
                                                     [0xcU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0xcU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0xcU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [6U]
                                                         [0xcU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0xcU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+3162,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [6U][0xcU] >> 0xfU))));
    bufp->fullCData(oldp+3163,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [6U][0xcU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+3164,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [6U][0xcU])),10);
    bufp->fullBit(oldp+3165,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [6U]
                                               [0xcU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xcU])))));
    bufp->fullBit(oldp+3166,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [6U]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xcU])))));
    bufp->fullBit(oldp+3167,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [6U]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xcU])))));
    bufp->fullBit(oldp+3168,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [6U]
                                               [0xcU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xcU])))));
    bufp->fullBit(oldp+3169,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+3170,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [6U][0xcU]))),11);
    bufp->fullIData(oldp+3171,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+3172,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+3173,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+3174,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+3175,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][0xdU]),16);
    bufp->fullIData(oldp+3176,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+3177,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [6U]
                                                [0xdU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [6U][0xdU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [6U]
                                                     [0xdU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0xdU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0xdU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [6U]
                                                         [0xdU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0xdU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+3178,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [6U][0xdU] >> 0xfU))));
    bufp->fullCData(oldp+3179,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [6U][0xdU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+3180,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [6U][0xdU])),10);
    bufp->fullBit(oldp+3181,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [6U]
                                               [0xdU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xdU])))));
    bufp->fullBit(oldp+3182,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [6U]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xdU])))));
    bufp->fullBit(oldp+3183,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [6U]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xdU])))));
    bufp->fullBit(oldp+3184,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [6U]
                                               [0xdU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xdU])))));
    bufp->fullBit(oldp+3185,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+3186,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [6U][0xdU]))),11);
    bufp->fullIData(oldp+3187,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+3188,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+3189,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+3190,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+3191,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][0xeU]),16);
    bufp->fullIData(oldp+3192,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+3193,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [6U]
                                                [0xeU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [6U][0xeU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [6U]
                                                     [0xeU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0xeU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0xeU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [6U]
                                                         [0xeU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0xeU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+3194,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [6U][0xeU] >> 0xfU))));
    bufp->fullCData(oldp+3195,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [6U][0xeU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+3196,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [6U][0xeU])),10);
    bufp->fullBit(oldp+3197,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [6U]
                                               [0xeU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xeU])))));
    bufp->fullBit(oldp+3198,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [6U]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xeU])))));
    bufp->fullBit(oldp+3199,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [6U]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xeU])))));
    bufp->fullBit(oldp+3200,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [6U]
                                               [0xeU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xeU])))));
    bufp->fullBit(oldp+3201,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+3202,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [6U][0xeU]))),11);
    bufp->fullIData(oldp+3203,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+3204,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+3205,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+3206,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+3207,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][0xfU]),16);
    bufp->fullIData(oldp+3208,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+3209,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [6U]
                                                [0xfU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [6U][0xfU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [6U]
                                                     [0xfU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0xfU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0xfU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [6U]
                                                         [0xfU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [0xfU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+3210,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [6U][0xfU] >> 0xfU))));
    bufp->fullCData(oldp+3211,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [6U][0xfU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+3212,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [6U][0xfU])),10);
    bufp->fullBit(oldp+3213,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [6U]
                                               [0xfU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xfU])))));
    bufp->fullBit(oldp+3214,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [6U]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xfU])))));
    bufp->fullBit(oldp+3215,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [6U]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xfU])))));
    bufp->fullBit(oldp+3216,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [6U]
                                               [0xfU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][0xfU])))));
    bufp->fullBit(oldp+3217,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+3218,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [6U][0xfU]))),11);
    bufp->fullIData(oldp+3219,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+3220,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+3221,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+3222,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+3223,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][1U]),16);
    bufp->fullIData(oldp+3224,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+3225,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [6U]
                                                [1U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [6U][1U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [6U]
                                                     [1U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [1U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [1U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [6U]
                                                         [1U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [1U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+3226,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [6U][1U] >> 0xfU))));
    bufp->fullCData(oldp+3227,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [6U][1U] >> 0xaU))),5);
    bufp->fullSData(oldp+3228,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [6U][1U])),10);
    bufp->fullBit(oldp+3229,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [6U]
                                               [1U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][1U])))));
    bufp->fullBit(oldp+3230,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [6U]
                                                  [1U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][1U])))));
    bufp->fullBit(oldp+3231,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [6U]
                                                  [1U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][1U])))));
    bufp->fullBit(oldp+3232,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [6U]
                                               [1U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [6U][1U])))));
    bufp->fullBit(oldp+3233,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+3234,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [6U][1U]))),11);
    bufp->fullIData(oldp+3235,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+3236,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+3237,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+3238,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+3239,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [6U][2U]),16);
    bufp->fullIData(oldp+3240,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+3241,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [6U]
                                                [2U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [6U][2U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [6U]
                                                     [2U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [2U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [2U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [6U]
                                                         [2U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [6U]
                                                       [2U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__6__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
}
