---
name: rtl-coding-guide
description: SystemVerilog RTL coding conventions and style rules for the silicontoai NPU project
---

# RTL Coding Guide — silicontoai NPU Project

This skill defines the SystemVerilog coding conventions used throughout the project.
**Always follow these rules** when writing or modifying any `.sv` file under `rtl/`.

---

## 1. File & Module Naming

- One module per file. Filename == module name (e.g., `mac_pe.sv` → `module mac_pe`).
- Module names: `snake_case` (lowercase + underscores).
- Testbench files go in `tb/`, prefixed with `tb_` (e.g., `tb_system_top.sv`).
- Top-level modules end with `_top` (e.g., `npu_core_top`, `npu_system_top`).
- FPGA-specific wrappers prefixed with `fpga_` (e.g., `fpga_pynq_top`).

## 2. Timescale

Always start every file with:
```systemverilog
`timescale 1ns / 1ps
```

## 3. Port Declaration Order

Follow this strict ordering for module ports:
```systemverilog
module example_module (
    // 1. Clock & Reset
    input  logic        clk,
    input  logic        rst_n,

    // 2. Control Inputs (grouped by function, with comment headers)
    input  logic        some_enable,
    input  logic [7:0]  some_config,

    // 3. Data Inputs
    input  logic [15:0][7:0] data_in,

    // 4. Data Outputs
    output logic [15:0][7:0] data_out,

    // 5. Status Outputs
    output logic        done
);
```

## 4. Signal Naming Conventions

| Category | Convention | Example |
|---|---|---|
| Clocks | `clk` or `clk_<domain>` | `clk`, `board_clk` |
| Resets | `rst_n` (active-low) | `rst_n`, `rst_btn_n` |
| Pipeline registers | `_q` suffix (1-stage), `_pipe` (multi) | `acc_valid_q`, `acc_addr_pipe` |
| Write enable | `_wen` or `_we` suffix | `sram_wen`, `drain_cmd_we` |
| Read enable | `_ren` or `_re` suffix | `drain_re`, `npu_sram_ren` |
| Data buses | `_data`, `_in`, `_out` suffix | `rdata`, `wdata`, `act_in` |
| AXI signals | Standard AXI naming | `arvalid`, `arready`, `rdata` |
| MMIO prefixed | `mmio_` prefix | `mmio_start_dma`, `mmio_npu_done` |
| Internal wires | Descriptive, no prefix needed | `bank_sel`, `forward_en` |
| Generate labels | `UPPER_CASE` | `PE_ROW`, `BIND_INPUTS` |
| FSM state type | `<name>_state_t` or `<name>_t` | `npu_state_t`, `selftest_state_t` |
| FSM states | `ST_` prefix, `UPPER_CASE` | `ST_IDLE`, `ST_EXEC_ACT` |

## 5. Reset Style

- **Always active-low** (`rst_n`).
- **Always synchronous** reset inside `always_ff`:
```systemverilog
always_ff @(posedge clk) begin
    if (!rst_n) begin
        // Reset values
        signal_a <= '0;
        signal_b <= 1'b0;
    end else begin
        // Normal logic
    end
end
```
- Use `'0` for zero initialization of packed types.
- Use `1'b0` / `1'b1` for explicit single-bit values.

## 6. Sequential vs Combinational

- **Sequential**: Always use `always_ff @(posedge clk)`.
- **Combinational**: Always use `always_comb`.
- **Never use** `always @(*)` — use `always_comb` instead.
- **Never use** blocking `=` inside `always_ff`. Always use `<=`.

## 7. Data Types

- Use `logic` everywhere (not `reg` or `wire` in port declarations).
- Use `wire` only for intermediate `assign` statements inside modules if needed.
- The project uses **SystemVerilog packed arrays** extensively:
```systemverilog
logic [15:0][7:0]   data_bus;    // 16 lanes × 8-bit
logic [15:0][31:0]  psum_bus;    // 16 lanes × 32-bit
```

