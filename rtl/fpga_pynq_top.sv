`timescale 1ns / 1ps

// ============================================================================
// FPGA PYNQ Overlay Top
// ============================================================================
// PS7 ARM → AXI-Lite → This Module → npu_system_top + Local BRAM
//
// Unified AXI4-Lite slave with NPU control registers + psum drain readback.
// Designed for Vivado Block Design: PS7 M_AXI_GP0 → AXI Interconnect → here.
//
// Register Map (128 bytes, 7-bit address):
//   0x00  CTRL       (W1S)  [0]start_dma [1]start_npu [2]swap_banks [3]clear_done
//   0x04  STATUS     (RO)   [0]dma_done [1]npu_done
//   0x08  DMA_CFG    (RW)   [0]dma_target [4]npu_mode [5]acc_clear
//   0x0C  SRC_LO     (RW)   src_addr[31:0]
//   0x10  SRC_HI     (RW)   src_addr[63:32]
//   0x14  BURST      (RW)   [7:0]burst_len [23:8]total_bursts
//   0x18  SEQ        (RW)   [15:0]npu_seq_len
//   0x1C  ACC_TEST   (RW)   [0]override_en [9:1]override_addr [10]one_shot_en
//   0x20  DRAIN_CMD  (W)    [4:0]row → triggers drain, captures psum after 2 clk
//   0x24  DRAIN_STS  (RO)   [0]drain_valid
//   0x40  PSUM_0     (RO)   psum_drain_out[0]
//   0x44  PSUM_1     (RO)   psum_drain_out[1]
//   ...
//   0x7C  PSUM_15    (RO)   psum_drain_out[15]
// ============================================================================

module fpga_pynq_top #(
    parameter AXI_ADDR_WIDTH  = 64,
    parameter AXI_DATA_WIDTH  = 128,
    parameter AXI_ID_WIDTH    = 4
)(
    // Clock & Reset from PS7
    input  logic        s_axi_aclk,
    input  logic        s_axi_aresetn,

    // === AXI4-Lite Slave Interface (from PS7 via Interconnect) ===
    input  logic [6:0]  s_axi_awaddr,
    /* verilator lint_off UNUSEDSIGNAL */
    input  logic [2:0]  s_axi_awprot,
    input  logic        s_axi_awvalid,
    output logic        s_axi_awready,

    input  logic [31:0] s_axi_wdata,
    input  logic [3:0]  s_axi_wstrb,
    /* verilator lint_on UNUSEDSIGNAL */
    input  logic        s_axi_wvalid,
    output logic        s_axi_wready,

    output logic [1:0]  s_axi_bresp,
    output logic        s_axi_bvalid,
    input  logic        s_axi_bready,

    /* verilator lint_off UNUSEDSIGNAL */
    input  logic [6:0]  s_axi_araddr,
    input  logic [2:0]  s_axi_arprot,
    /* verilator lint_on UNUSEDSIGNAL */
    input  logic        s_axi_arvalid,
    output logic        s_axi_arready,

    output logic [31:0] s_axi_rdata,
    output logic [1:0]  s_axi_rresp,
    output logic        s_axi_rvalid,
    input  logic        s_axi_rready,

    // === LED / Debug Outputs ===
    output logic [3:0]  led
);

    // =========================================================================
    // Internal Signals
    // =========================================================================
    logic clk;
    logic rst_n;
    assign clk   = s_axi_aclk;
    assign rst_n = s_axi_aresetn;

    // --- AXI-Lite handshake ---
    logic       aw_fire, w_fire;
    logic       aw_pending, w_pending;
    /* verilator lint_off UNUSEDSIGNAL */
    logic [6:0] wr_addr;
    /* verilator lint_on UNUSEDSIGNAL */
    logic [31:0] wr_data;
    /* verilator lint_off UNUSEDSIGNAL */
    logic [6:0] rd_addr_reg;
    /* verilator lint_on UNUSEDSIGNAL */

    // --- MMIO control wires to npu_system_top ---
    logic                      mmio_start_dma;
    logic                      mmio_dma_target;
    logic [AXI_ADDR_WIDTH-1:0] mmio_src_addr;
    logic [7:0]                mmio_burst_len;
    logic [15:0]               mmio_total_bursts;
    logic                      mmio_dma_done;
    logic                      mmio_swap_banks;
    logic                      mmio_start_npu;
    logic                      mmio_npu_mode;
    logic                      mmio_npu_acc_clear;
    logic                      mmio_test_acc_addr_override_en;
    logic [8:0]                mmio_test_acc_addr_override;
    logic                      mmio_test_one_shot_acc_clear_en;
    logic                      mmio_clear_done;
    logic [15:0]               mmio_npu_seq_len;
    logic                      mmio_npu_done;

    // --- AXI4 Read Master (NPU DMA → local BRAM) ---
    logic [AXI_ID_WIDTH-1:0]   axi_arid;
    /* verilator lint_off UNUSEDSIGNAL */
    logic [AXI_ADDR_WIDTH-1:0] axi_araddr;
    /* verilator lint_on UNUSEDSIGNAL */
    logic [7:0]                axi_arlen;
    /* verilator lint_off UNUSEDSIGNAL */
    logic [2:0]                axi_arsize;
    logic [1:0]                axi_arburst;
    /* verilator lint_on UNUSEDSIGNAL */
    logic                      axi_arvalid, axi_arready;
    logic [AXI_ID_WIDTH-1:0]   axi_rid;
    logic [AXI_DATA_WIDTH-1:0] axi_rdata;
    logic [1:0]                axi_rresp;
    logic                      axi_rlast;
    logic                      axi_rvalid, axi_rready;

    // --- Drain interface ---
    logic                      drain_re;
    logic [8:0]                drain_addr;
    logic [15:0][31:0]         psum_drain_out;

    // --- Drain capture ---
    logic                      drain_cmd_we;
    logic [4:0]                drain_row_reg;
    logic [1:0]                drain_pipe;    // 2-cycle pipeline for BRAM latency
    logic                      drain_valid;
    logic [15:0][31:0]         psum_captured;

    // --- Config registers ---
    logic [31:0] reg_dma_cfg;
    logic [31:0] reg_src_lo;
    logic [31:0] reg_src_hi;
    logic [31:0] reg_burst;
    logic [31:0] reg_seq;
    logic [31:0] reg_acc_test;

    // =========================================================================
    // LED: alive heartbeat + npu_done
    // =========================================================================
    logic [23:0] heartbeat;
    always_ff @(posedge clk) begin
        if (!rst_n) heartbeat <= '0;
        else        heartbeat <= heartbeat + 24'd1;
    end
    assign led[0] = heartbeat[23];       // alive
    assign led[1] = mmio_dma_done;       // DMA done
    assign led[2] = mmio_npu_done;       // NPU done
    assign led[3] = drain_valid;         // last drain captured

    // =========================================================================
    // AXI4-Lite Slave — Write Path
    // =========================================================================
    assign s_axi_bresp = 2'b00; // OKAY

    // Independent AW/W channel acceptance
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            aw_pending     <= 1'b0;
            w_pending      <= 1'b0;
            wr_addr        <= '0;
            wr_data        <= '0;
            s_axi_awready  <= 1'b1;
            s_axi_wready   <= 1'b1;
            s_axi_bvalid   <= 1'b0;
        end else begin
            // AW channel
            if (s_axi_awvalid && s_axi_awready) begin
                wr_addr    <= s_axi_awaddr;
                aw_pending <= 1'b1;
                s_axi_awready <= 1'b0;
            end
            // W channel
            if (s_axi_wvalid && s_axi_wready) begin
                wr_data   <= s_axi_wdata;
                w_pending <= 1'b1;
                s_axi_wready <= 1'b0;
            end
            // Both channels received → issue write response
            if ((aw_pending || (s_axi_awvalid && s_axi_awready)) &&
                (w_pending  || (s_axi_wvalid  && s_axi_wready))) begin
                s_axi_bvalid <= 1'b1;
                aw_pending   <= 1'b0;
                w_pending    <= 1'b0;
            end
            // Response accepted
            if (s_axi_bvalid && s_axi_bready) begin
                s_axi_bvalid  <= 1'b0;
                s_axi_awready <= 1'b1;
                s_axi_wready  <= 1'b1;
            end
        end
    end

    assign aw_fire = (aw_pending || (s_axi_awvalid && s_axi_awready));
    assign w_fire  = (w_pending  || (s_axi_wvalid  && s_axi_wready));

    // =========================================================================
    // Register Write Decode
    // =========================================================================
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            // Pulse controls
            mmio_start_dma   <= 1'b0;
            mmio_start_npu   <= 1'b0;
            mmio_swap_banks  <= 1'b0;
            mmio_clear_done  <= 1'b0;
            // Latched config
            reg_dma_cfg      <= '0;
            reg_src_lo       <= '0;
            reg_src_hi       <= '0;
            reg_burst        <= '0;
            reg_seq          <= '0;
            reg_acc_test     <= '0;
            drain_cmd_we     <= 1'b0;
            drain_row_reg    <= '0;
        end else begin
            // Default: clear pulse signals
            mmio_start_dma  <= 1'b0;
            mmio_start_npu  <= 1'b0;
            mmio_swap_banks <= 1'b0;
            mmio_clear_done <= 1'b0;
            drain_cmd_we    <= 1'b0;

            if (aw_fire && w_fire) begin
                case (wr_addr[6:2])
                    5'h00: begin // CTRL — write-1-to-set (pulse)
                        mmio_start_dma  <= wr_data[0];
                        mmio_start_npu  <= wr_data[1];
                        mmio_swap_banks <= wr_data[2];
                        mmio_clear_done <= wr_data[3];
                    end
                    5'h02: reg_dma_cfg  <= wr_data; // 0x08
                    5'h03: reg_src_lo   <= wr_data; // 0x0C
                    5'h04: reg_src_hi   <= wr_data; // 0x10
                    5'h05: reg_burst    <= wr_data; // 0x14
                    5'h06: reg_seq      <= wr_data; // 0x18
                    5'h07: reg_acc_test <= wr_data; // 0x1C
                    5'h08: begin // DRAIN_CMD — 0x20
                        drain_row_reg <= wr_data[4:0];
                        drain_cmd_we  <= 1'b1;
                    end
                    default: ; // ignore writes to RO registers
                endcase
            end
        end
    end

    // Config → MMIO wiring
    assign mmio_dma_target                = reg_dma_cfg[0];
    assign mmio_npu_mode                  = reg_dma_cfg[4];
    assign mmio_npu_acc_clear             = reg_dma_cfg[5];
    assign mmio_src_addr                  = {reg_src_hi, reg_src_lo};
    assign mmio_burst_len                 = reg_burst[7:0];
    assign mmio_total_bursts              = reg_burst[23:8];
    assign mmio_npu_seq_len               = reg_seq[15:0];
    assign mmio_test_acc_addr_override_en = reg_acc_test[0];
    assign mmio_test_acc_addr_override    = reg_acc_test[9:1];
    assign mmio_test_one_shot_acc_clear_en = reg_acc_test[10];

    // =========================================================================
    // Drain Capture Logic (2-cycle BRAM read latency)
    // =========================================================================
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            drain_re    <= 1'b0;
            drain_addr  <= '0;
            drain_pipe  <= '0;
            drain_valid <= 1'b0;
            psum_captured <= '{default: '0};
        end else begin
            drain_re <= 1'b0;

            if (drain_cmd_we) begin
                drain_re    <= 1'b1;
                drain_addr  <= {4'd0, drain_row_reg};
                drain_pipe  <= 2'd2;
                drain_valid <= 1'b0;
            end else if (drain_pipe > 0) begin
                drain_pipe <= drain_pipe - 2'd1;
                if (drain_pipe == 2'd1) begin
                    psum_captured <= psum_drain_out;
                    drain_valid   <= 1'b1;
                end
            end
        end
    end

    // =========================================================================
    // AXI4-Lite Slave — Read Path
    // =========================================================================
    assign s_axi_rresp = 2'b00; // OKAY

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            s_axi_arready <= 1'b1;
            s_axi_rvalid  <= 1'b0;
            s_axi_rdata   <= '0;
            rd_addr_reg   <= '0;
        end else begin
            if (s_axi_arvalid && s_axi_arready) begin
                s_axi_arready <= 1'b0;
                rd_addr_reg   <= s_axi_araddr;
                s_axi_rvalid  <= 1'b1;

                // Read data mux
                case (s_axi_araddr[6:2])
                    5'h00:   s_axi_rdata <= '0;  // CTRL (write-only, reads 0)
                    5'h01:   s_axi_rdata <= {30'd0, mmio_npu_done, mmio_dma_done}; // STATUS
                    5'h02:   s_axi_rdata <= reg_dma_cfg;
                    5'h03:   s_axi_rdata <= reg_src_lo;
                    5'h04:   s_axi_rdata <= reg_src_hi;
                    5'h05:   s_axi_rdata <= reg_burst;
                    5'h06:   s_axi_rdata <= reg_seq;
                    5'h07:   s_axi_rdata <= reg_acc_test;
                    5'h08:   s_axi_rdata <= {27'd0, drain_row_reg}; // DRAIN_CMD readback
                    5'h09:   s_axi_rdata <= {31'd0, drain_valid};   // DRAIN_STS
                    // PSUM[0..15] at 0x40..0x7C → word address 0x10..0x1F
                    5'h10:   s_axi_rdata <= psum_captured[0];
                    5'h11:   s_axi_rdata <= psum_captured[1];
                    5'h12:   s_axi_rdata <= psum_captured[2];
                    5'h13:   s_axi_rdata <= psum_captured[3];
                    5'h14:   s_axi_rdata <= psum_captured[4];
                    5'h15:   s_axi_rdata <= psum_captured[5];
                    5'h16:   s_axi_rdata <= psum_captured[6];
                    5'h17:   s_axi_rdata <= psum_captured[7];
                    5'h18:   s_axi_rdata <= psum_captured[8];
                    5'h19:   s_axi_rdata <= psum_captured[9];
                    5'h1A:   s_axi_rdata <= psum_captured[10];
                    5'h1B:   s_axi_rdata <= psum_captured[11];
                    5'h1C:   s_axi_rdata <= psum_captured[12];
                    5'h1D:   s_axi_rdata <= psum_captured[13];
                    5'h1E:   s_axi_rdata <= psum_captured[14];
                    5'h1F:   s_axi_rdata <= psum_captured[15];
                    default: s_axi_rdata <= 32'hDEAD_BEEF;
                endcase
            end

            if (s_axi_rvalid && s_axi_rready) begin
                s_axi_rvalid  <= 1'b0;
                s_axi_arready <= 1'b1;
            end
        end
    end

    // =========================================================================
    // Local Test Memory (BRAM, same as fpga_system_bringup_top)
    // =========================================================================
    localparam MEM_DEPTH = 512;
    (* ram_style = "block" *)
    logic [AXI_DATA_WIDTH-1:0] test_mem [MEM_DEPTH];

    initial begin
        for (int i = 0; i < MEM_DEPTH; i++)
            test_mem[i] = '0;
        // Weight rows at beat address 0..15 (all bytes = 0x01)
        for (int row = 0; row < 16; row++)
            test_mem[row] = {16{8'h01}};
        // Activation rows at beat address 256..271 (byte[lane] = lane)
        for (int row = 0; row < 16; row++)
            for (int lane = 0; lane < 16; lane++)
                test_mem[256 + row][(lane*8) +: 8] = lane[7:0];
    end

    // =========================================================================
    // AXI4 Read Slave — serves DMA requests from local BRAM
    // =========================================================================
    logic        mem_rd_active;
    logic [8:0]  mem_rd_addr;
    logic [7:0]  mem_rd_remaining;
    /* verilator lint_off UNUSEDSIGNAL */
    logic [AXI_ID_WIDTH-1:0] mem_rd_id;
    /* verilator lint_on UNUSEDSIGNAL */

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            mem_rd_active    <= 1'b0;
            mem_rd_addr      <= '0;
            mem_rd_remaining <= '0;
            mem_rd_id        <= '0;
            axi_arready      <= 1'b1;
            axi_rvalid       <= 1'b0;
            axi_rdata        <= '0;
            axi_rlast        <= 1'b0;
            axi_rid          <= '0;
            axi_rresp        <= 2'b00;
        end else begin
            if (!mem_rd_active) begin
                axi_arready <= 1'b1;
                if (axi_arvalid && axi_arready) begin
                    mem_rd_active    <= 1'b1;
                    mem_rd_addr      <= axi_araddr[12:4];
                    mem_rd_remaining <= axi_arlen;
                    mem_rd_id        <= axi_arid;
                    axi_arready      <= 1'b0;
                    axi_rvalid       <= 1'b1;
                    axi_rdata        <= test_mem[axi_araddr[12:4]];
                    axi_rid          <= axi_arid;
                    axi_rlast        <= (axi_arlen == 0);
                end
            end else begin
                axi_arready <= 1'b0;
                if (axi_rvalid && axi_rready) begin
                    if (axi_rlast) begin
                        mem_rd_active <= 1'b0;
                        axi_rvalid    <= 1'b0;
                        axi_rlast     <= 1'b0;
                        axi_arready   <= 1'b1;
                    end else begin
                        mem_rd_addr      <= mem_rd_addr + 1;
                        mem_rd_remaining <= mem_rd_remaining - 1;
                        axi_rdata        <= test_mem[mem_rd_addr + 1];
                        axi_rlast        <= (mem_rd_remaining == 1);
                    end
                end
            end
        end
    end

    // =========================================================================
    // NPU System Instantiation
    // =========================================================================
    npu_system_top #(
        .AXI_ADDR_WIDTH (AXI_ADDR_WIDTH),
        .AXI_DATA_WIDTH (AXI_DATA_WIDTH),
        .AXI_ID_WIDTH   (AXI_ID_WIDTH)
    ) u_npu_system (
        .clk     (clk),
        .rst_n   (rst_n),
        // MMIO
        .mmio_start_dma                 (mmio_start_dma),
        .mmio_dma_target                (mmio_dma_target),
        .mmio_src_addr                  (mmio_src_addr),
        .mmio_burst_len                 (mmio_burst_len),
        .mmio_total_bursts              (mmio_total_bursts),
        .mmio_dma_done                  (mmio_dma_done),
        .mmio_swap_banks                (mmio_swap_banks),
        .mmio_start_npu                 (mmio_start_npu),
        .mmio_npu_mode                  (mmio_npu_mode),
        .mmio_npu_acc_clear             (mmio_npu_acc_clear),
        .mmio_test_acc_addr_override_en (mmio_test_acc_addr_override_en),
        .mmio_test_acc_addr_override    (mmio_test_acc_addr_override),
        .mmio_test_one_shot_acc_clear_en(mmio_test_one_shot_acc_clear_en),
        .mmio_clear_done                (mmio_clear_done),
        .mmio_npu_seq_len               (mmio_npu_seq_len),
        .mmio_npu_done                  (mmio_npu_done),
        // AXI4 Read Master → local BRAM
        .arid    (axi_arid),
        .araddr  (axi_araddr),
        .arlen   (axi_arlen),
        .arsize  (axi_arsize),
        .arburst (axi_arburst),
        .arvalid (axi_arvalid),
        .arready (axi_arready),
        .rid     (axi_rid),
        .rdata   (axi_rdata),
        .rresp   (axi_rresp),
        .rlast   (axi_rlast),
        .rvalid  (axi_rvalid),
        .rready  (axi_rready),
        // Drain
        .drain_re       (drain_re),
        .drain_addr     (drain_addr),
        .psum_drain_out (psum_drain_out)
    );

endmodule
