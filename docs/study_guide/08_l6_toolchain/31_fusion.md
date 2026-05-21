# 31. `fusion.py` — Op 패턴 합치기 (그래프 최적화)

> **파일 위치**: `l6/src/l6_toolchain/fusion.py` (404줄)
> **역할**: Linear+ReLU, Conv+ReLU, Conv+BN을 **하나의 op**로 합쳐 별도 step을 제거
> **선수 지식**: [28_ir.md](28_ir.md), BatchNorm 수식, ReLU 정의
> **공장 비유**: 공정 통합 — "구멍 뚫고 → 광택" 두 라인을 한 라인에서 한번에 처리하도록 합침

---

## 이 파일이 중요한 이유

각 op를 따로 실행하면 op마다 DMA + 메모리 round-trip이 발생합니다. **연속된 두 op를 합치면 중간 텐서를 외부 메모리에 쓰지 않아도 됩니다** → 사이클·전력 큰 절약. 학계 컴파일러(TVM, MLIR)에서 똑같은 기법을 씁니다.

---

## 📚 학술적 배경: Operator Fusion의 이론

### 1. Halide의 schedule abstraction — Ragan-Kelley et al. PLDI'13

> Ragan-Kelley, J. et al. — "Halide: A Language and Compiler for Optimizing Parallelism, Locality, and Recomputation in Image Processing Pipelines", *PLDI 2013*.

Halide는 **알고리즘과 schedule을 분리**한 최초의 영향력 있는 컴파일러:
- **Algorithm**: 무엇을 계산할지 (`y(x) = blur(x) + 1`)
- **Schedule**: 언제/어디서/어떻게 계산할지 (fuse, tile, vectorize, parallelize)

Fusion은 **schedule decision의 일종**: 두 stage를 producer-consumer 관계로 inline해서 중간 결과를 메모리에 쓰지 않음. 이 파일의 `apply_linear_relu_fusion`이 정확히 그것의 ML 버전.

수학적으로:
```
원래:  T_total = T_compute_op1 + T_DRAM_write(intermediate)
              + T_DRAM_read(intermediate) + T_compute_op2
Fused: T_total = T_compute_op1 + T_compute_op2_inplace
       절약 = T_DRAM_write + T_DRAM_read   ≈ DRAM round-trip
```

DRAM round-trip 비용 = ~100 cycle latency × tensor size. 연산이 작은 ReLU/BatchNorm은 사실상 **메모리 시간이 전부** → fusion이 핵심.

📖 참고: Ragan-Kelley *Halide* PLDI'13 PDF (Phase 7 자료).

### 2. TVM의 fusion rule generalization — Chen et al. OSDI'18

> Chen, T. et al. — "TVM: An Automated End-to-End Optimizing Compiler for Deep Learning", *OSDI 2018*.

TVM은 op를 4가지 카테고리로 분류해서 fusion 규칙을 일반화했습니다:

| Op type | 예시 | Fusion 가능 패턴 |
|---|---|---|
| **kElemWise** | ReLU, Add | 어디든 fuse 가능 |
| **kBroadcast** | BatchNorm scale/shift | injective와 연속 가능 |
| **kInjective** | reshape, transpose | (조건적) |
| **kCommReduce** | sum, max | post-reduction op만 |
| **kOutEWiseFusable** | conv2d, GEMM | "ElemWise를 끝에 붙일 수 있는" 연산 |
| **kOpaque** | sort, custom op | fuse 불가 |

이 프로젝트의 3가지 fusion (Linear+ReLU, Conv+ReLU, Conv+BN)이 모두 **kOutEWiseFusable + kElemWise** 패턴. TVM의 일반 규칙이 이 프로젝트에서는 hard-code되어 있는 셈. 산업급 컴파일러는 이 분류를 활용해 자동으로 패턴 발견.

