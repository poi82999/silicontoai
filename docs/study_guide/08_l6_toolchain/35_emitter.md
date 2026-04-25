# 35. `emitter.py` — Workload Package 출력

> **파일 위치**: `l6/src/l6_toolchain/emitter.py` (346줄)
> **역할**: TilePlanEntry + activation/weight 행렬 → 디스크에 manifest.json + activation/weight/golden 파일 출력
> **선수 지식**: [32_lowering.md](32_lowering.md), numpy 행렬 슬라이싱, JSON 직렬화
> **공장 비유**: 출하 문서 작성팀 — 한 묶음(타일)에 들어갈 자재(activation), 금형(weight), 검수기준(golden)을 모두 봉투에 넣어 출고

---

## 이 파일이 중요한 이유

L6의 **최종 산출물 생성기**입니다. 컴파일러가 만든 추상적 schedule을 RTL 시뮬레이터가 실제로 읽을 수 있는 **JSON + 데이터 파일**로 변환합니다. `tb/main.cpp`나 `tb/system_replay_main.cpp`가 이 산출물을 직접 로드합니다.

---

## 큰 그림: 2개 export 함수

```
LinearOp + LinearData
       │
       ├── export_linear_tile_package    → single 16×16×16 (legacy)
       │                                    └─ activation, weight, golden 1세트
       │
       └── export_linear_tiled_package   → arbitrary M, K, N (multi-tile)
                                            └─ tile별 activation/weight/golden
                                            └─ split-K 누적
```

---

## 합성 데이터 생성 (L14-34)

### `_activation_matrix` (L14-23)

```python
def _activation_matrix(spec):
    if spec.activation_mode == "row_ramp":
        base = np.arange(spec.k, dtype=np.int8)     # [0,1,2,...,k-1]
        return np.tile(base, (spec.m, 1))            # 각 row가 같은 ramp
    if spec.activation_mode == "column_ramp":
        base = np.arange(spec.m, dtype=np.int8).reshape(spec.m, 1)
        return np.tile(base, (1, spec.k))
    if spec.activation_mode == "identity":
        return np.eye(spec.m, spec.k, dtype=np.int8)
```

**왜 합성 데이터**: 디버깅/회귀 테스트용. `row_ramp` × `constant_3` = 예측 가능한 결과 → 손으로 계산해서 검증 가능.

### `_weight_matrix` (L26-34)

```python
def _weight_matrix(spec):
    if spec.weight_mode == "constant_3":
        return np.full((spec.k, spec.n), 3, dtype=np.int8)
    if spec.weight_mode == "identity":
        return np.eye(spec.k, spec.n, dtype=np.int8)
    if spec.weight_mode == "column_ramp":
        return np.tile(np.arange(spec.n, dtype=np.int8).reshape(1, spec.n), (spec.k, 1))
```

---

## 명시 데이터 vs 합성 데이터 분기 (L37-54)

```python
def _resolve_activation_matrix(spec, data=None):
    if spec.activation_mode in {EXPLICIT_TENSOR_MODE, "from tensor"}:
        if data is None:
            raise ValueError("activation_mode='from_tensor' requires LinearData.activations.")
        if data.activations.shape != (spec.m, spec.k):
            raise ValueError("LinearData.activations must have shape (m, k).")
        return data.activations
    return _activation_matrix(spec)
```

**핵심**: spec의 mode가 `EXPLICIT_TENSOR_MODE`이면 LinearData에서 받은 실제 텐서 사용, 아니면 합성 데이터 생성.

---

## Golden 계산: `_compute_product` (L57-72) — 가장 중요

```python
def _compute_product(activations, weights, bias=None):
    """Bit-accurate FP16→FP32 matmul matching NPU RTL semantics."""
    try:
        from npu_cuda.golden_accel import compute_golden_single
        return compute_golden_single(activations, weights, bias)
    except ImportError:
        product = activations.astype(np.float16) @ weights.astype(np.float16)
        product = product.astype(np.float32)
        if bias is not None:
            product = product + bias.astype(np.float32)
        return product
```

**왜 FP16 → FP32**: NPU RTL의 FP16 multiplier × FP32 adder 산식과 비트 단위로 일치시키기 위해. 그냥 `@`(float64)로 계산하면 누적 순서/정밀도가 달라서 소수점 끝자리가 어긋날 수 있음.

**CUDA fallback**: `npu_cuda.golden_accel`이 있으면 GPU로 빠르게, 없으면 numpy로. 결과는 동일.

**INT8 모드의 경우**: `_compute_product`는 FP16 곱셈을 하지만, `_golden_outputs_from_product`가 `astype(np.int32)`로 캐스팅 → INT8 signed semantics와 일치 (`product.astype(np.int32).tolist()`).

---

## `export_linear_tile_package` (single 16×16×16, legacy)

```python
def export_linear_tile_package(output_dir, spec, data=None):
    spec.validate()   # 16x16x16 강제
    activations = _resolve_activation_matrix(spec, data)
    weights = _resolve_weight_matrix(spec, data)
    bias = data.bias if data else None

    # 1) activation을 row 단위 dict로
    activation_rows = [
        {"row_index": i, "row_values": activations[i].astype(int).tolist()}
        for i in range(spec.m)
    ]

    # 2) weight를 column-major (NPU 입력 순서)
    weight_columns = [...]

    # 3) golden 계산
    product = _compute_product(activations, weights, bias)
    golden_outputs = _golden_outputs_from_product(product, 0, 0)

    # 4) manifest.json + activation_input.json + weight_input.json + golden_output.json
    write_json(output_dir / "manifest.json", {...})
    write_json(output_dir / "activation_input.json", {"rows": activation_rows})
    ...
```

