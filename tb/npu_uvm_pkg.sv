package npu_uvm_pkg;
    import uvm_pkg::*;
    `include "uvm_macros.svh"

    import npu_def_pkg::*;

    // 1. Sequence Item
    class npu_seq_item extends uvm_sequence_item;
        rand bit [NPU_ROWS-1:0]       weight_load_en;
        rand bit [NPU_ROWS-1:0][NPU_ACT_WIDTH-1:0] act_in;
        rand bit [NPU_COLS-1:0][NPU_WT_WIDTH-1:0] weight_in;
        rand bit              acc_valid;
        rand bit              acc_clear;
        rand bit [MEM_ADDR_WIDTH-1:0]        acc_addr;
        rand bit              drain_re;
        rand bit [MEM_ADDR_WIDTH-1:0]        drain_addr;
        bit [NPU_COLS-1:0][NPU_PSUM_WIDTH-1:0]      psum_drain_out;

        `uvm_object_utils_begin(npu_seq_item)
            `uvm_field_int(weight_load_en, UVM_ALL_ON)
            `uvm_field_int(acc_valid, UVM_ALL_ON)
            `uvm_field_int(acc_clear, UVM_ALL_ON)
            `uvm_field_int(acc_addr,  UVM_ALL_ON)
            `uvm_field_int(drain_re,  UVM_ALL_ON)
            `uvm_field_int(drain_addr,UVM_ALL_ON)
            `uvm_field_sarray_int(act_in, UVM_ALL_ON)
            `uvm_field_sarray_int(weight_in, UVM_ALL_ON)
            `uvm_field_sarray_int(psum_drain_out, UVM_ALL_ON)
        `uvm_object_utils_end

        function new(string name = "npu_seq_item");
            super.new(name);
        endfunction

        constraint c_basic {
            acc_addr < (1 << MEM_ADDR_WIDTH);
            drain_addr < (1 << MEM_ADDR_WIDTH);
            acc_clear dist {1 := 30, 0 := 70}; 
            soft weight_load_en == 0; // Default off unless overridden by a sequence
        }

        constraint c_addr_edge {
            acc_addr dist {0 := 5, ((1<<MEM_ADDR_WIDTH)-1) := 5, [1:((1<<MEM_ADDR_WIDTH)-2)] := 90};
            drain_addr dist {0 := 5, ((1<<MEM_ADDR_WIDTH)-1) := 5, [1:((1<<MEM_ADDR_WIDTH)-2)] := 90};
        }
    endclass

    // 2. Sequences
    class npu_weight_load_sequence extends uvm_sequence#(npu_seq_item);
        `uvm_object_utils(npu_weight_load_sequence)
        function new(string name = "npu_weight_load_sequence"); super.new(name); endfunction

        task body();
            `uvm_info("SEQ_WEIGHT", "Loading Weights Row-by-Row...", UVM_LOW)
            for(int i=0; i<NPU_ROWS; i++) begin
                req = npu_seq_item::type_id::create("req");
                start_item(req);
                if (!req.randomize() with { 
                    weight_load_en == (1 << i);
                    acc_valid == 0;
                    drain_re == 0;
                }) `uvm_error("SEQ_WEIGHT", $sformatf("Weight load randomization failed for row %0d", i))
                finish_item(req);
            end
        endtask
    endclass

    class npu_sequence extends uvm_sequence#(npu_seq_item);
        `uvm_object_utils(npu_sequence)
        function new(string name = "npu_sequence"); super.new(name); endfunction

        task send_idle_cycle();
            req = npu_seq_item::type_id::create("idle_req");
            start_item(req);
            if (!req.randomize() with {
                acc_valid == 0;
                drain_re == 0;
                weight_load_en == 0;
            }) `uvm_error("SEQ", "Idle randomization failed")
            finish_item(req);
        endtask

        task body();
            `uvm_info("SEQ", "Basic Sequence starting...", UVM_LOW)
            repeat(20) begin
                req = npu_seq_item::type_id::create("req");
                start_item(req);
                if (!req.randomize() with { drain_re == 0; acc_valid == 1; weight_load_en == 0; }) 
                    `uvm_error("SEQ", "Randomization failed")
                finish_item(req);
            end
            
            // Wait 35 cycles for 31-cycle pipeline to flush down to accumulator
            repeat(35) begin
                            send_idle_cycle();
            end

            repeat(10) begin
                req = npu_seq_item::type_id::create("req");
                start_item(req);
                if (!req.randomize() with { acc_valid == 0; drain_re == 1; weight_load_en == 0; }) 
                    `uvm_error("SEQ", "Drain Randomization failed")
                finish_item(req);

                            // Drain is a single-cycle request; leave one idle cycle for synchronous readout.
                            send_idle_cycle();
            end
            `uvm_info("SEQ", "Basic Sequence finished...", UVM_LOW)
        endtask
    endclass

    class npu_smoke_sequence extends npu_sequence;
        `uvm_object_utils(npu_smoke_sequence)
        function new(string name = "npu_smoke_sequence"); super.new(name); endfunction

        task body();
            int smoke_addr;
            `uvm_info("SEQ_SMOKE", "Smoke Sequence starting...", UVM_LOW)
            for (int idx = 0; idx < 4; idx++) begin
                case (idx)
                    0: smoke_addr = 0;
                    1: smoke_addr = 1;
                    2: smoke_addr = 510;
                    default: smoke_addr = 511;
                endcase

                req = npu_seq_item::type_id::create("req");
                start_item(req);
                if (!req.randomize() with {
                    drain_re == 0;
                    acc_valid == 1;
                    acc_clear == 1;
                    weight_load_en == 0;
                    acc_addr == local::smoke_addr;
                }) `uvm_error("SEQ_SMOKE", "Smoke randomization failed")
                finish_item(req);
            end

            repeat(35) begin
                send_idle_cycle();
            end

            for (int idx = 0; idx < 4; idx++) begin
                case (idx)
                    0: smoke_addr = 0;
                    1: smoke_addr = 1;
                    2: smoke_addr = 510;
                    default: smoke_addr = 511;
                endcase

                req = npu_seq_item::type_id::create("drain_req");
                start_item(req);
                if (!req.randomize() with {
                    acc_valid == 0;
                    drain_re == 1;
                    weight_load_en == 0;
                    drain_addr == local::smoke_addr;
                }) `uvm_error("SEQ_SMOKE", "Smoke drain randomization failed")
                finish_item(req);
                send_idle_cycle();
            end
            `uvm_info("SEQ_SMOKE", "Smoke Sequence finished...", UVM_LOW)
        endtask
    endclass

    class npu_stress_sequence extends uvm_sequence#(npu_seq_item);
        `uvm_object_utils(npu_stress_sequence)
        function new(string name = "npu_stress_sequence"); super.new(name); endfunction

        task send_idle_cycle();
            req = npu_seq_item::type_id::create("idle_req");
            start_item(req);
            if (!req.randomize() with {
                acc_valid == 0;
                drain_re == 0;
                weight_load_en == 0;
            }) `uvm_error("SEQ_STRESS", "Idle randomization failed")
            finish_item(req);
        endtask

        task body();
            int back_to_back_addr;
            `uvm_info("SEQ_STRESS", "Stress Sequence starting...", UVM_LOW)
            
            repeat(10) begin
                back_to_back_addr = $urandom_range(0, 511);
                
                req = npu_seq_item::type_id::create("req");
                start_item(req);
                req.randomize() with { drain_re == 0; acc_valid == 1; acc_clear == 1; acc_addr == local::back_to_back_addr; weight_load_en == 0; };
                finish_item(req);

                repeat(3) begin
                    req = npu_seq_item::type_id::create("req");
                    start_item(req);
                    req.randomize() with { drain_re == 0; acc_valid == 1; acc_clear == 0; acc_addr == local::back_to_back_addr; weight_load_en == 0; };
                    finish_item(req);
                end
                
                // Pipeline Flush Wait
                repeat(35) begin
                    send_idle_cycle();
                end
                
                req = npu_seq_item::type_id::create("req");
                start_item(req);
                req.randomize() with { drain_re == 1; acc_valid == 0; drain_addr == local::back_to_back_addr; weight_load_en == 0; };
                finish_item(req);

                send_idle_cycle();
            end
            `uvm_info("SEQ_STRESS", "Stress Sequence finished...", UVM_LOW)
        endtask
    endclass

    class npu_fp16_mode_smoke_sequence extends uvm_sequence#(npu_seq_item);
        `uvm_object_utils(npu_fp16_mode_smoke_sequence)
        function new(string name = "npu_fp16_mode_smoke_sequence"); super.new(name); endfunction

        localparam bit [15:0] FP16_ONE      = 16'h3C00;
        localparam bit [15:0] FP16_POS_HALF = 16'h3800;
        localparam bit [15:0] FP16_NEG_HALF = 16'hB800;
        localparam bit [15:0] FP16_POS_ONE  = 16'h3C00;
        localparam bit [15:0] FP16_NEG_ONE  = 16'hBC00;

        task automatic clear_payload(ref npu_seq_item item);
            item.weight_load_en = '0;
            item.acc_valid = 1'b0;
            item.acc_clear = 1'b0;
            item.acc_addr = '0;
            item.drain_re = 1'b0;
            item.drain_addr = '0;
            for (int i = 0; i < NPU_ROWS; i++) begin
                item.act_in[i] = '0;
            end
            for (int i = 0; i < NPU_COLS; i++) begin
                item.weight_in[i] = '0;
            end
        endtask

        task send_idle_cycle();
            req = npu_seq_item::type_id::create("idle_req");
            start_item(req);
            clear_payload(req);
            finish_item(req);
        endtask

        task load_identity_weights();
            `uvm_info("SEQ_FP16_SMOKE", "Loading deterministic FP16 identity weights", UVM_LOW)
            for (int row = 0; row < NPU_ROWS; row++) begin
                req = npu_seq_item::type_id::create($sformatf("fp16_wrow_%0d", row));
                start_item(req);
                clear_payload(req);
                req.weight_load_en[row] = 1'b1;
                for (int col = 0; col < NPU_COLS; col++) begin
                    req.weight_in[col] = (col == row) ? FP16_ONE : 16'h0000;
                end
                finish_item(req);
            end
        endtask

        task send_acc_vector(bit [MEM_ADDR_WIDTH-1:0] addr, bit pattern_sel);
            req = npu_seq_item::type_id::create("fp16_acc_req");
            start_item(req);
            clear_payload(req);
            req.acc_valid = 1'b1;
            req.acc_clear = 1'b1;
            req.acc_addr = addr;
            for (int lane = 0; lane < NPU_ROWS; lane++) begin
                if (!pattern_sel)
                    req.act_in[lane] = lane[0] ? FP16_NEG_ONE : FP16_POS_ONE;
                else
                    req.act_in[lane] = lane[0] ? FP16_NEG_HALF : FP16_POS_HALF;
            end
            finish_item(req);
        endtask

        task send_drain(bit [MEM_ADDR_WIDTH-1:0] addr);
            req = npu_seq_item::type_id::create("fp16_drain_req");
            start_item(req);
            clear_payload(req);
            req.drain_re = 1'b1;
            req.drain_addr = addr;
            finish_item(req);
        endtask

        task body();
            bit [MEM_ADDR_WIDTH-1:0] addr0;
            bit [MEM_ADDR_WIDTH-1:0] addr_last;
            `uvm_info("SEQ_FP16_SMOKE", "FP16 mode smoke sequence starting...", UVM_LOW)

            addr0 = '0;
            addr_last = {MEM_ADDR_WIDTH{1'b1}};

            load_identity_weights();
            send_acc_vector(addr0, 1'b0);
            send_acc_vector(addr_last, 1'b1);

            repeat(35) begin
                send_idle_cycle();
            end

            send_drain(addr0);
            send_idle_cycle();
            send_drain(addr_last);
            send_idle_cycle();

            `uvm_info("SEQ_FP16_SMOKE", "FP16 mode smoke sequence finished...", UVM_LOW)
        endtask
    endclass

    // 3. Sequencer
    typedef uvm_sequencer#(npu_seq_item) npu_sequencer;

    // 4. Driver
    class npu_driver extends uvm_driver#(npu_seq_item);
        `uvm_component_utils(npu_driver)
        virtual npu_if vif;

        function new(string name, uvm_component parent); super.new(name, parent); endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            if(!uvm_config_db#(virtual npu_if)::get(this, "", "vif", vif))
                `uvm_fatal("NO_VIF", "virtual interface must be set for vif")
        endfunction

        task run_phase(uvm_phase phase);
            vif.acc_valid = 0;
            vif.acc_clear = 0;
            vif.drain_re  = 0;
            vif.weight_load_en = 0;
            vif.acc_addr = 0;
            vif.drain_addr = 0;
            for(int i=0; i<NPU_ROWS; i++) begin
                vif.sram_act_in[i] = 0;
                vif.sram_weight_in[i] = 0;
            end
            wait(vif.rst_n);

            forever begin
                seq_item_port.get_next_item(req);
                drive_item(req);
                seq_item_port.item_done();
            end
        endtask

        task drive_item(npu_seq_item item);
            // Drive on the falling edge so DUT samples a stable request on the next rising edge.
            @(negedge vif.clk);
            for(int i=0; i<NPU_ROWS; i++) begin
                vif.sram_act_in[i]    = item.act_in[i];
                vif.sram_weight_in[i] = item.weight_in[i];
            end
            vif.weight_load_en = item.weight_load_en;
            vif.acc_valid  = item.acc_valid;
            vif.acc_clear  = item.acc_clear;
            vif.acc_addr   = item.acc_addr;
            vif.drain_re   = item.drain_re;
            vif.drain_addr = item.drain_addr;
        endtask
    endclass

    // 5. Monitor
    class npu_monitor extends uvm_monitor;
        `uvm_component_utils(npu_monitor)
        virtual npu_if vif;
        uvm_analysis_port#(npu_seq_item) ap;

        function new(string name, uvm_component parent);
            super.new(name, parent);
            ap = new("ap", this);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            if(!uvm_config_db#(virtual npu_if)::get(this, "", "vif", vif))
                `uvm_fatal("NO_VIF", "virtual interface must be set")
        endfunction

        task run_phase(uvm_phase phase);
            npu_seq_item item;
            wait(vif.rst_n);
            forever begin
                @(posedge vif.clk);
                #1;
                if (vif.acc_valid || vif.weight_load_en != 0) begin
                    item = npu_seq_item::type_id::create("item");
                    
                    for(int i=0; i<NPU_ROWS; i++) begin
                        item.act_in[i] = vif.sram_act_in[i];
                        item.weight_in[i] = vif.sram_weight_in[i];
                    end
                    item.weight_load_en = vif.weight_load_en;
                    item.acc_valid  = vif.acc_valid;
                    item.acc_clear  = vif.acc_clear;
                    item.acc_addr   = vif.acc_addr;
                    item.drain_re   = 0;
                    
                    ap.write(item);
                end
                
                if (vif.drain_re) begin
                    npu_seq_item drain_item = npu_seq_item::type_id::create("drain_item");
                    drain_item.drain_re = 1;
                    drain_item.drain_addr = vif.drain_addr;
                    fork
                        begin
                            @(posedge vif.clk);
                            #1;
                            for(int i=0; i<NPU_COLS; i++) drain_item.psum_drain_out[i] = vif.psum_drain_out[i];
                            ap.write(drain_item);
                        end
                    join_none
                end
            end
        endtask
    endclass

    // 6. Scoreboard
    class npu_scoreboard extends uvm_scoreboard;
        `uvm_component_utils(npu_scoreboard)
        uvm_analysis_imp#(npu_seq_item, npu_scoreboard) item_collected_export;

        localparam shortreal FP16_ABS_TOL = 0.001;
        localparam shortreal FP16_REL_TOL = 0.001;

        // INT8 mode functional coverage tracking
        bit [MEM_ADDR_WIDTH-1:0] last_acc_addr;
        bit last_acc_addr_valid;
        bit seen_act_min;
        bit seen_act_max;
        bit seen_wt_min;
        bit seen_wt_max;
        bit seen_pos_neg_combo;
        bit seen_neg_pos_combo;

        covergroup cg_int8_mode with function sample(byte signed act_lane,
                                                     byte signed wt_lane,
                                                     bit acc_clear,
                                                     bit same_acc_addr);
            option.per_instance = 1;

            cp_act_lane: coverpoint act_lane {
                bins min = {-128};
                bins max = {127};
                bins zero = {0};
                bins neg = {[-127:-1]};
                bins pos = {[1:126]};
            }

            cp_wt_lane: coverpoint wt_lane {
                bins min = {-128};
                bins max = {127};
                bins zero = {0};
                bins neg = {[-127:-1]};
                bins pos = {[1:126]};
            }

            cp_prod_sign: coverpoint (act_lane * wt_lane) {
                bins neg = {[-32768:-1]};
                bins zero = {0};
                bins pos = {[1:32767]};
            }

            cp_acc_clear: coverpoint acc_clear {
                bins clear = {1'b1};
                bins accumulate = {1'b0};
            }

            cp_same_acc_addr: coverpoint same_acc_addr {
                bins no = {1'b0};
                bins yes = {1'b1};
            }

            cx_sign_combo: cross cp_act_lane, cp_wt_lane;
        endgroup

        // Reference model state
        bit [NPU_PSUM_WIDTH-1:0] ref_bram [(1<<MEM_ADDR_WIDTH)][NPU_COLS];
        bit [NPU_WT_WIDTH-1:0] weight_matrix [NPU_ROWS][NPU_COLS];

        // Pending accumulation queue: each entry is one acc_valid transaction.
        // We count how many transactions have been applied to ref_bram.
        // RTL pipeline is 31 cycles, but accumulator also has 1 more cycle latency
        // (bram read + register + write-back = 1 cycle each), so total delay = 32 cycles.
        // We model this as: queue entry exits and updates ref_bram after 32 accesses
        // from the same stream.
        typedef struct {
            bit [MEM_ADDR_WIDTH-1:0]  addr;
            bit        clear;
            bit [NPU_PSUM_WIDTH-1:0] mac_result[NPU_COLS];
        } pending_acc_t;

        // Simple counter-based delay: we queue acc transactions and apply them
        // to ref_bram with a count-based offset of 32 (31-cycle array pipe + 1 acc pipe)
        pending_acc_t acc_queue[$];
        int acc_applied = 0;   // how many have been written to ref_bram
        int acc_queued  = 0;   // how many have been enqueued total

        function new(string name, uvm_component parent);
            super.new(name, parent);
            item_collected_export = new("item_collected_export", this);
            cg_int8_mode = new();
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            for(int i=0; i<(1<<MEM_ADDR_WIDTH); i++)
                for(int j=0; j<NPU_COLS; j++) ref_bram[i][j] = 0;
            for(int i=0; i<NPU_ROWS; i++)
                for(int j=0; j<NPU_COLS; j++) weight_matrix[i][j] = 0;

            last_acc_addr = '0;
            last_acc_addr_valid = 1'b0;
            seen_act_min = 1'b0;
            seen_act_max = 1'b0;
            seen_wt_min = 1'b0;
            seen_wt_max = 1'b0;
            seen_pos_neg_combo = 1'b0;
            seen_neg_pos_combo = 1'b0;
        endfunction

        function void sample_int8_coverage(npu_seq_item tr);
            bit same_acc_addr;
            same_acc_addr = last_acc_addr_valid && (tr.acc_addr == last_acc_addr);
            last_acc_addr = tr.acc_addr;
            last_acc_addr_valid = 1'b1;

            for (int lane = 0; lane < NPU_ROWS; lane++) begin
                byte signed act_lane;
                byte signed wt_lane;
                act_lane = $signed(tr.act_in[lane][7:0]);
                wt_lane = $signed(tr.weight_in[lane][7:0]);

                cg_int8_mode.sample(act_lane, wt_lane, tr.acc_clear, same_acc_addr);

                if (act_lane == -128) seen_act_min = 1'b1;
                if (act_lane == 127)  seen_act_max = 1'b1;
                if (wt_lane == -128)  seen_wt_min = 1'b1;
                if (wt_lane == 127)   seen_wt_max = 1'b1;
                if (act_lane > 0 && wt_lane < 0) seen_pos_neg_combo = 1'b1;
                if (act_lane < 0 && wt_lane > 0) seen_neg_pos_combo = 1'b1;
            end
        endfunction

        // -------------------------------------------------------------
        // Bit-exact FP16/FP32 Arithmetic equivalent to RTL components
        // -------------------------------------------------------------
        function automatic bit [31:0] compute_fp16_mul(bit [15:0] fp16_a, bit [15:0] fp16_b);
            bit sign_a, sign_b, result_sign;
            bit [4:0] exp_a, exp_b;
            bit [9:0] mant_a, mant_b;
            bit a_is_zero, b_is_zero, a_is_inf, b_is_inf, a_is_nan, b_is_nan, a_is_subnormal, b_is_subnormal;
            bit [10:0] full_mant_a, full_mant_b;
            bit [21:0] mant_product;
            bit [8:0] raw_exp;
            bit [22:0] fp32_mantissa;
            bit [8:0] fp32_exp;

            sign_a = fp16_a[15];
            exp_a  = fp16_a[14:10];
            mant_a = fp16_a[9:0];

            sign_b = fp16_b[15];
            exp_b  = fp16_b[14:10];
            mant_b = fp16_b[9:0];

            a_is_zero = (exp_a == 5'd0) && (mant_a == 10'd0);
            b_is_zero = (exp_b == 5'd0) && (mant_b == 10'd0);
            a_is_inf  = (exp_a == 5'd31) && (mant_a == 10'd0);
            b_is_inf  = (exp_b == 5'd31) && (mant_b == 10'd0);
            a_is_nan  = (exp_a == 5'd31) && (mant_a != 10'd0);
            b_is_nan  = (exp_b == 5'd31) && (mant_b != 10'd0);
            a_is_subnormal = (exp_a == 5'd0) && (mant_a != 10'd0);
            b_is_subnormal = (exp_b == 5'd0) && (mant_b != 10'd0);

            result_sign = sign_a ^ sign_b;
            full_mant_a = {1'b1, mant_a};
            full_mant_b = {1'b1, mant_b};
            mant_product = full_mant_a * full_mant_b;
            
            raw_exp = {4'd0, exp_a} + {4'd0, exp_b} + 9'd97;

            if (mant_product[21]) begin
                fp32_mantissa = {mant_product[20:0], 2'b00};
                fp32_exp      = raw_exp + 9'd1;
            end else begin
                fp32_mantissa = {mant_product[19:0], 3'b000};
                fp32_exp      = raw_exp;
            end

            if (a_is_nan || b_is_nan) begin
                return {1'b0, 8'hFF, 23'h400000};
            end else if (a_is_inf || b_is_inf) begin
                if (a_is_zero || b_is_zero) return {1'b0, 8'hFF, 23'h400000};
                else return {result_sign, 8'hFF, 23'd0};
            end else if (a_is_zero || b_is_zero || a_is_subnormal || b_is_subnormal) begin
                return {result_sign, 8'd0, 23'd0};
            end else if (fp32_exp[8] || fp32_exp >= 9'd255) begin
                return {result_sign, 8'hFF, 23'd0};
            end else if (fp32_exp == 9'd0) begin
                return {result_sign, 8'd0, 23'd0};
            end else begin
                return {result_sign, fp32_exp[7:0], fp32_mantissa};
            end
        endfunction

        function automatic bit [31:0] compute_fp32_add(bit [31:0] fp32_a, bit [31:0] fp32_b);
            bit sign_a, sign_b;
            bit [7:0] exp_a, exp_b;
            bit [22:0] mant_a, mant_b;
            bit a_is_zero, b_is_zero, a_is_inf, b_is_inf, a_is_nan, b_is_nan;
            bit large_sign, small_sign;
            bit [7:0] large_exp, small_exp;
            bit [23:0] large_mant, small_mant;
            bit [7:0] exp_diff;
            bit a_is_larger;
            bit [26:0] aligned_large, aligned_small;
            bit sticky_bit;
            bit effective_sub;
            bit [27:0] mant_sum;
            bit result_sign_raw;
            bit [7:0] norm_exp;
            bit [26:0] norm_mant;
            bit [4:0] lzc;
            bit [22:0] rounded_mant;
            bit round_bit, guard_bit, sticky_round, round_up;
            bit [24:0] mant_rounded;
            bit [7:0] final_exp;
            
            sign_a = fp32_a[31];
            exp_a  = fp32_a[30:23];
            mant_a = fp32_a[22:0];

            sign_b = fp32_b[31];
            exp_b  = fp32_b[30:23];
            mant_b = fp32_b[22:0];

            a_is_zero = (exp_a == 8'd0) && (mant_a == 23'd0);
            b_is_zero = (exp_b == 8'd0) && (mant_b == 23'd0);
            a_is_inf  = (exp_a == 8'hFF) && (mant_a == 23'd0);
            b_is_inf  = (exp_b == 8'hFF) && (mant_b == 23'd0);
            a_is_nan  = (exp_a == 8'hFF) && (mant_a != 23'd0);
            b_is_nan  = (exp_b == 8'hFF) && (mant_b != 23'd0);

            a_is_larger = (exp_a > exp_b) || ((exp_a == exp_b) && (mant_a >= mant_b));

            if (a_is_larger) begin
                large_sign = sign_a;
                large_exp  = exp_a;
                large_mant = (exp_a == 8'd0) ? {1'b0, mant_a} : {1'b1, mant_a};
                small_sign = sign_b;
                small_exp  = exp_b;
                small_mant = (exp_b == 8'd0) ? {1'b0, mant_b} : {1'b1, mant_b};
            end else begin
                large_sign = sign_b;
                large_exp  = exp_b;
                large_mant = (exp_b == 8'd0) ? {1'b0, mant_b} : {1'b1, mant_b};
                small_sign = sign_a;
                small_exp  = exp_a;
                small_mant = (exp_a == 8'd0) ? {1'b0, mant_a} : {1'b1, mant_a};
            end
            exp_diff = large_exp - small_exp;

            aligned_large = {large_mant, 3'b000};
            
            if (exp_diff == 8'd0) begin
                aligned_small = {small_mant, 3'b000};
                sticky_bit = 1'b0;
            end else if (exp_diff < 8'd27) begin
                aligned_small = {small_mant, 3'b000} >> exp_diff;
                sticky_bit = |({small_mant, 3'b000} & ((27'b1 << exp_diff) - 27'b1));
            end else begin
                aligned_small = 27'd0;
                sticky_bit = |small_mant;
            end
            aligned_small[0] = aligned_small[0] | sticky_bit;

            effective_sub = large_sign ^ small_sign;

            if (effective_sub) begin
                mant_sum = {1'b0, aligned_large} - {1'b0, aligned_small};
            end else begin
                mant_sum = {1'b0, aligned_large} + {1'b0, aligned_small};
            end
            result_sign_raw = large_sign;

            casez (mant_sum[27:0])
                28'b1???????????????????????????: lzc = 5'd0;
                28'b01??????????????????????????: lzc = 5'd0;
                28'b001?????????????????????????: lzc = 5'd1;
                28'b0001????????????????????????: lzc = 5'd2;
                28'b00001???????????????????????: lzc = 5'd3;
                28'b000001??????????????????????: lzc = 5'd4;
                28'b0000001?????????????????????: lzc = 5'd5;
                28'b00000001????????????????????: lzc = 5'd6;
                28'b000000001???????????????????: lzc = 5'd7;
                28'b0000000001??????????????????: lzc = 5'd8;
                28'b00000000001?????????????????: lzc = 5'd9;
                28'b000000000001????????????????: lzc = 5'd10;
                28'b0000000000001???????????????: lzc = 5'd11;
                28'b00000000000001??????????????: lzc = 5'd12;
                28'b000000000000001?????????????: lzc = 5'd13;
                28'b0000000000000001????????????: lzc = 5'd14;
                28'b00000000000000001???????????: lzc = 5'd15;
                28'b000000000000000001??????????: lzc = 5'd16;
                28'b0000000000000000001?????????: lzc = 5'd17;
                28'b00000000000000000001????????: lzc = 5'd18;
                28'b000000000000000000001???????: lzc = 5'd19;
                28'b0000000000000000000001??????: lzc = 5'd20;
                28'b00000000000000000000001?????: lzc = 5'd21;
                28'b000000000000000000000001????: lzc = 5'd22;
                28'b0000000000000000000000001???: lzc = 5'd23;
                28'b00000000000000000000000001??: lzc = 5'd24;
                28'b000000000000000000000000001?: lzc = 5'd25;
                28'b0000000000000000000000000001: lzc = 5'd26;
                default:                          lzc = 5'd27;
            endcase

            if (mant_sum[27]) begin
                norm_mant = mant_sum[27:1];
                norm_exp  = large_exp + 8'd1;
            end else if (mant_sum[26]) begin
                norm_mant = mant_sum[26:0];
                norm_exp  = large_exp;
            end else if (lzc < 5'd27 && large_exp > {3'd0, lzc}) begin
                norm_mant = mant_sum[26:0] << lzc;
                norm_exp  = large_exp - {3'd0, lzc};
            end else begin
                norm_mant = 27'd0;
                norm_exp  = 8'd0;
            end

            guard_bit    = norm_mant[2];
            round_bit    = norm_mant[1];
            sticky_round = norm_mant[0];

            round_up = guard_bit && (round_bit || sticky_round || norm_mant[3]);

            mant_rounded = {1'b0, norm_mant[26:3]} + {23'd0, round_up};
            if (mant_rounded[24]) begin
                final_exp = norm_exp + 8'd1;
                rounded_mant = mant_rounded[23:1];
            end else begin
                final_exp = norm_exp;
                rounded_mant = mant_rounded[22:0];
            end

            if (a_is_nan || b_is_nan) begin
                return {1'b0, 8'hFF, 23'h400000};
            end else if (a_is_inf && b_is_inf) begin
                if (sign_a != sign_b) return {1'b0, 8'hFF, 23'h400000};
                else return {sign_a, 8'hFF, 23'd0};
            end else if (a_is_inf) begin
                return {sign_a, 8'hFF, 23'd0};
            end else if (b_is_inf) begin
                return {sign_b, 8'hFF, 23'd0};
            end else if (a_is_zero && b_is_zero) begin
                return {sign_a & sign_b, 8'd0, 23'd0};
            end else if (a_is_zero) begin
                return fp32_b;
            end else if (b_is_zero) begin
                return fp32_a;
            end else if (norm_exp == 8'd0 && norm_mant == 27'd0) begin
                return 32'd0;
            end else if (final_exp >= 8'hFF) begin
                return {result_sign_raw, 8'hFF, 23'd0};
            end else begin
                return {result_sign_raw, final_exp, rounded_mant};
            end
        endfunction

        // INT8 MAC: sum over 16 rows for a given column (signed INT8 × signed INT8 -> INT32)
        function automatic bit [31:0] compute_int8_mac_result(npu_seq_item tr, int col);
            integer signed sum;
            sum = 0;
            for (int i = 0; i < NPU_ROWS; i++) begin
                byte signed act_lane;
                byte signed wt_lane;
                act_lane = $signed(tr.act_in[i][7:0]);
                wt_lane = $signed(weight_matrix[i][col][7:0]);
                sum += act_lane * wt_lane;
            end
            return sum[31:0];
        endfunction

        function automatic bit [31:0] compute_fp16_mac_result(npu_seq_item tr, int col);
            bit [31:0] sum;
            sum = 32'd0;
            for (int i = 0; i < NPU_ROWS; i++) begin
                bit [15:0] act_lane;
                bit [15:0] wt_lane;
                bit [31:0] prod;
                act_lane = tr.act_in[i][15:0];
                wt_lane = weight_matrix[i][col][15:0];
                prod = compute_fp16_mul(act_lane, wt_lane);
                sum = compute_fp32_add(sum, prod);
            end
            return sum;
        endfunction

        function automatic bit fp32_is_nan(bit [31:0] value);
            return (value[30:23] == 8'hFF) && (value[22:0] != 23'd0);
        endfunction

        function automatic bit fp32_is_inf(bit [31:0] value);
            return (value[30:23] == 8'hFF) && (value[22:0] == 23'd0);
        endfunction

        function automatic shortreal abs_shortreal(shortreal value);
            if (value < 0.0)
                return -value;
            return value;
        endfunction

        function automatic bit fp16_numeric_match(bit [31:0] expected, bit [31:0] actual);
            shortreal expected_f;
            shortreal actual_f;
            shortreal abs_diff;
            shortreal scale;
            shortreal rel_diff;

            if (expected == actual)
                return 1'b1;

            if (fp32_is_nan(expected) || fp32_is_nan(actual))
                return 1'b0;

            if (fp32_is_inf(expected) || fp32_is_inf(actual))
                return 1'b0;

            expected_f = $bitstoshortreal(expected);
            actual_f = $bitstoshortreal(actual);

            abs_diff = abs_shortreal(expected_f - actual_f);
            scale = abs_shortreal(expected_f);
            if (scale < 1.0)
                scale = 1.0;
            rel_diff = abs_diff / scale;

            return (abs_diff <= FP16_ABS_TOL) || (rel_diff <= FP16_REL_TOL);
        endfunction

        // Flush all pending acc entries up to (but not including) idx
        function void flush_up_to(int idx);
            while (acc_applied < idx && acc_queue.size() > 0) begin
                pending_acc_t entry = acc_queue.pop_front();
                for (int j = 0; j < NPU_COLS; j++) begin
                    if (entry.clear)
                        ref_bram[entry.addr][j] = entry.mac_result[j];
                    `ifdef UVM_DATA_MODE_FP16
                    else
                        ref_bram[entry.addr][j] = compute_fp32_add(ref_bram[entry.addr][j], entry.mac_result[j]);
                    `else
                    else
                        ref_bram[entry.addr][j] = $signed(ref_bram[entry.addr][j]) + $signed(entry.mac_result[j]);
                    `endif
                end
                acc_applied++;
            end
        endfunction

        virtual function void write(npu_seq_item tr);
            bit mismatch_found = 0;

            // 1. Weight load: update reference weight matrix
            if (tr.weight_load_en != 0) begin
                for (int i=0; i<NPU_ROWS; i++) begin
                    if (tr.weight_load_en[i]) begin
                        for (int j=0; j<NPU_COLS; j++) weight_matrix[i][j] = tr.weight_in[j];
                    end
                end
            end

            // 2. Accumulation: push a new pending entry
            if (tr.acc_valid) begin
                pending_acc_t entry;
                entry.addr  = tr.acc_addr;
                entry.clear = tr.acc_clear;
                `ifdef UVM_DATA_MODE_FP16
                for (int j=0; j<NPU_COLS; j++) begin
                    entry.mac_result[j] = compute_fp16_mac_result(tr, j);
                end
                `else
                sample_int8_coverage(tr);
                for (int j=0; j<NPU_COLS; j++) begin
                    entry.mac_result[j] = compute_int8_mac_result(tr, j);
                end
                `endif
                acc_queue.push_back(entry);
                acc_queued++;
            end

            // 3. Drain read: flush pipeline up to this point then compare
            if (tr.drain_re) begin
                // All acc transactions that have been queued are fully through
                // the 31-cycle pipeline at this point (sequences ensure proper flush delay)
                flush_up_to(acc_queued);

                `ifdef UVM_DATA_MODE_FP16
                for (int i = 0; i < NPU_COLS; i++) begin
                    bit [31:0] expected = ref_bram[tr.drain_addr][i];
                    bit [31:0] actual = tr.psum_drain_out[i];
                    bit is_match = fp16_numeric_match(expected, actual);

                    if (!is_match) begin
                        mismatch_found = 1;
                        `uvm_error("SCB_FAIL", $sformatf(
                            "FP16 mismatch at Col %0d | Addr=%0d | Expected_fp32_bits=0x%08h Actual_fp32_bits=0x%08h Expected=%f Actual=%f",
                            i,
                            tr.drain_addr,
                            expected,
                            actual,
                            $bitstoshortreal(expected),
                            $bitstoshortreal(actual)))
                    end
                end
                if (!mismatch_found)
                    `uvm_info("SCB_PASS", $sformatf(
                        "FP16 drain data MATCHED at Addr %0d (numeric compare)", tr.drain_addr), UVM_LOW)
                `else
                for (int i = 0; i < NPU_COLS; i++) begin
                    bit [31:0] expected = ref_bram[tr.drain_addr][i];
                    bit [31:0] actual = tr.psum_drain_out[i];
                    bit is_match = 0;

                    if (expected == actual) is_match = 1;

                    if (!is_match) begin
                        mismatch_found = 1;
                        `uvm_error("SCB_FAIL", $sformatf(
                            "Mismatch at Col %0d | Addr=%0d | Expected_i32=%0d (0x%08h), Actual_i32=%0d (0x%08h)",
                            i,
                            tr.drain_addr,
                            $signed(expected),
                            expected,
                            $signed(actual),
                            actual))
                    end
                end
                if (!mismatch_found)
                    `uvm_info("SCB_PASS", $sformatf(
                        "Drain Data MATCHED at Addr %0d", tr.drain_addr), UVM_LOW)
                `endif
            end
        endfunction

        function void report_phase(uvm_phase phase);
            super.report_phase(phase);
            `uvm_info("INT8_COV", $sformatf("int8_mode_coverage=%.2f%%", cg_int8_mode.get_coverage()), UVM_LOW)
            `uvm_info("INT8_COV", $sformatf("act_min_hit=%0d act_max_hit=%0d wt_min_hit=%0d wt_max_hit=%0d posneg_hit=%0d negpos_hit=%0d",
                seen_act_min,
                seen_act_max,
                seen_wt_min,
                seen_wt_max,
                seen_pos_neg_combo,
                seen_neg_pos_combo), UVM_LOW)
        endfunction
    endclass

    // 7. Agent
    class npu_agent extends uvm_agent;
        `uvm_component_utils(npu_agent)
        npu_sequencer sqr;
        npu_driver    drv;
        npu_monitor   mon;

        function new(string name, uvm_component parent); super.new(name, parent); endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            sqr = npu_sequencer::type_id::create("sqr", this);
            drv = npu_driver::type_id::create("drv", this);
            mon = npu_monitor::type_id::create("mon", this);
        endfunction

        function void connect_phase(uvm_phase phase);
            super.connect_phase(phase);
            drv.seq_item_port.connect(sqr.seq_item_export);
        endfunction
    endclass

    // 8. Environment
    class npu_env extends uvm_env;
        `uvm_component_utils(npu_env)
        npu_agent      agt;
        npu_scoreboard scb;

        function new(string name, uvm_component parent); super.new(name, parent); endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            agt = npu_agent::type_id::create("agt", this);
            scb = npu_scoreboard::type_id::create("scb", this);
        endfunction

        function void connect_phase(uvm_phase phase);
            super.connect_phase(phase);
            agt.mon.ap.connect(scb.item_collected_export);
        endfunction
    endclass

    // 9. Tests
    class npu_base_test extends uvm_test;
        `uvm_component_utils(npu_base_test)
        npu_env env;

        function new(string name, uvm_component parent); super.new(name, parent); endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            env = npu_env::type_id::create("env", this);
        endfunction

        task load_weights();
            npu_weight_load_sequence seq_weights;
            seq_weights = npu_weight_load_sequence::type_id::create("seq_weights");
            `uvm_info("TEST", "Loading Weight Matrix", UVM_LOW)
            seq_weights.start(env.agt.sqr);
        endtask

        virtual task run_sequences();
        endtask

        task run_phase(uvm_phase phase);
            phase.raise_objection(this);

            load_weights();
            run_sequences();

            #100ns;
            phase.drop_objection(this);
        endtask
    endclass

    class npu_smoke_test extends npu_base_test;
        `uvm_component_utils(npu_smoke_test)
        function new(string name, uvm_component parent); super.new(name, parent); endfunction

        task run_sequences();
            npu_smoke_sequence seq_smoke;
            seq_smoke = npu_smoke_sequence::type_id::create("seq_smoke");
            `uvm_info("TEST", "Running Smoke Sequence", UVM_LOW)
            seq_smoke.start(env.agt.sqr);
        endtask
    endclass

    class npu_basic_test extends npu_base_test;
        `uvm_component_utils(npu_basic_test)
        function new(string name, uvm_component parent); super.new(name, parent); endfunction

        task run_sequences();
            npu_sequence seq_basic;
            seq_basic = npu_sequence::type_id::create("seq_basic");
            `uvm_info("TEST", "Running Basic Random Constraints Sequence", UVM_LOW)
            seq_basic.start(env.agt.sqr);
        endtask
    endclass

    class npu_stress_test extends npu_base_test;
        `uvm_component_utils(npu_stress_test)
        function new(string name, uvm_component parent); super.new(name, parent); endfunction

        task run_sequences();
            npu_stress_sequence seq_stress;
            seq_stress = npu_stress_sequence::type_id::create("seq_stress");
            `uvm_info("TEST", "Running Back-to-Back High Stress Sequence", UVM_LOW)
            seq_stress.start(env.agt.sqr);
        endtask
    endclass

    class npu_test extends npu_base_test;
        `uvm_component_utils(npu_test)
        function new(string name, uvm_component parent); super.new(name, parent); endfunction

        task run_sequences();
            npu_sequence seq_basic;
            npu_stress_sequence seq_stress;

            seq_basic = npu_sequence::type_id::create("seq_basic");
            seq_stress = npu_stress_sequence::type_id::create("seq_stress");

            `uvm_info("TEST", "Running Basic Random Constraints Sequence", UVM_LOW)
            seq_basic.start(env.agt.sqr);

            `uvm_info("TEST", "Running Back-to-Back High Stress Sequence", UVM_LOW)
            seq_stress.start(env.agt.sqr);
        endtask
    endclass

    class npu_fp16_mode_smoke_test extends npu_base_test;
        `uvm_component_utils(npu_fp16_mode_smoke_test)
        function new(string name, uvm_component parent); super.new(name, parent); endfunction

        task run_sequences();
            npu_fp16_mode_smoke_sequence seq_fp16_smoke;
            seq_fp16_smoke = npu_fp16_mode_smoke_sequence::type_id::create("seq_fp16_smoke");
            `uvm_info("TEST", "Running FP16 mode smoke sequence", UVM_LOW)
            seq_fp16_smoke.start(env.agt.sqr);
        endtask
    endclass
endpackage
