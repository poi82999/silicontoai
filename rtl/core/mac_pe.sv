`timescale 1ns / 1ps

// =========================================================================
// MAC PE — FP16 Multiply + FP32 Accumulate
// =========================================================================
// Weight-Stationary Processing Element for Systolic Array.
//
// Arithmetic:
//   fp32_product = fp16_mul(act_in, weight_reg)       // FP16 × FP16 → FP32
//   psum_out     = fp32_add(psum_in, fp32_product)    // FP32 + FP32 → FP32
//
// Dataflow:
//   - Weight is loaded once and stays resident (weight-stationary)
//   - Activations flow left-to-right (act_in → act_out, 1 cycle delay)
//   - Partial sums flow top-to-bottom (psum_in → psum_out, 1 cycle delay)
//
// Timing: 1-cycle registered output (same as original INT8 design)
// =========================================================================

module mac_pe (
    input  logic        clk,
    input  logic        rst_n,

    // Weight Load
    input  logic        weight_load_en,
    input  logic [15:0] weight_in,       // FP16

    // Datapath
    input  logic [15:0] act_in,          // FP16
    input  logic [31:0] psum_in,         // FP32

    // Forwarding
    output logic [15:0] act_out,         // FP16
    output logic [31:0] psum_out         // FP32
);
    // Weight register (FP16, stationary)
    logic [15:0] weight_reg;

    // Combinational FP16 multiply → FP32 product
    logic [31:0] fp32_product;
    fp16_multiplier u_mul (
        .fp16_a      (act_in),
        .fp16_b      (weight_reg),
        .fp32_product(fp32_product)
    );

    // Combinational FP32 add: psum_in + product
    logic [31:0] fp32_mac_result;
    fp32_adder u_add (
        .fp32_a  (psum_in),
        .fp32_b  (fp32_product),
        .fp32_sum(fp32_mac_result)
    );

    // Registered output (1-cycle latency)
    always_ff @(posedge clk) begin
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

            // FP16 MAC: multiply-add registered output
            psum_out <= fp32_mac_result;
        end
    end
endmodule
