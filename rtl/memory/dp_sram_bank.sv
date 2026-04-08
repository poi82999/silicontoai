`timescale 1ns / 1ps

module dp_sram_bank #(
    parameter ADDR_WIDTH = 10,
    parameter DATA_WIDTH = 128 // 16 * 8-bit
)(
    input  logic                  clk,
    
    // Port A: DMA Write Interface
    input  logic                  wen,
    input  logic [ADDR_WIDTH-1:0] waddr,
    input  logic [DATA_WIDTH-1:0] wdata,
    
    // Port B: NPU Read Interface
    input  logic                  ren,
    input  logic [ADDR_WIDTH-1:0] raddr,
    output logic [DATA_WIDTH-1:0] rdata
);
    // BRAM Inference
    (* ram_style = "block" *) logic [DATA_WIDTH-1:0] mem [0:(1<<ADDR_WIDTH)-1];

    always_ff @(posedge clk) begin
        if (wen) mem[waddr] <= wdata;
        if (ren) rdata <= mem[raddr]; // 1-Cycle Read Latency
    end
endmodule
