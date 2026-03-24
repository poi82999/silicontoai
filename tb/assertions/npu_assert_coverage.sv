`timescale 1ns / 1ps

module core_assert_cov (
    input logic clk,
    input logic rst_n,
    input logic forward_en,
    input logic drain_re
);
`ifndef SYNTHESIS
    covergroup cg_core_assert_cov @(posedge clk);
        option.per_instance = 1;

        cp_forwarding_hit_seen: coverpoint forward_en iff (rst_n) {
            bins p_forwarding_hit_seen = {1'b1};
        }

        cp_drain_request_seen: coverpoint drain_re iff (rst_n) {
            bins p_drain_request_seen = {1'b1};
        }
    endgroup

    cg_core_assert_cov cov = new();
`endif
endmodule

module system_assert_cov (
    input logic clk,
    input logic rst_n,
    input logic dma_start_seen,
    input logic dma_done,
    input logic weight_load_mode_start_seen,
    input logic execute_mode_start_seen,
    input logic forward_en,
    input logic drain_re
);
`ifndef SYNTHESIS
    covergroup cg_system_assert_cov @(posedge clk);
        option.per_instance = 1;

        cp_dma_start_seen: coverpoint dma_start_seen iff (rst_n) {
            bins p_dma_start_seen = {1'b1};
        }

        cp_dma_done_seen: coverpoint dma_done iff (rst_n) {
            bins p_dma_done_seen = {1'b1};
        }

        cp_weight_load_mode_start_seen: coverpoint weight_load_mode_start_seen iff (rst_n) {
            bins p_weight_load_mode_start_seen = {1'b1};
        }

        cp_execute_mode_start_seen: coverpoint execute_mode_start_seen iff (rst_n) {
            bins p_execute_mode_start_seen = {1'b1};
        }

        cp_forwarding_hit_seen: coverpoint forward_en iff (rst_n) {
            bins p_forwarding_hit_seen = {1'b1};
        }

        cp_drain_request_seen: coverpoint drain_re iff (rst_n) {
            bins p_drain_request_seen = {1'b1};
        }
    endgroup

    cg_system_assert_cov cov = new();
`endif
endmodule