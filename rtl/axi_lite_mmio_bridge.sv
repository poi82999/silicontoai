`timescale 1ns / 1ps

// ============================================================================
// AXI4-Lite Slave → NPU MMIO Register Bridge
// ============================================================================
// Register Map (32-bit aligned):
//   0x00  CTRL      [W1S] bit0=start_dma, bit1=start_npu, bit2=swap_banks,
//                         bit3=clear_done
//   0x04  STATUS    [RO]  bit0=dma_done, bit1=npu_done
//   0x08  DMA_CFG   [RW]  bit0=dma_target, bit4=npu_mode, bit5=acc_clear,
//                         bit6=test_acc_addr_override_en,
//                         bit7=test_one_shot_acc_clear_en
//   0x0C  DMA_SRC_LO [RW] mmio_src_addr[31:0]
//   0x10  DMA_SRC_HI [RW] mmio_src_addr[63:32]
//   0x14  DMA_BURST  [RW] [7:0]=burst_len, [23:8]=total_bursts
//   0x18  NPU_SEQ    [RW] [15:0]=npu_seq_len
//   0x1C  ACC_TEST   [RW] [8:0]=acc_addr_override
// ============================================================================

module axi_lite_mmio_bridge #(
    parameter AXI_ADDR_WIDTH = 64,
    parameter ADDR_WIDTH     = 5   // 8 registers × 4 bytes = 32 bytes → 5 bits
)(
    input  logic        clk,
    input  logic        rst_n,

    // --- AXI4-Lite Slave Interface ---
    // Write Address
    input  logic [ADDR_WIDTH-1:0] s_axil_awaddr,
    input  logic                  s_axil_awvalid,
    output logic                  s_axil_awready,
    // Write Data
    input  logic [31:0]           s_axil_wdata,
    /* verilator lint_off UNUSEDSIGNAL */
    input  logic [3:0]            s_axil_wstrb,
    /* verilator lint_on UNUSEDSIGNAL */
    input  logic                  s_axil_wvalid,
    output logic                  s_axil_wready,
    // Write Response
    output logic [1:0]            s_axil_bresp,
    output logic                  s_axil_bvalid,
    input  logic                  s_axil_bready,
    // Read Address
    /* verilator lint_off UNUSEDSIGNAL */
    input  logic [ADDR_WIDTH-1:0] s_axil_araddr,
    /* verilator lint_on UNUSEDSIGNAL */
    input  logic                  s_axil_arvalid,
    output logic                  s_axil_arready,
    // Read Data
    output logic [31:0]           s_axil_rdata,
    output logic [1:0]            s_axil_rresp,
    output logic                  s_axil_rvalid,
    input  logic                  s_axil_rready,

    // --- MMIO Output to npu_system_top ---
    output logic                      mmio_start_dma,
    output logic                      mmio_dma_target,
    output logic [AXI_ADDR_WIDTH-1:0] mmio_src_addr,
    output logic [7:0]                mmio_burst_len,
    output logic [15:0]               mmio_total_bursts,
    output logic                      mmio_swap_banks,
    output logic                      mmio_start_npu,
    output logic                      mmio_npu_mode,
    output logic                      mmio_npu_acc_clear,
    output logic                      mmio_test_acc_addr_override_en,
    output logic [8:0]                mmio_test_acc_addr_override,
    output logic                      mmio_test_one_shot_acc_clear_en,
    output logic                      mmio_clear_done,
    output logic [15:0]               mmio_npu_seq_len,

    // --- MMIO Input from npu_system_top ---
    input  logic                      mmio_dma_done,
    input  logic                      mmio_npu_done
);

    // =========================================================================
    // AXI-Lite Handshake Logic
    // =========================================================================
    logic aw_fire, w_fire, wr_pending;
    logic [ADDR_WIDTH-1:0] aw_addr_reg;
    logic [31:0]           w_data_reg;

    assign aw_fire = s_axil_awvalid && s_axil_awready;
    assign w_fire  = s_axil_wvalid  && s_axil_wready;

    // Accept AW and W independently, process write when both received
    logic aw_received, w_received;

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            aw_received <= 1'b0;
            w_received  <= 1'b0;
            aw_addr_reg <= '0;
            w_data_reg  <= '0;
        end else begin
            if (aw_fire) begin
                aw_received <= 1'b1;
                aw_addr_reg <= s_axil_awaddr;
            end
            if (w_fire) begin
                w_received <= 1'b1;
                w_data_reg <= s_axil_wdata;
            end
            // Both received → clear for next transaction
            if ((aw_received || aw_fire) && (w_received || w_fire)) begin
                aw_received <= 1'b0;
                w_received  <= 1'b0;
            end
        end
    end

    assign s_axil_awready = !aw_received;
    assign s_axil_wready  = !w_received;

    // Write fires when both address and data are available
    assign wr_pending = (aw_received || aw_fire) && (w_received || w_fire);

    /* verilator lint_off UNUSEDSIGNAL */
    wire [ADDR_WIDTH-1:0] wr_addr = aw_fire ? s_axil_awaddr : aw_addr_reg;
    /* verilator lint_on UNUSEDSIGNAL */
    wire [31:0]           wr_data = w_fire  ? s_axil_wdata  : w_data_reg;

    // Write Response
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            s_axil_bvalid <= 1'b0;
        end else begin
            if (wr_pending && !s_axil_bvalid) begin
                s_axil_bvalid <= 1'b1;
            end else if (s_axil_bready && s_axil_bvalid) begin
                s_axil_bvalid <= 1'b0;
            end
        end
    end
    assign s_axil_bresp = 2'b00; // OKAY

    // =========================================================================
    // Read Channel
    // =========================================================================
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            s_axil_rvalid <= 1'b0;
            s_axil_rdata  <= '0;
        end else begin
            if (s_axil_arvalid && s_axil_arready) begin
                s_axil_rvalid <= 1'b1;
                case (s_axil_araddr[4:2])
                    3'h0: s_axil_rdata <= 32'd0; // CTRL is write-only pulse
                    3'h1: s_axil_rdata <= {30'd0, mmio_npu_done, mmio_dma_done};
                    3'h2: s_axil_rdata <= {24'd0,
                                           mmio_test_one_shot_acc_clear_en,
                                           mmio_test_acc_addr_override_en,
                                           mmio_npu_acc_clear,
                                           mmio_npu_mode,
                                           3'd0,
                                           mmio_dma_target};
                    3'h3: s_axil_rdata <= mmio_src_addr[31:0];
                    3'h4: s_axil_rdata <= mmio_src_addr[63:32];
                    3'h5: s_axil_rdata <= {8'd0, mmio_total_bursts, mmio_burst_len};
                    3'h6: s_axil_rdata <= {16'd0, mmio_npu_seq_len};
                    3'h7: s_axil_rdata <= {23'd0, mmio_test_acc_addr_override};
                    default: s_axil_rdata <= 32'hDEAD_BEEF;
                endcase
            end else if (s_axil_rvalid && s_axil_rready) begin
                s_axil_rvalid <= 1'b0;
            end
        end
    end
    assign s_axil_arready = !s_axil_rvalid;
    assign s_axil_rresp   = 2'b00; // OKAY

    // =========================================================================
    // Register Write Decode
    // =========================================================================
    // CTRL (0x00) — Write-1-to-Set pulse outputs (self-clearing each cycle)
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            mmio_start_dma  <= 1'b0;
            mmio_start_npu  <= 1'b0;
            mmio_swap_banks <= 1'b0;
            mmio_clear_done <= 1'b0;
        end else begin
            // Default: clear pulse signals every cycle
            mmio_start_dma  <= 1'b0;
            mmio_start_npu  <= 1'b0;
            mmio_swap_banks <= 1'b0;
            mmio_clear_done <= 1'b0;

            if (wr_pending && wr_addr[4:2] == 3'h0) begin
                mmio_start_dma  <= wr_data[0];
                mmio_start_npu  <= wr_data[1];
                mmio_swap_banks <= wr_data[2];
                mmio_clear_done <= wr_data[3];
            end
        end
    end

    // DMA_CFG (0x08) — Latching configuration bits
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            mmio_dma_target                <= 1'b0;
            mmio_npu_mode                  <= 1'b0;
            mmio_npu_acc_clear             <= 1'b0;
            mmio_test_acc_addr_override_en <= 1'b0;
            mmio_test_one_shot_acc_clear_en <= 1'b0;
        end else if (wr_pending && wr_addr[4:2] == 3'h2) begin
            mmio_dma_target                <= wr_data[0];
            mmio_npu_mode                  <= wr_data[4];
            mmio_npu_acc_clear             <= wr_data[5];
            mmio_test_acc_addr_override_en <= wr_data[6];
            mmio_test_one_shot_acc_clear_en <= wr_data[7];
        end
    end

    // DMA_SRC_LO (0x0C)
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            mmio_src_addr[31:0] <= '0;
        end else if (wr_pending && wr_addr[4:2] == 3'h3) begin
            mmio_src_addr[31:0] <= wr_data;
        end
    end

    // DMA_SRC_HI (0x10)
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            mmio_src_addr[63:32] <= '0;
        end else if (wr_pending && wr_addr[4:2] == 3'h4) begin
            mmio_src_addr[63:32] <= wr_data;
        end
    end

    // DMA_BURST (0x14)
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            mmio_burst_len   <= '0;
            mmio_total_bursts <= '0;
        end else if (wr_pending && wr_addr[4:2] == 3'h5) begin
            mmio_burst_len    <= wr_data[7:0];
            mmio_total_bursts <= wr_data[23:8];
        end
    end

    // NPU_SEQ (0x18)
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            mmio_npu_seq_len <= '0;
        end else if (wr_pending && wr_addr[4:2] == 3'h6) begin
            mmio_npu_seq_len <= wr_data[15:0];
        end
    end

    // ACC_TEST (0x1C)
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            mmio_test_acc_addr_override <= '0;
        end else if (wr_pending && wr_addr[4:2] == 3'h7) begin
            mmio_test_acc_addr_override <= wr_data[8:0];
        end
    end

endmodule
