`timescale 1ns / 1ps

import npu_def_pkg::*;

module systolic_array #(
    parameter int ROWS = NPU_ROWS,
    parameter int COLS = NPU_COLS,
    parameter int ACT_W = NPU_ACT_WIDTH,
    parameter int WT_W  = NPU_WT_WIDTH,
    parameter int PSUM_W = NPU_PSUM_WIDTH,
    parameter int DATA_MODE = NPU_DATA_MODE
)(
    input  logic clk,
    input  logic rst_n,
    
    input  logic [ROWS-1:0]        weight_load_en, 
    input  logic [COLS-1:0][WT_W-1:0]  weight_bus,      // e.g. FP16
    input  logic [ROWS-1:0][ACT_W-1:0]  act_in_left,     // e.g. FP16
    input  logic [COLS-1:0][PSUM_W-1:0]  psum_in_top,     // e.g. FP32
    
    output logic [ROWS-1:0][ACT_W-1:0]  act_out_right,   // e.g. FP16
    output logic [COLS-1:0][PSUM_W-1:0]  psum_out_bottom   // e.g. FP32
);

    // 1. Activation Input Skewing
    logic [ROWS-1:0][ACT_W-1:0] act_skewed;
    systolic_data_setup #(.ROWS(ROWS), .DATA_WIDTH(ACT_W)) u_skew (
        .clk          (clk),
        .rst_n        (rst_n),
        .act_in_raw   (act_in_left),
        .act_in_skewed(act_skewed)
    );

    /* verilator lint_off GENUNNAMED */
    // 2. 2D Mesh Interconnect Wires
    logic [ACT_W-1:0]  pe_act_wire  [ROWS][COLS+1]; // [row][col boundary]
    logic [PSUM_W-1:0] pe_psum_wire [ROWS+1][COLS]; // [row boundary][col]

    genvar i, j;
    generate
        for (i = 0; i < ROWS; i++) begin : BIND_INPUTS_ACT
            assign pe_act_wire[i][0] = act_skewed[i];
        end
        for (j = 0; j < COLS; j++) begin : BIND_INPUTS_PSUM
            assign pe_psum_wire[0][j] = psum_in_top[j];
        end
    endgenerate

    // 3. MAC PE Instantiation (compile-time mode split skeleton)
    generate
        for (i = 0; i < ROWS; i++) begin : PE_ROW
            for (j = 0; j < COLS; j++) begin : PE_COL
                if (DATA_MODE == NPU_DATA_MODE_INT8) begin : MODE_INT8
                    mac_pe_int8 u_pe (
                        .clk            (clk),
                        .rst_n          (rst_n),
                        .weight_load_en (weight_load_en[i]),
                        .weight_in      (weight_bus[j]),
                        .act_in         (pe_act_wire[i][j]),
                        .psum_in        (pe_psum_wire[i][j]),
                        .act_out        (pe_act_wire[i][j+1]),
                        .psum_out       (pe_psum_wire[i+1][j])
                    );
                end else begin : MODE_FP16
                    mac_pe u_pe (
                        .clk            (clk),
                        .rst_n          (rst_n),
                        .weight_load_en (weight_load_en[i]),
                        .weight_in      (weight_bus[j]),
                        .act_in         (pe_act_wire[i][j]),
                        .psum_in        (pe_psum_wire[i][j]),
                        .act_out        (pe_act_wire[i][j+1]),
                        .psum_out       (pe_psum_wire[i+1][j])
                    );
                end
            end
        end
    endgenerate

    generate
        for (i = 0; i < ROWS; i++) begin : BIND_OUTPUTS_ACT
            assign act_out_right[i] = pe_act_wire[i][COLS];
        end
    endgenerate

    // 4. Psum Output De-skewing (INT32, 32-bit — unchanged)
    generate
        for (j = 0; j < COLS; j++) begin : PSUM_DESKEW
            if (j == COLS - 1) begin
                // The last column is the latest, needs 0 delay
                assign psum_out_bottom[j] = pe_psum_wire[ROWS][j];
            end else begin
                // Column j needs (COLS - 1 - j) cycles to catch up
                localparam DELAY = COLS - 1 - j;
                logic [DELAY-1:0][PSUM_W-1:0] deskew_pipe;
                always_ff @(posedge clk) begin
                    if (!rst_n) begin
                        deskew_pipe <= '0;
                    end else begin
                        deskew_pipe[0] <= pe_psum_wire[ROWS][j];
                        for (int k = 1; k < DELAY; k++) begin
                            deskew_pipe[k] <= deskew_pipe[k-1];
                        end
                    end
                end
                assign psum_out_bottom[j] = deskew_pipe[DELAY-1];
            end
        end
    endgenerate

endmodule
