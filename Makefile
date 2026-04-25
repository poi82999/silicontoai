.PHONY: all sim sim-system build-core build-system l5-signoff l5-repeatability sys uvm uvm-smoke uvm-basic uvm-stress uvm-merge-cov verify verify-fast verify-all verify-all-fast concat clean clean-artifacts

# ============================================================
# Root Makefile — NPU SiliconToAI Project
# ============================================================

# Verilator Co-simulation (via scripts/Makefile)
all:
	$(MAKE) -C scripts all

sim:
	$(MAKE) -C scripts sim

build-core:
	$(MAKE) -C scripts build-core

build-system:
	$(MAKE) -C scripts build-system

sim-system:
	$(MAKE) -C scripts sim-system SYSTEM_PACKAGE="$(foreach pkg,$(SYSTEM_PACKAGE),../$(pkg))" SYSTEM_ARGS="$(SYSTEM_ARGS)"

l5-signoff:
	@bash scripts/run_l5_signoff.sh

l5-repeatability:
	@bash scripts/check_l5_repeatability.sh

# Vivado System-Level Simulation
sys:
	@if [ "$(OS)" = "Windows_NT" ]; then \
		cd scripts && run_sys.bat; \
	else \
		bash scripts/run_sys.sh; \
	fi

# Vivado UVM Simulation
uvm:
	@if [ "$(OS)" = "Windows_NT" ]; then \
		cd scripts && run_uvm.bat; \
	else \
		bash scripts/run_uvm.sh; \
	fi

uvm-smoke:
	@if [ "$(OS)" = "Windows_NT" ]; then \
		cd scripts && run_uvm.bat npu_smoke_test; \
	else \
		bash scripts/run_uvm.sh npu_smoke_test; \
	fi

uvm-basic:
	@if [ "$(OS)" = "Windows_NT" ]; then \
		cd scripts && run_uvm.bat npu_basic_test; \
	else \
		bash scripts/run_uvm.sh npu_basic_test; \
	fi

uvm-stress:
	@if [ "$(OS)" = "Windows_NT" ]; then \
		cd scripts && run_uvm.bat npu_stress_test; \
	else \
		bash scripts/run_uvm.sh npu_stress_test; \
	fi

uvm-merge-cov:
	@if [ "$(OS)" = "Windows_NT" ]; then \
		cd scripts && merge_uvm_cov.bat; \
	else \
		bash scripts/merge_uvm_cov.sh; \
	fi

verify-fast:
	@bash scripts/verify.sh fast

verify:
	@bash scripts/verify.sh full

# Full-stack one-step verification: L6 pytest + RTL verify-fast + L5 sign-off.
# Use `make verify-all-fast` to skip L5 (faster).
verify-all:
	@bash scripts/verify_all.sh

verify-all-fast:
	@bash scripts/verify_all.sh --skip-l5

clean-artifacts:
	@if [ "$(OS)" = "Windows_NT" ]; then \
		cmd.exe /c "cd /d $(shell wslpath -w $(CURDIR) 2>/dev/null || printf '%s' '$(CURDIR)')\\scripts && call clean_artifacts.bat"; \
	else \
		bash scripts/clean_artifacts.sh; \
	fi

# Concatenate all sources into all_source_codes.txt
concat:
	python tools/concat.py

# Clean build and simulation artifacts
clean:
	$(MAKE) -C scripts clean
	@if [ "$(OS)" = "Windows_NT" ]; then \
		cmd.exe /c "cd /d $(shell wslpath -w $(CURDIR) 2>/dev/null || printf '%s' '$(CURDIR)') && if exist sim rd /s /q sim & if exist xsim.dir rd /s /q xsim.dir"; \
	else \
		rm -rf sim xsim.dir; \
	fi
