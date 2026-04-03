# ==============================================================================
# XDC for fpga_system_bringup_top  —  Target: Zynq-7000 (PYNQ-Z2 / ZedBoard)
# Part: xc7z020clg400-1
# ==============================================================================

# ------------------------------------------------------------------------------
# Configuration bank voltage
# Zynq-7000 boards typically use 3.3V for PL banks
# ------------------------------------------------------------------------------
set_property CFGBVS VCCO [current_design]
set_property CONFIG_VOLTAGE 3.3 [current_design]

# ------------------------------------------------------------------------------
# Clock  —  125 MHz PL clock from PS (FCLK_CLK0 via EMIO or fabric)
# For standalone (no PS): use onboard 125 MHz oscillator
# PYNQ-Z2: H16 is the PL clock input
# ZedBoard: Y9 is the PL 100 MHz GCLK
# Using PYNQ-Z2 pin as primary
# ------------------------------------------------------------------------------
set_property -dict { PACKAGE_PIN H16  IOSTANDARD LVCMOS33 } [get_ports board_clk]
create_clock -name sys_clk -period 10.000 [get_ports board_clk]

# ------------------------------------------------------------------------------
# Reset  —  Active-low button
# PYNQ-Z2: BTN0 = D19, BTN1 = D20, BTN2 = L20, BTN3 = L19
# Using BTN0 as reset
# ------------------------------------------------------------------------------
set_property -dict { PACKAGE_PIN D19  IOSTANDARD LVCMOS33 } [get_ports rst_btn_n]

# ------------------------------------------------------------------------------
# Start button  —  BTN1 (active-high when pressed)
# ------------------------------------------------------------------------------
set_property -dict { PACKAGE_PIN D20  IOSTANDARD LVCMOS33 } [get_ports start_btn]

# ------------------------------------------------------------------------------
# LEDs  —  PYNQ-Z2 has 4 green LEDs: LD0-LD3
# LD0 = R14, LD1 = P14, LD2 = N16, LD3 = M14
# ------------------------------------------------------------------------------
# alive_led  →  LD0 (heartbeat blink)
set_property -dict { PACKAGE_PIN R14  IOSTANDARD LVCMOS33 } [get_ports alive_led]

# done_led   →  LD1 (sequence complete)
set_property -dict { PACKAGE_PIN P14  IOSTANDARD LVCMOS33 } [get_ports done_led]

# debug_led[0]  →  LD2
set_property -dict { PACKAGE_PIN N16  IOSTANDARD LVCMOS33 } [get_ports {debug_led[0]}]

# debug_led[1]  →  LD3
set_property -dict { PACKAGE_PIN M14  IOSTANDARD LVCMOS33 } [get_ports {debug_led[1]}]

# PYNQ-Z2 has 2 RGB LEDs: LD4 (RGB), LD5 (RGB)
# LD4: R = L15, G = G17, B = N15
# LD5: R = G14, G = L14, B = M15

# debug_led[2]  →  LD4 Red
set_property -dict { PACKAGE_PIN L15  IOSTANDARD LVCMOS33 } [get_ports {debug_led[2]}]

# debug_led[3]  →  LD4 Green
set_property -dict { PACKAGE_PIN G17  IOSTANDARD LVCMOS33 } [get_ports {debug_led[3]}]