## 8. Parameters & Localparams

```systemverilog
module example #(
    parameter  ADDR_WIDTH = 10,      // Configurable from outside
    parameter  DATA_WIDTH = 128
)(
    ...
);
    localparam TOTAL_WIDTH = COLS * DATA_WIDTH;  // Internal use only
    localparam integer AXI_BEAT_BYTES = AXI_DATA_WIDTH / 8;
```

## 9. FPGA Synthesis Attributes

Apply these when targeting FPGA BRAM or DSP:
```systemverilog
(* ram_style = "block" *) logic [DATA_WIDTH-1:0] mem [0:(1<<ADDR_WIDTH)-1];
(* use_dsp = "yes" *)     // before always_ff for DSP inference
(* mark_debug = "true" *) logic some_debug_signal;  // ILA probes
```

## 10. Verilator Lint Pragmas

Suppress only specific warnings around the affected lines:
```systemverilog
/* verilator lint_off UNUSEDSIGNAL */
logic [15:0][7:0]  unused_act_right;
/* verilator lint_on UNUSEDSIGNAL */

/* verilator lint_off GENUNNAMED */
generate
    // unnamed generate blocks
endgenerate
```
- Always **re-enable** (`lint_on`) immediately after the affected code.
- Never use blanket `lint_off` at file level.

## 11. Generate Blocks

```systemverilog
genvar i, j;
generate
    for (i = 0; i < 16; i++) begin : LABEL_NAME
        // ...
    end
endgenerate
```
- Always use named generate blocks (`: LABEL_NAME`).
- Label names in `UPPER_CASE`.

## 12. Comments & Language

- **Korean (한국어) comments are allowed and common** in this project.
- Use `//` for inline comments.
- Use `// Section Header` for block separators.
- Major sections use decorative separators:
```systemverilog
// =========================================================================
// 7. NPU Core Instantiation
// =========================================================================
```

## 13. Module Instantiation

- Use named port connections (`.port_name(signal_name)`), never positional.
- Align connections for readability:
```systemverilog
npu_core_top u_npu_core (
    .clk            (clk),
    .rst_n          (rst_n),
    .sram_act_in    (npu_act_data),
    .sram_weight_in (npu_wt_data),
    .weight_load_en (core_weight_load_en)
);
```
- Instance names: `u_` prefix (e.g., `u_dma`, `u_npu_core`, `u_skew`).
- Implicit `.*` is allowed in testbenches (`tb/`) but NOT in RTL.

## 14. FSM Coding Pattern

Two-process (state register + next-state logic):
```systemverilog
typedef enum logic [2:0] {
    ST_IDLE,
    ST_ACTIVE,
    ST_DONE
} my_state_t;

my_state_t state, next_state;

// State Register
always_ff @(posedge clk) begin
    if (!rst_n) state <= ST_IDLE;
    else        state <= next_state;
end

// Next State Logic
always_comb begin
    next_state = state;  // Default: hold
    case (state)
        ST_IDLE:   if (start) next_state = ST_ACTIVE;
        ST_ACTIVE: if (done)  next_state = ST_DONE;
        ST_DONE:   if (clear) next_state = ST_IDLE;
        default:   next_state = ST_IDLE;
    endcase
end
```
- Datapath outputs in a **separate `always_ff`** block.
- Always include `default: next_state = ST_IDLE;` in case statements.

## 15. AXI Interface Naming

Follow the ARM AXI4 standard naming:
- Read Address: `arid`, `araddr`, `arlen`, `arsize`, `arburst`, `arvalid`, `arready`
- Read Data: `rid`, `rdata`, `rresp`, `rlast`, `rvalid`, `rready`
- Write Address: `awaddr`, `awvalid`, `awready`
- Write Data: `wdata`, `wstrb`, `wvalid`, `wready`
- Write Response: `bresp`, `bvalid`, `bready`

For AXI-Lite slave ports, prefix with `s_axi_` or `s_axil_`.
