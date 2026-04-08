# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vnpu_system_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vnpu_system_top \
	Vnpu_system_top___024root__DepSet_h367f5736__0 \
	Vnpu_system_top___024root__DepSet_h367f5736__1 \
	Vnpu_system_top___024root__DepSet_h367f5736__2 \
	Vnpu_system_top___024root__DepSet_h367f5736__3 \
	Vnpu_system_top___024root__DepSet_h78786b59__0 \
	Vnpu_system_top___024root__DepSet_h78786b59__1 \
	Vnpu_system_top___024root__DepSet_h78786b59__2 \
	Vnpu_system_top___024root__DepSet_h78786b59__3 \
	Vnpu_system_top___024root__DepSet_h78786b59__4 \
	Vnpu_system_top___024root__DepSet_h78786b59__5 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__0 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__1 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__2 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__3 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__4 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__5 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__6 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__7 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__8 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__9 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__10 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__11 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__12 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__13 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__14 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__15 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__16 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__17 \
	Vnpu_system_top_fp32_adder__DepSet_hb8754f69__18 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vnpu_system_top__ConstPool_0 \
	Vnpu_system_top___024root__Slow \
	Vnpu_system_top___024root__DepSet_h367f5736__0__Slow \
	Vnpu_system_top___024root__DepSet_h78786b59__0__Slow \
	Vnpu_system_top___024root__DepSet_h78786b59__1__Slow \
	Vnpu_system_top___024root__DepSet_h78786b59__2__Slow \
	Vnpu_system_top___024unit__Slow \
	Vnpu_system_top___024unit__DepSet_hcef45340__0__Slow \
	Vnpu_system_top_fp32_adder__Slow \
	Vnpu_system_top_fp32_adder__DepSet_h067e5314__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vnpu_system_top__Trace__0 \
	Vnpu_system_top__Trace__1 \
	Vnpu_system_top__Trace__2 \
	Vnpu_system_top__Trace__3 \
	Vnpu_system_top__Trace__4 \
	Vnpu_system_top__Trace__5 \
	Vnpu_system_top__Trace__6 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vnpu_system_top__Syms \
	Vnpu_system_top__Trace__0__Slow \
	Vnpu_system_top__TraceDecls__0__Slow \
	Vnpu_system_top__Trace__1__Slow \
	Vnpu_system_top__Trace__2__Slow \
	Vnpu_system_top__Trace__3__Slow \
	Vnpu_system_top__Trace__4__Slow \
	Vnpu_system_top__Trace__5__Slow \
	Vnpu_system_top__Trace__6__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
