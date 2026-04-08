import json
import numpy as np
from pathlib import Path
import struct

def int_to_fp32_bits(val):
    # If the file already has float values like 1.5, or integer bits like 1150681088, wait
    # If it is a small integer like 1200, 2400, 19200, it's from the old INT32 pipeline.
    # Convert it to IEEE 754 float32 bits
    if val > 1000000: # Already bit representation
        return val
    float_val = float(val)
    # Pack as float32, unpack as uint32 to get bit representation
    packed = struct.pack('<f', float_val)
    return struct.unpack('<I', packed)[0]

def process_golden_file(filepath):
    print(f"Processing {filepath}...")
    with open(filepath, 'r') as f:
        data = json.load(f)
        
    changed = False
    for item in data.get('outputs', []):
        if 'vector' in item:
            new_vector = []
            for v in item['vector']:
                new_v = int_to_fp32_bits(v)
                if new_v != v:
                    changed = True
                new_vector.append(new_v)
            item['vector'] = new_vector
            
    if changed:
        with open(filepath, 'w') as f:
            json.dump(data, f, indent=2)
        print(f"Updated {filepath}")

for path in Path("workloads").rglob("golden.json"):
    # Only touch reference tests that were purely int32
    if 'system_reference_' in path.parts[-2] or 'reference_' in path.parts[-2]:
        process_golden_file(path)

print("Done")
