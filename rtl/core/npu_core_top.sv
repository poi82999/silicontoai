`timescale 1ns / 1ps

import npu_def_pkg::*;

module npu_core_top #(
    parameter int ROWS = NPU_ROWS,
    parameter int COLS = NPU_COLS,
    parameter int ACT_W = NPU_ACT_WIDTH,
    parameter int WT_W  = NPU_WT_WIDTH,
    parameter int PSUM_W = NPU_PSUM_WIDTH,
    parameter int DATA_MODE = NPU_DATA_MODE
)(
    input  logic clk,
    input  logic rst_n,

    // Main SRAM Interface (Activations / Weights)
    // DMA에서 Load된 데이터를 가져오는 포트
    input  logic [ROWS-1:0][ACT_W-1:0] sram_act_in,     // e.g. FP16
    input  logic [COLS-1:0][WT_W-1:0] sram_weight_in,   // e.g. FP16
    input  logic [ROWS-1:0]       weight_load_en,

    // Accumulator Control
    input  logic              acc_valid,
    input  logic              acc_clear,
    input  logic [8:0]        acc_addr,

    // Drain to Output SRAM / DMA
    input  logic              drain_re,
    input  logic [8:0]        drain_addr,
    output logic [COLS-1:0][PSUM_W-1:0] psum_drain_out
);

    // 내부 인터커넥트 와이어
    logic [COLS-1:0][PSUM_W-1:0] array_psum_bottom;
    
    // Top Psum Input (Weight-Stationary에서는 0으로 고정하여 아래로 흐르게 함)
    logic [COLS-1:0][PSUM_W-1:0] zero_psum_top;
    assign zero_psum_top = '0;
    
    // 버려지는 Right-side Activation (필요시 다음 타일로 포워딩 가능)
    /* verilator lint_off UNUSEDSIGNAL */
    logic [ROWS-1:0][ACT_W-1:0] array_act_right;
    /* verilator lint_on UNUSEDSIGNAL */

    // 1. Systolic Array 인스턴스 (Mock or real instance to be added)
    systolic_array #(
        .ROWS(ROWS),
        .COLS(COLS),
        .ACT_W(ACT_W),
        .WT_W(WT_W),
        .PSUM_W(PSUM_W),
        .DATA_MODE(DATA_MODE)
    ) u_systolic_array (
        .clk             (clk),
        .rst_n           (rst_n),
        .weight_load_en  (weight_load_en),
        .weight_bus      (sram_weight_in),
        .act_in_left     (sram_act_in),
        .psum_in_top     (zero_psum_top),       // 상단 입력은 0으로 시작
        .act_out_right   (array_act_right),
        .psum_out_bottom (array_psum_bottom)    // 하단 출력 (MAC 결과)
    );

    // Dynamic-Cycle Pipeline for Accumulator Control Signals
    localparam ACC_DELAY = ROWS + COLS - 1;
    logic [ACC_DELAY-1:0] acc_valid_pipe;
    logic [ACC_DELAY-1:0] acc_clear_pipe;
    logic [8:0]  acc_addr_pipe [ACC_DELAY];

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            acc_valid_pipe <= '0;
            acc_clear_pipe <= '0;
            for(int i=0; i<ACC_DELAY; i++) acc_addr_pipe[i] <= '0;
        end else begin
            acc_valid_pipe <= {acc_valid_pipe[ACC_DELAY-2:0], acc_valid};
            acc_clear_pipe <= {acc_clear_pipe[ACC_DELAY-2:0], acc_clear};
            acc_addr_pipe[0] <= acc_addr;
            for(int i=1; i<ACC_DELAY; i++) begin
                acc_addr_pipe[i] <= acc_addr_pipe[i-1];
            end
            
            if (acc_valid_pipe[ACC_DELAY-1]) $display("[SCB_PASS] [NPU CORE] Bottom Valid Output: Addr=%0d, Data0=%0d, DataLast=%0d", acc_addr_pipe[ACC_DELAY-1], array_psum_bottom[0], array_psum_bottom[COLS-1]);
        end
    end

    // 2. Accumulator Buffer 인스턴스 (TPU-Style Bottom Partitioning)
    psum_accumulator_buffer #(
        .COLS       (COLS),
        .DATA_WIDTH (PSUM_W),
        .ADDR_WIDTH (MEM_ADDR_WIDTH),
        .DATA_MODE  (DATA_MODE)
    ) u_psum_buffer (
        .clk        (clk),
        .rst_n      (rst_n),
        
        // Array 하단 직결 (지연된 컨트롤 신호 인가)
        .acc_valid  (acc_valid_pipe[ACC_DELAY-1]),
        .acc_clear  (acc_clear_pipe[ACC_DELAY-1]),
        .acc_addr   (acc_addr_pipe[ACC_DELAY-1]),
        .array_psum (array_psum_bottom),
        
        // Drain / Readout 인터페이스
        .drain_re   (drain_re),
        .drain_addr (drain_addr),
        .drain_data (psum_drain_out)
    );

endmodule


