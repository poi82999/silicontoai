`timescale 1ns / 1ps

bind dma_controller dma_controller_sva #(
    .MAX_OUTSTANDING(MAX_OUTSTANDING),
    .REQ_CNT_WIDTH($bits(req_cnt)),
    .OUTSTANDING_CNT_WIDTH($bits(outstanding_cnt))
) u_dma_controller_sva (
    .clk(clk),
    .rst_n(rst_n),
    .start_dma(start_dma),
    .dma_done(dma_done),
    .busy(busy),
    .req_cnt(req_cnt),
    .resp_cnt(resp_cnt),
    .outstanding_cnt(outstanding_cnt)
);

bind npu_system_top npu_system_top_sva u_npu_system_top_sva (
    .clk(clk),
    .rst_n(rst_n),
    .state(state),
    .mmio_start_npu(mmio_start_npu),
    .mmio_npu_mode(mmio_npu_mode),
    .mmio_npu_seq_len(mmio_npu_seq_len),
    .mmio_swap_banks(mmio_swap_banks),
    .mmio_clear_done(mmio_clear_done)
);

bind psum_accumulator_buffer psum_accumulator_buffer_sva u_psum_accumulator_buffer_sva (
    .clk(clk),
    .rst_n(rst_n),
    .acc_valid(acc_valid),
    .drain_re(drain_re),
    .forward_en(forward_en),
    .last_write_valid(last_write_valid)
);