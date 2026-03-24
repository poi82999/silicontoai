`timescale 1ns / 1ps

module dma_controller #(
    parameter AXI_ADDR_WIDTH  = 64,
    parameter AXI_DATA_WIDTH  = 512,
    parameter AXI_ID_WIDTH    = 4,
    parameter SRAM_ADDR_WIDTH = 15,
    parameter MAX_OUTSTANDING = 8 
)(
    input  wire clk,
    input  wire rst_n,

    // DMA Control Interface
    input  wire                      start_dma,
    input  wire [AXI_ADDR_WIDTH-1:0] src_addr_base,
    input  wire [7:0]                burst_len,  
    input  wire [15:0]               total_bursts, 
    output reg                       dma_done,

    // AXI4 Read Address Channel (AR)
    output reg  [AXI_ID_WIDTH-1:0]   arid,
    output reg  [AXI_ADDR_WIDTH-1:0] araddr,
    output wire [7:0]                arlen,
    output wire [2:0]                arsize,
    output wire [1:0]                arburst,
    output reg                       arvalid,
    input  wire                      arready,

    // AXI4 Read Data Channel (R)
    /* verilator lint_off UNUSEDSIGNAL */
    input  wire [AXI_ID_WIDTH-1:0]   rid,
    input  wire [AXI_DATA_WIDTH-1:0] rdata,
    input  wire [1:0]                rresp,
    /* verilator lint_on UNUSEDSIGNAL */
    input  wire                      rlast,
    input  wire                      rvalid,
    output wire                      rready,

    // On-chip SRAM Interface
    output reg                       sram_wen,
    output reg  [SRAM_ADDR_WIDTH-1:0]sram_addr,
    output reg  [AXI_DATA_WIDTH-1:0] sram_wdata
);

    localparam integer AXI_BEAT_BYTES = AXI_DATA_WIDTH / 8;
    localparam logic [2:0] AXI_ARSIZE = 3'($clog2(AXI_BEAT_BYTES));
    localparam logic [AXI_ADDR_WIDTH-1:0] AXI_BEAT_BYTES_ADDR = AXI_ADDR_WIDTH'(AXI_BEAT_BYTES);

    assign arsize  = AXI_ARSIZE;
    assign arburst = 2'b01;  
    assign arlen   = burst_len;
    assign arid    = 4'b0001;
    assign rready  = 1'b1;

    logic [15:0] req_cnt;         
    logic [15:0] resp_cnt;        
    logic [7:0]  outstanding_cnt; 
    logic        busy;

    wire ar_fire     = arvalid && arready;
    wire r_fire      = rvalid && rready;
    wire r_last_fire = r_fire && rlast;

    // 1. DMA Control & Counters
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            req_cnt         <= '0;
            resp_cnt        <= '0;
            outstanding_cnt <= '0;
            busy            <= 1'b0;
            dma_done        <= 1'b0;
        end else begin
            dma_done <= 1'b0;
            if (start_dma && !busy) begin
                busy            <= 1'b1;
                req_cnt         <= '0;
                resp_cnt        <= '0;
                outstanding_cnt <= '0;
            end 
            else if (busy) begin
                outstanding_cnt <= outstanding_cnt + 8'(ar_fire) - 8'(r_last_fire);
                if (ar_fire) req_cnt <= req_cnt + 16'd1;
                if (r_last_fire) begin
                    resp_cnt <= resp_cnt + 1'b1;
                    if (resp_cnt + 1'b1 == total_bursts) begin
                        busy     <= 1'b0;
                        dma_done <= 1'b1;
                    end
                end
            end
        end
    end

    // 2. AR Channel Logic (Bubble-Free Address Generator)
    wire [15:0] next_req_cnt = req_cnt + 16'(ar_fire);
    wire [7:0]  next_outstanding = outstanding_cnt + 8'(ar_fire) - 8'(r_last_fire);
    wire        can_issue = (next_req_cnt < total_bursts) && (next_outstanding < MAX_OUTSTANDING);

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            arvalid <= 1'b0;
            araddr  <= '0;
        end else begin
            if (start_dma && !busy) begin
                arvalid <= 1'b0; 
                araddr  <= src_addr_base;
            end else if (busy) begin
                if (arvalid && !arready) begin
                    arvalid <= 1'b1; // Hold
                end else if (can_issue) begin
                    arvalid <= 1'b1; // Back-to-back predict
                end else begin
                    arvalid <= 1'b0;
                end

                if (ar_fire) begin
                    araddr <= araddr + ((AXI_ADDR_WIDTH'(burst_len) + AXI_ADDR_WIDTH'(1)) * AXI_BEAT_BYTES_ADDR);
                end
            end else begin
                arvalid <= 1'b0;
            end
        end
    end

    // 3. R Channel Logic (SRAM Writer - Off-by-one fixed)
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            sram_wen   <= 1'b0;
            sram_addr  <= '0;
            sram_wdata <= '0;
        end else begin
            sram_wen <= r_fire; 
            if (r_fire) begin
                sram_wdata <= rdata;
            end
            if (start_dma && !busy) begin
                sram_addr <= '0;
            end else if (sram_wen) begin
                sram_addr <= sram_addr + 1'b1;
            end
        end
    end

endmodule


