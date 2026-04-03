# ==============================================================================
# Vivado Block Design Build Script — PYNQ-Z2 Overlay
# ==============================================================================
# Creates: PS7 (ARM) → AXI Interconnect → fpga_pynq_top (NPU PL)
# Outputs: .bit + .hwh (both required for PYNQ Overlay)
#
# Usage:  vivado -mode batch -source build_pynq_overlay.tcl
# ==============================================================================

set SCRIPT_DIR [file dirname [file normalize [info script]]]
set RTL_DIR    [file normalize [file join $SCRIPT_DIR ../rtl]]
set OUT_DIR    [file normalize [file join $SCRIPT_DIR pynq_overlay]]
set PROJ_DIR   [file normalize [file join $SCRIPT_DIR pynq_proj]]
set PROJ_NAME  npu_overlay
set TOP_BD     system
set PART       xc7z020clg400-1

file mkdir $OUT_DIR

# ==============================================================================
# 1. Create Project
# ==============================================================================
create_project $PROJ_NAME $PROJ_DIR -part $PART -force

# Try PYNQ-Z2 board preset (if board files are installed)
set pynq_boards [get_board_parts -quiet *pynq-z2*]
if {[llength $pynq_boards] > 0} {
    set_property board_part [lindex $pynq_boards 0] [current_project]
    puts "INFO: Using PYNQ-Z2 board preset: [lindex $pynq_boards 0]"
} else {
    puts "INFO: PYNQ-Z2 board files not found. Using manual PS7 configuration."
}

