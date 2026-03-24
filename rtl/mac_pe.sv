`timescale 1ns / 1ps

module mac_pe (
    input  logic        clk,
    input  logic        rst_n,
    
    // Weight Load
    input  logic        weight_load_en,
    input  logic [7:0]  weight_in,
    
    // Datapath
    input  logic [7:0]  act_in,
    input  logic [31:0] psum_in,
    
    // Forwarding
    output logic [7:0]  act_out,
    output logic [31:0] psum_out
);
    logic [7:0] weight_reg;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            weight_reg <= '0;
            act_out    <= '0;
            psum_out   <= '0;
        end else begin
            // Weight Stationary: 조건부 캡처
            if (weight_load_en) begin
                weight_reg <= weight_in;
            end
            
            // Activation 포워딩 (Right)
            act_out <= act_in;
            
            // MAC & Psum 포워딩 (Bottom)
            psum_out <= psum_in + (32'(act_in) * 32'(weight_reg));
        end
    end
endmodule
