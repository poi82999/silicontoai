`timescale 1ns / 1ps

// =========================================================================
// FP16 Multiplier — IEEE 754 Half-Precision
// =========================================================================
// Combinational: FP16 × FP16 → FP32
//
// FP16 format: sign(1) + exponent(5) + mantissa(10) = 16 bits
// FP32 format: sign(1) + exponent(8) + mantissa(23) = 32 bits
//
// The product of two FP16 mantissas (11×11 = 22 bits) fits exactly
// within FP32's 23-bit mantissa, so this conversion is LOSSLESS.
//
// Special cases handled:
//   - Zero × anything = ±Zero
//   - NaN × anything = NaN
//   - Inf × Zero = NaN
//   - Inf × finite = ±Inf
//   - Subnormal inputs (treated as zero for simplicity)
// =========================================================================

module fp16_multiplier (
    input  logic [15:0] fp16_a,
    input  logic [15:0] fp16_b,
    output logic [31:0] fp32_product
);

    // -------------------------------------------------------
    // 1. Unpack FP16 fields
    // -------------------------------------------------------
    logic        sign_a, sign_b;
    logic [4:0]  exp_a,  exp_b;
    logic [9:0]  mant_a, mant_b;

    assign sign_a = fp16_a[15];
    assign exp_a  = fp16_a[14:10];
    assign mant_a = fp16_a[9:0];

    assign sign_b = fp16_b[15];
    assign exp_b  = fp16_b[14:10];
    assign mant_b = fp16_b[9:0];

    // -------------------------------------------------------
    // 2. Classify inputs
    // -------------------------------------------------------
    logic a_is_zero, b_is_zero;
    logic a_is_inf,  b_is_inf;
    logic a_is_nan,  b_is_nan;
    logic a_is_subnormal, b_is_subnormal;

    assign a_is_zero     = (exp_a == 5'd0) && (mant_a == 10'd0);
    assign b_is_zero     = (exp_b == 5'd0) && (mant_b == 10'd0);
    assign a_is_inf      = (exp_a == 5'd31) && (mant_a == 10'd0);
    assign b_is_inf      = (exp_b == 5'd31) && (mant_b == 10'd0);
    assign a_is_nan      = (exp_a == 5'd31) && (mant_a != 10'd0);
    assign b_is_nan      = (exp_b == 5'd31) && (mant_b != 10'd0);
    assign a_is_subnormal = (exp_a == 5'd0) && (mant_a != 10'd0);
    assign b_is_subnormal = (exp_b == 5'd0) && (mant_b != 10'd0);

    // -------------------------------------------------------
    // 3. Result sign
    // -------------------------------------------------------
    logic result_sign;
    assign result_sign = sign_a ^ sign_b;

    // -------------------------------------------------------
    // 4. Mantissa multiplication
    // -------------------------------------------------------
    // Implicit leading 1 for normal numbers: {1, mantissa} = 11 bits
    // Product: 11 × 11 = 22 bits
    logic [10:0] full_mant_a, full_mant_b;
    logic [21:0] mant_product;

    assign full_mant_a = {1'b1, mant_a};
    assign full_mant_b = {1'b1, mant_b};
    assign mant_product = full_mant_a * full_mant_b;

    // -------------------------------------------------------
    // 5. Exponent calculation
    // -------------------------------------------------------
    // FP16 bias = 15, FP32 bias = 127
    // result_exp = (exp_a - 15) + (exp_b - 15) + 127
    //            = exp_a + exp_b + 97
    // But we need to adjust for normalization below.
    logic [8:0] raw_exp; // 9 bits to detect overflow
    assign raw_exp = {4'd0, exp_a} + {4'd0, exp_b} + 9'd97;

    // -------------------------------------------------------
    // 6. Normalize: product is in [1.0, 4.0) range
    // -------------------------------------------------------
    // mant_product[21] == 1 → product in [2.0, 4.0), need right shift + exp+1
    // mant_product[21] == 0 → product in [1.0, 2.0), already normalized
    logic [22:0] fp32_mantissa;
    logic [8:0]  fp32_exp;

    always_comb begin
        if (mant_product[21]) begin
            // Product >= 2.0: shift right by 1, increment exponent
            // Take bits [20:0] and pad with 0 to make 23 bits
            fp32_mantissa = {mant_product[20:0], 2'b00}; // 21 + 2 = 23 bits
            fp32_exp      = raw_exp + 9'd1;
        end else begin
            // Product in [1.0, 2.0): already normalized
            // Take bits [19:0] and pad to 23 bits
            fp32_mantissa = {mant_product[19:0], 3'b000}; // 20 + 3 = 23 bits
            fp32_exp      = raw_exp;
        end
    end

    // -------------------------------------------------------
    // 7. Assemble FP32 result with special case handling
    // -------------------------------------------------------
    always_comb begin
        if (a_is_nan || b_is_nan) begin
            // NaN propagation: quiet NaN
            fp32_product = {1'b0, 8'hFF, 23'h400000};
        end else if (a_is_inf || b_is_inf) begin
            if (a_is_zero || b_is_zero) begin
                // Inf × 0 = NaN
                fp32_product = {1'b0, 8'hFF, 23'h400000};
            end else begin
                // Inf × finite = ±Inf
                fp32_product = {result_sign, 8'hFF, 23'd0};
            end
        end else if (a_is_zero || b_is_zero || a_is_subnormal || b_is_subnormal) begin
            // Zero or subnormal → ±0
            fp32_product = {result_sign, 8'd0, 23'd0};
        end else if (fp32_exp[8] || fp32_exp >= 9'd255) begin
            // Overflow → ±Inf
            fp32_product = {result_sign, 8'hFF, 23'd0};
        end else if (fp32_exp == 9'd0) begin
            // Underflow → ±0
            fp32_product = {result_sign, 8'd0, 23'd0};
        end else begin
            // Normal result
            fp32_product = {result_sign, fp32_exp[7:0], fp32_mantissa};
        end
    end

endmodule
