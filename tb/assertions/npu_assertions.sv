`timescale 1ns / 1ps

module dma_controller_sva #(
    parameter MAX_OUTSTANDING = 8,
    parameter REQ_CNT_WIDTH = 16,
    parameter OUTSTANDING_CNT_WIDTH = 8
)(
    input logic clk,
    input logic rst_n,
    input logic start_dma,
    input logic dma_done,
    input logic busy,
    input logic [REQ_CNT_WIDTH-1:0] req_cnt,
    input logic [REQ_CNT_WIDTH-1:0] resp_cnt,
    input logic [OUTSTANDING_CNT_WIDTH-1:0] outstanding_cnt
);
`ifndef SYNTHESIS
    property p_outstanding_cnt_within_limit;
        @(posedge clk) disable iff (!rst_n)
            outstanding_cnt <= MAX_OUTSTANDING;
    endproperty

    property p_resp_cnt_never_exceeds_req_cnt;
        @(posedge clk) disable iff (!rst_n)
            req_cnt >= resp_cnt;
    endproperty

    property p_idle_clears_outstanding_cnt;
        @(posedge clk) disable iff (!rst_n)
            !busy |-> (outstanding_cnt == 0);
    endproperty

    property p_dma_done_only_when_idle;
        @(posedge clk) disable iff (!rst_n)
            dma_done |-> !busy;
    endproperty

    ap_p_outstanding_cnt_within_limit: assert property (p_outstanding_cnt_within_limit)
        else $error("[ASSERT][p_outstanding_cnt_within_limit] dma_controller: outstanding_cnt exceeded MAX_OUTSTANDING");

    ap_p_resp_cnt_never_exceeds_req_cnt: assert property (p_resp_cnt_never_exceeds_req_cnt)
        else $error("[ASSERT][p_resp_cnt_never_exceeds_req_cnt] dma_controller: resp_cnt cannot exceed req_cnt");

    ap_p_idle_clears_outstanding_cnt: assert property (p_idle_clears_outstanding_cnt)
        else $error("[ASSERT][p_idle_clears_outstanding_cnt] dma_controller: outstanding_cnt must return to zero when idle");

    ap_p_dma_done_only_when_idle: assert property (p_dma_done_only_when_idle)
        else $error("[ASSERT][p_dma_done_only_when_idle] dma_controller: dma_done must only pulse after busy deasserts");
`endif
endmodule

module npu_system_top_sva (
    // Deprecated for Phase 2
);
endmodule

module psum_accumulator_buffer_sva (
    input logic clk,
    input logic rst_n,
    input logic acc_valid,
    input logic drain_re,
    input logic forward_en,
    input logic last_write_valid
);
`ifndef SYNTHESIS
    property p_acc_and_drain_are_mutually_exclusive;
        @(posedge clk) disable iff (!rst_n)
            !(acc_valid && drain_re);
    endproperty

    property p_forwarding_requires_valid_previous_write;
        @(posedge clk) disable iff (!rst_n)
            forward_en |-> last_write_valid;
    endproperty

    ap_p_acc_and_drain_are_mutually_exclusive: assert property (p_acc_and_drain_are_mutually_exclusive)
        else $error("[ASSERT][p_acc_and_drain_are_mutually_exclusive] psum_accumulator_buffer: acc_valid and drain_re cannot be asserted together");

    ap_p_forwarding_requires_valid_previous_write: assert property (p_forwarding_requires_valid_previous_write)
        else $error("[ASSERT][p_forwarding_requires_valid_previous_write] psum_accumulator_buffer: forwarding requires a valid previous write");
`endif
endmodule