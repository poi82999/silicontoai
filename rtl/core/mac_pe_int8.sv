`timescale 1ns / 1ps

// =========================================================================
// MAC PE — Signed INT8 Multiply + INT32 Accumulate
// =========================================================================
// Weight-Stationary Processing Element for Systolic Array.
//
// Arithmetic:
//   int32_product = signed(act_in[7:0]) * signed(weight_reg)  // INT8 × INT8 → INT32
//   psum_out      = psum_in + int32_product                    // INT32 + INT32 → INT32
//
// Port width compatibility:
//   Port widths are kept identical to mac_pe.sv (16-bit act/wt slots, 32-bit psum)
//   so that systolic_array.sv, SRAM, and the AXI bus can be reused without change.
//   Only act_in[7:0] and weight_in[7:0] are interpreted as signed INT8;
//   the upper byte (act_in[15:8], weight_in[15:8]) is ignored.
//
// Dataflow:
//   - Weight is loaded once and stays resident (weight-stationary)
//   - Activations flow left-to-right (act_in → act_out, 1 cycle delay)
//   - Partial sums flow top-to-bottom (psum_in → psum_out, 1 cycle delay)
//
// Timing: 1-cycle registered output (synchronous reset)
// =========================================================================

module mac_pe_int8 (
    input  logic        clk,
    input  logic        rst_n,

    // Weight Load
    input  logic        weight_load_en,
    input  logic [15:0] weight_in,       // Lower 8 bits = signed INT8 weight

    // Datapath
    input  logic [15:0] act_in,          // Lower 8 bits = signed INT8 activation
    input  logic [31:0] psum_in,         // INT32 partial sum

    // Forwarding
    output logic [15:0] act_out,         // Lower 8 bits forwarded unchanged
    output logic [31:0] psum_out         // INT32 accumulated result
);
    // Weight register (only lower 8 bits are meaningful)
    logic [7:0] weight_reg;

    // Combinational signed INT8 multiply → INT32 product
    logic signed [31:0] int32_product;
    assign int32_product = $signed(act_in[7:0]) * $signed(weight_reg);

    // Combinational INT32 accumulate
    logic signed [31:0] int32_mac_result;
    assign int32_mac_result = $signed(psum_in) + int32_product;

    // Registered output (1-cycle latency, synchronous reset)
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            weight_reg <= '0;
            act_out    <= '0;
            psum_out   <= '0;
        end else begin
            // Weight Stationary: latch weight on load enable
            if (weight_load_en) begin
                weight_reg <= weight_in[7:0];
            end

            // Activation forwarding (right-ward)
            act_out <= act_in;

            // INT8 MAC: multiply-accumulate registered output
            psum_out <= int32_mac_result;
        end
    end
endmodule
