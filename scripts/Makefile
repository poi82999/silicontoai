# 디렉토리 설정
VERILATOR = verilator
RTL_DIR   = ../rtl
TB_DIR    = ../tb
HOST_DIR  = ../host
BUILD_DIR = ../build
SYSTEM_BUILD_DIR = ../build_system

# Top 모듈 이름 (dma_controller.sv 안의 모듈명)
TOP = npu_core_top
SYSTEM_TOP = npu_system_top

.PHONY: all sim sim-system build-core build-system clean

all: sim

build-core: $(BUILD_DIR)/V$(TOP)

build-system: $(SYSTEM_BUILD_DIR)/V$(SYSTEM_TOP)

# Verilator 빌드
$(BUILD_DIR)/V$(TOP): $(RTL_DIR)/*.sv $(TB_DIR)/main.cpp $(HOST_DIR)/*.h
	@mkdir -p $(BUILD_DIR)
	$(VERILATOR) -Wall -cc $(RTL_DIR)/*.sv --exe $(TB_DIR)/main.cpp \
		-CFLAGS "-I$(HOST_DIR) -std=c++17" --Mdir $(BUILD_DIR) --top-module $(TOP)
	make -C $(BUILD_DIR) -f V$(TOP).mk V$(TOP)

$(SYSTEM_BUILD_DIR)/V$(SYSTEM_TOP): $(RTL_DIR)/*.sv $(TB_DIR)/system_replay_main.cpp $(HOST_DIR)/*.h
	@mkdir -p $(SYSTEM_BUILD_DIR)
	$(VERILATOR) -Wall -Wno-fatal --trace -cc $(RTL_DIR)/*.sv --exe $(TB_DIR)/system_replay_main.cpp \
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