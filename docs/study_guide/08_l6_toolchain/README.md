# Phase 8: L6 컴파일러 툴체인 학습 가이드

> PyTorch 모델 → NPU 실행 패키지를 만드는 Python 파이프라인.
> RTL을 이해한 후 진행하면 "왜 이 JSON이 이 형태인지" 완전히 이해됩니다.

---

## 파일 목록 (학습 순서)

| # | 파일 | 역할 | 줄 수(약) |
|---|------|------|-----------|
| 27 | `common.py` | 공통 상수 (TILE_SIZE=16, DATA_WIDTH 등) | ~100 |
| 28 | `ir.py` | Program/Op/Tensor 정의 (Mini IR) | ~400 |
| 29 | `tracer.py` | PyTorch `torch.fx` → Program 변환 | ~300 |
| 30 | `frontend.py` | JSON → Program 로딩 | ~200 |
| 31 | `fusion.py` | Op Fusion (Linear+ReLU, Conv+BN) | ~300 |
| 32 | `lowering.py` | GEMM 타일링 (M/N/K → 16×16 타일) | ~400 |
| 33 | `scheduler.py` | 타일 순서/비용 최적화 | ~350 |
| 34 | `dma_scheduler.py` | DMA 전송 스케줄링 | ~200 |
| 35 | `emitter.py` | JSON workload package 생성 | ~500 |
| 36 | `validator.py` | 패키지 정합성 검증 | ~200 |
| 37 | `compiler.py` | **전체 파이프라인 총괄** | ~500 |
| 38 | `replay_bridge.py` | RTL 시뮬레이션 연동 | ~300 |
| 39 | `roofline.py` | Roofline 성능 모델 | ~200 |
| 40 | `roofline_profiles.py` | FPGA별 하드웨어 프로파일 | ~100 |
| 41 | `inspector.py` | 패키지 검사 CLI | ~150 |
| 42 | `api.py` | 외부 API 인터페이스 | ~100 |
| 43 | `linear_export.py` | Legacy CLI (단일 linear) | ~200 |
| 44 | `__main__.py` | CLI 엔트리포인트 | ~100 |
| 45 | `__init__.py` | 패키지 초기화 | ~10 |

## 컴파일 파이프라인 흐름

```
PyTorch Model
    ↓ tracer.py (torch.fx)
Program (IR)
    ↓ fusion.py (opt)
Optimized Program
    ↓ lowering.py (tiling)
TilePlan[]
    ↓ scheduler.py (ordering)
Ordered TilePlan[]
    ↓ emitter.py (JSON gen)
Workload Package (activations.json, weights.json, golden.json, manifest.json)
    ↓ replay_bridge.py (→ RTL sim)
PASS / FAIL
```

## 공장 비유 복습

| 컴파일 단계 | 공장 비유 |
|------------|-----------|
| `tracer` | 주문접수 — 고객 도면→내부 사양서 |
| `fusion` | 공정 통합 — 2개 공정을 1개로 합침 |
| `lowering` | 공정설계 — 큰 제품을 생산라인 크기로 분할 |
| `scheduler` | 일정관리 — 생산 순서 최적화 |
| `emitter` | 출하문서 — 생산지시서 발행 |
| `compiler` | 설계부 총괄 — 전 과정 지휘 |

## 학습 팁

1. **`common.py`** → `ir.py`를 먼저 : 데이터 구조를 이해해야 나머지가 보임
2. **`compiler.py`**는 마지막에: 다른 모듈을 호출하는 orchestrator
3. 각 모듈의 **테스트 파일** (`l6/tests/test_*.py`)을 함께 읽으면 입출력 예시를 볼 수 있음

---

> 각 파일별 상세 학습 가이드는 해당 파일을 읽으며 보충 예정입니다.