# ==============================================================================
# 2. Add RTL Sources
# ==============================================================================
add_files [glob $RTL_DIR/*.sv]
add_files [glob $RTL_DIR/*.v]
update_compile_order -fileset sources_1

# ==============================================================================
# 3. Create Block Design
# ==============================================================================
create_bd_design $TOP_BD

# --- PS7 Processing System ---
create_bd_cell -type ip -vlnv xilinx.com:ip:processing_system7:5.5 ps7

# Configure PS7 for PYNQ-Z2 (manual config, overridden by board preset if available)
set_property -dict [list \
    CONFIG.PCW_USE_M_AXI_GP0            {1}    \
    CONFIG.PCW_M_AXI_GP0_ENABLE_STATIC_REMAP {0} \
    CONFIG.PCW_FPGA0_PERIPHERAL_FREQMHZ {100}  \
    CONFIG.PCW_EN_CLK0_PORT             {1}    \
    CONFIG.PCW_EN_RST0_PORT             {1}    \
    CONFIG.PCW_UART1_PERIPHERAL_ENABLE  {1}    \
    CONFIG.PCW_UART1_UART1_IO           {MIO 48 .. 49} \
    CONFIG.PCW_USB0_PERIPHERAL_ENABLE   {1}    \
    CONFIG.PCW_SD0_PERIPHERAL_ENABLE    {1}    \
    CONFIG.PCW_UIPARAM_DDR_ENABLE       {1}    \
    CONFIG.PCW_UIPARAM_DDR_PARTNO       {MT41K256M16 RE-125} \
    CONFIG.PCW_UIPARAM_DDR_FREQ_MHZ     {525.0} \
] [get_bd_cells ps7]

# If board preset was applied, re-run board automation for PS7
if {[llength $pynq_boards] > 0} {
    apply_bd_automation -rule xilinx.com:bd_rule:processing_system7 \
        -config {make_external "FIXED_IO, DDR" Master "Disable" Slave "Disable"} \
        [get_bd_cells ps7]
} else {
    # Manual: make FIXED_IO and DDR external
    apply_bd_automation -rule xilinx.com:bd_rule:processing_system7 \
        -config {make_external "FIXED_IO, DDR" Master "Disable" Slave "Disable"} \
        [get_bd_cells ps7]
}

# --- Add our NPU PL module (Verilog wrapper for BD compatibility) ---
create_bd_cell -type module -reference fpga_pynq_top_wrapper npu_pl

# --- AXI Interconnect: PS7 M_AXI_GP0 → npu_pl S_AXI ---
apply_bd_automation -rule xilinx.com:bd_rule:axi4 \
    -config {Clk_master {/ps7/FCLK_CLK0} Clk_slave {/ps7/FCLK_CLK0} Clk_xbar {/ps7/FCLK_CLK0} Master {/ps7/M_AXI_GP0} Slave {/npu_pl/s_axi} intc_ip {New AXI Interconnect} master_apm {0}} \
    [get_bd_intf_pins npu_pl/s_axi]

# --- LED output port ---
create_bd_port -dir O -from 3 -to 0 led
connect_bd_net [get_bd_pins npu_pl/led] [get_bd_ports led]

# ==============================================================================
# 4. Assign Addresses
# ==============================================================================
# The automation assigns addresses automatically, but let's verify/set explicitly
set addr_seg [get_bd_addr_segs -quiet ps7/Data/SEG_npu_pl_reg0]
if {$addr_seg ne ""} {
    set_property offset 0x43C00000 $addr_seg
    set_property range 128 $addr_seg
    puts "INFO: NPU PL mapped at 0x43C00000, size=128 bytes"
} else {
    puts "WARN: Could not find address segment — check address editor manually"
}

# ==============================================================================
# 5. Validate & Generate
# ==============================================================================
validate_bd_design
save_bd_design

generate_target all [get_files $PROJ_DIR/$PROJ_NAME.srcs/sources_1/bd/$TOP_BD/$TOP_BD.bd]

make_wrapper -files [get_files $TOP_BD.bd] -top
add_files -norecurse $PROJ_DIR/$PROJ_NAME.gen/sources_1/bd/$TOP_BD/hdl/${TOP_BD}_wrapper.v
update_compile_order -fileset sources_1
set_property top ${TOP_BD}_wrapper [current_fileset]

# ==============================================================================
# 6. Constraints (LEDs only — clk/rst come from PS)
# ==============================================================================
set xdc_content {
# PYNQ-Z2 LED pins
set_property PACKAGE_PIN R14 [get_ports {led[0]}]
set_property PACKAGE_PIN P14 [get_ports {led[1]}]
set_property PACKAGE_PIN N16 [get_ports {led[2]}]
set_property PACKAGE_PIN M14 [get_ports {led[3]}]
set_property IOSTANDARD LVCMOS33 [get_ports {led[*]}]
}
set xdc_file $PROJ_DIR/pynq_leds.xdc
set fh [open $xdc_file w]
puts $fh $xdc_content
close $fh
add_files -fileset constrs_1 $xdc_file

# ==============================================================================
# 7. Synthesis
# ==============================================================================
launch_runs synth_1 -jobs 4
wait_on_run synth_1
if {[get_property STATUS [get_runs synth_1]] ne "synth_design Complete!"} {
    error "Synthesis failed!"
}
puts "INFO: Synthesis complete"

# ==============================================================================
# 8. Implementation + Bitstream
# ==============================================================================
launch_runs impl_1 -to_step write_bitstream -jobs 4
wait_on_run impl_1
if {[get_property STATUS [get_runs impl_1]] ne "write_bitstream Complete!"} {
    error "Implementation/Bitstream failed!"
}
puts "INFO: Implementation + Bitstream complete"

# ==============================================================================
# 9. Copy outputs (.bit + .hwh) for PYNQ
# ==============================================================================
set bit_src [glob $PROJ_DIR/$PROJ_NAME.runs/impl_1/${TOP_BD}_wrapper.bit]
set hwh_src [glob $PROJ_DIR/$PROJ_NAME.gen/sources_1/bd/$TOP_BD/hw_handoff/${TOP_BD}.hwh]

file copy -force $bit_src $OUT_DIR/npu_overlay.bit
file copy -force $hwh_src $OUT_DIR/npu_overlay.hwh

# Also copy for convenience with matching names
file copy -force $bit_src $OUT_DIR/${TOP_BD}_wrapper.bit

puts "=========================================="
puts "PYNQ OVERLAY BUILD COMPLETE"
puts "  Bitstream: $OUT_DIR/npu_overlay.bit"
puts "  HW Handoff: $OUT_DIR/npu_overlay.hwh"
puts "=========================================="
puts ""
puts "Upload both files to PYNQ board:"
puts "  scp $OUT_DIR/npu_overlay.* xilinx@<pynq-ip>:~/jupyter_notebooks/"

# ==============================================================================
# 10. Reports
# ==============================================================================
open_run impl_1
report_timing_summary -file $OUT_DIR/timing_summary.rpt
report_utilization -file $OUT_DIR/utilization.rpt
report_power -file $OUT_DIR/power.rpt

puts "Reports saved to $OUT_DIR/"
