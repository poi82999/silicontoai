`timescale 1ns / 1ps

module systolic_data_setup #(
    parameter ROWS = 16,
    parameter DATA_WIDTH = 8
)(
    input  logic clk,
    input  logic rst_n,
    input  logic [ROWS-1:0][DATA_WIDTH-1:0] act_in_raw,
    output logic [ROWS-1:0][DATA_WIDTH-1:0] act_in_skewed
);
    genvar i;
    /* verilator lint_off GENUNNAMED */
    generate
        for (i = 0; i < ROWS; i++) begin : ROW_SKEW
            if (i == 0) begin
                assign act_in_skewed[i] = act_in_raw[i]; // Row 0: No delay
            end else begin
                logic [i-1:0][DATA_WIDTH-1:0] delay_pipe;
                always_ff @(posedge clk) begin
                    if (!rst_n) begin
                        delay_pipe <= '0;
                    end else begin
                        delay_pipe[0] <= act_in_raw[i];
                        for (int k = 1; k < i; k++) begin
                            delay_pipe[k] <= delay_pipe[k-1];
                        end
                    end
                end
                assign act_in_skewed[i] = delay_pipe[i-1];
            end
        end
    endgenerate
endmodule
