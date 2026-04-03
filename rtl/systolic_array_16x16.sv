`timescale 1ns / 1ps

module systolic_array_16x16 (
    input  logic clk,
    input  logic rst_n,
    
    input  logic [15:0]       weight_load_en, 
    input  logic [15:0][7:0]  weight_bus,     
    input  logic [15:0][7:0]  act_in_left,
    input  logic [15:0][31:0] psum_in_top,
    
    output logic [15:0][7:0]  act_out_right,
    output logic [15:0][31:0] psum_out_bottom
);

    // 1. Activation Input Skewing
    logic [15:0][7:0] act_skewed;
    systolic_data_setup #(.ROWS(16), .DATA_WIDTH(8)) u_skew (
        .clk(clk),
        .rst_n(rst_n),
        .act_in_raw(act_in_left),
        .act_in_skewed(act_skewed)
    );

    /* verilator lint_off GENUNNAMED */
    // 2. 2D Mesh Interconnect Wires
    logic [7:0]  pe_act_wire  [16][17]; // [row][col boundary]
    logic [31:0] pe_psum_wire [17][16]; // [row boundary][col]

    genvar i, j;
    generate
        for (i = 0; i < 16; i++) begin : BIND_INPUTS
            assign pe_act_wire[i][0] = act_skewed[i];
            assign pe_psum_wire[0][i] = psum_in_top[i];
        end
    endgenerate

    // 3. 16x16 MAC PE Instantiation
    generate
        for (i = 0; i < 16; i++) begin : PE_ROW
            for (j = 0; j < 16; j++) begin : PE_COL
                mac_pe u_pe (
                    .clk(clk),
                    .rst_n(rst_n),
                    .weight_load_en(weight_load_en[i]),
                    .weight_in(weight_bus[j]),
                    .act_in(pe_act_wire[i][j]),
                    .psum_in(pe_psum_wire[i][j]),
                    .act_out(pe_act_wire[i][j+1]),
                    .psum_out(pe_psum_wire[i+1][j])
                );
            end
        end
    endgenerate

    generate
        for (i = 0; i < 16; i++) begin : BIND_OUTPUTS_ACT
            assign act_out_right[i] = pe_act_wire[i][16];
        end
    endgenerate

    // 4. Psum Output De-skewing (Align all columns to the same cycle)
    generate
        for (j = 0; j < 16; j++) begin : Psum_DESKEW
            if (j == 15) begin
                // Column 15 is the latest, needs 0 delay
                assign psum_out_bottom[j] = pe_psum_wire[16][j]; 
            end else begin
                // Column j needs (15 - j) cycles to catch up with Column 15
                localparam DELAY = 15 - j;
                logic [DELAY-1:0][31:0] deskew_pipe;
                always_ff @(posedge clk) begin
                    if (!rst_n) begin
                        deskew_pipe <= '0;
                    end else begin
                        deskew_pipe[0] <= pe_psum_wire[16][j];
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
