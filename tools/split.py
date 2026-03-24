import os
import re

script_dir = os.path.dirname(os.path.abspath(__file__))
project_root = os.path.dirname(script_dir)
input_path = os.path.join(project_root, 'all_source_codes.txt')

if not os.path.exists(input_path):
    print(f"[ERROR] File not found: {input_path}")
    print("Run 'python tools/concat.py' first to generate it.")
    exit(1)

with open(input_path, 'r', encoding='utf-8') as f:
    content = f.read()

parts = re.split(
    r'={56}\nFile:\s*([^\n]+)\n={56}\n',
    content
)

written = 0
for i in range(1, len(parts), 2):
    filepath = parts[i].strip()
    filedata = parts[i + 1].lstrip('\n')

    if filepath.endswith(('.sv', '.cpp', '.h', '.py')):
        full_path = os.path.join(project_root, filepath.replace('/', os.sep))
        os.makedirs(os.path.dirname(full_path), exist_ok=True)
        with open(full_path, 'w', encoding='utf-8') as out:
            out.write(filedata)
        print(f'[OK] Wrote: {filepath}')
        written += 1

print(f"\nSplit complete — {written} files written.")
