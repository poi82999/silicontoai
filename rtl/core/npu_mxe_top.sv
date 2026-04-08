`timescale 1ns / 1ps

import npu_def_pkg::*;

module npu_mxe_top #(
    parameter int ROWS = NPU_ROWS,
    parameter int COLS = NPU_COLS,
    parameter int ACT_W = NPU_ACT_WIDTH,
    parameter int WT_W  = NPU_WT_WIDTH,
    parameter int PSUM_W = NPU_PSUM_WIDTH,
    parameter int DATA_MODE = NPU_DATA_MODE
)(
    input  logic clk,
    input  logic rst_n,

    // AXIS RX for Weight
    input  logic                      s_axis_wt_tvalid,
    output logic                      s_axis_wt_tready,
    input  logic [COLS*WT_W-1:0]      s_axis_wt_tdata,
    input  logic                      s_axis_wt_tlast,

    // AXIS RX for Activation
    input  logic                      s_axis_act_tvalid,
    output logic                      s_axis_act_tready,
    input  logic [ROWS*ACT_W-1:0]     s_axis_act_tdata,
    input  logic                      s_axis_act_tlast,
    input  logic [0:0]                s_axis_act_tuser, // tuser[0]: acc_clear

    // AXIS TX for Partial Sum Drain
    output logic                      m_axis_psum_tvalid,
    input  logic                      m_axis_psum_tready,
    output logic [COLS*PSUM_W-1:0]    m_axis_psum_tdata,
    output logic                      m_axis_psum_tlast,

    // Direct Drain Bypass (Legacy testbench / C++ replay driver)\n    // Bypasses the AXIS TX path; drives core's drain port directly.
    input  logic                      direct_drain_re,
    input  logic [8:0]                direct_drain_addr,
    output logic [COLS*PSUM_W-1:0]    direct_drain_data,

    // Test / Coverage Override Ports
    input  logic                      test_acc_addr_override_en,   // 1 = force all rows to one addr
    input  logic [8:0]                test_acc_addr_override,       // Target address
    input  logic                      test_one_shot_acc_clear_en,  // 1 = clear only first beat

    // Control MMIO
    input  logic                      mmio_drain_start, // Pulse to start AXIS drain FSM
    input  logic [8:0]                mmio_drain_len,   // Number of rows (0 to len-1)
    output logic                      mmio_drain_done
);

    // -------------------------------------------------------------------------
    // 1. Weight Loading Logic
    // -------------------------------------------------------------------------
    logic [ROWS-1:0] wt_load_shift;
    
    // Always ready to accept weights as long as we are not flushing
    assign s_axis_wt_tready = 1'b1;

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            wt_load_shift <= 16'h0001;
        end else if (s_axis_wt_tvalid && s_axis_wt_tready) begin
            if (s_axis_wt_tlast) begin
                wt_load_shift <= 16'h0001;
            end else begin
                wt_load_shift <= {wt_load_shift[ROWS-2:0], 1'b0};
            end
        end
    end

    logic [ROWS-1:0]   core_weight_load_en;
    logic [COLS*WT_W-1:0] core_weight_in;
    
    assign core_weight_load_en = (s_axis_wt_tvalid) ? wt_load_shift : '0;
    assign core_weight_in      = s_axis_wt_tdata;

    // -------------------------------------------------------------------------
    // 2. Activation & Accumulator Control Logic
    // -------------------------------------------------------------------------
    logic [8:0] acc_addr_ctr;
    
    assign s_axis_act_tready = 1'b1; // Always ready to receive act

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            acc_addr_ctr <= '0;
        end else if (s_axis_act_tvalid && s_axis_act_tready) begin
            if (s_axis_act_tlast) begin
                acc_addr_ctr <= '0;
            end else begin
                acc_addr_ctr <= acc_addr_ctr + 1'b1;
            end
        end
    end

    logic                      core_acc_valid;
    logic                      core_acc_clear;
    logic [8:0]                core_acc_addr;
    logic [ROWS*ACT_W-1:0]     core_act_in;

    assign core_acc_valid = s_axis_act_tvalid;
    // When tuser[0] is high on a valid cycle, we assert clear
    // When test_one_shot_acc_clear_en is set, assert clear only on first beat (acc_addr_ctr==0)
    assign core_acc_clear = s_axis_act_tvalid &
        (test_acc_addr_override_en
            ? (test_one_shot_acc_clear_en ? (acc_addr_ctr == '0) : s_axis_act_tuser[0])
            : s_axis_act_tuser[0]);
    // Override accumulator address for stress testing (e.g., forwarding stress test)
    assign core_acc_addr  = test_acc_addr_override_en ? test_acc_addr_override : acc_addr_ctr;
    assign core_act_in    = s_axis_act_tdata;

    // -------------------------------------------------------------------------
    // 3. PSum Drain TX Logic (AXI-Stream FSM)
    // -------------------------------------------------------------------------
    typedef enum logic [1:0] {
        ST_DRAIN_IDLE,
        ST_DRAIN_READ
    } drain_state_t;
    
    drain_state_t drain_st;
    logic [8:0] drain_ctr;
    logic       drain_re_int;

    // We have a 2-cycle read latency from psum_accumulator_buffer.
    // For Phase 2, we assume m_axis_psum_tready is always 1 (no backpressure from DMA).
    logic drain_vld_q1, drain_vld_q2;
    logic drain_last_q1, drain_last_q2;

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            drain_st <= ST_DRAIN_IDLE;
            drain_ctr <= '0;
            drain_re_int <= 1'b0;
            drain_vld_q1 <= 1'b0;
            drain_vld_q2 <= 1'b0;
            drain_last_q1 <= 1'b0;
            drain_last_q2 <= 1'b0;
        end else begin
            // Default overrides
            drain_re_int <= 1'b0;
            
            // Shift registers for valid and last to align with 2-cycle BRAM read latency
            drain_vld_q1 <= drain_re_int;
            drain_vld_q2 <= drain_vld_q1;
            
            drain_last_q1 <= (drain_st == ST_DRAIN_READ) && (drain_ctr == mmio_drain_len - 1'b1);
            drain_last_q2 <= drain_last_q1;

            case (drain_st)
                ST_DRAIN_IDLE: begin
                    if (mmio_drain_start && mmio_drain_len > 0) begin
                        drain_st <= ST_DRAIN_READ;
                        drain_ctr <= '0;
                        drain_re_int <= 1'b1;
                    end
                end
                ST_DRAIN_READ: begin
                    if (drain_ctr < mmio_drain_len - 1'b1) begin
                        drain_ctr <= drain_ctr + 1'b1;
                        drain_re_int <= 1'b1;
                    end else begin
                        drain_st <= ST_DRAIN_IDLE;
                    end
                end
            endcase
        end
    end

    // Core read signals
    logic core_drain_re;
    logic [8:0] core_drain_addr;
    logic [COLS*PSUM_W-1:0] core_drain_data;

    // Use FSM or fallback to direct_drain (for legacy bypass)
    assign core_drain_re   = direct_drain_re | drain_re_int;
    assign core_drain_addr = direct_drain_re ? direct_drain_addr : drain_ctr;
    assign direct_drain_data = core_drain_data;

    // AXI-Stream TX assignment
    assign m_axis_psum_tvalid = drain_vld_q2;
    assign m_axis_psum_tdata  = core_drain_data;
    assign m_axis_psum_tlast  = drain_last_q2;
    assign mmio_drain_done    = drain_vld_q2 && drain_last_q2 && m_axis_psum_tready;

    // -------------------------------------------------------------------------
    // 4. Core Instance
    // -------------------------------------------------------------------------
    npu_core_top #(
        .ROWS(ROWS),
        .COLS(COLS),
        .ACT_W(ACT_W),
        .WT_W(WT_W),
        .PSUM_W(PSUM_W),
        .DATA_MODE(DATA_MODE)
    ) u_core (
        .clk             (clk),
        .rst_n           (rst_n),
        
        .sram_weight_in  (core_weight_in),
        .weight_load_en  (core_weight_load_en),
        
        .sram_act_in     (core_act_in),
        .acc_valid       (core_acc_valid),
        .acc_clear       (core_acc_clear),
        .acc_addr        (core_acc_addr),
        
        .drain_re        (core_drain_re),
        .drain_addr      (core_drain_addr),
        .psum_drain_out  (core_drain_data)
    );

endmodule
