`ifndef NPU_IF_SV
`define NPU_IF_SV

import npu_def_pkg::*;

interface npu_if(input logic clk, input logic rst_n);
    // Main SRAM Interface
    logic [NPU_ROWS-1:0][NPU_ACT_WIDTH-1:0] sram_act_in;
    logic [NPU_COLS-1:0][NPU_WT_WIDTH-1:0] sram_weight_in;
    logic [NPU_ROWS-1:0]       weight_load_en;

    // Accumulator Control
    logic              acc_valid;
    logic              acc_clear;
    logic [MEM_ADDR_WIDTH-1:0]        acc_addr;

    // Drain to Output SRAM
    logic              drain_re;
    logic [MEM_ADDR_WIDTH-1:0]        drain_addr;
    logic [NPU_COLS-1:0][NPU_PSUM_WIDTH-1:0] psum_drain_out;
endinterface

`endif
