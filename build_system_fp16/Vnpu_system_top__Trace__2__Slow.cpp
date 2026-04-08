// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpu_system_top__Syms.h"


VL_ATTR_COLD void Vnpu_system_top___024root__trace_full_0_sub_1(Vnpu_system_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu_system_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu_system_top___024root__trace_full_0_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1095,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][0xbU])))));
    bufp->fullBit(oldp+1096,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [0xbU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][0xbU])))));
    bufp->fullBit(oldp+1097,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1098,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xdU][0xbU]))),11);
    bufp->fullIData(oldp+1099,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1100,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1101,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1102,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1103,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][0xcU]),16);
    bufp->fullIData(oldp+1104,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1105,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xdU]
                                                [0xcU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xdU][0xcU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xdU]
                                                     [0xcU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [0xcU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [0xcU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xdU]
                                                         [0xcU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [0xcU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1106,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xdU][0xcU] >> 0xfU))));
    bufp->fullCData(oldp+1107,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][0xcU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1108,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xdU][0xcU])),10);
    bufp->fullBit(oldp+1109,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [0xcU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][0xcU])))));
    bufp->fullBit(oldp+1110,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][0xcU])))));
    bufp->fullBit(oldp+1111,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][0xcU])))));
    bufp->fullBit(oldp+1112,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [0xcU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][0xcU])))));
    bufp->fullBit(oldp+1113,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1114,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xdU][0xcU]))),11);
    bufp->fullIData(oldp+1115,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1116,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1117,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1118,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1119,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][0xdU]),16);
    bufp->fullIData(oldp+1120,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1121,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xdU]
                                                [0xdU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xdU][0xdU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xdU]
                                                     [0xdU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [0xdU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [0xdU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xdU]
                                                         [0xdU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [0xdU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1122,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xdU][0xdU] >> 0xfU))));
    bufp->fullCData(oldp+1123,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][0xdU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1124,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xdU][0xdU])),10);
    bufp->fullBit(oldp+1125,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [0xdU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][0xdU])))));
    bufp->fullBit(oldp+1126,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][0xdU])))));
    bufp->fullBit(oldp+1127,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][0xdU])))));
    bufp->fullBit(oldp+1128,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [0xdU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][0xdU])))));
    bufp->fullBit(oldp+1129,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1130,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xdU][0xdU]))),11);
    bufp->fullIData(oldp+1131,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1132,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1133,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1134,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1135,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][0xeU]),16);
    bufp->fullIData(oldp+1136,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1137,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xdU]
                                                [0xeU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xdU][0xeU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xdU]
                                                     [0xeU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [0xeU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [0xeU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xdU]
                                                         [0xeU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [0xeU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1138,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xdU][0xeU] >> 0xfU))));
    bufp->fullCData(oldp+1139,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][0xeU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1140,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xdU][0xeU])),10);
    bufp->fullBit(oldp+1141,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [0xeU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][0xeU])))));
    bufp->fullBit(oldp+1142,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][0xeU])))));
    bufp->fullBit(oldp+1143,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][0xeU])))));
    bufp->fullBit(oldp+1144,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [0xeU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][0xeU])))));
    bufp->fullBit(oldp+1145,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1146,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xdU][0xeU]))),11);
    bufp->fullIData(oldp+1147,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1148,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1149,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1150,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1151,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][0xfU]),16);
    bufp->fullIData(oldp+1152,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1153,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xdU]
                                                [0xfU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xdU][0xfU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xdU]
                                                     [0xfU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [0xfU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [0xfU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xdU]
                                                         [0xfU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [0xfU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1154,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xdU][0xfU] >> 0xfU))));
    bufp->fullCData(oldp+1155,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][0xfU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1156,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xdU][0xfU])),10);
    bufp->fullBit(oldp+1157,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [0xfU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][0xfU])))));
    bufp->fullBit(oldp+1158,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][0xfU])))));
    bufp->fullBit(oldp+1159,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][0xfU])))));
    bufp->fullBit(oldp+1160,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [0xfU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][0xfU])))));
    bufp->fullBit(oldp+1161,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1162,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xdU][0xfU]))),11);
    bufp->fullIData(oldp+1163,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1164,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1165,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1166,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1167,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][1U]),16);
    bufp->fullIData(oldp+1168,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1169,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xdU]
                                                [1U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xdU][1U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xdU]
                                                     [1U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [1U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [1U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xdU]
                                                         [1U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [1U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1170,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xdU][1U] >> 0xfU))));
    bufp->fullCData(oldp+1171,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][1U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1172,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xdU][1U])),10);
    bufp->fullBit(oldp+1173,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [1U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][1U])))));
    bufp->fullBit(oldp+1174,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [1U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][1U])))));
    bufp->fullBit(oldp+1175,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [1U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][1U])))));
    bufp->fullBit(oldp+1176,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [1U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][1U])))));
    bufp->fullBit(oldp+1177,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1178,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xdU][1U]))),11);
    bufp->fullIData(oldp+1179,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1180,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1181,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1182,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1183,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][2U]),16);
    bufp->fullIData(oldp+1184,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1185,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xdU]
                                                [2U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xdU][2U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xdU]
                                                     [2U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [2U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [2U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xdU]
                                                         [2U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [2U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1186,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xdU][2U] >> 0xfU))));
    bufp->fullCData(oldp+1187,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][2U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1188,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xdU][2U])),10);
    bufp->fullBit(oldp+1189,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [2U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][2U])))));
    bufp->fullBit(oldp+1190,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [2U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][2U])))));
    bufp->fullBit(oldp+1191,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [2U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][2U])))));
    bufp->fullBit(oldp+1192,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [2U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][2U])))));
    bufp->fullBit(oldp+1193,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1194,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xdU][2U]))),11);
    bufp->fullIData(oldp+1195,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1196,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1197,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1198,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1199,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][3U]),16);
    bufp->fullIData(oldp+1200,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1201,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xdU]
                                                [3U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xdU][3U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xdU]
                                                     [3U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [3U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [3U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xdU]
                                                         [3U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [3U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1202,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xdU][3U] >> 0xfU))));
    bufp->fullCData(oldp+1203,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][3U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1204,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xdU][3U])),10);
    bufp->fullBit(oldp+1205,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [3U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][3U])))));
    bufp->fullBit(oldp+1206,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [3U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][3U])))));
    bufp->fullBit(oldp+1207,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [3U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][3U])))));
    bufp->fullBit(oldp+1208,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [3U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][3U])))));
    bufp->fullBit(oldp+1209,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1210,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xdU][3U]))),11);
    bufp->fullIData(oldp+1211,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1212,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1213,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1214,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1215,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][4U]),16);
    bufp->fullIData(oldp+1216,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1217,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xdU]
                                                [4U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xdU][4U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xdU]
                                                     [4U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [4U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [4U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xdU]
                                                         [4U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [4U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1218,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xdU][4U] >> 0xfU))));
    bufp->fullCData(oldp+1219,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][4U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1220,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xdU][4U])),10);
    bufp->fullBit(oldp+1221,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [4U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][4U])))));
    bufp->fullBit(oldp+1222,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [4U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][4U])))));
    bufp->fullBit(oldp+1223,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [4U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][4U])))));
    bufp->fullBit(oldp+1224,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [4U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][4U])))));
    bufp->fullBit(oldp+1225,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1226,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xdU][4U]))),11);
    bufp->fullIData(oldp+1227,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1228,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1229,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1230,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1231,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][5U]),16);
    bufp->fullIData(oldp+1232,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1233,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xdU]
                                                [5U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xdU][5U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xdU]
                                                     [5U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [5U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [5U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xdU]
                                                         [5U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [5U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1234,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xdU][5U] >> 0xfU))));
    bufp->fullCData(oldp+1235,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][5U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1236,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xdU][5U])),10);
    bufp->fullBit(oldp+1237,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [5U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][5U])))));
    bufp->fullBit(oldp+1238,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [5U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][5U])))));
    bufp->fullBit(oldp+1239,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [5U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][5U])))));
    bufp->fullBit(oldp+1240,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [5U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][5U])))));
    bufp->fullBit(oldp+1241,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1242,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xdU][5U]))),11);
    bufp->fullIData(oldp+1243,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1244,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1245,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1246,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1247,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][6U]),16);
    bufp->fullIData(oldp+1248,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1249,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xdU]
                                                [6U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xdU][6U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xdU]
                                                     [6U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [6U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [6U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xdU]
                                                         [6U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [6U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1250,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xdU][6U] >> 0xfU))));
    bufp->fullCData(oldp+1251,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][6U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1252,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xdU][6U])),10);
    bufp->fullBit(oldp+1253,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [6U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][6U])))));
    bufp->fullBit(oldp+1254,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [6U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][6U])))));
    bufp->fullBit(oldp+1255,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [6U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][6U])))));
    bufp->fullBit(oldp+1256,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [6U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][6U])))));
    bufp->fullBit(oldp+1257,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1258,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xdU][6U]))),11);
    bufp->fullIData(oldp+1259,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1260,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1261,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1262,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1263,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][7U]),16);
    bufp->fullIData(oldp+1264,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1265,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xdU]
                                                [7U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xdU][7U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xdU]
                                                     [7U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [7U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [7U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xdU]
                                                         [7U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [7U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1266,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xdU][7U] >> 0xfU))));
    bufp->fullCData(oldp+1267,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][7U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1268,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xdU][7U])),10);
    bufp->fullBit(oldp+1269,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [7U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][7U])))));
    bufp->fullBit(oldp+1270,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [7U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][7U])))));
    bufp->fullBit(oldp+1271,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [7U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][7U])))));
    bufp->fullBit(oldp+1272,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [7U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][7U])))));
    bufp->fullBit(oldp+1273,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1274,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xdU][7U]))),11);
    bufp->fullIData(oldp+1275,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1276,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1277,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1278,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1279,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][8U]),16);
    bufp->fullIData(oldp+1280,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1281,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xdU]
                                                [8U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xdU][8U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xdU]
                                                     [8U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [8U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [8U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xdU]
                                                         [8U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [8U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1282,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xdU][8U] >> 0xfU))));
    bufp->fullCData(oldp+1283,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][8U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1284,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xdU][8U])),10);
    bufp->fullBit(oldp+1285,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [8U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][8U])))));
    bufp->fullBit(oldp+1286,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [8U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][8U])))));
    bufp->fullBit(oldp+1287,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [8U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][8U])))));
    bufp->fullBit(oldp+1288,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [8U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][8U])))));
    bufp->fullBit(oldp+1289,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1290,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xdU][8U]))),11);
    bufp->fullIData(oldp+1291,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1292,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1293,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1294,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1295,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xdU][9U]),16);
    bufp->fullIData(oldp+1296,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1297,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xdU]
                                                [9U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xdU][9U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xdU]
                                                     [9U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [9U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [9U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xdU]
                                                         [9U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xdU]
                                                       [9U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1298,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xdU][9U] >> 0xfU))));
    bufp->fullCData(oldp+1299,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xdU][9U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1300,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xdU][9U])),10);
    bufp->fullBit(oldp+1301,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [9U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][9U])))));
    bufp->fullBit(oldp+1302,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [9U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][9U])))));
    bufp->fullBit(oldp+1303,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xdU]
                                                  [9U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][9U])))));
    bufp->fullBit(oldp+1304,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xdU]
                                               [9U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xdU][9U])))));
    bufp->fullBit(oldp+1305,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1306,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xdU][9U]))),11);
    bufp->fullIData(oldp+1307,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1308,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1309,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1310,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__13__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullBit(oldp+1311,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en));
    bufp->fullSData(oldp+1312,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0U]),16);
    bufp->fullIData(oldp+1313,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1314,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xeU]
                                                [0U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xeU][0U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xeU]
                                                     [0U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xeU]
                                                         [0U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1315,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xeU][0U] >> 0xfU))));
    bufp->fullCData(oldp+1316,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][0U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1317,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xeU][0U])),10);
    bufp->fullBit(oldp+1318,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [0U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0U])))));
    bufp->fullBit(oldp+1319,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [0U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0U])))));
    bufp->fullBit(oldp+1320,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [0U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0U])))));
    bufp->fullBit(oldp+1321,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [0U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0U])))));
    bufp->fullBit(oldp+1322,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1323,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xeU][0U]))),11);
    bufp->fullIData(oldp+1324,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1325,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1326,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1327,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1328,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0xaU]),16);
    bufp->fullIData(oldp+1329,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1330,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xeU]
                                                [0xaU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xeU][0xaU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xeU]
                                                     [0xaU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0xaU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0xaU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xeU]
                                                         [0xaU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0xaU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1331,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xeU][0xaU] >> 0xfU))));
    bufp->fullCData(oldp+1332,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][0xaU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1333,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xeU][0xaU])),10);
    bufp->fullBit(oldp+1334,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [0xaU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xaU])))));
    bufp->fullBit(oldp+1335,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xaU])))));
    bufp->fullBit(oldp+1336,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xaU])))));
    bufp->fullBit(oldp+1337,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [0xaU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xaU])))));
    bufp->fullBit(oldp+1338,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1339,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xeU][0xaU]))),11);
    bufp->fullIData(oldp+1340,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1341,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1342,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1343,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1344,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0xbU]),16);
    bufp->fullIData(oldp+1345,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1346,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xeU]
                                                [0xbU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xeU][0xbU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xeU]
                                                     [0xbU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0xbU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0xbU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xeU]
                                                         [0xbU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0xbU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1347,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xeU][0xbU] >> 0xfU))));
    bufp->fullCData(oldp+1348,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][0xbU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1349,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xeU][0xbU])),10);
    bufp->fullBit(oldp+1350,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [0xbU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xbU])))));
    bufp->fullBit(oldp+1351,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xbU])))));
    bufp->fullBit(oldp+1352,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xbU])))));
    bufp->fullBit(oldp+1353,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [0xbU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xbU])))));
    bufp->fullBit(oldp+1354,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1355,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xeU][0xbU]))),11);
    bufp->fullIData(oldp+1356,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1357,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1358,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1359,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1360,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0xcU]),16);
    bufp->fullIData(oldp+1361,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1362,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xeU]
                                                [0xcU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xeU][0xcU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xeU]
                                                     [0xcU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0xcU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0xcU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xeU]
                                                         [0xcU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0xcU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1363,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xeU][0xcU] >> 0xfU))));
    bufp->fullCData(oldp+1364,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][0xcU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1365,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xeU][0xcU])),10);
    bufp->fullBit(oldp+1366,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [0xcU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xcU])))));
    bufp->fullBit(oldp+1367,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xcU])))));
    bufp->fullBit(oldp+1368,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xcU])))));
    bufp->fullBit(oldp+1369,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [0xcU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xcU])))));
    bufp->fullBit(oldp+1370,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1371,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xeU][0xcU]))),11);
    bufp->fullIData(oldp+1372,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1373,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1374,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1375,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1376,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0xdU]),16);
    bufp->fullIData(oldp+1377,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1378,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xeU]
                                                [0xdU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xeU][0xdU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xeU]
                                                     [0xdU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0xdU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0xdU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xeU]
                                                         [0xdU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0xdU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1379,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xeU][0xdU] >> 0xfU))));
    bufp->fullCData(oldp+1380,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][0xdU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1381,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xeU][0xdU])),10);
    bufp->fullBit(oldp+1382,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [0xdU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xdU])))));
    bufp->fullBit(oldp+1383,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xdU])))));
    bufp->fullBit(oldp+1384,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xdU])))));
    bufp->fullBit(oldp+1385,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [0xdU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xdU])))));
    bufp->fullBit(oldp+1386,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1387,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xeU][0xdU]))),11);
    bufp->fullIData(oldp+1388,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1389,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1390,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1391,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1392,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0xeU]),16);
    bufp->fullIData(oldp+1393,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1394,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xeU]
                                                [0xeU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xeU][0xeU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xeU]
                                                     [0xeU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0xeU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0xeU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xeU]
                                                         [0xeU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0xeU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1395,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xeU][0xeU] >> 0xfU))));
    bufp->fullCData(oldp+1396,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][0xeU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1397,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xeU][0xeU])),10);
    bufp->fullBit(oldp+1398,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [0xeU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xeU])))));
    bufp->fullBit(oldp+1399,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xeU])))));
    bufp->fullBit(oldp+1400,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xeU])))));
    bufp->fullBit(oldp+1401,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [0xeU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xeU])))));
    bufp->fullBit(oldp+1402,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1403,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xeU][0xeU]))),11);
    bufp->fullIData(oldp+1404,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1405,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1406,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1407,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1408,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][0xfU]),16);
    bufp->fullIData(oldp+1409,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1410,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xeU]
                                                [0xfU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xeU][0xfU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xeU]
                                                     [0xfU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0xfU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0xfU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xeU]
                                                         [0xfU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [0xfU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1411,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xeU][0xfU] >> 0xfU))));
    bufp->fullCData(oldp+1412,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][0xfU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1413,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xeU][0xfU])),10);
    bufp->fullBit(oldp+1414,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [0xfU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xfU])))));
    bufp->fullBit(oldp+1415,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xfU])))));
    bufp->fullBit(oldp+1416,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xfU])))));
    bufp->fullBit(oldp+1417,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [0xfU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][0xfU])))));
    bufp->fullBit(oldp+1418,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1419,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xeU][0xfU]))),11);
    bufp->fullIData(oldp+1420,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1421,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1422,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1423,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1424,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][1U]),16);
    bufp->fullIData(oldp+1425,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1426,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xeU]
                                                [1U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xeU][1U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xeU]
                                                     [1U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [1U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [1U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xeU]
                                                         [1U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [1U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1427,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xeU][1U] >> 0xfU))));
    bufp->fullCData(oldp+1428,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][1U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1429,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xeU][1U])),10);
    bufp->fullBit(oldp+1430,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [1U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][1U])))));
    bufp->fullBit(oldp+1431,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [1U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][1U])))));
    bufp->fullBit(oldp+1432,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [1U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][1U])))));
    bufp->fullBit(oldp+1433,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [1U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][1U])))));
    bufp->fullBit(oldp+1434,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1435,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xeU][1U]))),11);
    bufp->fullIData(oldp+1436,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1437,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1438,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1439,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1440,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][2U]),16);
    bufp->fullIData(oldp+1441,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1442,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xeU]
                                                [2U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xeU][2U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xeU]
                                                     [2U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [2U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [2U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xeU]
                                                         [2U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [2U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1443,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xeU][2U] >> 0xfU))));
    bufp->fullCData(oldp+1444,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][2U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1445,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xeU][2U])),10);
    bufp->fullBit(oldp+1446,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [2U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][2U])))));
    bufp->fullBit(oldp+1447,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [2U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][2U])))));
    bufp->fullBit(oldp+1448,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [2U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][2U])))));
    bufp->fullBit(oldp+1449,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [2U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][2U])))));
    bufp->fullBit(oldp+1450,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1451,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xeU][2U]))),11);
    bufp->fullIData(oldp+1452,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1453,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1454,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1455,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1456,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][3U]),16);
    bufp->fullIData(oldp+1457,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1458,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xeU]
                                                [3U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xeU][3U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xeU]
                                                     [3U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [3U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [3U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xeU]
                                                         [3U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [3U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1459,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xeU][3U] >> 0xfU))));
    bufp->fullCData(oldp+1460,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][3U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1461,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xeU][3U])),10);
    bufp->fullBit(oldp+1462,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [3U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][3U])))));
    bufp->fullBit(oldp+1463,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [3U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][3U])))));
    bufp->fullBit(oldp+1464,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [3U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][3U])))));
    bufp->fullBit(oldp+1465,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [3U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][3U])))));
    bufp->fullBit(oldp+1466,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1467,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xeU][3U]))),11);
    bufp->fullIData(oldp+1468,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1469,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1470,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1471,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1472,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][4U]),16);
    bufp->fullIData(oldp+1473,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1474,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xeU]
                                                [4U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xeU][4U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xeU]
                                                     [4U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [4U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [4U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xeU]
                                                         [4U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [4U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1475,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xeU][4U] >> 0xfU))));
    bufp->fullCData(oldp+1476,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][4U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1477,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xeU][4U])),10);
    bufp->fullBit(oldp+1478,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [4U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][4U])))));
    bufp->fullBit(oldp+1479,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [4U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][4U])))));
    bufp->fullBit(oldp+1480,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [4U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][4U])))));
    bufp->fullBit(oldp+1481,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [4U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][4U])))));
    bufp->fullBit(oldp+1482,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1483,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xeU][4U]))),11);
    bufp->fullIData(oldp+1484,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1485,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1486,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1487,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1488,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][5U]),16);
    bufp->fullIData(oldp+1489,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1490,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xeU]
                                                [5U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xeU][5U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xeU]
                                                     [5U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [5U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [5U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xeU]
                                                         [5U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [5U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1491,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xeU][5U] >> 0xfU))));
    bufp->fullCData(oldp+1492,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][5U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1493,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xeU][5U])),10);
    bufp->fullBit(oldp+1494,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [5U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][5U])))));
    bufp->fullBit(oldp+1495,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [5U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][5U])))));
    bufp->fullBit(oldp+1496,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [5U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][5U])))));
    bufp->fullBit(oldp+1497,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [5U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][5U])))));
    bufp->fullBit(oldp+1498,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1499,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xeU][5U]))),11);
    bufp->fullIData(oldp+1500,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1501,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1502,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1503,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1504,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][6U]),16);
    bufp->fullIData(oldp+1505,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1506,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xeU]
                                                [6U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xeU][6U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xeU]
                                                     [6U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [6U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [6U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xeU]
                                                         [6U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [6U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1507,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xeU][6U] >> 0xfU))));
    bufp->fullCData(oldp+1508,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][6U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1509,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xeU][6U])),10);
    bufp->fullBit(oldp+1510,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [6U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][6U])))));
    bufp->fullBit(oldp+1511,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [6U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][6U])))));
    bufp->fullBit(oldp+1512,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [6U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][6U])))));
    bufp->fullBit(oldp+1513,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [6U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][6U])))));
    bufp->fullBit(oldp+1514,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1515,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xeU][6U]))),11);
    bufp->fullIData(oldp+1516,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1517,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1518,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1519,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1520,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][7U]),16);
    bufp->fullIData(oldp+1521,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1522,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xeU]
                                                [7U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xeU][7U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xeU]
                                                     [7U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [7U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [7U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xeU]
                                                         [7U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [7U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1523,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xeU][7U] >> 0xfU))));
    bufp->fullCData(oldp+1524,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][7U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1525,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xeU][7U])),10);
    bufp->fullBit(oldp+1526,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [7U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][7U])))));
    bufp->fullBit(oldp+1527,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [7U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][7U])))));
    bufp->fullBit(oldp+1528,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [7U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][7U])))));
    bufp->fullBit(oldp+1529,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [7U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][7U])))));
    bufp->fullBit(oldp+1530,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1531,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xeU][7U]))),11);
    bufp->fullIData(oldp+1532,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1533,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1534,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1535,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1536,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][8U]),16);
    bufp->fullIData(oldp+1537,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1538,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xeU]
                                                [8U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xeU][8U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xeU]
                                                     [8U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [8U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [8U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xeU]
                                                         [8U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [8U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1539,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xeU][8U] >> 0xfU))));
    bufp->fullCData(oldp+1540,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][8U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1541,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xeU][8U])),10);
    bufp->fullBit(oldp+1542,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [8U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][8U])))));
    bufp->fullBit(oldp+1543,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [8U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][8U])))));
    bufp->fullBit(oldp+1544,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [8U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][8U])))));
    bufp->fullBit(oldp+1545,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [8U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][8U])))));
    bufp->fullBit(oldp+1546,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1547,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xeU][8U]))),11);
    bufp->fullIData(oldp+1548,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1549,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1550,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1551,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1552,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xeU][9U]),16);
    bufp->fullIData(oldp+1553,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1554,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xeU]
                                                [9U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xeU][9U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xeU]
                                                     [9U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [9U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [9U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xeU]
                                                         [9U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xeU]
                                                       [9U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1555,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xeU][9U] >> 0xfU))));
    bufp->fullCData(oldp+1556,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xeU][9U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1557,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xeU][9U])),10);
    bufp->fullBit(oldp+1558,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [9U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][9U])))));
    bufp->fullBit(oldp+1559,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [9U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][9U])))));
    bufp->fullBit(oldp+1560,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xeU]
                                                  [9U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][9U])))));
    bufp->fullBit(oldp+1561,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xeU]
                                               [9U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xeU][9U])))));
    bufp->fullBit(oldp+1562,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1563,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xeU][9U]))),11);
    bufp->fullIData(oldp+1564,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1565,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1566,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1567,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__14__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullBit(oldp+1568,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en));
    bufp->fullSData(oldp+1569,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0U]),16);
    bufp->fullIData(oldp+1570,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1571,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xfU]
                                                [0U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xfU][0U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xfU]
                                                     [0U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xfU]
                                                         [0U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1572,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xfU][0U] >> 0xfU))));
    bufp->fullCData(oldp+1573,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][0U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1574,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xfU][0U])),10);
    bufp->fullBit(oldp+1575,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [0U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0U])))));
    bufp->fullBit(oldp+1576,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [0U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0U])))));
    bufp->fullBit(oldp+1577,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [0U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0U])))));
    bufp->fullBit(oldp+1578,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [0U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0U])))));
    bufp->fullBit(oldp+1579,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1580,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xfU][0U]))),11);
    bufp->fullIData(oldp+1581,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1582,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1583,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1584,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1585,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0xaU]),16);
    bufp->fullIData(oldp+1586,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1587,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xfU]
                                                [0xaU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xfU][0xaU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xfU]
                                                     [0xaU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0xaU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0xaU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xfU]
                                                         [0xaU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0xaU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1588,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xfU][0xaU] >> 0xfU))));
    bufp->fullCData(oldp+1589,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][0xaU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1590,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xfU][0xaU])),10);
    bufp->fullBit(oldp+1591,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [0xaU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xaU])))));
    bufp->fullBit(oldp+1592,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xaU])))));
    bufp->fullBit(oldp+1593,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xaU])))));
    bufp->fullBit(oldp+1594,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [0xaU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xaU])))));
    bufp->fullBit(oldp+1595,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1596,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xfU][0xaU]))),11);
    bufp->fullIData(oldp+1597,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1598,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1599,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1600,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1601,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0xbU]),16);
    bufp->fullIData(oldp+1602,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1603,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xfU]
                                                [0xbU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xfU][0xbU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xfU]
                                                     [0xbU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0xbU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0xbU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xfU]
                                                         [0xbU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0xbU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1604,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xfU][0xbU] >> 0xfU))));
    bufp->fullCData(oldp+1605,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][0xbU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1606,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xfU][0xbU])),10);
    bufp->fullBit(oldp+1607,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [0xbU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xbU])))));
    bufp->fullBit(oldp+1608,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xbU])))));
    bufp->fullBit(oldp+1609,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xbU])))));
    bufp->fullBit(oldp+1610,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [0xbU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xbU])))));
    bufp->fullBit(oldp+1611,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1612,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xfU][0xbU]))),11);
    bufp->fullIData(oldp+1613,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1614,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1615,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1616,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1617,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0xcU]),16);
    bufp->fullIData(oldp+1618,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1619,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xfU]
                                                [0xcU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xfU][0xcU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xfU]
                                                     [0xcU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0xcU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0xcU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xfU]
                                                         [0xcU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0xcU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1620,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xfU][0xcU] >> 0xfU))));
    bufp->fullCData(oldp+1621,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][0xcU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1622,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xfU][0xcU])),10);
    bufp->fullBit(oldp+1623,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [0xcU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xcU])))));
    bufp->fullBit(oldp+1624,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xcU])))));
    bufp->fullBit(oldp+1625,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xcU])))));
    bufp->fullBit(oldp+1626,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [0xcU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xcU])))));
    bufp->fullBit(oldp+1627,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1628,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xfU][0xcU]))),11);
    bufp->fullIData(oldp+1629,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1630,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1631,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1632,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1633,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0xdU]),16);
    bufp->fullIData(oldp+1634,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1635,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xfU]
                                                [0xdU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xfU][0xdU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xfU]
                                                     [0xdU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0xdU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0xdU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xfU]
                                                         [0xdU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0xdU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1636,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xfU][0xdU] >> 0xfU))));
    bufp->fullCData(oldp+1637,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][0xdU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1638,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xfU][0xdU])),10);
    bufp->fullBit(oldp+1639,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [0xdU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xdU])))));
    bufp->fullBit(oldp+1640,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xdU])))));
    bufp->fullBit(oldp+1641,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xdU])))));
    bufp->fullBit(oldp+1642,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [0xdU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xdU])))));
    bufp->fullBit(oldp+1643,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1644,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xfU][0xdU]))),11);
    bufp->fullIData(oldp+1645,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1646,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1647,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1648,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1649,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0xeU]),16);
    bufp->fullIData(oldp+1650,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1651,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xfU]
                                                [0xeU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xfU][0xeU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xfU]
                                                     [0xeU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0xeU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0xeU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xfU]
                                                         [0xeU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0xeU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1652,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xfU][0xeU] >> 0xfU))));
    bufp->fullCData(oldp+1653,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][0xeU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1654,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xfU][0xeU])),10);
    bufp->fullBit(oldp+1655,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [0xeU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xeU])))));
    bufp->fullBit(oldp+1656,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xeU])))));
    bufp->fullBit(oldp+1657,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xeU])))));
    bufp->fullBit(oldp+1658,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [0xeU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xeU])))));
    bufp->fullBit(oldp+1659,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1660,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xfU][0xeU]))),11);
    bufp->fullIData(oldp+1661,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1662,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1663,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1664,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1665,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][0xfU]),16);
    bufp->fullIData(oldp+1666,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1667,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xfU]
                                                [0xfU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xfU][0xfU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xfU]
                                                     [0xfU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0xfU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0xfU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xfU]
                                                         [0xfU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [0xfU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1668,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xfU][0xfU] >> 0xfU))));
    bufp->fullCData(oldp+1669,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][0xfU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1670,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xfU][0xfU])),10);
    bufp->fullBit(oldp+1671,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [0xfU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xfU])))));
    bufp->fullBit(oldp+1672,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xfU])))));
    bufp->fullBit(oldp+1673,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xfU])))));
    bufp->fullBit(oldp+1674,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [0xfU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][0xfU])))));
    bufp->fullBit(oldp+1675,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1676,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xfU][0xfU]))),11);
    bufp->fullIData(oldp+1677,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1678,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1679,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1680,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1681,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][1U]),16);
    bufp->fullIData(oldp+1682,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1683,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xfU]
                                                [1U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xfU][1U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xfU]
                                                     [1U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [1U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [1U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xfU]
                                                         [1U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [1U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1684,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xfU][1U] >> 0xfU))));
    bufp->fullCData(oldp+1685,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][1U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1686,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xfU][1U])),10);
    bufp->fullBit(oldp+1687,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [1U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][1U])))));
    bufp->fullBit(oldp+1688,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [1U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][1U])))));
    bufp->fullBit(oldp+1689,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [1U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][1U])))));
    bufp->fullBit(oldp+1690,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [1U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][1U])))));
    bufp->fullBit(oldp+1691,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1692,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xfU][1U]))),11);
    bufp->fullIData(oldp+1693,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1694,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1695,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1696,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1697,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][2U]),16);
    bufp->fullIData(oldp+1698,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1699,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xfU]
                                                [2U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xfU][2U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xfU]
                                                     [2U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [2U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [2U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xfU]
                                                         [2U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [2U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1700,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xfU][2U] >> 0xfU))));
    bufp->fullCData(oldp+1701,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][2U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1702,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xfU][2U])),10);
    bufp->fullBit(oldp+1703,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [2U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][2U])))));
    bufp->fullBit(oldp+1704,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [2U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][2U])))));
    bufp->fullBit(oldp+1705,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [2U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][2U])))));
    bufp->fullBit(oldp+1706,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [2U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][2U])))));
    bufp->fullBit(oldp+1707,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1708,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xfU][2U]))),11);
    bufp->fullIData(oldp+1709,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1710,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1711,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1712,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1713,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][3U]),16);
    bufp->fullIData(oldp+1714,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1715,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xfU]
                                                [3U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xfU][3U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xfU]
                                                     [3U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [3U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [3U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xfU]
                                                         [3U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [3U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1716,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xfU][3U] >> 0xfU))));
    bufp->fullCData(oldp+1717,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][3U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1718,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xfU][3U])),10);
    bufp->fullBit(oldp+1719,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [3U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][3U])))));
    bufp->fullBit(oldp+1720,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [3U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][3U])))));
    bufp->fullBit(oldp+1721,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [3U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][3U])))));
    bufp->fullBit(oldp+1722,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [3U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][3U])))));
    bufp->fullBit(oldp+1723,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1724,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xfU][3U]))),11);
    bufp->fullIData(oldp+1725,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1726,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1727,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1728,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1729,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][4U]),16);
    bufp->fullIData(oldp+1730,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1731,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xfU]
                                                [4U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xfU][4U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xfU]
                                                     [4U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [4U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [4U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xfU]
                                                         [4U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [4U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1732,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xfU][4U] >> 0xfU))));
    bufp->fullCData(oldp+1733,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][4U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1734,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xfU][4U])),10);
    bufp->fullBit(oldp+1735,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [4U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][4U])))));
    bufp->fullBit(oldp+1736,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [4U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][4U])))));
    bufp->fullBit(oldp+1737,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [4U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][4U])))));
    bufp->fullBit(oldp+1738,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [4U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][4U])))));
    bufp->fullBit(oldp+1739,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1740,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xfU][4U]))),11);
    bufp->fullIData(oldp+1741,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1742,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1743,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1744,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1745,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][5U]),16);
    bufp->fullIData(oldp+1746,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1747,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xfU]
                                                [5U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xfU][5U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xfU]
                                                     [5U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [5U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [5U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xfU]
                                                         [5U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [5U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1748,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xfU][5U] >> 0xfU))));
    bufp->fullCData(oldp+1749,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][5U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1750,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xfU][5U])),10);
    bufp->fullBit(oldp+1751,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [5U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][5U])))));
    bufp->fullBit(oldp+1752,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [5U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][5U])))));
    bufp->fullBit(oldp+1753,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [5U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][5U])))));
    bufp->fullBit(oldp+1754,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [5U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][5U])))));
    bufp->fullBit(oldp+1755,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1756,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xfU][5U]))),11);
    bufp->fullIData(oldp+1757,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1758,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1759,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1760,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1761,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][6U]),16);
    bufp->fullIData(oldp+1762,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1763,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xfU]
                                                [6U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xfU][6U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xfU]
                                                     [6U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [6U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [6U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xfU]
                                                         [6U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [6U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1764,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xfU][6U] >> 0xfU))));
    bufp->fullCData(oldp+1765,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][6U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1766,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xfU][6U])),10);
    bufp->fullBit(oldp+1767,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [6U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][6U])))));
    bufp->fullBit(oldp+1768,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [6U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][6U])))));
    bufp->fullBit(oldp+1769,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [6U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][6U])))));
    bufp->fullBit(oldp+1770,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [6U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][6U])))));
    bufp->fullBit(oldp+1771,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1772,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xfU][6U]))),11);
    bufp->fullIData(oldp+1773,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1774,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1775,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1776,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1777,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][7U]),16);
    bufp->fullIData(oldp+1778,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1779,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xfU]
                                                [7U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xfU][7U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xfU]
                                                     [7U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [7U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [7U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xfU]
                                                         [7U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [7U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1780,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xfU][7U] >> 0xfU))));
    bufp->fullCData(oldp+1781,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][7U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1782,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xfU][7U])),10);
    bufp->fullBit(oldp+1783,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [7U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][7U])))));
    bufp->fullBit(oldp+1784,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [7U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][7U])))));
    bufp->fullBit(oldp+1785,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [7U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][7U])))));
    bufp->fullBit(oldp+1786,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [7U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][7U])))));
    bufp->fullBit(oldp+1787,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1788,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xfU][7U]))),11);
    bufp->fullIData(oldp+1789,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1790,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1791,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1792,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1793,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][8U]),16);
    bufp->fullIData(oldp+1794,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1795,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xfU]
                                                [8U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xfU][8U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xfU]
                                                     [8U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [8U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [8U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xfU]
                                                         [8U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [8U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1796,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xfU][8U] >> 0xfU))));
    bufp->fullCData(oldp+1797,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][8U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1798,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xfU][8U])),10);
    bufp->fullBit(oldp+1799,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [8U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][8U])))));
    bufp->fullBit(oldp+1800,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [8U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][8U])))));
    bufp->fullBit(oldp+1801,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [8U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][8U])))));
    bufp->fullBit(oldp+1802,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [8U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][8U])))));
    bufp->fullBit(oldp+1803,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1804,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xfU][8U]))),11);
    bufp->fullIData(oldp+1805,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1806,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1807,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1808,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1809,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [0xfU][9U]),16);
    bufp->fullIData(oldp+1810,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1811,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [0xfU]
                                                [9U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [0xfU][9U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [0xfU]
                                                     [9U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [9U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [9U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [0xfU]
                                                         [9U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [0xfU]
                                                       [9U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1812,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [0xfU][9U] >> 0xfU))));
    bufp->fullCData(oldp+1813,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [0xfU][9U] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1814,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [0xfU][9U])),10);
    bufp->fullBit(oldp+1815,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [9U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][9U])))));
    bufp->fullBit(oldp+1816,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [9U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][9U])))));
    bufp->fullBit(oldp+1817,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [0xfU]
                                                  [9U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][9U])))));
    bufp->fullBit(oldp+1818,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [0xfU]
                                               [9U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [0xfU][9U])))));
    bufp->fullBit(oldp+1819,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1820,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [0xfU][9U]))),11);
    bufp->fullIData(oldp+1821,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1822,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1823,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1824,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__15__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullBit(oldp+1825,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en));
    bufp->fullSData(oldp+1826,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][0U]),16);
    bufp->fullIData(oldp+1827,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1828,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [1U]
                                                [0U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [1U]
                                                     [0U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [1U]
                                                         [0U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1829,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [1U][0U] >> 0xfU))));
    bufp->fullCData(oldp+1830,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [1U][0U] >> 0xaU))),5);
    bufp->fullSData(oldp+1831,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [1U][0U])),10);
    bufp->fullBit(oldp+1832,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [0U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0U])))));
    bufp->fullBit(oldp+1833,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [0U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0U])))));
    bufp->fullBit(oldp+1834,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [0U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0U])))));
    bufp->fullBit(oldp+1835,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [0U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0U])))));
    bufp->fullBit(oldp+1836,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1837,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [1U][0U]))),11);
    bufp->fullIData(oldp+1838,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1839,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1840,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1841,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1842,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][0xaU]),16);
    bufp->fullIData(oldp+1843,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1844,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [1U]
                                                [0xaU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0xaU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [1U]
                                                     [0xaU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0xaU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0xaU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [1U]
                                                         [0xaU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0xaU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1845,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [1U][0xaU] >> 0xfU))));
    bufp->fullCData(oldp+1846,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [1U][0xaU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1847,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [1U][0xaU])),10);
    bufp->fullBit(oldp+1848,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [0xaU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xaU])))));
    bufp->fullBit(oldp+1849,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xaU])))));
    bufp->fullBit(oldp+1850,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xaU])))));
    bufp->fullBit(oldp+1851,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [0xaU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xaU])))));
    bufp->fullBit(oldp+1852,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1853,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [1U][0xaU]))),11);
    bufp->fullIData(oldp+1854,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1855,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1856,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1857,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1858,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][0xbU]),16);
    bufp->fullIData(oldp+1859,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1860,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [1U]
                                                [0xbU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0xbU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [1U]
                                                     [0xbU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0xbU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0xbU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [1U]
                                                         [0xbU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0xbU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1861,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [1U][0xbU] >> 0xfU))));
    bufp->fullCData(oldp+1862,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [1U][0xbU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1863,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [1U][0xbU])),10);
    bufp->fullBit(oldp+1864,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [0xbU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xbU])))));
    bufp->fullBit(oldp+1865,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xbU])))));
    bufp->fullBit(oldp+1866,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xbU])))));
    bufp->fullBit(oldp+1867,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [0xbU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xbU])))));
    bufp->fullBit(oldp+1868,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1869,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [1U][0xbU]))),11);
    bufp->fullIData(oldp+1870,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1871,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1872,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1873,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1874,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][0xcU]),16);
    bufp->fullIData(oldp+1875,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1876,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [1U]
                                                [0xcU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0xcU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [1U]
                                                     [0xcU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0xcU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0xcU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [1U]
                                                         [0xcU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0xcU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1877,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [1U][0xcU] >> 0xfU))));
    bufp->fullCData(oldp+1878,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [1U][0xcU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1879,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [1U][0xcU])),10);
    bufp->fullBit(oldp+1880,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [0xcU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xcU])))));
    bufp->fullBit(oldp+1881,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xcU])))));
    bufp->fullBit(oldp+1882,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xcU])))));
    bufp->fullBit(oldp+1883,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [0xcU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xcU])))));
    bufp->fullBit(oldp+1884,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1885,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [1U][0xcU]))),11);
    bufp->fullIData(oldp+1886,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1887,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1888,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1889,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1890,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][0xdU]),16);
    bufp->fullIData(oldp+1891,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1892,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [1U]
                                                [0xdU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0xdU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [1U]
                                                     [0xdU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0xdU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0xdU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [1U]
                                                         [0xdU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0xdU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1893,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [1U][0xdU] >> 0xfU))));
    bufp->fullCData(oldp+1894,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [1U][0xdU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1895,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [1U][0xdU])),10);
    bufp->fullBit(oldp+1896,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [0xdU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xdU])))));
    bufp->fullBit(oldp+1897,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xdU])))));
    bufp->fullBit(oldp+1898,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xdU])))));
    bufp->fullBit(oldp+1899,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [0xdU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xdU])))));
    bufp->fullBit(oldp+1900,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1901,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [1U][0xdU]))),11);
    bufp->fullIData(oldp+1902,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1903,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1904,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1905,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1906,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][0xeU]),16);
    bufp->fullIData(oldp+1907,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1908,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [1U]
                                                [0xeU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0xeU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [1U]
                                                     [0xeU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0xeU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0xeU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [1U]
                                                         [0xeU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0xeU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1909,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [1U][0xeU] >> 0xfU))));
    bufp->fullCData(oldp+1910,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [1U][0xeU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1911,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [1U][0xeU])),10);
    bufp->fullBit(oldp+1912,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [0xeU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xeU])))));
    bufp->fullBit(oldp+1913,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xeU])))));
    bufp->fullBit(oldp+1914,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [0xeU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xeU])))));
    bufp->fullBit(oldp+1915,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [0xeU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xeU])))));
    bufp->fullBit(oldp+1916,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1917,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [1U][0xeU]))),11);
    bufp->fullIData(oldp+1918,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1919,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1920,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1921,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1922,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][0xfU]),16);
    bufp->fullIData(oldp+1923,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1924,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [1U]
                                                [0xfU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][0xfU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [1U]
                                                     [0xfU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0xfU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0xfU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [1U]
                                                         [0xfU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [0xfU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1925,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [1U][0xfU] >> 0xfU))));
    bufp->fullCData(oldp+1926,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [1U][0xfU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+1927,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [1U][0xfU])),10);
    bufp->fullBit(oldp+1928,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [0xfU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xfU])))));
    bufp->fullBit(oldp+1929,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xfU])))));
    bufp->fullBit(oldp+1930,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [0xfU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xfU])))));
    bufp->fullBit(oldp+1931,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [0xfU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][0xfU])))));
    bufp->fullBit(oldp+1932,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1933,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [1U][0xfU]))),11);
    bufp->fullIData(oldp+1934,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1935,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1936,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1937,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__15__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1938,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][1U]),16);
    bufp->fullIData(oldp+1939,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1940,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [1U]
                                                [1U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][1U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [1U]
                                                     [1U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [1U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [1U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [1U]
                                                         [1U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [1U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1941,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [1U][1U] >> 0xfU))));
    bufp->fullCData(oldp+1942,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [1U][1U] >> 0xaU))),5);
    bufp->fullSData(oldp+1943,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [1U][1U])),10);
    bufp->fullBit(oldp+1944,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [1U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][1U])))));
    bufp->fullBit(oldp+1945,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [1U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][1U])))));
    bufp->fullBit(oldp+1946,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [1U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][1U])))));
    bufp->fullBit(oldp+1947,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [1U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][1U])))));
    bufp->fullBit(oldp+1948,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1949,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [1U][1U]))),11);
    bufp->fullIData(oldp+1950,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1951,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1952,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1953,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__1__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1954,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][2U]),16);
    bufp->fullIData(oldp+1955,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1956,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [1U]
                                                [2U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][2U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [1U]
                                                     [2U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [2U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [2U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [1U]
                                                         [2U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [2U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1957,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [1U][2U] >> 0xfU))));
    bufp->fullCData(oldp+1958,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [1U][2U] >> 0xaU))),5);
    bufp->fullSData(oldp+1959,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [1U][2U])),10);
    bufp->fullBit(oldp+1960,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [2U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][2U])))));
    bufp->fullBit(oldp+1961,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [2U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][2U])))));
    bufp->fullBit(oldp+1962,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [2U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][2U])))));
    bufp->fullBit(oldp+1963,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [2U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][2U])))));
    bufp->fullBit(oldp+1964,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1965,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [1U][2U]))),11);
    bufp->fullIData(oldp+1966,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1967,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1968,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1969,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__2__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1970,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][3U]),16);
    bufp->fullIData(oldp+1971,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1972,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [1U]
                                                [3U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][3U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [1U]
                                                     [3U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [3U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [3U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [1U]
                                                         [3U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [3U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1973,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [1U][3U] >> 0xfU))));
    bufp->fullCData(oldp+1974,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [1U][3U] >> 0xaU))),5);
    bufp->fullSData(oldp+1975,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [1U][3U])),10);
    bufp->fullBit(oldp+1976,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [3U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][3U])))));
    bufp->fullBit(oldp+1977,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [3U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][3U])))));
    bufp->fullBit(oldp+1978,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [3U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][3U])))));
    bufp->fullBit(oldp+1979,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [3U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][3U])))));
    bufp->fullBit(oldp+1980,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1981,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [1U][3U]))),11);
    bufp->fullIData(oldp+1982,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1983,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+1984,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+1985,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__3__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+1986,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][4U]),16);
    bufp->fullIData(oldp+1987,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+1988,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [1U]
                                                [4U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][4U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [1U]
                                                     [4U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [4U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [4U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [1U]
                                                         [4U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [4U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+1989,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [1U][4U] >> 0xfU))));
    bufp->fullCData(oldp+1990,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [1U][4U] >> 0xaU))),5);
    bufp->fullSData(oldp+1991,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [1U][4U])),10);
    bufp->fullBit(oldp+1992,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [4U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][4U])))));
    bufp->fullBit(oldp+1993,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [4U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][4U])))));
    bufp->fullBit(oldp+1994,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [4U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][4U])))));
    bufp->fullBit(oldp+1995,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [4U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][4U])))));
    bufp->fullBit(oldp+1996,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+1997,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [1U][4U]))),11);
    bufp->fullIData(oldp+1998,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+1999,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2000,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2001,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__4__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2002,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][5U]),16);
    bufp->fullIData(oldp+2003,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2004,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [1U]
                                                [5U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][5U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [1U]
                                                     [5U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [5U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [5U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [1U]
                                                         [5U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [5U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2005,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [1U][5U] >> 0xfU))));
    bufp->fullCData(oldp+2006,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [1U][5U] >> 0xaU))),5);
    bufp->fullSData(oldp+2007,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [1U][5U])),10);
    bufp->fullBit(oldp+2008,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [5U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][5U])))));
    bufp->fullBit(oldp+2009,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [5U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][5U])))));
    bufp->fullBit(oldp+2010,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [5U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][5U])))));
    bufp->fullBit(oldp+2011,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [5U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][5U])))));
    bufp->fullBit(oldp+2012,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2013,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [1U][5U]))),11);
    bufp->fullIData(oldp+2014,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2015,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2016,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2017,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__5__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2018,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][6U]),16);
    bufp->fullIData(oldp+2019,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2020,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [1U]
                                                [6U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][6U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [1U]
                                                     [6U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [6U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [6U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [1U]
                                                         [6U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [6U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2021,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [1U][6U] >> 0xfU))));
    bufp->fullCData(oldp+2022,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [1U][6U] >> 0xaU))),5);
    bufp->fullSData(oldp+2023,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [1U][6U])),10);
    bufp->fullBit(oldp+2024,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [6U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][6U])))));
    bufp->fullBit(oldp+2025,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [6U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][6U])))));
    bufp->fullBit(oldp+2026,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [6U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][6U])))));
    bufp->fullBit(oldp+2027,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [6U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][6U])))));
    bufp->fullBit(oldp+2028,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2029,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [1U][6U]))),11);
    bufp->fullIData(oldp+2030,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2031,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2032,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2033,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__6__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2034,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][7U]),16);
    bufp->fullIData(oldp+2035,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2036,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [1U]
                                                [7U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][7U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [1U]
                                                     [7U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [7U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [7U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [1U]
                                                         [7U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [7U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2037,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [1U][7U] >> 0xfU))));
    bufp->fullCData(oldp+2038,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [1U][7U] >> 0xaU))),5);
    bufp->fullSData(oldp+2039,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [1U][7U])),10);
    bufp->fullBit(oldp+2040,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [7U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][7U])))));
    bufp->fullBit(oldp+2041,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [7U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][7U])))));
    bufp->fullBit(oldp+2042,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [7U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][7U])))));
    bufp->fullBit(oldp+2043,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [7U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][7U])))));
    bufp->fullBit(oldp+2044,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2045,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [1U][7U]))),11);
    bufp->fullIData(oldp+2046,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2047,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2048,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2049,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__7__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2050,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][8U]),16);
    bufp->fullIData(oldp+2051,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2052,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [1U]
                                                [8U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][8U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [1U]
                                                     [8U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [8U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [8U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [1U]
                                                         [8U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [8U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2053,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [1U][8U] >> 0xfU))));
    bufp->fullCData(oldp+2054,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [1U][8U] >> 0xaU))),5);
    bufp->fullSData(oldp+2055,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [1U][8U])),10);
    bufp->fullBit(oldp+2056,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [8U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][8U])))));
    bufp->fullBit(oldp+2057,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [8U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][8U])))));
    bufp->fullBit(oldp+2058,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [8U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][8U])))));
    bufp->fullBit(oldp+2059,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [8U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][8U])))));
    bufp->fullBit(oldp+2060,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2061,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [1U][8U]))),11);
    bufp->fullIData(oldp+2062,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2063,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2064,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2065,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__8__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2066,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [1U][9U]),16);
    bufp->fullIData(oldp+2067,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2068,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [1U]
                                                [9U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [1U][9U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [1U]
                                                     [9U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [9U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [9U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [1U]
                                                         [9U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [1U]
                                                       [9U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2069,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [1U][9U] >> 0xfU))));
    bufp->fullCData(oldp+2070,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [1U][9U] >> 0xaU))),5);
    bufp->fullSData(oldp+2071,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [1U][9U])),10);
    bufp->fullBit(oldp+2072,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [9U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][9U])))));
    bufp->fullBit(oldp+2073,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [9U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][9U])))));
    bufp->fullBit(oldp+2074,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [1U]
                                                  [9U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][9U])))));
    bufp->fullBit(oldp+2075,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [1U]
                                               [9U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [1U][9U])))));
    bufp->fullBit(oldp+2076,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2077,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [1U][9U]))),11);
    bufp->fullIData(oldp+2078,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2079,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2080,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2081,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__1__KET____DOT__PE_COL__BRA__9__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullBit(oldp+2082,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT____Vcellinp__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__weight_load_en));
    bufp->fullSData(oldp+2083,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][0U]),16);
    bufp->fullIData(oldp+2084,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2085,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [2U]
                                                [0U] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][0U]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [2U]
                                                     [0U] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0U])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0U]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [2U]
                                                         [0U] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0U]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2086,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [2U][0U] >> 0xfU))));
    bufp->fullCData(oldp+2087,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [2U][0U] >> 0xaU))),5);
    bufp->fullSData(oldp+2088,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [2U][0U])),10);
    bufp->fullBit(oldp+2089,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [0U] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0U])))));
    bufp->fullBit(oldp+2090,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [0U] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0U])))));
    bufp->fullBit(oldp+2091,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [0U] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0U])))));
    bufp->fullBit(oldp+2092,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [0U] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0U])))));
    bufp->fullBit(oldp+2093,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2094,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [2U][0U]))),11);
    bufp->fullIData(oldp+2095,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2096,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2097,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2098,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__0__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2099,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][0xaU]),16);
    bufp->fullIData(oldp+2100,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2101,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [2U]
                                                [0xaU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][0xaU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [2U]
                                                     [0xaU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0xaU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0xaU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [2U]
                                                         [0xaU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0xaU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2102,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [2U][0xaU] >> 0xfU))));
    bufp->fullCData(oldp+2103,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [2U][0xaU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2104,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [2U][0xaU])),10);
    bufp->fullBit(oldp+2105,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [0xaU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xaU])))));
    bufp->fullBit(oldp+2106,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xaU])))));
    bufp->fullBit(oldp+2107,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [0xaU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xaU])))));
    bufp->fullBit(oldp+2108,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [0xaU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xaU])))));
    bufp->fullBit(oldp+2109,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2110,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [2U][0xaU]))),11);
    bufp->fullIData(oldp+2111,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2112,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2113,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2114,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__10__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2115,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][0xbU]),16);
    bufp->fullIData(oldp+2116,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2117,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [2U]
                                                [0xbU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][0xbU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [2U]
                                                     [0xbU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0xbU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0xbU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [2U]
                                                         [0xbU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0xbU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2118,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [2U][0xbU] >> 0xfU))));
    bufp->fullCData(oldp+2119,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [2U][0xbU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2120,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [2U][0xbU])),10);
    bufp->fullBit(oldp+2121,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [0xbU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xbU])))));
    bufp->fullBit(oldp+2122,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xbU])))));
    bufp->fullBit(oldp+2123,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [0xbU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xbU])))));
    bufp->fullBit(oldp+2124,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [0xbU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xbU])))));
    bufp->fullBit(oldp+2125,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2126,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [2U][0xbU]))),11);
    bufp->fullIData(oldp+2127,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2128,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2129,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2130,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__11__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2131,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][0xcU]),16);
    bufp->fullIData(oldp+2132,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2133,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [2U]
                                                [0xcU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][0xcU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [2U]
                                                     [0xcU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0xcU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0xcU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [2U]
                                                         [0xcU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0xcU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2134,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [2U][0xcU] >> 0xfU))));
    bufp->fullCData(oldp+2135,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [2U][0xcU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2136,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [2U][0xcU])),10);
    bufp->fullBit(oldp+2137,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [0xcU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xcU])))));
    bufp->fullBit(oldp+2138,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xcU])))));
    bufp->fullBit(oldp+2139,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [0xcU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xcU])))));
    bufp->fullBit(oldp+2140,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [0xcU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xcU])))));
    bufp->fullBit(oldp+2141,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2142,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [2U][0xcU]))),11);
    bufp->fullIData(oldp+2143,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2144,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2145,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2146,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__12__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2147,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][0xdU]),16);
    bufp->fullIData(oldp+2148,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2149,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [2U]
                                                [0xdU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][0xdU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [2U]
                                                     [0xdU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0xdU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0xdU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [2U]
                                                         [0xdU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0xdU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2150,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [2U][0xdU] >> 0xfU))));
    bufp->fullCData(oldp+2151,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [2U][0xdU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2152,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [2U][0xdU])),10);
    bufp->fullBit(oldp+2153,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [0xdU] 
                                               >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xdU])))));
    bufp->fullBit(oldp+2154,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                              & (0U == (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xdU])))));
    bufp->fullBit(oldp+2155,(((0x1fU == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                                  [2U]
                                                  [0xdU] 
                                                  >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xdU])))));
    bufp->fullBit(oldp+2156,(((0U == (0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                               [2U]
                                               [0xdU] 
                                               >> 0xaU))) 
                              & (0U != (0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                        [2U][0xdU])))));
    bufp->fullBit(oldp+2157,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__result_sign));
    bufp->fullSData(oldp+2158,((0x400U | (0x3ffU & 
                                          vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                          [2U][0xdU]))),11);
    bufp->fullIData(oldp+2159,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product),22);
    bufp->fullSData(oldp+2160,((0x1ffU & ((IData)(0x61U) 
                                          + (IData)(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT____VdfgTmp_h8cc3278a__0)))),9);
    bufp->fullIData(oldp+2161,(((0x200000U & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product)
                                 ? (0x7ffffcU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 2U))
                                 : (0x7ffff8U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__mant_product 
                                                 << 3U)))),23);
    bufp->fullSData(oldp+2162,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__13__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_mul__DOT__fp32_exp),9);
    bufp->fullSData(oldp+2163,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                               [2U][0xeU]),16);
    bufp->fullIData(oldp+2164,(vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product),32);
    bufp->fullIData(oldp+2165,(((((0xffU == (0xffU 
                                             & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                [2U]
                                                [0xeU] 
                                                >> 0x17U))) 
                                  & (0U != (0x7fffffU 
                                            & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                            [2U][0xeU]))) 
                                 | (IData)(((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)) 
                                            & (0U != 
                                               (0x7fffffU 
                                                & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product)))))
                                 ? 0x7fc00000U : (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf) 
                                                   & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf))
                                                   ? 
                                                  (((vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                     [2U]
                                                     [0xeU] 
                                                     >> 0x1fU) 
                                                    != 
                                                    (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product 
                                                     >> 0x1fU))
                                                    ? 0x7fc00000U
                                                    : 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0xeU])))
                                                   : 
                                                  ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_inf)
                                                    ? 
                                                   (0x7f800000U 
                                                    | (0x80000000U 
                                                       & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0xeU]))
                                                    : 
                                                   ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_inf)
                                                     ? 
                                                    (0x7f800000U 
                                                     | (0x80000000U 
                                                        & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                     : 
                                                    (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero) 
                                                      & (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero))
                                                      ? 
                                                     (0x80000000U 
                                                      & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                         [2U]
                                                         [0xeU] 
                                                         & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product))
                                                      : 
                                                     ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__a_is_zero)
                                                       ? vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__fp32_product
                                                       : 
                                                      ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__b_is_zero)
                                                        ? 
                                                       vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_psum_wire
                                                       [2U]
                                                       [0xeU]
                                                        : 
                                                       (((0U 
                                                          == (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_exp)) 
                                                         & (0U 
                                                            == vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__norm_mant))
                                                         ? 0U
                                                         : 
                                                        ((0xffU 
                                                          <= (IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp))
                                                          ? 
                                                         (0x7f800000U 
                                                          | ((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                             << 0x1fU))
                                                          : 
                                                         (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__large_sign) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__final_exp) 
                                                              << 0x17U) 
                                                             | vlSymsp->TOP__npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__PE_ROW__BRA__2__KET____DOT__PE_COL__BRA__14__KET____DOT__MODE_FP16__DOT__u_pe__DOT__u_add.__PVT__rounded_mant)))))))))))),32);
    bufp->fullBit(oldp+2166,((1U & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                    [2U][0xeU] >> 0xfU))));
    bufp->fullCData(oldp+2167,((0x1fU & (vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                         [2U][0xeU] 
                                         >> 0xaU))),5);
    bufp->fullSData(oldp+2168,((0x3ffU & vlSelf->npu_system_top__DOT__u_mxe_core__DOT__u_core__DOT__u_systolic_array__DOT__pe_act_wire
                                [2U][0xeU])),10);
}
