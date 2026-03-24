`timescale 1ns / 1ps

module tb_system_top;

    logic clk = 0;
    logic rst_n = 0;
    always #5 clk = ~clk;

    // MMIO
    logic mmio_start_dma = 0;
    logic mmio_dma_target = 0;
    logic [63:0] mmio_src_addr = 0;
    logic [7:0] mmio_burst_len = 0;
    logic [15:0] mmio_total_bursts = 0;
    logic mmio_dma_done;

    logic mmio_swap_banks = 0;

    logic mmio_start_npu = 0;
    logic mmio_npu_mode = 0;
    logic mmio_npu_acc_clear = 0;
    // Verification-only hooks stay disabled in the directed Vivado system test.
    logic mmio_test_acc_addr_override_en = 0;
    logic [8:0] mmio_test_acc_addr_override = 0;
    logic mmio_test_one_shot_acc_clear_en = 0;
    logic mmio_clear_done = 0;
    logic [15:0] mmio_npu_seq_len = 0;
    logic mmio_npu_done;

    // AXI
    logic [3:0] arid;
    logic [63:0] araddr;
    logic [7:0] arlen;
    logic [2:0] arsize;
    logic [1:0] arburst;
    logic arvalid;
    logic arready;

    logic [3:0] rid;
    logic [127:0] rdata;
    logic [1:0] rresp;
    logic rlast;
    logic rvalid;
    logic rready;

    // Drain
    logic drain_re = 0;
    logic [8:0] drain_addr = 0;
    logic [15:0][31:0] psum_drain_out;

    npu_system_top u_dut (.*);

    system_assert_cov u_system_assert_cov (
        .clk                         (clk),
        .rst_n                       (rst_n),
        .dma_start_seen              (mmio_start_dma),
        .dma_done                    (mmio_dma_done),
        .weight_load_mode_start_seen (mmio_start_npu && mmio_npu_mode),
        .execute_mode_start_seen     (mmio_start_npu && !mmio_npu_mode && (mmio_npu_seq_len != 0)),
        .forward_en                  (u_dut.u_npu_core.u_psum_buffer.forward_en),
        .drain_re                    (drain_re)
    );

    // Dummy AXI Slave Memory (1024 x 128-bit)
    logic [127:0] main_mem [0:1023]; 
    
    initial begin
        for(int i=0; i<1024; i++) main_mem[i] = 128'h0A0A0A0A_0A0A0A0A_0A0A0A0A_0A0A0A0A; // Weights = 10
        for(int i=512; i<1024; i++) begin
            main_mem[i] = '0;
            for(int byte_idx=0; byte_idx<16; byte_idx++) begin
                main_mem[i][byte_idx*8 +: 8] = byte_idx; // Act = 0, 1, 2... 15
            end
        end
    end

    // AXI Slave FSM
    logic [7:0] r_cnt;
    logic [63:0] r_addr;

    task automatic pulse_start_dma();
        @(negedge clk);
        mmio_start_dma = 1'b1;
        @(negedge clk);
        mmio_start_dma = 1'b0;
    endtask
    
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            arready <= 0;
            rid <= 0;
            rdata <= 0;
            rresp <= 0;
            rlast <= 0;
            rvalid <= 0;
            r_cnt <= 0;
            r_addr <= 0;
        end else begin
            if (!arvalid && !rvalid) arready <= 1;
            
            if (arvalid && arready) begin
                arready <= 0;
                r_cnt <= arlen;
                r_addr <= araddr[13:4]; // 16-byte words
                rvalid <= 1;
                rdata <= main_mem[araddr[13:4]];
                rid <= arid;
                rlast <= (arlen == 0);
            end else if (rvalid && rready) begin
                if (r_cnt == 0) begin
                    rvalid <= 0;
                    rlast <= 0;
                    arready <= 1;
                end else begin
                    r_cnt <= r_cnt - 1;
                    r_addr <= r_addr + 1;
                    rdata <= main_mem[r_addr + 1];
                    rlast <= (r_cnt == 1);
                end
            end
        end
    end

    initial begin
        rst_n = 0;
        #20 rst_n = 1;
        
        $display("----------------------------------------");
        $display(" 1. Setup Phase: Load Weights into Bank 0");
        $display("----------------------------------------");
        @(posedge clk);
        mmio_dma_target = 1; // Weight
        mmio_src_addr = 0;   // mem[0~15]
        mmio_burst_len = 15; // 16 beats = 16 rows
        mmio_total_bursts = 1;
        pulse_start_dma();
        
        wait(mmio_dma_done);
        $display("[SUCCESS] Weight DMA Downloaded");

        $display("----------------------------------------");
        $display(" 2. Swap Banks");
        $display("----------------------------------------");
        @(posedge clk) mmio_swap_banks = 1;
        @(posedge clk) mmio_swap_banks = 0;

        $display("----------------------------------------");
        $display(" 3. NPU Execute Phase: Load Weights into MAC PEs");
        $display("----------------------------------------");
        @(posedge clk);
        mmio_npu_mode = 1;
        mmio_start_npu = 1;
        @(posedge clk) mmio_start_npu = 0;
        
        wait(mmio_npu_done);
        @(posedge clk) mmio_clear_done = 1;
        @(posedge clk) mmio_clear_done = 0;
        $display("[SUCCESS] NPU Weight Loaded into PEs");
        
        $display("----------------------------------------");
        $display(" 4. Setup Phase: Load Acts into Bank 1");
        $display("----------------------------------------");
        @(posedge clk);
        mmio_dma_target = 0; // Act
        mmio_src_addr = 512*16; // mem[512~]
        mmio_burst_len = 15; 
        mmio_total_bursts = 1;
        pulse_start_dma();
        
        wait(mmio_dma_done);
        $display("[SUCCESS] Activation DMA Downloaded");

        $display("----------------------------------------");
        $display(" 5. Swap Banks");
        $display("----------------------------------------");
        @(posedge clk) mmio_swap_banks = 1;
        @(posedge clk) mmio_swap_banks = 0;

        $display("----------------------------------------");
        $display(" 6. NPU Execute Phase: Run MAC Array");
        $display("----------------------------------------");
        @(posedge clk);
        mmio_npu_mode = 0;
        mmio_npu_acc_clear = 1; // 1: Overwrite for the first time
        mmio_npu_seq_len = 16;
        mmio_start_npu = 1;
        @(posedge clk) mmio_start_npu = 0;

        wait(mmio_npu_done);
        @(posedge clk) mmio_clear_done = 1;
        @(posedge clk) mmio_clear_done = 0;
        $display("[SUCCESS] NPU Array Execution and 35-Cycle Flush Completed");

        $display("----------------------------------------");
        $display(" 7. Read Output and Verify");
        $display("----------------------------------------");
        
        // Wait extra cycle for pipeline to fully settle after FSM done
        repeat(5) @(posedge clk);
        
        $display("[DBG] Initiating drain read at addr=0 @ %0t", $time);
        drain_addr = 0;
        drain_re = 1;
        @(posedge clk);        // BRAM read initiates here
        drain_re = 0;
        @(posedge clk);        // BRAM read latency (1 cycle for sync BRAM)
        @(posedge clk);        // Extra margin
        
        $display("[DBG] drain_out[0]=%0d, drain_out[15]=%0d @ %0t", 
                 psum_drain_out[0], psum_drain_out[15], $time);
        
        begin : CHECK_BLOCK
            bit all_pass;
            all_pass = 1;
            for(int i=0; i<16; i++) begin
                if (psum_drain_out[i] !== 1200) begin
                    $display(" [FAIL] Mismatch at col %0d: Expected 1200, Got %0d", i, psum_drain_out[i]);
                    all_pass = 0;
                end
            end
            if (all_pass) begin
                $display(" [PERFECT MATCH] All columns computed exactly 1200!");
                $display("----------------------------------------");
                $display("  SYSTEM INTEGRATION VERIFICATION ZERO-DEFECT");
                $display("----------------------------------------");
            end
        end
        
        $finish;
    end

    // Debug Monitor: Print key NPU signals periodically
    always @(posedge clk) begin
        if (u_dut.state != 0) begin  // Not IDLE
            $display("[DBG @%0t] state=%0d exec_cnt=%0d sram_ren=%b valid_q=%b flush_cnt=%0d",
                $time, u_dut.state, u_dut.exec_cnt,
                u_dut.npu_sram_ren, u_dut.npu_valid_q, u_dut.flush_cnt);
        end
    end

endmodule
