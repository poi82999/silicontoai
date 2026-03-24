@echo off
call C:\AMDDesignTools\2025.2\Vivado\settings64.bat

if exist xsim.dir rmdir /s /q xsim.dir

xvlog -sv -L uvm ^
  ..\rtl\mac_pe.sv ^
  ..\rtl\systolic_data_setup.sv ^
  ..\rtl\systolic_array_16x16.sv ^
  ..\rtl\psum_accumulator_buffer.sv ^
  ..\rtl\npu_core_top.sv ^
  ..\tb\npu_if.sv ^
  ..\tb\npu_uvm_pkg.sv ^
  ..\tb\tb_top.sv

xelab -debug typical -top tb_top -L uvm -timescale 1ns/1ps -snapshot my_sim

xsim my_sim -testplusarg UVM_TESTNAME=npu_test -runall
