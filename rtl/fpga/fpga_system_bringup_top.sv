`timescale 1ns / 1ps

// ============================================================================
// FPGA System Bring-Up Top (Zynq / Standalone Self-Test)
// ============================================================================
// Integrates: axi_lite_mmio_bridge + npu_system_top
// Self-test FSM generates AXI-Lite writes to drive a weight-preload → execute
// → drain sequence using BRAM-initialized test data, then checks results.
//
// The AXI4 Read Master from npu_system_top connects to a local BRAM that
// provides test weight/activation data (initialized via readmemh or constant).
// ============================================================================

module fpga_system_bringup_top (
    input  logic       board_clk,
    input  logic       rst_btn_n,
    input  logic       start_btn,
    output logic       alive_led,
    output logic       done_led,
    output logic [3:0] debug_led
);

    // =========================================================================
    // Parameters
    // =========================================================================
    localparam AXI_ADDR_WIDTH  = 64;
    localparam AXI_DATA_WIDTH  = 256;  // 16 × 16-bit FP16
    localparam AXI_ID_WIDTH    = 4;
    localparam AXIL_ADDR_WIDTH = 5;

    // Test pattern: 16 weight rows of all-1s, 16 activation rows of lane index
    // Expected psum per output cell = sum(act[lane] * 1, lane=0..15) = 120
    // FP32(120.0) = 0x42F00000 (sum of FP16(lane) * FP16(1.0) for lane=0..15)
    localparam logic [31:0] EXPECTED_SUM = 32'h42F00000;

    // =========================================================================
    // Reset & Synchronizers
    // =========================================================================
    logic rst_n;
    logic start_sync_0, start_sync_1, start_sync_prev;
    (* mark_debug = "true" *) logic start_pulse;
    logic [23:0] heartbeat_counter;

    assign rst_n = rst_btn_n;
    assign start_pulse = start_sync_1 && !start_sync_prev;

    always_ff @(posedge board_clk) begin
        if (!rst_n) begin
            start_sync_0    <= 1'b0;
            start_sync_1    <= 1'b0;
            start_sync_prev <= 1'b0;
        end else begin
            start_sync_0    <= start_btn;
            start_sync_1    <= start_sync_0;
            start_sync_prev <= start_sync_1;
        end
    end

    always_ff @(posedge board_clk) begin
        if (!rst_n)
            heartbeat_counter <= '0;
        else
            heartbeat_counter <= heartbeat_counter + 24'd1;
    end

    assign alive_led = heartbeat_counter[23];

    // =========================================================================
    // AXI-Lite Bus Wires (Self-Test FSM ↔ MMIO Bridge)
    // =========================================================================
    /* verilator lint_off UNUSEDSIGNAL */
    logic [AXIL_ADDR_WIDTH-1:0] axil_awaddr;
    logic                       axil_awvalid, axil_awready;
    logic [31:0]                axil_wdata;
    logic [3:0]                 axil_wstrb;
    logic                       axil_wvalid,  axil_wready;
    logic [1:0]                 axil_bresp;
    logic                       axil_bvalid,  axil_bready;
    logic [AXIL_ADDR_WIDTH-1:0] axil_araddr;
    logic                       axil_arvalid, axil_arready;
    logic [31:0]                axil_rdata;
    logic [1:0]                 axil_rresp;
    logic                       axil_rvalid,  axil_rready;
    /* verilator lint_on UNUSEDSIGNAL */

    // =========================================================================
    // MMIO Wires (Bridge ↔ NPU System)
    // =========================================================================
    logic                      mmio_start_dma, mmio_dma_target;
    logic [AXI_ADDR_WIDTH-1:0] mmio_src_addr;
    logic [7:0]                mmio_burst_len;
    logic [15:0]               mmio_total_bursts;
    (* mark_debug = "true" *) logic mmio_dma_done;
    logic                      mmio_swap_banks;
    logic                      mmio_start_npu, mmio_npu_mode;
    logic                      mmio_npu_acc_clear;
    logic                      mmio_test_acc_addr_override_en;
    logic [8:0]                mmio_test_acc_addr_override;
    logic                      mmio_test_one_shot_acc_clear_en;
    logic                      mmio_clear_done;
    logic [15:0]               mmio_npu_seq_len;
    logic                      mmio_drain_start;
    logic [8:0]                mmio_drain_len;
    (* mark_debug = "true" *) logic mmio_drain_done;
    (* mark_debug = "true" *) logic mmio_npu_done;

    // =========================================================================
    // AXI4 Read Master Wires (NPU System ↔ Local Memory)
    // =========================================================================
    /* verilator lint_off UNUSEDSIGNAL */
    logic [AXI_ID_WIDTH-1:0]   axi_arid;
    logic [AXI_ADDR_WIDTH-1:0] axi_araddr;
    logic [7:0]                axi_arlen;
    logic [2:0]                axi_arsize;
    logic [1:0]                axi_arburst;
    logic                      axi_arvalid, axi_arready;
    logic [AXI_ID_WIDTH-1:0]   axi_rid;
    logic [AXI_DATA_WIDTH-1:0] axi_rdata;
    logic [1:0]                axi_rresp;
    logic                      axi_rlast;
    logic                      axi_rvalid, axi_rready;
    /* verilator lint_on UNUSEDSIGNAL */

    // =========================================================================
    // AXIS Drain RX Interface
    // =========================================================================
    (* mark_debug = "true" *) logic psum_tvalid;
    logic                           psum_tready;
    logic [511:0]                   psum_tdata;
    logic                           psum_tlast;

    // =========================================================================
    // Local AXI4 Read Responder (Simple BRAM-backed memory)
    // =========================================================================
    // Memory layout (byte address):
    //   0x0000 ~ 0x00FF : Weight data  (16 rows × 16B each = 256B = 16 beats)
    //   0x2000 ~ 0x20FF : Activation data (16 rows × 16B each)
    //
    // BRAM is 128-bit wide, indexed by beat address.
    // Weight row i:   all bytes = 0x01 (weight = 1)
    // Act row i:      byte[lane] = lane (0, 1, 2, ..., 15)
    // =========================================================================
    localparam MEM_DEPTH = 512; // enough to cover both regions
    (* ram_style = "block" *)
    logic [AXI_DATA_WIDTH-1:0] test_mem [MEM_DEPTH];

    // Initialize test memory contents
    initial begin
        // Clear all
        for (int i = 0; i < MEM_DEPTH; i++)
            test_mem[i] = '0;

        // Weight rows at beat address 0..15 (byte 0x0000)
        // Each 256-bit word = 16 × FP16(1.0) = 16 × 16'h3C00
        for (int row = 0; row < 16; row++)
            test_mem[row] = {16{16'h3C00}};

        // Activation rows at beat address 256..271 (byte 0x2000, beat = 0x2000/32)
        // Each lane[i] = FP16(float(i))
        for (int row = 0; row < 16; row++) begin
            test_mem[128 + row] = '0; // beat addr for 32-byte words: 0x2000/32 = 256 → use 128 for 256-bit
            for (int lane = 0; lane < 16; lane++) begin
                // Pre-computed FP16 values for lanes 0-15
                case (lane)
                    0:  test_mem[128 + row][(lane*16) +: 16] = 16'h0000; // 0.0
                    1:  test_mem[128 + row][(lane*16) +: 16] = 16'h3C00; // 1.0
                    2:  test_mem[128 + row][(lane*16) +: 16] = 16'h4000; // 2.0
                    3:  test_mem[128 + row][(lane*16) +: 16] = 16'h4200; // 3.0
                    4:  test_mem[128 + row][(lane*16) +: 16] = 16'h4400; // 4.0
                    5:  test_mem[128 + row][(lane*16) +: 16] = 16'h4500; // 5.0
                    6:  test_mem[128 + row][(lane*16) +: 16] = 16'h4600; // 6.0
                    7:  test_mem[128 + row][(lane*16) +: 16] = 16'h4700; // 7.0
                    8:  test_mem[128 + row][(lane*16) +: 16] = 16'h4800; // 8.0
                    9:  test_mem[128 + row][(lane*16) +: 16] = 16'h4880; // 9.0
                    10: test_mem[128 + row][(lane*16) +: 16] = 16'h4900; // 10.0
                    11: test_mem[128 + row][(lane*16) +: 16] = 16'h4980; // 11.0
                    12: test_mem[128 + row][(lane*16) +: 16] = 16'h4A00; // 12.0
                    13: test_mem[128 + row][(lane*16) +: 16] = 16'h4A80; // 13.0
                    14: test_mem[128 + row][(lane*16) +: 16] = 16'h4B00; // 14.0
                    15: test_mem[128 + row][(lane*16) +: 16] = 16'h4B80; // 15.0
                endcase
            end
        end
    end

    // AXI4 Read Slave FSM (simplified: no outstanding, single burst)
    logic        mem_rd_active;
    logic [8:0]  mem_rd_addr;     // beat address
    logic [7:0]  mem_rd_remaining; // beats left in burst
    /* verilator lint_off UNUSEDSIGNAL */
    logic [AXI_ID_WIDTH-1:0] mem_rd_id;
    /* verilator lint_on UNUSEDSIGNAL */

    always_ff @(posedge board_clk) begin
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
                // Accept AR
                axi_arready <= 1'b1;
                if (axi_arvalid && axi_arready) begin
                    mem_rd_active    <= 1'b1;
                    // Convert byte address to beat address (256b = 32B per beat)
                    mem_rd_addr      <= axi_araddr[13:5];
                    mem_rd_remaining <= axi_arlen;
                    mem_rd_id        <= axi_arid;
                    axi_arready      <= 1'b0;
                    // Drive first beat
                    axi_rvalid       <= 1'b1;
                    axi_rdata        <= test_mem[axi_araddr[13:5]];
                    axi_rid          <= axi_arid;
                    axi_rlast        <= (axi_arlen == 0);
                end
            end else begin
                // In burst
                axi_arready <= 1'b0;
                if (axi_rvalid && axi_rready) begin
                    if (axi_rlast) begin
                        // Burst complete
                        mem_rd_active <= 1'b0;
                        axi_rvalid    <= 1'b0;
                        axi_rlast     <= 1'b0;
                        axi_arready   <= 1'b1;
                    end else begin
                        // Next beat
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
    // Self-Test FSM — drives AXI-Lite writes to orchestrate the NPU
    // =========================================================================
    typedef enum logic [4:0] {
        ST_IDLE          = 5'd0,
        // DMA weight
        ST_CFG_WT        = 5'd1,   // Write DMA_CFG: target=weight, mode=preload
        ST_SRC_WT        = 5'd2,   // Write DMA_SRC_LO: weight base address
        ST_BURST_WT      = 5'd3,   // Write DMA_BURST: len=15, bursts=1
        ST_START_DMA_WT  = 5'd4,   // Write CTRL: start_dma
        ST_WAIT_DMA_WT   = 5'd5,   // Poll STATUS until dma_done
        // Swap + preload
        ST_SWAP_PRELOAD  = 5'd6,   // Write CTRL: swap_banks + start_npu (mode=preload)
        ST_WAIT_PRELOAD  = 5'd7,   // Poll STATUS until npu_done
        // DMA activation + execute
        ST_CFG_ACT       = 5'd8,   // Write DMA_CFG: target=act, mode=execute
        ST_SRC_ACT       = 5'd9,   // Write DMA_SRC_LO
        ST_START_DMA_ACT = 5'd10,  // Write CTRL: start_dma
        ST_WAIT_DMA_ACT  = 5'd11,  // Poll STATUS until dma_done
        // Swap + execute
        ST_SWAP_EXEC     = 5'd12,  // Write CTRL: swap_banks + start_npu
        ST_WAIT_EXEC     = 5'd13,  // Poll STATUS until npu_done
        // Drain & check
        ST_CFG_DRAIN     = 5'd14,  // Write NPU_SEQ: drain_len
        ST_START_DRAIN   = 5'd15,  // Write CTRL: drain_start
        ST_WAIT_DRAIN    = 5'd16,  // Receive AXIS Stream & Compare
        ST_DONE          = 5'd17
    } selftest_state_t;

    (* mark_debug = "true" *) selftest_state_t st_state;
    (* mark_debug = "true" *) logic done_latched, result_match_latched;

    assign done_led = done_latched;
    assign debug_led = {result_match_latched, st_state[2:0]};

    // AXI-Lite write helper signals
    logic        axil_wr_go;
    logic [4:0]  axil_wr_addr_val;
    logic [31:0] axil_wr_data_val;
    logic        axil_wr_done;

    // AXI-Lite read helper signals
    logic        axil_rd_go;
    logic [4:0]  axil_rd_addr_val;
    /* verilator lint_off UNUSEDSIGNAL */
    logic [31:0] axil_rd_result;
    /* verilator lint_on UNUSEDSIGNAL */
    logic        axil_rd_done;

    // Simple AXI-Lite write driver
    (* mark_debug = "true" *) enum logic [1:0] { WR_IDLE, WR_ADDR, WR_DATA, WR_RESP } wr_phase;

    always_ff @(posedge board_clk) begin
        if (!rst_n) begin
            wr_phase     <= WR_IDLE;
            axil_awvalid <= 1'b0;
            axil_wvalid  <= 1'b0;
            axil_bready  <= 1'b0;
            axil_wr_done <= 1'b0;
        end else begin
            axil_wr_done <= 1'b0;
            case (wr_phase)
                WR_IDLE: begin
                    if (axil_wr_go) begin
                        axil_awvalid <= 1'b1;
                        axil_awaddr  <= axil_wr_addr_val;
                        axil_wvalid  <= 1'b1;
                        axil_wdata   <= axil_wr_data_val;
                        axil_wstrb   <= 4'hF;
                        wr_phase     <= WR_ADDR;
                    end
                end
                WR_ADDR: begin
                    if (axil_awready) axil_awvalid <= 1'b0;
                    if (axil_wready)  axil_wvalid  <= 1'b0;
                    if ((!axil_awvalid || axil_awready) &&
                        (!axil_wvalid  || axil_wready)) begin
                        axil_bready <= 1'b1;
                        wr_phase    <= WR_RESP;
                    end
                end
                WR_DATA: begin
                    // Merged into WR_ADDR
                    wr_phase <= WR_RESP;
                end
                WR_RESP: begin
                    if (axil_bvalid) begin
                        axil_bready  <= 1'b0;
                        axil_wr_done <= 1'b1;
                        wr_phase     <= WR_IDLE;
                    end
                end
            endcase
        end
    end

    // Simple AXI-Lite read driver
    (* mark_debug = "true" *) enum logic [1:0] { RD_IDLE, RD_ADDR, RD_DATA } rd_phase;

    always_ff @(posedge board_clk) begin
        if (!rst_n) begin
            rd_phase     <= RD_IDLE;
            axil_arvalid <= 1'b0;
            axil_rready  <= 1'b0;
            axil_rd_done <= 1'b0;
            axil_rd_result <= '0;
        end else begin
            axil_rd_done <= 1'b0;
            case (rd_phase)
                RD_IDLE: begin
                    if (axil_rd_go) begin
                        axil_arvalid <= 1'b1;
                        axil_araddr  <= axil_rd_addr_val;
                        rd_phase     <= RD_ADDR;
                    end
                end
                RD_ADDR: begin
                    if (axil_arready) begin
                        axil_arvalid <= 1'b0;
                        axil_rready  <= 1'b1;
                        rd_phase     <= RD_DATA;
                    end
                end
                RD_DATA: begin
                    if (axil_rvalid) begin
                        axil_rd_result <= axil_rdata;
                        axil_rready    <= 1'b0;
                        axil_rd_done   <= 1'b1;
                        rd_phase       <= RD_IDLE;
                    end
                end
                default: rd_phase <= RD_IDLE;
            endcase
        end
    end

    // =========================================================================
    // Main Self-Test FSM
    // =========================================================================
    // Register map offsets
    localparam ADDR_CTRL      = 5'h00;
    localparam ADDR_STATUS    = 5'h04;
    localparam ADDR_DMA_CFG   = 5'h08;
    localparam ADDR_SRC_LO    = 5'h0C;
    localparam ADDR_DMA_BURST = 5'h14;
    localparam ADDR_NPU_SEQ   = 5'h18;

    logic [1:0] drain_phase; // sub-state for drain
    logic [4:0] drain_row;

    always_ff @(posedge board_clk) begin
        if (!rst_n) begin
            st_state            <= ST_IDLE;
            done_latched        <= 1'b0;
            result_match_latched <= 1'b0;
            axil_wr_go          <= 1'b0;
            axil_rd_go          <= 1'b0;
            axil_wr_addr_val    <= '0;
            axil_wr_data_val    <= '0;
            axil_rd_addr_val    <= '0;
            psum_tready         <= 1'b0;
            drain_phase         <= '0;
            drain_row           <= '0;
        end else begin
            // Default: clear one-shot go signals
            axil_wr_go  <= 1'b0;
            axil_rd_go  <= 1'b0;
            psum_tready <= 1'b0;

            case (st_state)
                // ---- IDLE ----
                ST_IDLE: begin
                    if (start_pulse) begin
                        done_latched        <= 1'b0;
                        result_match_latched <= 1'b0;
                        drain_row           <= '0;
                        st_state            <= ST_CFG_WT;
                    end
                end

                // ---- DMA Weight ----
                ST_CFG_WT: begin
                    // DMA_CFG: dma_target=1(weight), npu_mode=1(preload), acc_clear=1
                    if (wr_phase == WR_IDLE && !axil_wr_go) begin
                        axil_wr_addr_val <= ADDR_DMA_CFG;
                        axil_wr_data_val <= 32'h0000_0031; // bit0=target(1), bit4=mode(1), bit5=acc_clear(1)
                        axil_wr_go       <= 1'b1;
                    end
                    if (axil_wr_done) st_state <= ST_SRC_WT;
                end

                ST_SRC_WT: begin
                    // DMA_SRC_LO: weight base = 0x0000
                    if (wr_phase == WR_IDLE && !axil_wr_go) begin
                        axil_wr_addr_val <= ADDR_SRC_LO;
                        axil_wr_data_val <= 32'h0000_0000;
                        axil_wr_go       <= 1'b1;
                    end
                    if (axil_wr_done) st_state <= ST_BURST_WT;
                end

                ST_BURST_WT: begin
                    // DMA_BURST: burst_len=15, total_bursts=1
                    if (wr_phase == WR_IDLE && !axil_wr_go) begin
                        axil_wr_addr_val <= ADDR_DMA_BURST;
                        axil_wr_data_val <= {8'd0, 16'd1, 8'd15};
                        axil_wr_go       <= 1'b1;
                    end
                    if (axil_wr_done) st_state <= ST_START_DMA_WT;
                end

                ST_START_DMA_WT: begin
                    // CTRL: start_dma(bit0)
                    if (wr_phase == WR_IDLE && !axil_wr_go) begin
                        axil_wr_addr_val <= ADDR_CTRL;
                        axil_wr_data_val <= 32'h0000_0001;
                        axil_wr_go       <= 1'b1;
                    end
                    if (axil_wr_done) st_state <= ST_WAIT_DMA_WT;
                end

                ST_WAIT_DMA_WT: begin
                    // Poll STATUS.dma_done (bit0)
                    if (rd_phase == RD_IDLE && !axil_rd_go) begin
                        axil_rd_addr_val <= ADDR_STATUS;
                        axil_rd_go       <= 1'b1;
                    end
                    if (axil_rd_done) begin
                        if (axil_rd_result[0]) begin
                            st_state <= ST_SWAP_PRELOAD;
                        end
                        // else: will re-poll next cycle
                    end
                end

                // ---- Swap + Preload ----
                ST_SWAP_PRELOAD: begin
                    // CTRL: swap_banks(bit2) + start_npu(bit1) + clear_done(bit3)
                    if (wr_phase == WR_IDLE && !axil_wr_go) begin
                        axil_wr_addr_val <= ADDR_CTRL;
                        axil_wr_data_val <= 32'h0000_000E; // bit1+bit2+bit3
                        axil_wr_go       <= 1'b1;
                    end
                    if (axil_wr_done) st_state <= ST_WAIT_PRELOAD;
                end

                ST_WAIT_PRELOAD: begin
                    // Poll STATUS.npu_done (bit1)
                    if (rd_phase == RD_IDLE && !axil_rd_go) begin
                        axil_rd_addr_val <= ADDR_STATUS;
                        axil_rd_go       <= 1'b1;
                    end
                    if (axil_rd_done && axil_rd_result[1])
                        st_state <= ST_CFG_ACT;
                end

                // ---- DMA Activation ----
                ST_CFG_ACT: begin
                    // DMA_CFG: dma_target=0(act), npu_mode=0(execute), acc_clear=1
                    if (wr_phase == WR_IDLE && !axil_wr_go) begin
                        axil_wr_addr_val <= ADDR_DMA_CFG;
                        axil_wr_data_val <= 32'h0000_0020; // bit5=acc_clear only
                        axil_wr_go       <= 1'b1;
                    end
                    if (axil_wr_done) st_state <= ST_SRC_ACT;
                end

                ST_SRC_ACT: begin
                    // DMA_SRC_LO: activation base = 0x2000
                    if (wr_phase == WR_IDLE && !axil_wr_go) begin
                        axil_wr_addr_val <= ADDR_SRC_LO;
                        axil_wr_data_val <= 32'h0000_2000;
                        axil_wr_go       <= 1'b1;
                    end
                    if (axil_wr_done) st_state <= ST_START_DMA_ACT;
                end

                ST_START_DMA_ACT: begin
                    // CTRL: start_dma(bit0)
                    if (wr_phase == WR_IDLE && !axil_wr_go) begin
                        axil_wr_addr_val <= ADDR_CTRL;
                        axil_wr_data_val <= 32'h0000_0001;
                        axil_wr_go       <= 1'b1;
                    end
                    if (axil_wr_done) st_state <= ST_WAIT_DMA_ACT;
                end

                ST_WAIT_DMA_ACT: begin
                    // Poll STATUS.dma_done
                    if (rd_phase == RD_IDLE && !axil_rd_go) begin
                        axil_rd_addr_val <= ADDR_STATUS;
                        axil_rd_go       <= 1'b1;
                    end
                    if (axil_rd_done && axil_rd_result[0])
                        st_state <= ST_SWAP_EXEC;
                end

                // ---- Swap + Execute ----
                ST_SWAP_EXEC: begin
                    // First write NPU_SEQ = 16
                    // Then CTRL: swap_banks + start_npu + clear_done
                    if (wr_phase == WR_IDLE && !axil_wr_go) begin
                        if (drain_phase == 0) begin
                            // Phase 0: write seq_len
                            axil_wr_addr_val <= ADDR_NPU_SEQ;
                            axil_wr_data_val <= 32'd16;
                            axil_wr_go       <= 1'b1;
                        end else begin
                            // Phase 1: fire swap+start+clear
                            axil_wr_addr_val <= ADDR_CTRL;
                            axil_wr_data_val <= 32'h0000_000E; // bit1+bit2+bit3
                            axil_wr_go       <= 1'b1;
                        end
                    end
                    if (axil_wr_done) begin
                        if (drain_phase == 0) begin
                            drain_phase <= 2'd1;
                        end else begin
                            drain_phase <= '0;
                            st_state    <= ST_WAIT_EXEC;
                        end
                    end
                end

                ST_WAIT_EXEC: begin
                    // Poll STATUS.npu_done
                    if (rd_phase == RD_IDLE && !axil_rd_go) begin
                        axil_rd_addr_val <= ADDR_STATUS;
                        axil_rd_go       <= 1'b1;
                    end
                    if (axil_rd_done && axil_rd_result[1])
                        st_state <= ST_CFG_DRAIN;
                end

                ST_CFG_DRAIN: begin
                    // Write NPU_SEQ (drain_len = 16 => [24:16])
                    if (wr_phase == WR_IDLE && !axil_wr_go) begin
                        axil_wr_addr_val <= ADDR_NPU_SEQ;
                        axil_wr_data_val <= 32'h0010_0000; // drain_len=16, seq_len=0
                        axil_wr_go       <= 1'b1;
                    end
                    if (axil_wr_done) st_state <= ST_START_DRAIN;
                end

                ST_START_DRAIN: begin
                    // Write CTRL: drain_start (bit 4)
                    if (wr_phase == WR_IDLE && !axil_wr_go) begin
                        axil_wr_addr_val <= ADDR_CTRL;
                        axil_wr_data_val <= 32'h0000_0010; // bit 4
                        axil_wr_go       <= 1'b1;
                    end
                    if (axil_wr_done) begin
                        st_state    <= ST_WAIT_DRAIN;
                        drain_row   <= '0;
                    end
                end

                ST_WAIT_DRAIN: begin
                    // Accept AXIS psum_tvalid
                    psum_tready <= 1'b1;
                    if (psum_tvalid && psum_tready) begin
                        // Check data
                        if (drain_row == 0) begin
                            result_match_latched <= (psum_tdata[31:0] == EXPECTED_SUM) &&
                                                    (psum_tdata[511:480] == EXPECTED_SUM);
                        end else begin
                            if ((psum_tdata[31:0] != EXPECTED_SUM) ||
                                (psum_tdata[511:480] != EXPECTED_SUM))
                                result_match_latched <= 1'b0;
                        end

                        drain_row <= drain_row + 1;
                        if (psum_tlast) begin
                            st_state    <= ST_DONE;
                            psum_tready <= 1'b0;
                        end
                    end
                end

                ST_DONE: begin
                    done_latched <= 1'b1;
                    if (start_pulse) begin
                        done_latched        <= 1'b0;
                        result_match_latched <= 1'b0;
                        drain_row           <= '0;
                        drain_phase         <= '0;
                        st_state            <= ST_CFG_WT;
                    end
                end

                default: st_state <= ST_IDLE;
            endcase
        end
    end

    // =========================================================================
    // Module Instantiations
    // =========================================================================

    axi_lite_mmio_bridge #(
        .AXI_ADDR_WIDTH (AXI_ADDR_WIDTH),
        .ADDR_WIDTH     (AXIL_ADDR_WIDTH)
    ) u_axil_bridge (
        .clk    (board_clk),
        .rst_n  (rst_n),
        // AXI-Lite
        .s_axil_awaddr  (axil_awaddr),
        .s_axil_awvalid (axil_awvalid),
        .s_axil_awready (axil_awready),
        .s_axil_wdata   (axil_wdata),
        .s_axil_wstrb   (axil_wstrb),
        .s_axil_wvalid  (axil_wvalid),
        .s_axil_wready  (axil_wready),
        .s_axil_bresp   (axil_bresp),
        .s_axil_bvalid  (axil_bvalid),
        .s_axil_bready  (axil_bready),
        .s_axil_araddr  (axil_araddr),
        .s_axil_arvalid (axil_arvalid),
        .s_axil_arready (axil_arready),
        .s_axil_rdata   (axil_rdata),
        .s_axil_rresp   (axil_rresp),
        .s_axil_rvalid  (axil_rvalid),
        .s_axil_rready  (axil_rready),
        // MMIO out
        .mmio_start_dma                 (mmio_start_dma),
        .mmio_dma_target                (mmio_dma_target),
        .mmio_src_addr                  (mmio_src_addr),
        .mmio_burst_len                 (mmio_burst_len),
        .mmio_total_bursts              (mmio_total_bursts),
        .mmio_swap_banks                (mmio_swap_banks),
        .mmio_start_npu                 (mmio_start_npu),
        .mmio_npu_mode                  (mmio_npu_mode),
        .mmio_npu_acc_clear             (mmio_npu_acc_clear),
        .mmio_test_acc_addr_override_en (mmio_test_acc_addr_override_en),
        .mmio_test_acc_addr_override    (mmio_test_acc_addr_override),
        .mmio_test_one_shot_acc_clear_en(mmio_test_one_shot_acc_clear_en),
        .mmio_clear_done                (mmio_clear_done),
        .mmio_npu_seq_len               (mmio_npu_seq_len),
        .mmio_drain_start               (mmio_drain_start),
        .mmio_drain_len                 (mmio_drain_len),
        // MMIO in
        .mmio_dma_done  (mmio_dma_done),
        .mmio_npu_done  (mmio_npu_done),
        .mmio_drain_done(mmio_drain_done)
    );

    npu_system_top #(
        .AXI_ADDR_WIDTH  (AXI_ADDR_WIDTH),
        .AXI_DATA_WIDTH  (AXI_DATA_WIDTH),
        .AXI_ID_WIDTH    (AXI_ID_WIDTH)
    ) u_npu_system (
        .clk     (board_clk),
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
        // AXI4 Read Master → local memory
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
        // --- MMIO Drain Control Interface ---
        .mmio_drain_start   (mmio_drain_start),
        .mmio_drain_len     (mmio_drain_len),
        .mmio_drain_done    (mmio_drain_done),
        // --- AXIS TX for Partial Sum Drain ---
        .m_axis_psum_tvalid (psum_tvalid),
        .m_axis_psum_tready (psum_tready),
        .m_axis_psum_tdata  (psum_tdata),
        .m_axis_psum_tlast  (psum_tlast)
    );

endmodule
