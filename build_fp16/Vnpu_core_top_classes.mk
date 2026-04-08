# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vnpu_core_top.mk for the caller.

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
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vnpu_core_top \
	Vnpu_core_top___024root__DepSet_h208b0367__0 \
	Vnpu_core_top___024root__DepSet_h208b0367__1 \
	Vnpu_core_top___024root__DepSet_h208b0367__2 \
	Vnpu_core_top___024root__DepSet_h208b0367__3 \
	Vnpu_core_top___024root__DepSet_h9f8a81fa__0 \
	Vnpu_core_top___024root__DepSet_h9f8a81fa__1 \
	Vnpu_core_top___024root__DepSet_h9f8a81fa__2 \
	Vnpu_core_top___024root__DepSet_h9f8a81fa__3 \
	Vnpu_core_top___024root__DepSet_h9f8a81fa__4 \
	Vnpu_core_top___024root__DepSet_h9f8a81fa__5 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__0 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__1 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__2 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__3 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__4 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__5 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__6 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__7 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__8 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__9 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__10 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__11 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__12 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__13 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__14 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__15 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__16 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__17 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__18 \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__19 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vnpu_core_top__ConstPool_0 \
	Vnpu_core_top___024root__Slow \
	Vnpu_core_top___024root__DepSet_h208b0367__0__Slow \
	Vnpu_core_top___024root__DepSet_h9f8a81fa__0__Slow \
	Vnpu_core_top___024root__DepSet_h9f8a81fa__1__Slow \
	Vnpu_core_top___024root__DepSet_h9f8a81fa__2__Slow \
	Vnpu_core_top___024unit__Slow \
	Vnpu_core_top___024unit__DepSet_hb80a1465__0__Slow \
	Vnpu_core_top_fp32_adder__Slow \
	Vnpu_core_top_fp32_adder__DepSet_ha54946bd__0__Slow \
	Vnpu_core_top_fp32_adder__DepSet_h24483fb0__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vnpu_core_top__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
