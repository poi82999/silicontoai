package npu_uvm_pkg;
    import uvm_pkg::*;
    `include "uvm_macros.svh"

    // 1. Sequence Item
    class npu_seq_item extends uvm_sequence_item;
        rand bit [15:0]       weight_load_en;
        rand bit [15:0][7:0]  act_in;
        rand bit [15:0][7:0]  weight_in;
        rand bit              acc_valid;
        rand bit              acc_clear;
        rand bit [8:0]        acc_addr;
        rand bit              drain_re;
        rand bit [8:0]        drain_addr;
        bit [15:0][31:0]      psum_drain_out;

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
            acc_addr < 512;
            drain_addr < 512;
            acc_clear dist {1 := 30, 0 := 70}; 
            soft weight_load_en == 0; // Default off unless overridden by a sequence
        }

        constraint c_addr_edge {
            acc_addr dist {0 := 5, 511 := 5, [1:510] := 90};
            drain_addr dist {0 := 5, 511 := 5, [1:510] := 90};
        }
    endclass

    // 2. Sequences
    class npu_weight_load_sequence extends uvm_sequence#(npu_seq_item);
        `uvm_object_utils(npu_weight_load_sequence)
        function new(string name = "npu_weight_load_sequence"); super.new(name); endfunction

        task body();
            `uvm_info("SEQ_WEIGHT", "Loading Weights Row-by-Row...", UVM_LOW)
            for(int i=0; i<16; i++) begin
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
            for(int i=0; i<16; i++) begin
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
            for(int i=0; i<16; i++) begin
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
                    
                    for(int i=0; i<16; i++) begin
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
                            for(int i=0; i<16; i++) drain_item.psum_drain_out[i] = vif.psum_drain_out[i];
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

        // Reference model state
        bit [31:0] ref_bram [512][16];
        bit [7:0]  weight_matrix [16][16]; // [row][col]

        // Pending accumulation queue: each entry is one acc_valid transaction.
        // We count how many transactions have been applied to ref_bram.
        // RTL pipeline is 31 cycles, but accumulator also has 1 more cycle latency
        // (bram read + register + write-back = 1 cycle each), so total delay = 32 cycles.
        // We model this as: queue entry exits and updates ref_bram after 32 accesses
        // from the same stream.
        typedef struct {
            bit [8:0]  addr;
            bit        clear;
            bit [31:0] mac_result[16];
        } pending_acc_t;

        // Simple counter-based delay: we queue acc transactions and apply them
        // to ref_bram with a count-based offset of 32 (31-cycle array pipe + 1 acc pipe)
        pending_acc_t acc_queue[$];
        int acc_applied = 0;   // how many have been written to ref_bram
        int acc_queued  = 0;   // how many have been enqueued total

        function new(string name, uvm_component parent);
            super.new(name, parent);
            item_collected_export = new("item_collected_export", this);
        endfunction

        function void build_phase(uvm_phase phase);
            super.build_phase(phase);
            for(int i=0; i<512; i++)
                for(int j=0; j<16; j++) ref_bram[i][j] = 0;
            for(int i=0; i<16; i++)
                for(int j=0; j<16; j++) weight_matrix[i][j] = 0;
        endfunction

        // Flush all pending acc entries up to (but not including) idx
        function void flush_up_to(int idx);
            while (acc_applied < idx && acc_queue.size() > 0) begin
                pending_acc_t entry = acc_queue.pop_front();
                for (int j = 0; j < 16; j++) begin
                    if (entry.clear)
                        ref_bram[entry.addr][j] = entry.mac_result[j];
                    else
                        ref_bram[entry.addr][j] += entry.mac_result[j];
                end
                acc_applied++;
            end
        endfunction

        virtual function void write(npu_seq_item tr);
            bit mismatch_found = 0;

            // 1. Weight load: update reference weight matrix
            if (tr.weight_load_en != 0) begin
                for (int i=0; i<16; i++) begin
                    if (tr.weight_load_en[i]) begin
                        for (int j=0; j<16; j++) weight_matrix[i][j] = tr.weight_in[j];
                    end
                end
            end

            // 2. Accumulation: push a new pending entry
            if (tr.acc_valid) begin
                pending_acc_t entry;
                entry.addr  = tr.acc_addr;
                entry.clear = tr.acc_clear;
                for (int j=0; j<16; j++) begin
                    bit [31:0] sum = 0;
                    for (int i=0; i<16; i++) begin
                        sum += 32'(tr.act_in[i]) * 32'(weight_matrix[i][j]);
                    end
                    entry.mac_result[j] = sum;
                end
                acc_queue.push_back(entry);
                acc_queued++;
            end

            // 3. Drain read: flush pipeline up to this point then compare
            if (tr.drain_re) begin
                // All acc transactions that have been queued are fully through
                // the 31-cycle pipeline at this point (sequences ensure proper flush delay)
                flush_up_to(acc_queued);

                for (int i = 0; i < 16; i++) begin
                    if (ref_bram[tr.drain_addr][i] !== tr.psum_drain_out[i]) begin
                        mismatch_found = 1;
                        `uvm_error("SCB_FAIL", $sformatf(
                            "Mismatch at Col %0d | Addr=%0d | Expected: %0d, Actual: %0d",
                            i, tr.drain_addr, ref_bram[tr.drain_addr][i], tr.psum_drain_out[i]))
                    end
                end
                if (!mismatch_found)
                    `uvm_info("SCB_PASS", $sformatf(
                        "Drain Data MATCHED at Addr %0d", tr.drain_addr), UVM_LOW)
            end
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
endpackage
