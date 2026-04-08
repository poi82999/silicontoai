import numpy as np
import sys
sys.path.insert(0, r"c:\projects\silicontoai")
from npu_cuda.golden_accel import compute_golden_single

act = np.ones((16, 16), dtype=np.int8) * 3
wt  = np.ones((16, 16), dtype=np.int8) * 5
out = compute_golden_single(act, wt)
print(out.dtype)
print(out[0][0])
print(type(out.view(np.int32)[0][0]))
print(out.view(np.int32)[0][0])
