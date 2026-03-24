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
    input logic clk,
    input logic rst_n,
    input logic [2:0] state,
    input logic mmio_start_npu,
    input logic mmio_npu_mode,
    input logic [15:0] mmio_npu_seq_len,
    input logic mmio_swap_banks,
    input logic mmio_clear_done
);
    localparam logic [2:0] ST_IDLE         = 3'd0;
    localparam logic [2:0] ST_LOAD_WT      = 3'd1;
    localparam logic [2:0] ST_LOAD_WT_WAIT = 3'd2;
    localparam logic [2:0] ST_EXEC_ACT     = 3'd3;
    localparam logic [2:0] ST_FLUSH        = 3'd4;
    localparam logic [2:0] ST_DONE         = 3'd5;

`ifndef SYNTHESIS
    property p_state_is_legal;
        @(posedge clk) disable iff (!rst_n)
            state inside {ST_IDLE, ST_LOAD_WT, ST_LOAD_WT_WAIT, ST_EXEC_ACT, ST_FLUSH, ST_DONE};
    endproperty

    property p_execute_mode_requires_nonzero_seq_len;
        @(posedge clk) disable iff (!rst_n)
            (mmio_start_npu && !mmio_npu_mode) |-> (mmio_npu_seq_len != 0);
    endproperty

    property p_bank_swap_only_in_idle;
        @(posedge clk) disable iff (!rst_n)
            mmio_swap_banks |-> (state == ST_IDLE);
    endproperty

    property p_clear_done_only_in_done;
        @(posedge clk) disable iff (!rst_n)
            mmio_clear_done |-> (state == ST_DONE);
    endproperty

    ap_p_state_is_legal: assert property (p_state_is_legal)
        else $error("[ASSERT][p_state_is_legal] npu_system_top: illegal FSM state detected");

    ap_p_execute_mode_requires_nonzero_seq_len: assert property (p_execute_mode_requires_nonzero_seq_len)
        else $error("[ASSERT][p_execute_mode_requires_nonzero_seq_len] npu_system_top: execute mode requires non-zero mmio_npu_seq_len");

    ap_p_bank_swap_only_in_idle: assert property (p_bank_swap_only_in_idle)
        else $error("[ASSERT][p_bank_swap_only_in_idle] npu_system_top: bank swap is only valid in ST_IDLE");

    ap_p_clear_done_only_in_done: assert property (p_clear_done_only_in_done)
        else $error("[ASSERT][p_clear_done_only_in_done] npu_system_top: mmio_clear_done is only valid in ST_DONE");
`endif
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