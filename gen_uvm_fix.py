import sys
import re

sv_code = """
        function automatic bit [31:0] compute_fp16_mul(bit [15:0] fp16_a, bit [15:0] fp16_b);
            bit sign_a, sign_b, result_sign;
            bit [4:0] exp_a, exp_b;
            bit [9:0] mant_a, mant_b;
            bit a_is_zero, b_is_zero, a_is_inf, b_is_inf, a_is_nan, b_is_nan, a_is_subnormal, b_is_subnormal;
            bit [10:0] full_mant_a, full_mant_b;
            bit [21:0] mant_product;
            bit [8:0] raw_exp;
            bit [22:0] fp32_mantissa;
            bit [8:0] fp32_exp;

            sign_a = fp16_a[15];
            exp_a  = fp16_a[14:10];
            mant_a = fp16_a[9:0];

            sign_b = fp16_b[15];
            exp_b  = fp16_b[14:10];
            mant_b = fp16_b[9:0];

            a_is_zero = (exp_a == 5'd0) && (mant_a == 10'd0);
            b_is_zero = (exp_b == 5'd0) && (mant_b == 10'd0);
            a_is_inf  = (exp_a == 5'd31) && (mant_a == 10'd0);
            b_is_inf  = (exp_b == 5'd31) && (mant_b == 10'd0);
            a_is_nan  = (exp_a == 5'd31) && (mant_a != 10'd0);
            b_is_nan  = (exp_b == 5'd31) && (mant_b != 10'd0);
            a_is_subnormal = (exp_a == 5'd0) && (mant_a != 10'd0);
            b_is_subnormal = (exp_b == 5'd0) && (mant_b != 10'd0);

            result_sign = sign_a ^ sign_b;
            full_mant_a = {1'b1, mant_a};
            full_mant_b = {1'b1, mant_b};
            mant_product = full_mant_a * full_mant_b;
            
            raw_exp = {4'd0, exp_a} + {4'd0, exp_b} + 9'd97;

            if (mant_product[21]) begin
                fp32_mantissa = {mant_product[20:0], 2'b00};
                fp32_exp      = raw_exp + 9'd1;
            end else begin
                fp32_mantissa = {mant_product[19:0], 3'b000};
                fp32_exp      = raw_exp;
            end

            if (a_is_nan || b_is_nan) begin
                return {1'b0, 8'hFF, 23'h400000};
            end else if (a_is_inf || b_is_inf) begin
                if (a_is_zero || b_is_zero) return {1'b0, 8'hFF, 23'h400000};
                else return {result_sign, 8'hFF, 23'd0};
            end else if (a_is_zero || b_is_zero || a_is_subnormal || b_is_subnormal) begin
                return {result_sign, 8'd0, 23'd0};
            end else if (fp32_exp[8] || fp32_exp >= 9'd255) begin
                return {result_sign, 8'hFF, 23'd0};
            end else if (fp32_exp == 9'd0) begin
                return {result_sign, 8'd0, 23'd0};
            end else begin
                return {result_sign, fp32_exp[7:0], fp32_mantissa};
            end
        endfunction

        function automatic bit [31:0] compute_fp32_add(bit [31:0] fp32_a, bit [31:0] fp32_b);
            bit sign_a, sign_b;
            bit [7:0] exp_a, exp_b;
            bit [22:0] mant_a, mant_b;
            bit a_is_zero, b_is_zero, a_is_inf, b_is_inf, a_is_nan, b_is_nan;
            bit large_sign, small_sign;
            bit [7:0] large_exp, small_exp;
            bit [23:0] large_mant, small_mant;
            bit [7:0] exp_diff;
            bit a_is_larger;
            bit [26:0] aligned_large, aligned_small;
            bit sticky_bit;
            bit effective_sub;
            bit [27:0] mant_sum;
            bit result_sign_raw;
            bit [7:0] norm_exp;
            bit [26:0] norm_mant;
            bit [4:0] lzc;
            bit [22:0] rounded_mant;
            bit round_bit, guard_bit, sticky_round, round_up;
            bit [24:0] mant_rounded;
            bit [7:0] final_exp;
            
            sign_a = fp32_a[31];
            exp_a  = fp32_a[30:23];
            mant_a = fp32_a[22:0];

            sign_b = fp32_b[31];
            exp_b  = fp32_b[30:23];
            mant_b = fp32_b[22:0];

            a_is_zero = (exp_a == 8'd0) && (mant_a == 23'd0);
            b_is_zero = (exp_b == 8'd0) && (mant_b == 23'd0);
            a_is_inf  = (exp_a == 8'hFF) && (mant_a == 23'd0);
            b_is_inf  = (exp_b == 8'hFF) && (mant_b == 23'd0);
            a_is_nan  = (exp_a == 8'hFF) && (mant_a != 23'd0);
            b_is_nan  = (exp_b == 8'hFF) && (mant_b != 23'd0);

            a_is_larger = (exp_a > exp_b) || ((exp_a == exp_b) && (mant_a >= mant_b));

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

            aligned_large = {large_mant, 3'b000};
            
            if (exp_diff == 8'd0) begin
                aligned_small = {small_mant, 3'b000};
                sticky_bit = 1'b0;
            end else if (exp_diff < 8'd27) begin
                aligned_small = {small_mant, 3'b000} >> exp_diff;
                sticky_bit = |({small_mant, 3'b000} & ((27'b1 << exp_diff) - 27'b1));
            end else begin
                aligned_small = 27'd0;
                sticky_bit = |small_mant;
            end
            aligned_small[0] = aligned_small[0] | sticky_bit;

            effective_sub = large_sign ^ small_sign;

            if (effective_sub) begin
                mant_sum = {1'b0, aligned_large} - {1'b0, aligned_small};
            end else begin
                mant_sum = {1'b0, aligned_large} + {1'b0, aligned_small};
            end
            result_sign_raw = large_sign;

            casez (mant_sum[27:0])
                28'b1???????????????????????????: lzc = 5'd0;
                28'b01??????????????????????????: lzc = 5'd0;
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
                default:                          lzc = 5'd27;
            endcase

            if (mant_sum[27]) begin
                norm_mant = mant_sum[27:1];
                norm_exp  = large_exp + 8'd1;
            end else if (mant_sum[26]) begin
                norm_mant = mant_sum[26:0];
                norm_exp  = large_exp;
            end else if (lzc < 5'd27 && large_exp > {3'd0, lzc}) begin
                norm_mant = mant_sum[26:0] << lzc;
                norm_exp  = large_exp - {3'd0, lzc};
            end else begin
                norm_mant = 27'd0;
                norm_exp  = 8'd0;
            end

            guard_bit    = norm_mant[2];
            round_bit    = norm_mant[1];
            sticky_round = norm_mant[0];

            round_up = guard_bit && (round_bit || sticky_round || norm_mant[3]);

            mant_rounded = {1'b0, norm_mant[26:3]} + {23'd0, round_up};
            if (mant_rounded[24]) begin
                final_exp = norm_exp + 8'd1;
                rounded_mant = mant_rounded[23:1];
            end else begin
                final_exp = norm_exp;
                rounded_mant = mant_rounded[22:0];
            end

            if (a_is_nan || b_is_nan) begin
                return {1'b0, 8'hFF, 23'h400000};
            end else if (a_is_inf && b_is_inf) begin
                if (sign_a != sign_b) return {1'b0, 8'hFF, 23'h400000};
                else return {sign_a, 8'hFF, 23'd0};
            end else if (a_is_inf) begin
                return {sign_a, 8'hFF, 23'd0};
            end else if (b_is_inf) begin
                return {sign_b, 8'hFF, 23'd0};
            end else if (a_is_zero && b_is_zero) begin
                return {sign_a & sign_b, 8'd0, 23'd0};
            end else if (a_is_zero) begin
                return fp32_b;
            end else if (b_is_zero) begin
                return fp32_a;
            end else if (norm_exp == 8'd0 && norm_mant == 27'd0) begin
                return 32'd0;
            end else if (final_exp >= 8'hFF) begin
                return {result_sign_raw, 8'hFF, 23'd0};
            end else begin
                return {result_sign_raw, final_exp, rounded_mant};
            end
        endfunction

        function automatic bit [31:0] compute_fp_mac_result(npu_seq_item tr, int col);
            bit [31:0] sum;
            sum = 32'h00000000; // FP32 +0.0
            for (int i = 0; i < NPU_ROWS; i++) begin
                bit [31:0] product = compute_fp16_mul(tr.act_in[i], weight_matrix[i][col]);
                sum = compute_fp32_add(sum, product);
            end
            return sum;
        endfunction

        // Flush all pending acc entries up to (but not including) idx
        function void flush_up_to(int idx);
            while (acc_applied < idx && acc_queue.size() > 0) begin
                pending_acc_t entry = acc_queue.pop_front();
                for (int j = 0; j < NPU_COLS; j++) begin
                    if (entry.clear)
                        ref_bram[entry.addr][j] = entry.mac_result[j];
                    else
                        ref_bram[entry.addr][j] = compute_fp32_add(ref_bram[entry.addr][j], entry.mac_result[j]);
                end
                acc_applied++;
            end
        endfunction
"""

with open('c:\\projects\\silicontoai\\tb\\npu_uvm_pkg.sv', 'r') as f:
    text = f.read()

# find starting at fp16_to_fp32 and ending before virtual function void write
start = re.search(r'\s*// FP16 → FP32 helper:', text).start()
end = re.search(r'\s*virtual function void write', text).start()

new_text = text[:start] + sv_code + text[end:]

with open('c:\\projects\\silicontoai\\tb\\npu_uvm_pkg.sv', 'w') as f:
    f.write(new_text)

print("Scoreboard precision replaced!")
