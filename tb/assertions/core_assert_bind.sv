`timescale 1ns / 1ps

bind psum_accumulator_buffer psum_accumulator_buffer_sva u_psum_accumulator_buffer_sva (
    .clk(clk),
    .rst_n(rst_n),
    .acc_valid(acc_valid),
    .drain_re(drain_re),
    .forward_en(forward_en),
    .last_write_valid(last_write_valid)
);