📖 참고: [TVM Operator Fusion 문서](https://tvm.apache.org/docs/arch/relay_op_strategy.html).

### 3. BN folding의 수학적 정합성 — Jacob et al. CVPR'18

> Jacob, B. et al. — "Quantization and Training of Neural Networks for Efficient Integer-Arithmetic-Only Inference", *CVPR 2018*. (Google MobileNet quantization 논문)

이 논문 §3.4가 "Folding batch normalization layers"를 정확히 다룹니다. 핵심:
- BN은 inference 시 affine transformation $y = \gamma\frac{x-\mu}{\sqrt{\sigma^2+\epsilon}} + \beta$
- 이를 $y = sx + b$ 형태로 만든 후 **이전 conv weight에 흡수** ($W' = sW$, $b' = sb_{\text{conv}} + b$)
- → BN을 별도 layer 없이 conv 한 번에 흡수. **추가 계산 0, 정확도 손실 0** (수학적으로 동일).

이 파일의 `apply_conv_bn_folding`이 정확히 이 수식의 직접 구현. 산업계 모든 inference engine (TensorRT, ONNX Runtime, CoreML)이 같은 작업을 수행.

📖 참고: Jacob CVPR'18 §3.4, Sze 교과서 Ch.7 "Reduce Numerical Precision".

---

## 큰 그림: 3가지 fusion pass

```
Pass 1: Linear + ReLU       → Linear(relu=True)
Pass 2: Conv2d + ReLU       → Conv2d(relu=True)
Pass 3: Conv2d + BatchNorm  → Conv2d(bn_folded=True, weight/bias 갱신)

apply_all_fusions() = BN folding → Conv+ReLU → Linear+ReLU 순서로 적용
```

---

## 자료구조 (L42-46)

```python
@dataclass(frozen=True)
class FusionResult:
    program: Program
    fusions_applied: tuple[str, ...]
```

각 pass와 `apply_all_fusions`는 이 객체를 반환. `fusions_applied`로 무엇이 합쳐졌는지 추적.

---

## 핵심 헬퍼

### `_consumer_map` (L53-59)

```python
def _consumer_map(ops):
    consumers: dict[str, list[int]] = {}
    for idx, op in enumerate(ops):
        for inp in op.inputs:
            consumers.setdefault(inp, []).append(idx)
    return consumers
```

**무엇**: tensor name → 그 tensor를 입력으로 쓰는 op들의 인덱스 리스트.

**왜 필요**: fusion은 **중간 텐서가 정확히 하나의 consumer를 가진 경우**만 가능. 두 곳에서 쓰면 합치면 안 됨.

### `_single_consumer_ok` (L62-73)

```python
def _single_consumer_ok(intermediate_name, consumer_map, expected_idx, program_outputs):
    if intermediate_name in program_outputs:
        return False                              # 그래프 출력이면 합치기 불가
    consumers = consumer_map.get(intermediate_name, [])
    return len(consumers) == 1 and consumers[0] == expected_idx
```

**3가지 안전 조건**:
1. 중간 tensor가 program output이 아닐 것
2. consumer가 정확히 1개
3. 그 consumer가 바로 다음 op (`expected_idx`)일 것

→ Residual connection처럼 중간 결과를 다시 쓰는 그래프는 **안 합쳐짐** (정확성 보장).

---

## Pass 1: Linear + ReLU → Linear(relu=True) (L87-150 근처)

```python
def apply_linear_relu_fusion(program):
    for idx, op in enumerate(ops):
        if op.kind != "linear":
            new_ops.append(op); continue

        intermediate = op.outputs[0]
        if not _single_consumer_ok(intermediate, consumer_map, idx + 1, program.outputs):
            new_ops.append(op); continue

        next_op = ops[idx + 1]
        if next_op.kind != "relu":
            new_ops.append(op); continue

        # 합치기: 새 attrs에 relu=True 추가, 출력은 relu의 출력으로
        new_attrs = dict(op.attrs); new_attrs["relu"] = True
        fused = OpNode(
            name=next_op.name,
            kind="linear",
            inputs=op.inputs,
            outputs=next_op.outputs,
            attrs=new_attrs,
        )
        new_ops.append(fused)
        skip_indices.add(idx + 1)
        removed_tensors.add(intermediate)
        fusion_names.append(next_op.name)

    return FusionResult(program=Program(...), fusions_applied=tuple(fusion_names))
```

**핵심 동작**:
1. 다음 op가 ReLU + safe한 single-consumer 조건 만족 → 합칠 후보
2. Linear의 attrs에 `"relu": True` 추가
3. 출력 tensor를 ReLU의 출력으로 rewire
4. 중간 tensor를 `program.tensors`에서 제거
5. 다음 op (ReLU) 인덱스를 `skip_indices`에 등록 → 두 번 처리 방지

**왜 새 op의 name을 `next_op.name` (relu)으로?**: 출력 tensor의 이름을 `next_op.outputs[0]`로 잇기 위함. 그래야 그래프 뒤쪽이 끊어지지 않음.

---

## Pass 2: Conv2d + ReLU → Conv2d(relu=True)

`apply_linear_relu_fusion`과 거의 동일. `op.kind == "conv2d"`로만 다름.

---

## Pass 3: Conv2d + BatchNorm → Conv2d(bn_folded=True) — 가장 복잡

### BN folding 수학

BatchNorm:
```
y = γ * (x - μ) / sqrt(σ² + ε) + β
  = γ * x / sqrt(σ²+ε) - γ * μ / sqrt(σ²+ε) + β
  = (γ / sqrt(σ²+ε)) * x + (β - γ*μ / sqrt(σ²+ε))
  = scale * x + shift                      ← BN을 affine 형태로
```

이걸 Conv 결과에 적용하면:
```
y = scale * (W ⊛ x + b_conv) + shift
  = (scale * W) ⊛ x + (scale * b_conv + shift)
  = W' ⊛ x + b'                            ← Conv weight/bias로 흡수
```

→ BN을 **별도 step 없이** Conv weight/bias만 바꿔서 처리 가능.

### 코드 흐름 (`apply_conv_bn_folding`)

```python
def apply_conv_bn_folding(program, *, tensor_data=None):
    for idx, op in enumerate(ops):
        if op.kind != "conv2d": continue
        next_op = ops[idx + 1]
        if next_op.kind != "batch_norm" or next_op.inputs[0] != op.outputs[0]:
            continue   # safe pair 아니면 skip

        # 1) Conv weight/bias 추출
        w_conv = np.asarray(op.attrs["weight"])    # (out, in/g, kh, kw)
        b_conv = np.asarray(op.attrs.get("bias", [0]*w_conv.shape[0]))

        # 2) BN params 추출
        gamma = np.asarray(next_op.attrs["weight"])
        beta = np.asarray(next_op.attrs["bias"])
        mu = np.asarray(next_op.attrs["running_mean"])
        var = np.asarray(next_op.attrs["running_var"])
        eps = float(next_op.attrs.get("eps", 1e-5))

        # 3) scale/shift 계산
        scale = gamma / np.sqrt(var + eps)
        shift = beta - mu * scale

        # 4) Conv weight/bias에 흡수
        w_folded = w_conv * scale.reshape(-1, 1, 1, 1)
        b_folded = b_conv * scale + shift

        # 5) 새 op 생성 (bn_folded=True 마크 + 새 weight/bias)
        new_attrs = dict(op.attrs)
        new_attrs["weight"] = w_folded.tolist()
        new_attrs["bias"] = b_folded.tolist()
        new_attrs["bn_folded"] = True
        ...
```

**왜 `np.asarray`**: attrs는 list (JSON serializable). 계산은 numpy로.

**왜 `scale.reshape(-1, 1, 1, 1)`**: weight shape `(out_channels, in_channels/groups, kh, kw)`에 broadcasting을 위해 첫 축에만 scale을 적용.

**`tensor_data` 인자**: optional. 만약 외부 정렬된 INT8 데이터가 있다면 (예: tracer로 받은 가중치), 거기에도 같은 변환을 적용해서 emitter가 올바른 byte stream을 쓸 수 있게 함.

---

## `apply_all_fusions` (L380 부근) — 종합 파이프라인

```python
def apply_all_fusions(program, *, tensor_data=None):
    applied = []
    # 1) BN folding 먼저 (Conv+BN+ReLU 패턴이라면 BN을 먼저 흡수해야 conv+relu 합칠 수 있음)
    r1 = apply_conv_bn_folding(program, tensor_data=tensor_data)
    program = r1.program; applied += list(r1.fusions_applied)
    # 2) Conv + ReLU
    r2 = apply_conv_relu_fusion(program)
    program = r2.program; applied += list(r2.fusions_applied)
    # 3) Linear + ReLU
    r3 = apply_linear_relu_fusion(program)
    program = r3.program; applied += list(r3.fusions_applied)
    return FusionResult(program=program, fusions_applied=tuple(applied))
```

**순서 중요**: BN → Conv+ReLU → Linear+ReLU. BN을 먼저 합쳐야 그 다음 Conv+ReLU 패턴이 보임.

---

## compiler.py와의 연결

```python
# compiler.py 내부
def compile_program(program, options):
    if options.enable_fusion:
        fusion_result = apply_all_fusions(program, tensor_data=options.tensor_data)
        program = fusion_result.program
    plan = create_compile_plan(program)
    ...
```

→ Fusion은 **compiler 진입 직후 첫 단계**. Fusion 후의 program이 lowering/scheduling으로 들어감.

---

## 핵심 개념 정리

| 개념 | 의미 | 어디서 |
|---|---|---|
| **Single-consumer 안전 조건** | 중간 tensor가 정확히 1번만 쓰일 때만 합치기 가능 | `_single_consumer_ok` |
| **Pattern matching** | 연속한 두 op의 kind가 특정 쌍이면 합치기 | 각 pass의 main loop |
| **BN folding 수학** | `y = scale*x + shift` → Conv weight/bias로 흡수 | `apply_conv_bn_folding` |
| **Pass 순서** | BN → Conv+ReLU → Linear+ReLU | `apply_all_fusions` |
| **In-place attrs** | `relu=True`, `bn_folded=True` 마커 추가 | dict copy |

---

## 🔬 전문가 관점: Fusion이 못 잡는 패턴

이 파일은 **인접한 두 op만** fusion합니다. 산업급 컴파일러는 더 넓은 패턴을 잡습니다:

### 1. Multi-input fusion (Vertical fusion 확장)
```
원래:    z = ReLU(BN(Conv(x))) + ReLU(BN(Conv(y)))
fusion:  z = fused_residual_block(x, y)   ← 5개 op를 1개로
```
이 프로젝트는 multi-input fusion 미지원. 향후 확장 포인트.

### 2. Horizontal fusion (Same-input fusion)
```
원래:    a = Conv1(x); b = Conv2(x)   # 같은 x 두 번 읽음
fusion:  (a, b) = fused_double_conv(x)  # x 한 번만 읽음
```
TVM Ansor가 이걸 자동으로 함. 이 프로젝트 미지원.

### 3. Loop-level fusion (Halide/MLIR linalg)
Halide의 `compute_with` 또는 MLIR linalg의 `linalg.fuse`는 **inner loop level**에서 fusion. 즉 두 op의 inner loop가 같은 iteration space를 가지면 한 loop nest에 합침.

이 프로젝트는 op-level (graph) fusion만 함. Loop-level은 컴파일러가 더 발전해야 함.

### 4. Algorithm-hardware co-design (FlashAttention)

> Dao, T. et al. — "FlashAttention: Fast and Memory-Efficient Exact Attention with IO-Awareness", *NeurIPS 2022*.

FlashAttention은 그저 fusion이 아니라 **수학적 알고리즘 자체를 재구성**해서 attention의 softmax를 tile 단위로 streaming 계산. 이런 수준은 컴파일러가 자동으로 못 함 — 알고리즘 + 하드웨어 양쪽을 아는 엔지니어가 직접 새 op로 등록해야 함. **이것이 "대체 불가" 엔지니어가 만드는 가치** (전문가 로드맵 §"포지셔닝 전략" 참고).

📖 참고: FlashAttention NeurIPS'22, "FlashAttention-2" Dao ICLR'24 (Phase 5).

---

## 📖 더 깊이 공부하기

| 깊이 | 자료 | 어느 부분 |
|---|---|---|
| 🟢 입문 | Dragon Book Ch.8 (Phase 3) | Code optimization, peephole = mini-fusion |
| 🟢 입문 | Cooper & Torczon Ch.8 (Phase 3) | DAG-based optimization |
| 🟡 중급 | Halide PLDI'13 (Phase 3, 7) | algorithm/schedule 분리, fusion = schedule |
| 🟡 중급 | TVM OSDI'18 + Operator Strategy 문서 (Phase 7) | fusion 규칙 일반화 |
| 🔴 심화 | Jacob CVPR'18 §3.4 (Phase 5) | BN folding 정확도 분석 |
| 🔴 심화 | FlashAttention NeurIPS'22 (Phase 5) | 알고리즘+하드웨어 공동설계 사례 |
| 🔴 심화 | MIT 6.5940 Lec.8 (Phase 3) | "Kernel Fusion" 강의 — 이 프로젝트와 1:1 |

---

## 연습 문제

1. Residual block (`y = x + Conv(ReLU(BN(Conv(x))))`)에서 첫 번째 Conv+BN+ReLU가 합쳐질까? 두 번째 Conv는? `_single_consumer_ok` 관점에서.
2. BN folding 수식을 직접 유도해 보세요. PyTorch BN의 수식과 맞는지.
3. 만약 `apply_all_fusions`에서 BN folding을 가장 마지막에 두면 무엇이 잘못될까?
4. fusion이 잘못 동작하면 어떤 검증이 깨질까? (힌트: `test_asset_drift.py`의 fixed asset)

---

## 다음 파일로 넘어가기

→ [34_dma_scheduler.md](34_dma_scheduler.md): `dma_scheduler.py` — TilePlanEntry → DMA command sequence + MMIO 레지스터 시퀀스
