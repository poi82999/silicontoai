`timescale 1ns / 1ps

module psum_accumulator_buffer #(
    parameter COLS       = 16,
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 9   // 512 Depth
)(
    input  logic clk,
    input  logic rst_n,

    // Systolic Array Interface
    input  logic                          acc_valid,   // Accumulation Trigger
    input  logic                          acc_clear,   // 1: Overwrite, 0: Add with existing
    input  logic [ADDR_WIDTH-1:0]         acc_addr,    // Psum target address
    input  logic [COLS-1:0][DATA_WIDTH-1:0] array_psum,  // Bottom output from Array

    // Drain Interface (To Main SRAM / DMA)
    input  logic                          drain_re,
    input  logic [ADDR_WIDTH-1:0]         drain_addr,
    output logic [COLS-1:0][DATA_WIDTH-1:0] drain_data
);

    localparam TOTAL_WIDTH = COLS * DATA_WIDTH;

    // FPGA BRAM Inference
    (* ram_style = "block" *) logic [TOTAL_WIDTH-1:0] bram [0:(1<<ADDR_WIDTH)-1];

    // Read Data (1 Cycle Latency for Synchronous RAM)
    logic [TOTAL_WIDTH-1:0] bram_rd_data;
    logic [COLS-1:0][DATA_WIDTH-1:0] acc_rd_data;

    // Pipeline Alignment (Match Array output with BRAM read latency)
    logic                          acc_valid_q;
    logic                          acc_clear_q;
    logic [ADDR_WIDTH-1:0]         acc_addr_q;
    logic [COLS-1:0][DATA_WIDTH-1:0] array_psum_q;
    logic                          drain_re_q;
    
    // Port B Write Data
    logic [TOTAL_WIDTH-1:0] acc_write_data;
    logic [TOTAL_WIDTH-1:0] last_write_data;
    logic [ADDR_WIDTH-1:0]  last_write_addr;
    logic                   last_write_valid;

    // --- RAW Hazard Forwarding Logic ---
    // 현재 write-back 대상(acc_addr_q)이 직전 write와 같은 주소면
    // stale BRAM read 대신 직전 write 결과를 누산 입력으로 사용한다.
    logic forward_en;
    assign forward_en = acc_valid_q && last_write_valid && (acc_addr_q == last_write_addr);

    // 포워딩 데이터가 유효하면 우선 사용 (Bypass)
    assign acc_rd_data = forward_en ? last_write_data : bram_rd_data;

    // Port A: Read for Accumulation / Drain
    // drain 읽기와 accumulation pre-fetch는 포트 충돌 없이 동작
    always_ff @(posedge clk) begin
        if (drain_re) begin
            bram_rd_data <= bram[drain_addr];
        end else begin
            bram_rd_data <= bram[acc_addr]; // Pre-fetch for accumulation
        end
    end

    // Pipeline Alignment (Match Array output with BRAM read latency)
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            acc_valid_q <= 1'b0;
            acc_clear_q <= 1'b0;
            acc_addr_q  <= '0;
            array_psum_q<= '0;
            drain_re_q  <= 1'b0;
            drain_data  <= '0;
            last_write_data  <= '0;
            last_write_addr  <= '0;
            last_write_valid <= 1'b0;
        end else begin
            acc_valid_q <= acc_valid;
            acc_clear_q <= acc_clear;
            acc_addr_q  <= acc_addr;
            array_psum_q<= array_psum;
            drain_re_q  <= drain_re;

            if (drain_re_q) begin
                drain_data <= bram_rd_data;
            end

            last_write_valid <= acc_valid_q;
            if (acc_valid_q) begin
                last_write_data <= acc_write_data;
                last_write_addr <= acc_addr_q;
            end
        end
    end

    // Port B: Vector Addition & Write-Back
    genvar i;
    generate
        for (i = 0; i < COLS; i++) begin : VEC_ADD
            assign acc_write_data[i*DATA_WIDTH +: DATA_WIDTH] =
                acc_clear_q ? array_psum_q[i] : (acc_rd_data[i] + array_psum_q[i]);
        end
    endgenerate

    always_ff @(posedge clk) begin
        if (acc_valid_q) begin
            bram[acc_addr_q] <= acc_write_data;
        end
    end

endmodule


