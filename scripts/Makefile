# 디렉토리 설정
VERILATOR = verilator
VERILATOR_GFLAGS ?=
BUILD_SUFFIX ?=
RTL_DIR   = ../rtl
TB_DIR    = ../tb
HOST_DIR  = ../host
BUILD_DIR = ../build$(BUILD_SUFFIX)
SYSTEM_BUILD_DIR = ../build_system$(BUILD_SUFFIX)

# Top 모듈 이름 (dma_controller.sv 안의 모듈명)
TOP = npu_core_top
SYSTEM_TOP = npu_system_top

.PHONY: all sim sim-system build-core build-system clean

all: sim

build-core: $(BUILD_DIR)/V$(TOP)

build-system: $(SYSTEM_BUILD_DIR)/V$(SYSTEM_TOP)

# Package must be listed first, then rest of RTL (excluding FPGA tops which use shortreal)
RTL_PKG   = $(RTL_DIR)/include/npu_def_pkg.sv
RTL_FILES = $(shell find $(RTL_DIR) -name '*.sv' \
		| grep -v npu_def_pkg.sv \
		| grep -v fpga_ \
		| sort)

# Verilator 빌드
$(BUILD_DIR)/V$(TOP): $(RTL_PKG) $(RTL_FILES) $(TB_DIR)/main.cpp $(HOST_DIR)/*.h
	@mkdir -p $(BUILD_DIR)
	$(VERILATOR) -Wall -Wno-fatal $(VERILATOR_GFLAGS) -cc $(RTL_PKG) $(RTL_FILES) --exe $(TB_DIR)/main.cpp \
		-CFLAGS "-I$(HOST_DIR) -std=c++17" --Mdir $(BUILD_DIR) --top-module $(TOP)
	make -C $(BUILD_DIR) -f V$(TOP).mk V$(TOP)

$(SYSTEM_BUILD_DIR)/V$(SYSTEM_TOP): $(RTL_PKG) $(RTL_FILES) $(TB_DIR)/system_replay_main.cpp $(HOST_DIR)/*.h
	@mkdir -p $(SYSTEM_BUILD_DIR)
	$(VERILATOR) -Wall -Wno-fatal $(VERILATOR_GFLAGS) --trace -cc $(RTL_PKG) $(RTL_FILES) --exe $(TB_DIR)/system_replay_main.cpp \
		-CFLAGS "-I$(HOST_DIR) -std=c++17" --Mdir $(SYSTEM_BUILD_DIR) --top-module $(SYSTEM_TOP)
	make -C $(SYSTEM_BUILD_DIR) -f V$(SYSTEM_TOP).mk V$(SYSTEM_TOP)

# 시뮬레이션 실행
sim: build-core
	@echo "======================================"
	@echo " Running Verilator Co-simulation..."
	@echo "======================================"
	@$(BUILD_DIR)/V$(TOP)

sim-system: build-system
	@echo "======================================"
	@echo " Running Verilator System Replay..."
	@echo "======================================"
	@$(SYSTEM_BUILD_DIR)/V$(SYSTEM_TOP) $(SYSTEM_ARGS) $(SYSTEM_PACKAGE)

clean:
	rm -rf $(BUILD_DIR) $(SYSTEM_BUILD_DIR)