---

## `export_linear_tiled_package` — Multi-tile

```python
def export_linear_tiled_package(output_dir, spec, data=None, *, tile_order=None):
    activations = _resolve_activation_matrix(spec, data)
    weights = _resolve_weight_matrix(spec, data)
    bias = data.bias if data else None

    tiles = plan_linear_tiles(spec)        # lowering.py
    if tile_order is not None:
        tiles = [tiles[i] for i in tile_order]   # scheduler가 재배열한 순서

    # split-K 누적용 dict: (m_base, n_base) → 누적 product
    accumulators: dict[tuple[int, int], np.ndarray] = {}

    tile_records = []
    for tile in tiles:
        # 1) 이 타일의 activation/weight 슬라이스
        a_slice = activations[tile.m_tile_base:tile.m_tile_base + tile.tile_m,
                              tile.k_tile_base:tile.k_tile_base + tile.tile_k]
        w_slice = weights[tile.k_tile_base:tile.k_tile_base + tile.tile_k,
                          tile.n_tile_base:tile.n_tile_base + tile.tile_n]

        # 2) 패딩 (16×16 가득 채우기)
        a_padded = np.zeros((TILE_SIZE, TILE_SIZE), dtype=np.int8)
        a_padded[:tile.tile_m, :tile.tile_k] = a_slice
        ...

        # 3) 이 타일의 partial product
        partial = _compute_product(a_padded, w_padded)

        # 4) split-K 누적
        key = (tile.m_tile_base, tile.n_tile_base)
        if tile.acc_clear:
            accumulators[key] = partial
        else:
            accumulators[key] = accumulators[key] + partial

        # 5) 마지막 K-패스이면 bias 추가 + golden 출력
        if tile.emit_drain_after:
            final = accumulators[key]
            if bias is not None:
                final = final + bias[tile.n_tile_base:tile.n_tile_base + tile.tile_n]
            golden_for_this_tile = _golden_outputs_from_product(final, ...)
            tile_records.append({...})
            del accumulators[key]   # 메모리 정리
```

**핵심 로직**:
1. **각 타일에 슬라이스**: M/K/N 좌표로 `activations`/`weights`에서 16×16 블록 추출
2. **패딩**: tail tile은 0으로 패딩 (RTL은 항상 16×16을 기대)
3. **Split-K 누적**: `acc_clear=True`면 새 누적, 아니면 이전 결과에 더함
4. **마지막 K-패스에서 bias + golden 출력**: drain 시점에 최종 결과

**왜 dict로 누산기 관리**: weight_reuse 재배열 시 (m, n) 그룹의 K-패스들이 연속되지 않을 수 있음 → key별 추적 필요.

---

## `_golden_outputs_from_product` (L75 부근)

```python
def _golden_outputs_from_product(product, global_row_base, global_col_base):
    outputs = []
    int_vectors = product.astype(np.int32).tolist()
    for row_idx, vector in enumerate(int_vectors):
        outputs.append({
            "row_index": global_row_base + row_idx,
            "col_base": global_col_base,
            "values_int32": vector,
            ...
        })
    return outputs
```

**무엇**: numpy product → 프레임워크 검증 도구가 이해하는 dict 리스트.

**왜 INT32**: NPU 누산기가 INT32. RTL이 출력할 비트 패턴과 일치.

---

## 산출물 디렉토리 구조

```
output_dir/
├── manifest.json              # 패키지 메타데이터 (m, k, n, tile_count, ...)
├── activation_input.json      # 전체 activation matrix (또는 tile별)
├── weight_input.json          # weight (column-major)
├── golden_output.json         # 기대 출력 (INT32)
└── (tiled의 경우) tiles/
    ├── tile_0/
    │   ├── activation.json
    │   ├── weight.json
    │   └── golden.json
    └── ...
```

`tb/main.cpp`와 `host/replay_package.h`가 이 구조를 직접 파싱.

---

## 핵심 개념 정리

| 개념 | 의미 | 어디서 |
|---|---|---|
| **Synthetic vs explicit data** | row_ramp/constant_3 vs LinearData | `_resolve_*_matrix` |
| **Bit-accurate golden** | FP16 mul × FP32 add (RTL과 일치) | `_compute_product` |
| **Tile slicing** | (m,n,k) 좌표로 행렬 슬라이스 | tiled export |
| **Padding to 16×16** | tail tile도 16 가득 채우기 | tiled export |
| **Split-K accumulation** | acc_clear/emit_drain_after 신호로 누산 | dict[(m,n)] |
| **CUDA fallback** | npu_cuda 있으면 GPU, 없으면 numpy | `_compute_product` try/except |

---

## 연습 문제

1. `LinearOp(m=20, k=16, n=16)` (M tail tile)을 export하면 두 번째 타일의 activation 슬라이스 shape는? (`tile_m=4`)
2. split-K 2-패스에서 첫 패스의 `acc_clear`와 둘째의 `acc_clear`는? 누적 결과는 어디에 저장되는가?
3. `_compute_product`가 FP16 곱셈을 강제하는 이유는? 그냥 `@` (float64)와 비교했을 때 어떤 차이가 발생할 수 있는가?
4. `tile_order=[2, 0, 1, 3]`을 줬는데 split-K integrity가 깨지면 어떤 결과가 나올까?

---

## 다음 파일로 넘어가기

→ [36_validator.md](36_validator.md): `validator.py` — emitter가 만든 패키지의 schema/내용 검증
