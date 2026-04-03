# ==============================================================================
# Vivado Non-Project Mode Build Script
# Target: fpga_system_bringup_top on xc7z020clg400-1 (PYNQ-Z2)
# Usage: vivado -mode batch -source build_system_zynq.tcl
# ==============================================================================

set TOP       fpga_system_bringup_top
set PART      xc7z020clg400-1
set RTL_DIR   [file normalize [file join [file dirname [info script]] ../rtl]]
set XDC_FILE  [file normalize [file join [file dirname [info script]] fpga_system_bringup_top_pynq.xdc]]
set OUT_DIR   [file normalize [file join [file dirname [info script]] build_system_zynq]]

file mkdir $OUT_DIR

# --- Read RTL ---
read_verilog -sv [glob $RTL_DIR/*.sv]

# --- Read Constraints ---
read_xdc $XDC_FILE

# --- Synthesis ---
synth_design -top $TOP -part $PART
write_checkpoint -force $OUT_DIR/${TOP}_synth.dcp
report_utilization -file $OUT_DIR/${TOP}_utilization_synth.rpt
report_timing_summary -file $OUT_DIR/${TOP}_timing_synth.rpt

# ==============================================================================
# ILA Debug Core Insertion (post-synth, pre-opt)
# Automatically discovers (* mark_debug = "true" *) nets from RTL and connects
# them to an ILA core with 1024-sample capture depth.
# ==============================================================================
set dbg_nets [lsort [get_nets -hierarchical -filter {MARK_DEBUG == true}]]
set dbg_count [llength $dbg_nets]

if {$dbg_count > 0} {
    puts "ILA: Found $dbg_count mark_debug net(s):"
    foreach n $dbg_nets { puts "  $n" }

    # Create ILA core
    create_debug_core u_ila_0 ila
    set_property C_DATA_DEPTH        1024  [get_debug_cores u_ila_0]
    set_property C_TRIGIN_EN         false [get_debug_cores u_ila_0]
    set_property C_TRIGOUT_EN        false [get_debug_cores u_ila_0]
    set_property C_INPUT_PIPE_STAGES 0     [get_debug_cores u_ila_0]
    set_property C_EN_STRG_QUAL      true  [get_debug_cores u_ila_0]
    set_property ALL_PROBE_SAME_MU   true  [get_debug_cores u_ila_0]
    set_property ALL_PROBE_SAME_MU_CNT 2   [get_debug_cores u_ila_0]

    # Connect clock — try common post-synth net names
    set clk_net {}
    foreach pat {board_clk_IBUF_BUFG board_clk_BUFG board_clk} {
        set clk_net [get_nets -quiet $pat]
        if {$clk_net ne ""} break
    }
    if {$clk_net eq ""} {
        error "ILA: Could not find clock net for board_clk"
    }
    set_property port_width 1 [get_debug_ports u_ila_0/clk]
    connect_debug_port u_ila_0/clk [get_nets [list $clk_net]]
    puts "ILA: Clock connected to $clk_net"

    # Connect all debug nets as probe0 (wide bus probe)
    set_property port_width $dbg_count [get_debug_ports u_ila_0/probe0]
    connect_debug_port u_ila_0/probe0 $dbg_nets

    # Finalise: inserts dbg_hub (BSCAN) and ILA into netlist
    implement_debug_core

    write_checkpoint -force $OUT_DIR/${TOP}_synth_debug.dcp
    puts "ILA: Debug core inserted — $dbg_count probes, depth=1024"
} else {
    puts "ILA: No mark_debug nets found — skipping ILA insertion"
}

# --- Optimization ---
opt_design

# --- Place ---
place_design
write_checkpoint -force $OUT_DIR/${TOP}_placed.dcp
report_utilization -file $OUT_DIR/${TOP}_utilization_placed.rpt
report_clock_utilization -file $OUT_DIR/${TOP}_clock_utilization_placed.rpt

# --- Physical Optimization ---
phys_opt_design

# --- Route ---
route_design
write_checkpoint -force $OUT_DIR/${TOP}_routed.dcp
report_route_status -file $OUT_DIR/${TOP}_route_status.rpt
report_timing_summary -file $OUT_DIR/${TOP}_timing_routed.rpt
report_utilization -file $OUT_DIR/${TOP}_utilization_routed.rpt
report_power -file $OUT_DIR/${TOP}_power_routed.rpt
report_drc -file $OUT_DIR/${TOP}_drc_routed.rpt

# --- Bitstream ---
write_bitstream -force $OUT_DIR/${TOP}.bit

puts "=========================================="
puts " BUILD COMPLETE: $OUT_DIR/${TOP}.bit"
puts "=========================================="
