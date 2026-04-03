`timescale 1ns / 1ps

module fpga_core_bringup_top (
    input  logic       board_clk,
    input  logic       rst_btn_n,
    input  logic       start_btn,
    output logic       alive_led,
    output logic       done_led,
    output logic [3:0] debug_led
);

    localparam int ROWS = 16;
    localparam int FLUSH_CYCLES = 35;
    localparam logic [31:0] EXPECTED_SUM = 32'd120;

    typedef enum logic [2:0] {
        ST_IDLE         = 3'd0,
        ST_PRELOAD      = 3'd1,
        ST_EXECUTE      = 3'd2,
        ST_FLUSH        = 3'd3,
        ST_DRAIN_REQ    = 3'd4,
        ST_DRAIN_WAIT   = 3'd5,
        ST_DRAIN_SAMPLE = 3'd6,
        ST_DONE         = 3'd7
    } bringup_state_t;

    logic rst_n;
    logic start_sync_0;
    logic start_sync_1;
    logic start_sync_prev;
    logic start_pulse;

    logic [23:0] heartbeat_counter;

    bringup_state_t state;
    logic [4:0] preload_row_idx;
    logic [4:0] exec_row_idx;
    logic [5:0] flush_cnt;

    logic [ROWS-1:0][7:0]  core_activations;
    logic [ROWS-1:0][7:0]  core_weights;
    logic [ROWS-1:0]       core_weight_load_en;
    logic                  core_acc_valid;
    logic                  core_acc_clear;
    logic [8:0]            core_acc_addr;
    logic                  core_drain_re;
    logic [8:0]            core_drain_addr;
    logic [ROWS-1:0][31:0] core_psum_drain_out;

    logic done_latched;
    logic result_match_latched;

    assign rst_n = rst_btn_n;
    assign start_pulse = start_sync_1 && !start_sync_prev;

    assign alive_led = heartbeat_counter[23];
    assign done_led = done_latched;
    assign debug_led = {result_match_latched, state};

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
        if (!rst_n) begin
            heartbeat_counter <= '0;
        end else begin
            heartbeat_counter <= heartbeat_counter + 24'd1;
        end
    end

    always_comb begin
        core_activations    = '0;
        core_weights        = '0;
        core_weight_load_en = '0;
        core_acc_valid      = 1'b0;
        core_acc_clear      = 1'b0;
        core_acc_addr       = '0;
        core_drain_re       = 1'b0;
        core_drain_addr     = '0;

        case (state)
            ST_PRELOAD: begin
                for (int lane = 0; lane < ROWS; lane++) begin
                    core_weights[lane] = 8'd1;
                end
                if (preload_row_idx < ROWS) begin
                    core_weight_load_en[preload_row_idx] = 1'b1;
                end
            end

            ST_EXECUTE: begin
                for (int lane = 0; lane < ROWS; lane++) begin
                    core_activations[lane] = lane[7:0];
                end
                core_acc_valid = 1'b1;
                core_acc_clear = 1'b1;
                core_acc_addr = exec_row_idx;
            end

            ST_DRAIN_REQ: begin
                core_drain_re = 1'b1;
            end

            default: begin
            end
        endcase
    end

    always_ff @(posedge board_clk) begin
        if (!rst_n) begin
            state <= ST_IDLE;
            preload_row_idx <= '0;
            exec_row_idx <= '0;
            flush_cnt <= '0;
            done_latched <= 1'b0;
            result_match_latched <= 1'b0;
        end else begin
            case (state)
                ST_IDLE: begin
                    preload_row_idx <= '0;
                    exec_row_idx <= '0;
                    flush_cnt <= '0;
                    if (start_pulse) begin
                        state <= ST_PRELOAD;
                        done_latched <= 1'b0;
                        result_match_latched <= 1'b0;
                    end
                end

                ST_PRELOAD: begin
                    if (preload_row_idx == ROWS - 1) begin
                        preload_row_idx <= '0;
                        state <= ST_EXECUTE;
                    end else begin
                        preload_row_idx <= preload_row_idx + 5'd1;
                    end
                end

                ST_EXECUTE: begin
                    if (exec_row_idx == ROWS - 1) begin
                        exec_row_idx <= '0;
                        flush_cnt <= '0;
                        state <= ST_FLUSH;
                    end else begin
                        exec_row_idx <= exec_row_idx + 5'd1;
                    end
                end

                ST_FLUSH: begin
                    if (flush_cnt == FLUSH_CYCLES - 1) begin
                        flush_cnt <= '0;
                        state <= ST_DRAIN_REQ;
                    end else begin
                        flush_cnt <= flush_cnt + 6'd1;
                    end
                end

                ST_DRAIN_REQ: begin
                    state <= ST_DRAIN_WAIT;
                end

                ST_DRAIN_WAIT: begin
                    state <= ST_DRAIN_SAMPLE;
                end

                ST_DRAIN_SAMPLE: begin
                    done_latched <= 1'b1;
                    result_match_latched <= (core_psum_drain_out[0] == EXPECTED_SUM)
                        && (core_psum_drain_out[15] == EXPECTED_SUM);
                    state <= ST_DONE;
                end

                ST_DONE: begin
                    if (start_pulse) begin
                        preload_row_idx <= '0;
                        exec_row_idx <= '0;
                        flush_cnt <= '0;
                        done_latched <= 1'b0;
                        result_match_latched <= 1'b0;
                        state <= ST_PRELOAD;
                    end
                end

                default: begin
                    state <= ST_IDLE;
                end
            endcase
        end
    end

    npu_core_top u_npu_core (
        .clk            (board_clk),
        .rst_n          (rst_n),
        .sram_act_in    (core_activations),
        .sram_weight_in (core_weights),
        .weight_load_en (core_weight_load_en),
        .acc_valid      (core_acc_valid),
        .acc_clear      (core_acc_clear),
        .acc_addr       (core_acc_addr),
        .drain_re       (core_drain_re),
        .drain_addr     (core_drain_addr),
        .psum_drain_out (core_psum_drain_out)
    );

endmodule
