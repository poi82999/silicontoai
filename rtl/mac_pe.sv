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
    logic signed [7:0]  weight_reg;

    (* use_dsp = "yes" *)
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            weight_reg <= '0;
            act_out    <= '0;
            psum_out   <= '0;
        end else begin
            // Weight Stationary: 조건부 캡처
            if (weight_load_en) begin
                weight_reg <= $signed(weight_in);
            end
            
            // Activation 포워딩 (Right)
            act_out <= act_in;
            
            // DSP-friendly MAC: multiply-add in one registered expression
            psum_out <= $unsigned($signed(psum_in) + $signed(act_in) * weight_reg);
        end
    end
endmodule
