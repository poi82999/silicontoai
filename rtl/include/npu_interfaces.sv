`timescale 1ns / 1ps

interface npu_axis_if #(
    parameter DATA_WIDTH = 256
);
    logic                    tvalid;
    logic                    tready;
    logic [DATA_WIDTH-1:0]   tdata;
    logic                    tlast;

    // Master port directions
    modport master (
        output tvalid, tdata, tlast,
        input  tready
    );

    // Slave port directions
    modport slave (
        input  tvalid, tdata, tlast,
        output tready
    );

    // Monitor interface (useful for assertions and simulation)
    modport monitor (
        input tvalid, tready, tdata, tlast
    );
endinterface
