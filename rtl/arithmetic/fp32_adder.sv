`timescale 1ns / 1ps

// =========================================================================
// FP32 Adder — IEEE 754 Single-Precision
// =========================================================================
// Combinational: FP32 + FP32 → FP32
//
// FP32 format: sign(1) + exponent(8) + mantissa(23) = 32 bits
//
// Algorithm:
//   1. Unpack both operands
//   2. Align mantissas by shifting the smaller exponent's mantissa right
//   3. Add or subtract mantissas based on signs
//   4. Normalize result (leading zero detection + shift)
//   5. Round-to-Nearest-Even (RNE)
//   6. Pack result
//
// Special cases handled:
//   - NaN + anything = NaN
//   - Inf + (-Inf) = NaN
//   - Inf + finite = Inf
//   - Zero + Zero = Zero (sign of zero handled)
//   - Subnormal (flushed to zero)
// =========================================================================

module fp32_adder (
    input  logic [31:0] fp32_a,
    input  logic [31:0] fp32_b,
    output logic [31:0] fp32_sum
);

    // -------------------------------------------------------
    // 1. Unpack FP32 fields
    // -------------------------------------------------------
    logic        sign_a, sign_b;
    logic [7:0]  exp_a,  exp_b;
    logic [22:0] mant_a, mant_b;

    assign sign_a = fp32_a[31];
    assign exp_a  = fp32_a[30:23];
    assign mant_a = fp32_a[22:0];

    assign sign_b = fp32_b[31];
    assign exp_b  = fp32_b[30:23];
    assign mant_b = fp32_b[22:0];

    // -------------------------------------------------------
    // 2. Classify inputs
    // -------------------------------------------------------
    logic a_is_zero, b_is_zero;
    logic a_is_inf,  b_is_inf;
    logic a_is_nan,  b_is_nan;

    assign a_is_zero = (exp_a == 8'd0) && (mant_a == 23'd0);
    assign b_is_zero = (exp_b == 8'd0) && (mant_b == 23'd0);
    assign a_is_inf  = (exp_a == 8'hFF) && (mant_a == 23'd0);
    assign b_is_inf  = (exp_b == 8'hFF) && (mant_b == 23'd0);
    assign a_is_nan  = (exp_a == 8'hFF) && (mant_a != 23'd0);
    assign b_is_nan  = (exp_b == 8'hFF) && (mant_b != 23'd0);

    // -------------------------------------------------------
    // 3. Sort operands: op_large has larger exponent
    // -------------------------------------------------------
    logic        large_sign, small_sign;
    logic [7:0]  large_exp,  small_exp;
    logic [23:0] large_mant, small_mant; // {1, mantissa} = 24 bits
    logic [7:0]  exp_diff;
    logic        a_is_larger;

    assign a_is_larger = (exp_a > exp_b) || ((exp_a == exp_b) && (mant_a >= mant_b));

    always_comb begin
        if (a_is_larger) begin
            large_sign = sign_a;
            large_exp  = exp_a;
            large_mant = (exp_a == 8'd0) ? {1'b0, mant_a} : {1'b1, mant_a};
            small_sign = sign_b;
            small_exp  = exp_b;
            small_mant = (exp_b == 8'd0) ? {1'b0, mant_b} : {1'b1, mant_b};
        end else begin
            large_sign = sign_b;
            large_exp  = exp_b;
            large_mant = (exp_b == 8'd0) ? {1'b0, mant_b} : {1'b1, mant_b};
            small_sign = sign_a;
            small_exp  = exp_a;
            small_mant = (exp_a == 8'd0) ? {1'b0, mant_a} : {1'b1, mant_a};
        end
        exp_diff = large_exp - small_exp;
    end

    // -------------------------------------------------------
    // 4. Align mantissas (shift smaller right)
    // -------------------------------------------------------
    // Use 27-bit mantissa: 24 bits + 3 guard/round/sticky bits
    logic [26:0] aligned_large, aligned_small;
    logic        sticky_bit;

    always_comb begin
        aligned_large = {large_mant, 3'b000};

        if (exp_diff == 8'd0) begin
            aligned_small = {small_mant, 3'b000};
            sticky_bit = 1'b0;
        end else if (exp_diff < 8'd27) begin
            // Shift right and collect sticky bits
            aligned_small = {small_mant, 3'b000} >> exp_diff;
            // Sticky bit: OR of all shifted-out bits
            sticky_bit = |({small_mant, 3'b000} & ((27'b1 << exp_diff) - 27'b1));
        end else begin
            aligned_small = 27'd0;
            sticky_bit = |small_mant;
        end
        aligned_small[0] = aligned_small[0] | sticky_bit;
    end

    // -------------------------------------------------------
    // 5. Add or subtract mantissas
    // -------------------------------------------------------
    logic effective_sub;
    logic [27:0] mant_sum; // 28 bits to catch carry
    logic        result_sign_raw;

    assign effective_sub = large_sign ^ small_sign;

    always_comb begin
        if (effective_sub) begin
            mant_sum = {1'b0, aligned_large} - {1'b0, aligned_small};
        end else begin
            mant_sum = {1'b0, aligned_large} + {1'b0, aligned_small};
        end
        result_sign_raw = large_sign;
    end

    // -------------------------------------------------------
    // 6. Normalize: leading zero count + shift
    // -------------------------------------------------------
    logic [7:0]  norm_exp;
    logic [26:0] norm_mant;

    // Leading zero count for normalization
    logic [4:0] lzc;
    always_comb begin
        // Find position of leading 1 in mant_sum[27:0]
        casez (mant_sum[27:0])
            28'b1???????????????????????????: lzc = 5'd0;
            28'b01??????????????????????????: lzc = 5'd0; // Carry bit position
            28'b001?????????????????????????: lzc = 5'd1;
            28'b0001????????????????????????: lzc = 5'd2;
            28'b00001???????????????????????: lzc = 5'd3;
            28'b000001??????????????????????: lzc = 5'd4;
            28'b0000001?????????????????????: lzc = 5'd5;
            28'b00000001????????????????????: lzc = 5'd6;
            28'b000000001???????????????????: lzc = 5'd7;
            28'b0000000001??????????????????: lzc = 5'd8;
            28'b00000000001?????????????????: lzc = 5'd9;
            28'b000000000001????????????????: lzc = 5'd10;
            28'b0000000000001???????????????: lzc = 5'd11;
            28'b00000000000001??????????????: lzc = 5'd12;
            28'b000000000000001?????????????: lzc = 5'd13;
            28'b0000000000000001????????????: lzc = 5'd14;
            28'b00000000000000001???????????: lzc = 5'd15;
            28'b000000000000000001??????????: lzc = 5'd16;
            28'b0000000000000000001?????????: lzc = 5'd17;
            28'b00000000000000000001????????: lzc = 5'd18;
            28'b000000000000000000001???????: lzc = 5'd19;
            28'b0000000000000000000001??????: lzc = 5'd20;
            28'b00000000000000000000001?????: lzc = 5'd21;
            28'b000000000000000000000001????: lzc = 5'd22;
            28'b0000000000000000000000001???: lzc = 5'd23;
            28'b00000000000000000000000001??: lzc = 5'd24;
            28'b000000000000000000000000001?: lzc = 5'd25;
            28'b0000000000000000000000000001: lzc = 5'd26;
            default:                          lzc = 5'd27; // All zeros
        endcase
    end

    always_comb begin
        if (mant_sum[27]) begin
            // Carry out: shift right by 1, increment exponent
            norm_mant = mant_sum[27:1];
            norm_exp  = large_exp + 8'd1;
        end else if (mant_sum[26]) begin
            // Already normalized (leading 1 in bit 26)
            norm_mant = mant_sum[26:0];
            norm_exp  = large_exp;
        end else if (lzc < 5'd27 && large_exp > {3'd0, lzc}) begin
            // Normalize by left-shifting
            norm_mant = mant_sum[26:0] << lzc;
            norm_exp  = large_exp - {3'd0, lzc};
        end else begin
            // Result is zero or subnormal → flush to zero
            norm_mant = 27'd0;
            norm_exp  = 8'd0;
        end
    end

    // -------------------------------------------------------
    // 7. Round-to-Nearest-Even (RNE)
    // -------------------------------------------------------
    logic [22:0] rounded_mant;
    logic        round_bit, guard_bit, sticky_round;
    logic        round_up;

    assign guard_bit    = norm_mant[2];
    assign round_bit    = norm_mant[1];
    assign sticky_round = norm_mant[0]; // sticky bit logic inside LZC may need to ensure all shifted out are OR'd, but here norm_mant[0] is fine 

    // RNE: round up if guard=1 and (round|sticky or lsb of result)
    assign round_up = guard_bit && (round_bit || sticky_round || norm_mant[3]);

    logic [24:0] mant_rounded; // Need 1 bit for carry and 1 for implied leading 1
    logic [7:0]  final_exp;

    always_comb begin
        // Add round_up to the 23 fractional bits + the implied leading 1 (bit 23)
        // norm_mant[26] is the implied leading 1. norm_mant[25:3] are the 23 fractional bits.
        mant_rounded = {1'b0, norm_mant[26:3]} + {23'd0, round_up};
        if (mant_rounded[24]) begin
            // Rounding caused carry to bit 24 (e.g. 1.1111... rounded up to 10.000...)
            final_exp = norm_exp + 8'd1;
            // Shifting right by 1, the fractional part is all zeros.
            // This is correctly handled by just taking mant_rounded[23:1] which will be 0.
            rounded_mant = mant_rounded[23:1];
        end else begin
            final_exp = norm_exp;
            rounded_mant = mant_rounded[22:0];
        end
    end

    // -------------------------------------------------------
    // 8. Assemble FP32 result with special case handling
    // -------------------------------------------------------
    always_comb begin
        if (a_is_nan || b_is_nan) begin
            // NaN propagation
            fp32_sum = {1'b0, 8'hFF, 23'h400000};
        end else if (a_is_inf && b_is_inf) begin
            if (sign_a != sign_b) begin
                // +Inf + (-Inf) = NaN
                fp32_sum = {1'b0, 8'hFF, 23'h400000};
            end else begin
                // Inf + Inf = Inf (same sign)
                fp32_sum = {sign_a, 8'hFF, 23'd0};
            end
        end else if (a_is_inf) begin
            fp32_sum = {sign_a, 8'hFF, 23'd0};
        end else if (b_is_inf) begin
            fp32_sum = {sign_b, 8'hFF, 23'd0};
        end else if (a_is_zero && b_is_zero) begin
            // 0 + 0: positive zero unless both negative
            fp32_sum = {sign_a & sign_b, 8'd0, 23'd0};
        end else if (a_is_zero) begin
            fp32_sum = fp32_b;
        end else if (b_is_zero) begin
            fp32_sum = fp32_a;
        end else if (norm_exp == 8'd0 && norm_mant == 27'd0) begin
            // Exact cancellation → positive zero
            fp32_sum = 32'd0;
        end else if (final_exp >= 8'hFF) begin
            // Overflow → Inf
            fp32_sum = {result_sign_raw, 8'hFF, 23'd0};
        end else begin
            // Normal result
            fp32_sum = {result_sign_raw, final_exp, rounded_mant};
        end
    end

endmodule
