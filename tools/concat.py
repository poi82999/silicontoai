import os

# 프로젝트 루트를 기준으로 경로를 계산 (tools/ 에서 실행되는 경우도 대응)
script_dir = os.path.dirname(os.path.abspath(__file__))
project_root = os.path.dirname(script_dir)

files = [
    'rtl/npu_system_top.sv',
    'rtl/dp_sram_bank.sv',
    'rtl/npu_core_top.sv',
    'rtl/dma_controller.sv',
    'rtl/psum_accumulator_buffer.sv',
    'rtl/systolic_array_16x16.sv',
    'rtl/mac_pe.sv',
    'rtl/systolic_data_setup.sv',
    'tb/npu_if.sv',
    'tb/tb_top.sv',
    'tb/npu_uvm_pkg.sv',
    'tb/tb_system_top.sv',
    'host/mock_allocator.h',
    'host/npu_dma_controller.h',
]

output_path = os.path.join(project_root, 'all_source_codes.txt')

with open(output_path, 'w', encoding='utf-8') as out:
    for f in files:
        full = os.path.join(project_root, f.replace('/', os.sep))
        if os.path.exists(full):
            content = open(full, 'r', encoding='utf-8').read()
            out.write(f"========================================================\n")
            out.write(f"File: {f}\n")
            out.write(f"========================================================\n\n")
            out.write(content + "\n\n")
        else:
            print(f"[WARNING] File not found: {f}")

print(f"Concatenation complete → {output_path}")
