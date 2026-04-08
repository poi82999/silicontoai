`timescale 1ns / 1ps

import npu_def_pkg::*;

module npu_system_top #(
    parameter AXI_ADDR_WIDTH  = 64,
    parameter AXI_DATA_WIDTH  = 256, // NPU Vector Width (16 * 16b FP16)에 맞춤
    parameter AXI_ID_WIDTH    = 4,
    parameter SRAM_ADDR_WIDTH = 10,
    parameter int DATA_MODE   = NPU_DATA_MODE
)(
    input  logic clk,
    input  logic rst_n,

    // --- MMIO Control Interface (From Host/C++) ---
    input  logic                      mmio_start_dma,
    input  logic                      mmio_dma_target, // 0: Load Act, 1: Load Weight
    input  logic [AXI_ADDR_WIDTH-1:0] mmio_src_addr,
    input  logic [7:0]                mmio_burst_len,
    input  logic [15:0]               mmio_total_bursts,
    output logic                      mmio_dma_done,

    /* verilator lint_off UNUSEDSIGNAL */
    input  logic                      mmio_swap_banks, // Ignored in Phase 2
    input  logic                      mmio_start_npu,  // Ignored, dataflow is now streamlined
    input  logic                      mmio_npu_mode,   // Ignored, inferred from DMA target
    /* verilator lint_on UNUSEDSIGNAL */
    
    input  logic                      mmio_npu_acc_clear,
    input  logic                      mmio_test_acc_addr_override_en,
    input  logic [8:0]                mmio_test_acc_addr_override,
    input  logic                      mmio_test_one_shot_acc_clear_en,
    
    /* verilator lint_off UNUSEDSIGNAL */
    input  logic                      mmio_clear_done,
    input  logic [15:0]               mmio_npu_seq_len, // Ignored, stream length handles it
    /* verilator lint_on UNUSEDSIGNAL */
    output logic                      mmio_npu_done,

    // --- AXI4 Read Master Interface (To Main Memory) ---
    output logic [AXI_ID_WIDTH-1:0]   arid,
    output logic [AXI_ADDR_WIDTH-1:0] araddr,
    output logic [7:0]                arlen,
    output logic [2:0]                arsize,
    output logic [1:0]                arburst,
    output logic                      arvalid,
    input  logic                      arready,

    /* verilator lint_off UNUSEDSIGNAL */
    input  logic [AXI_ID_WIDTH-1:0]   rid,
    input  logic [AXI_DATA_WIDTH-1:0] rdata,
    input  logic [1:0]                rresp,
    /* verilator lint_on UNUSEDSIGNAL */
    input  logic                      rlast,
    input  logic                      rvalid,
    output logic                      rready,

    // --- MMIO Drain Control Interface ---
    input  logic                      mmio_drain_start,
    input  logic [8:0]                mmio_drain_len,
    output logic                      mmio_drain_done,

    // --- AXIS TX for Partial Sum Drain (To DMA S2MM or C++ Replay Driver) ---
    output logic                      m_axis_psum_tvalid,
    input  logic                      m_axis_psum_tready,
    output logic [511:0]              m_axis_psum_tdata,
    output logic                      m_axis_psum_tlast
);

    // =========================================================================
    // 1. DMA Controller Instance (MM2S)
    // =========================================================================
    logic                      dma_axis_tvalid;
    logic                      dma_axis_tready;
    logic [AXI_DATA_WIDTH-1:0] dma_axis_tdata;
    logic                      dma_axis_tlast;

    dma_controller #(
        .AXI_ADDR_WIDTH(AXI_ADDR_WIDTH),
        .AXI_DATA_WIDTH(AXI_DATA_WIDTH),
        .AXI_ID_WIDTH(AXI_ID_WIDTH),
        .SRAM_ADDR_WIDTH(SRAM_ADDR_WIDTH)
    ) u_dma (
        .clk            (clk),
        .rst_n          (rst_n),
        .start_dma      (mmio_start_dma),
        .src_addr_base  (mmio_src_addr),
        .burst_len      (mmio_burst_len),
        .total_bursts   (mmio_total_bursts),
        .dma_done       (mmio_dma_done),
        // AXI Interfaces
        .arid(arid), .araddr(araddr), .arlen(arlen), .arsize(arsize), .arburst(arburst),
        .arvalid(arvalid), .arready(arready),
        .rid(rid), .rdata(rdata), .rresp(rresp), .rlast(rlast), .rvalid(rvalid), .rready(rready),
        // AXI-Stream Output
        .m_axis_tvalid  (dma_axis_tvalid),
        .m_axis_tready  (dma_axis_tready),
        .m_axis_tdata   (dma_axis_tdata),
        .m_axis_tlast   (dma_axis_tlast)
    );

    // =========================================================================
    // 2. Stream De-Mux (Steering based on DMA target)
    // =========================================================================
    logic                      mxe_wt_tvalid;
    logic                      mxe_wt_tready;
    logic [AXI_DATA_WIDTH-1:0] mxe_wt_tdata;
    logic                      mxe_wt_tlast;

    logic                      mxe_act_tvalid;
    logic                      mxe_act_tready;
    logic [AXI_DATA_WIDTH-1:0] mxe_act_tdata;
    logic                      mxe_act_tlast;
    logic [0:0]                mxe_act_tuser;

    // mmio_dma_target: 0 for Act, 1 for Weight
    assign mxe_wt_tvalid  = (mmio_dma_target == 1'b1) ? dma_axis_tvalid : 1'b0;
    assign mxe_wt_tdata   = dma_axis_tdata;
    assign mxe_wt_tlast   = dma_axis_tlast;

    assign mxe_act_tvalid = (mmio_dma_target == 1'b0) ? dma_axis_tvalid : 1'b0;
    assign mxe_act_tdata  = dma_axis_tdata;
    assign mxe_act_tlast  = dma_axis_tlast;

    assign mxe_act_tuser[0] = mmio_npu_acc_clear;

    // Backpressure routing
    assign dma_axis_tready = (mmio_dma_target == 1'b1) ? mxe_wt_tready : mxe_act_tready;

    // =========================================================================
    // 3. NPU Matrix Execution Engine (MXE)
    // =========================================================================
    // NPU is driven by AXIS inputs and MMIO control

    
    npu_mxe_top #(
        .DATA_MODE(DATA_MODE)
    ) u_mxe_core (
        .clk             (clk),
        .rst_n           (rst_n),

        .s_axis_wt_tvalid(mxe_wt_tvalid),
        .s_axis_wt_tready(mxe_wt_tready),
        .s_axis_wt_tdata (mxe_wt_tdata),
        .s_axis_wt_tlast (mxe_wt_tlast),

        .s_axis_act_tvalid(mxe_act_tvalid),
        .s_axis_act_tready(mxe_act_tready),
        .s_axis_act_tdata (mxe_act_tdata),
        .s_axis_act_tlast (mxe_act_tlast),
        .s_axis_act_tuser (mxe_act_tuser),

        .m_axis_psum_tvalid(m_axis_psum_tvalid),
        .m_axis_psum_tready(m_axis_psum_tready),
        .m_axis_psum_tdata (m_axis_psum_tdata),
        .m_axis_psum_tlast (m_axis_psum_tlast),

        // Direct drain bypass removed
        .direct_drain_re   (1'b0),
        .direct_drain_addr (9'd0),
        .direct_drain_data (),

        // Test / coverage override
        .test_acc_addr_override_en  (mmio_test_acc_addr_override_en),
        .test_acc_addr_override     (mmio_test_acc_addr_override),
        .test_one_shot_acc_clear_en (mmio_test_one_shot_acc_clear_en),

        .mmio_drain_start(mmio_drain_start),
        .mmio_drain_len  (mmio_drain_len),
        .mmio_drain_done (mmio_drain_done)
    );

    // Provide a done signal when execution is finished.
    // For Streamlined Dataflow, execution is instantaneous with stream valid.
    // Let's just track if activation DMA was fired and done.
    assign mmio_npu_done = (mmio_dma_done && mmio_dma_target == 1'b0);

endmodule
