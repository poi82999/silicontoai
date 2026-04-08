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

    // AXI-Stream Output Interface (MM2S)
    output wire                      m_axis_tvalid,
    input  wire                      m_axis_tready,
    output wire [AXI_DATA_WIDTH-1:0] m_axis_tdata,
    output wire                      m_axis_tlast
);

    localparam integer AXI_BEAT_BYTES = AXI_DATA_WIDTH / 8;
    localparam logic [2:0] AXI_ARSIZE = 3'($clog2(AXI_BEAT_BYTES));
    localparam logic [AXI_ADDR_WIDTH-1:0] AXI_BEAT_BYTES_ADDR = AXI_ADDR_WIDTH'(AXI_BEAT_BYTES);

    assign arsize  = AXI_ARSIZE;
    assign arburst = 2'b01;  
    assign arlen   = burst_len;
    assign arid    = 4'b0001;

    logic [15:0] req_cnt;         
    logic [15:0] resp_cnt;        
    logic [7:0]  outstanding_cnt; 
    logic        busy;

    wire ar_fire     = arvalid && arready;
    wire r_fire      = rvalid && rready;
    wire r_last_fire = r_fire && rlast;

    // 1. DMA Control & Counters
    always_ff @(posedge clk) begin
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

    always_ff @(posedge clk) begin
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

    // 3. R Channel Logic (MM2S Stream Generator)
    // Pass r data directly to m_axis
    // Backpressure handled by combinationally passing m_axis_tready to rready
    assign rready = (start_dma || busy) ? m_axis_tready : 1'b0;
    assign m_axis_tvalid = (start_dma || busy) ? rvalid : 1'b0;
    assign m_axis_tdata = rdata;
    assign m_axis_tlast = rlast && (resp_cnt + 1'b1 == total_bursts);

endmodule


