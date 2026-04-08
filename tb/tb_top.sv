`timescale 1ns / 1ps

import uvm_pkg::*;
`include "uvm_macros.svh"
import npu_uvm_pkg::*;

module tb_top;

    `ifdef UVM_DATA_MODE_FP16
        localparam int TB_DATA_MODE = 1;
    `else
        localparam int TB_DATA_MODE = 0;
    `endif

    // 1. Clock and Reset Generation
    logic clk;
    logic rst_n;

    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100MHz clock
    end

    initial begin
        rst_n = 0;
        #20 rst_n = 1;
    end

    // 2. Interface Instantiation
    npu_if vif(clk, rst_n);

    // 3. DUT Instantiation
    npu_core_top #(
        .DATA_MODE(TB_DATA_MODE)
    ) dut (
        .clk             (vif.clk),
        .rst_n           (vif.rst_n),
        .sram_act_in     (vif.sram_act_in),
        .sram_weight_in  (vif.sram_weight_in),
        .weight_load_en  (vif.weight_load_en),
        .acc_valid       (vif.acc_valid),
        .acc_clear       (vif.acc_clear),
        .acc_addr        (vif.acc_addr),
        .drain_re        (vif.drain_re),
        .drain_addr      (vif.drain_addr),
        .psum_drain_out  (vif.psum_drain_out)
    );

    core_assert_cov u_core_assert_cov (
        .clk        (vif.clk),
        .rst_n      (vif.rst_n),
        .forward_en (dut.u_psum_buffer.forward_en),
        .drain_re   (vif.drain_re)
    );

    // 4. Start UVM Test
    initial begin
        // Pass virtual interface to UVM configuration database globally
        uvm_config_db#(virtual npu_if)::set(null, "*", "vif", vif);
        
        // Start the test execution
        run_test("npu_test");
    end

    // 5. Optional Timeout Fallback
    initial begin
        #10000ns;
        $display("Simulation Timeout");
        $finish;
    end

endmodule


