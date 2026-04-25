# Phase 9: 호스트 드라이버 학습 가이드

> Verilator C++ 시뮬레이션과 FPGA 보드 연동을 위한 파일들.

---

## 파일 목록

| # | 파일 | 역할 |
|---|------|------|
| 46 | `host/npu_dma_controller.h` | C++ DMA 제어 클래스 — Verilator 모델의 MMIO 신호 구동 |
| 47 | `host/mock_allocator.h` | 시뮬레이션용 메모리 할당 모킹 (AXI 메모리 공간 에뮬레이션) |
| 48 | `host/replay_package.h` | JSON workload package 로딩 및 golden 비교 |

## Jupyter Notebooks

| 파일 | 용도 |
|------|------|
| `host/pynq_npu_demo.ipynb` | PYNQ-Z2 보드에서 실제 NPU 구동 데모 |
| `host/npu_fullstack_demo.ipynb` | PyTorch → Compile → FPGA 실행 풀스택 데모 |
| `host/npu_local_viz.ipynb` | 로컬 시각화 (roofline, tile map 등) |

## C++ 드라이버 동작 흐름

```cpp
// 1. Workload package 로드
ReplayPackage pkg("workloads/system_reference_gemm_tile_m0_n0_k0to15/");

// 2. DMA로 weight 전송
dma.load_weights(pkg.weights, pkg.weight_size);

// 3. DMA로 activation 전송
dma.load_activations(pkg.activations, pkg.act_size);

// 4. 실행 대기
dma.wait_done();

// 5. Drain & golden 비교
auto result = dma.drain_and_compare(pkg.golden);
assert(result == PASS);
```

---

> 각 파일별 상세 학습 가이드는 해당 파일을 읽으며 보충 예정입니다.
