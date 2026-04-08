`timescale 1ns / 1ps

package npu_def_pkg;

    // AXI Bus Configuration
    localparam int EXT_AXI_DATA_WIDTH = 256;
    localparam int EXT_AXI_ADDR_WIDTH = 64;

    // NPU Sysolic Array Dimensions (Scalability parameters)
    localparam int NPU_ROWS = 16;
    localparam int NPU_COLS = 16;

    // NPU Data Mode (compile-time)
    localparam int NPU_DATA_MODE_INT8 = 0;
    localparam int NPU_DATA_MODE_FP16 = 1;
    localparam int NPU_DATA_MODE      = NPU_DATA_MODE_INT8;

    // NPU Data Precisions
    // Datatype: signed INT8 × INT8 → INT32 (mac_pe_int8)
    // Lane slot width kept at 16 bits so the AXI bus, SRAM, and skew logic need no change.
    // Only the lower 8 bits of each act/weight lane carry the INT8 payload.
    localparam int NPU_ACT_WIDTH  = 16; // Lane slot width (INT8 payload in [7:0])
    localparam int NPU_WT_WIDTH   = 16; // Lane slot width (INT8 payload in [7:0])
    localparam int NPU_PSUM_WIDTH = 32; // INT32 partial sum / accumulated result

    // NPU Memory Configuration
    localparam int MEM_ADDR_WIDTH = 9;  // 512 entries per bank

endpackage
