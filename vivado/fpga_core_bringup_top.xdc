# ==============================================================================
# XDC for fpga_core_bringup_top  —  Target: Digilent Arty A7-35T
# Part: xc7a35ticsg324-1L
# Reference: Arty A7 master XDC (Digilent GitHub)
# ==============================================================================

# ------------------------------------------------------------------------------
# Configuration bank voltage
# Arty A7 uses 3.3V configuration bank I/O
# ------------------------------------------------------------------------------
set_property CFGBVS VCCO [current_design]
set_property CONFIG_VOLTAGE 3.3 [current_design]

# ------------------------------------------------------------------------------
# Clock  —  100 MHz onboard oscillator (pin E3)
# ------------------------------------------------------------------------------
set_property -dict { PACKAGE_PIN E3  IOSTANDARD LVCMOS33 } [get_ports board_clk]
create_clock -name sys_clk -period 10.000 [get_ports board_clk]

# ------------------------------------------------------------------------------
# Reset  —  Dedicated active-low reset button "RESET" (pin C2)
# Directly maps to rst_btn_n (active-low in wrapper)
# ------------------------------------------------------------------------------
set_property -dict { PACKAGE_PIN C2  IOSTANDARD LVCMOS33 } [get_ports rst_btn_n]

# ------------------------------------------------------------------------------
# Start button  —  BTN0 (pin D9, active-high when pressed)
# Wrapper has synchronizer + edge detector, so active-high is fine
# ------------------------------------------------------------------------------
set_property -dict { PACKAGE_PIN D9  IOSTANDARD LVCMOS33 } [get_ports start_btn]

# ------------------------------------------------------------------------------
# LEDs  —  Active-high green LEDs (LD4..LD7)
# ------------------------------------------------------------------------------
# alive_led  →  LD4 (heartbeat blink)
set_property -dict { PACKAGE_PIN H5  IOSTANDARD LVCMOS33 } [get_ports alive_led]

# done_led   →  LD5 (sequence complete)
set_property -dict { PACKAGE_PIN J5  IOSTANDARD LVCMOS33 } [get_ports done_led]

# debug_led[0]  →  LD6
set_property -dict { PACKAGE_PIN T9  IOSTANDARD LVCMOS33 } [get_ports {debug_led[0]}]

# debug_led[1]  →  LD7
set_property -dict { PACKAGE_PIN T10 IOSTANDARD LVCMOS33 } [get_ports {debug_led[1]}]

# debug_led[2]  →  RGB LED 0 Red channel (LD0_R)
set_property -dict { PACKAGE_PIN E1  IOSTANDARD LVCMOS33 } [get_ports {debug_led[2]}]

# debug_led[3]  →  RGB LED 0 Green channel (LD0_G)
set_property -dict { PACKAGE_PIN F6  IOSTANDARD LVCMOS33 } [get_ports {debug_led[3]}]