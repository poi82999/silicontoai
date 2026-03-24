`timescale 1ns / 1ps

module npu_system_top #(
    parameter AXI_ADDR_WIDTH  = 64,
    parameter AXI_DATA_WIDTH  = 128, // NPU Vector Width (16 * 8b)에 맞춤
    parameter AXI_ID_WIDTH    = 4,
    parameter SRAM_ADDR_WIDTH = 10
)(
    input  logic clk,
    input  logic rst_n,

    // --- MMIO Control Interface (From Host/C++) ---
    input  logic                      mmio_start_dma,
    input  logic                      mmio_dma_target, // 0: Load Act, 1: Load Weight
    input  logic [AXI_ADDR_WIDTH-1:0] mmio_src_addr,
    input  logic [7:0]                mmio_burst_len,
    input  logic [15:0]               mmio_total_bursts,
    output logic                      mmio_dma_done,

    input  logic                      mmio_swap_banks, // Ping-Pong 교대 트리거
    input  logic                      mmio_start_npu,
    input  logic                      mmio_npu_mode, // 0: Execute Activations, 1: Pre-load Weights
    input  logic                      mmio_npu_acc_clear,
    input  logic                      mmio_test_acc_addr_override_en,
    input  logic [8:0]                mmio_test_acc_addr_override,
    input  logic                      mmio_test_one_shot_acc_clear_en,
    input  logic                      mmio_clear_done,
    input  logic [15:0]               mmio_npu_seq_len, // 연산할 텐서 길이
    output logic                      mmio_npu_done,

    // --- AXI4 Read Master Interface (To Main Memory) ---
    output logic [AXI_ID_WIDTH-1:0]   arid,
    output logic [AXI_ADDR_WIDTH-1:0] araddr,
    output logic [7:0]                arlen,
    output logic [2:0]                arsize,
    output logic [1:0]                arburst,
    output logic                      arvalid,
    input  logic                      arready,

    /* verilator lint_off UNUSEDSIGNAL */
    input  logic [AXI_ID_WIDTH-1:0]   rid,
    input  logic [AXI_DATA_WIDTH-1:0] rdata,
    input  logic [1:0]                rresp,
    /* verilator lint_on UNUSEDSIGNAL */
    input  logic                      rlast,
    input  logic                      rvalid,
    output logic                      rready,

    // --- Drain Interface (Psum Output) ---
    input  logic                      drain_re,
    input  logic [8:0]                drain_addr,
    output logic [15:0][31:0]         psum_drain_out
);

    // =========================================================================
    // 1. Ping-Pong Toggle Logic
    // =========================================================================
    // bank_sel == 0: DMA writes Bank 0, NPU reads Bank 1
    // bank_sel == 1: DMA writes Bank 1, NPU reads Bank 0
    logic bank_sel;
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) bank_sel <= 1'b0;
        else if (mmio_swap_banks) bank_sel <= ~bank_sel;
    end

    // =========================================================================
    // 2. DMA Controller Instance
    // =========================================================================
    logic                       dma_sram_wen;
    logic [SRAM_ADDR_WIDTH-1:0] dma_sram_addr;
    logic [AXI_DATA_WIDTH-1:0]  dma_sram_wdata;

    dma_controller #(
        .AXI_ADDR_WIDTH(AXI_ADDR_WIDTH),
        .AXI_DATA_WIDTH(AXI_DATA_WIDTH),
        .AXI_ID_WIDTH(AXI_ID_WIDTH),
        .SRAM_ADDR_WIDTH(SRAM_ADDR_WIDTH)
    ) u_dma (
        .clk            (clk),
        .rst_n          (rst_n),
        .start_dma      (mmio_start_dma),
        .src_addr_base  (mmio_src_addr),
        .burst_len      (mmio_burst_len),
        .total_bursts   (mmio_total_bursts),
        .dma_done       (mmio_dma_done),
        // AXI Interfaces
        .arid(arid), .araddr(araddr), .arlen(arlen), .arsize(arsize), .arburst(arburst),
        .arvalid(arvalid), .arready(arready),
        .rid(rid), .rdata(rdata), .rresp(rresp), .rlast(rlast), .rvalid(rvalid), .rready(rready),
        // SRAM Write
        .sram_wen       (dma_sram_wen),
        .sram_addr      (dma_sram_addr),
        .sram_wdata     (dma_sram_wdata)
    );

    // =========================================================================
    // 3. Write DEMUX (DMA -> SRAM)
    // =========================================================================
    // Write Port Routing (DMA -> SRAM)
    // bank_sel == 0 이면, DMA는 B0에 쓰고 NPU는 B1에서 읽는다.
    // bank_sel == 1 이면, DMA는 B1에 쓰고 NPU는 B0에서 읽는다.
    logic act_b0_wen, act_b1_wen, wt_b0_wen, wt_b1_wen;
    assign act_b0_wen = dma_sram_wen & (bank_sel == 1'b0) & (mmio_dma_target == 1'b0);
    assign act_b1_wen = dma_sram_wen & (bank_sel == 1'b1) & (mmio_dma_target == 1'b0);
    
    assign wt_b0_wen  = dma_sram_wen & (bank_sel == 1'b0) & (mmio_dma_target == 1'b1);
    assign wt_b1_wen  = dma_sram_wen & (bank_sel == 1'b1) & (mmio_dma_target == 1'b1);

    // =========================================================================
    // 4. Ping-Pong SRAM Instances (Act & Weight)
    // =========================================================================
    logic [AXI_DATA_WIDTH-1:0] act_b0_rdata, act_b1_rdata;
    logic [AXI_DATA_WIDTH-1:0] wt_b0_rdata,  wt_b1_rdata;
    
    logic npu_sram_ren;
    logic [SRAM_ADDR_WIDTH-1:0] npu_sram_raddr;

    dp_sram_bank #(.ADDR_WIDTH(SRAM_ADDR_WIDTH), .DATA_WIDTH(AXI_DATA_WIDTH)) u_act_bank0 (
        .clk(clk), .wen(act_b0_wen), .waddr(dma_sram_addr), .wdata(dma_sram_wdata),
        .ren(npu_sram_ren), .raddr(npu_sram_raddr), .rdata(act_b0_rdata)
    );

    dp_sram_bank #(.ADDR_WIDTH(SRAM_ADDR_WIDTH), .DATA_WIDTH(AXI_DATA_WIDTH)) u_act_bank1 (
        .clk(clk), .wen(act_b1_wen), .waddr(dma_sram_addr), .wdata(dma_sram_wdata),
        .ren(npu_sram_ren), .raddr(npu_sram_raddr), .rdata(act_b1_rdata)
    );

    dp_sram_bank #(.ADDR_WIDTH(SRAM_ADDR_WIDTH), .DATA_WIDTH(AXI_DATA_WIDTH)) u_wt_bank0 (
        .clk(clk), .wen(wt_b0_wen), .waddr(dma_sram_addr), .wdata(dma_sram_wdata),
        .ren(npu_sram_ren), .raddr(npu_sram_raddr), .rdata(wt_b0_rdata)
    );

    dp_sram_bank #(.ADDR_WIDTH(SRAM_ADDR_WIDTH), .DATA_WIDTH(AXI_DATA_WIDTH)) u_wt_bank1 (
        .clk(clk), .wen(wt_b1_wen), .waddr(dma_sram_addr), .wdata(dma_sram_wdata),
        .ren(npu_sram_ren), .raddr(npu_sram_raddr), .rdata(wt_b1_rdata)
    );

    // =========================================================================
    // 5. Read MUX (SRAM -> NPU Core)
    // =========================================================================
    logic [AXI_DATA_WIDTH-1:0] npu_act_data;
    logic [AXI_DATA_WIDTH-1:0] npu_wt_data;

    assign npu_act_data = (bank_sel == 1'b0) ? act_b1_rdata : act_b0_rdata;
    assign npu_wt_data  = (bank_sel == 1'b0) ? wt_b1_rdata  : wt_b0_rdata;

    // =========================================================================
    // 6. NPU Core Address Generator & Control FSM (FIXED)
    // =========================================================================
    typedef enum logic [2:0] {
        ST_IDLE,
        ST_LOAD_WT,      // Weight Pre-load 상태 (16 cycles)
        ST_LOAD_WT_WAIT, // SRAM Latency 대기 (2 cycles)
        ST_EXEC_ACT,     // Activation 연산 상태 (mmio_npu_seq_len cycles)
        ST_FLUSH,        // 35-Cycle Pipeline Flush 대기 상태 (안전 쓰기 보장)
        ST_DONE          // Sticky Done 상태 (Host Clear 대기)
    } npu_state_t;

    npu_state_t state, next_state;

    logic [15:0] exec_cnt;
    logic [5:0]  flush_cnt;  // 0~63 카운터
    logic [1:0]  wait_cnt;   // 0~3 카운터
    logic [15:0] wt_load_shift; // 1-hot shift register

    // FSM State Register
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) state <= ST_IDLE;
        else        state <= next_state;
    end

    // FSM Next State Logic
    always_comb begin
        next_state = state;
        case (state)
            ST_IDLE: begin
                if (mmio_start_npu) begin
                    if (mmio_npu_mode) next_state = ST_LOAD_WT;
                    else               next_state = ST_EXEC_ACT;
                end
            end
            ST_LOAD_WT: begin
                if (exec_cnt == 16 - 1) next_state = ST_LOAD_WT_WAIT; 
            end
            ST_LOAD_WT_WAIT: begin
                // SRAM 읽어오고 파이프라인 통과할 2클럭 대기
                if (wait_cnt == 1) next_state = ST_DONE; 
            end
            ST_EXEC_ACT: begin
                if (exec_cnt >= mmio_npu_seq_len - 1) next_state = ST_FLUSH;
            end
            ST_FLUSH: begin
                if (flush_cnt == 34) next_state = ST_DONE; // 파이프라인 잔여량(31) + BRAM 쓰기 마진
            end
            ST_DONE: begin
                if (mmio_clear_done) next_state = ST_IDLE; // Host가 Ack를 주면 해제
            end
            default: next_state = ST_IDLE;
        endcase
    end

    // Datapath & Control Signals Output Logic
    logic npu_valid_q;
    logic [8:0] npu_acc_addr_q;
    logic [15:0] core_weight_load_en;
    logic [8:0] npu_acc_addr_next;
    logic core_acc_clear;
    logic one_shot_acc_clear_pending;

    // Combinational SRAM Read Enable (Zero Latency)
    assign npu_sram_ren = (state == ST_IDLE && mmio_start_npu) || 
                          (state == ST_LOAD_WT && exec_cnt < 16) || 
                          (state == ST_EXEC_ACT && exec_cnt < mmio_npu_seq_len);
    assign npu_acc_addr_next = mmio_test_acc_addr_override_en ? mmio_test_acc_addr_override : npu_sram_raddr[8:0];
    assign core_acc_clear = mmio_npu_acc_clear && (!mmio_test_one_shot_acc_clear_en || one_shot_acc_clear_pending);

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            exec_cnt       <= '0;
            flush_cnt      <= '0;
            wait_cnt       <= '0;
            wt_load_shift  <= 16'h0001;
            npu_sram_raddr <= '0;
            mmio_npu_done  <= 1'b0;
            npu_valid_q    <= 1'b0;
            npu_acc_addr_q <= '0;
            core_weight_load_en <= '0;
            one_shot_acc_clear_pending <= 1'b0;
        end else begin
            // 1-Cycle Pipeline for NPU Valid, Addr, and Weight Load
            npu_valid_q <= npu_sram_ren && (next_state == ST_EXEC_ACT || state == ST_EXEC_ACT || next_state == ST_FLUSH);
            npu_acc_addr_q <= npu_acc_addr_next;
            core_weight_load_en <= (npu_sram_ren && (next_state == ST_LOAD_WT || state == ST_LOAD_WT || next_state == ST_LOAD_WT_WAIT)) ? wt_load_shift : '0;
            if (npu_valid_q) one_shot_acc_clear_pending <= 1'b0;

            case (state)
                ST_IDLE: begin
                    flush_cnt     <= '0;
                    wait_cnt      <= '0;
                    mmio_npu_done <= 1'b0; // 확실한 초기화 (리셋 시점)

                    if (mmio_start_npu) begin
                        // ST_IDLE에서 이미 첫 SRAM read가 prime되므로 active state에서는 row/address 1부터 이어간다.
                        exec_cnt <= 16'd1;
                        npu_sram_raddr <= 10'd1;
                        one_shot_acc_clear_pending <= (!mmio_npu_mode && mmio_npu_acc_clear && mmio_test_one_shot_acc_clear_en);
                        if (mmio_npu_mode) wt_load_shift <= 16'h0002;
                        else               wt_load_shift <= 16'h0001;
                    end else begin
                        exec_cnt       <= '0;
                        wt_load_shift  <= 16'h0001;
                        npu_sram_raddr <= '0;
                        one_shot_acc_clear_pending <= 1'b0;
                    end
                end

                ST_LOAD_WT: begin
                    wt_load_shift <= {wt_load_shift[14:0], 1'b0};
                    exec_cnt <= exec_cnt + 1'b1;
                    npu_sram_raddr <= npu_sram_raddr + 1'b1;
                end

                ST_LOAD_WT_WAIT: begin
                    wait_cnt <= wait_cnt + 1'b1;
                end

                ST_EXEC_ACT: begin
                    exec_cnt <= exec_cnt + 1'b1;
                    npu_sram_raddr <= npu_sram_raddr + 1'b1;
                end

                ST_FLUSH: begin
                    flush_cnt <= flush_cnt + 1'b1;
                end

                ST_DONE: begin
                    mmio_npu_done <= 1'b1; // Sticky Done
                    // Host가 mmio_clear_done=1로 Ack를 주면 아직 ST_DONE인 이 사이클에서 즉시 clear
                    if (mmio_clear_done) mmio_npu_done <= 1'b0;
                end

                default: begin
                end
            endcase
        end
    end

    // =========================================================================
    // 7. NPU Core Instantiation
    // =========================================================================
    npu_core_top u_npu_core (
        .clk            (clk),
        .rst_n          (rst_n),
        .sram_act_in    (npu_act_data),
        .sram_weight_in (npu_wt_data),
        .weight_load_en (core_weight_load_en), // 파이프라인 동기화 펄스 직결
        
        .acc_valid      (npu_valid_q),
        .acc_clear      (core_acc_clear), 
        .acc_addr       (npu_acc_addr_q),
        
        .drain_re       (drain_re),
        .drain_addr     (drain_addr),
        .psum_drain_out (psum_drain_out)
    );

endmodule
