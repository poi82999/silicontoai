`ifndef NPU_IF_SV
`define NPU_IF_SV

interface npu_if(input logic clk, input logic rst_n);
    // Main SRAM Interface
    logic [15:0][7:0]  sram_act_in;
    logic [15:0][7:0]  sram_weight_in;
    logic [15:0]       weight_load_en;

    // Accumulator Control
    logic              acc_valid;
    logic              acc_clear;
    logic [8:0]        acc_addr;

    // Drain to Output SRAM
    logic              drain_re;
    logic [8:0]        drain_addr;
    logic [15:0][31:0] psum_drain_out;
endinterface

`endif


