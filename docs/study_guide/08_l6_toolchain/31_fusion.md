# 31. `fusion.py` — Op 패턴 합치기 (그래프 최적화)

> **파일 위치**: `l6/src/l6_toolchain/fusion.py` (404줄)
> **역할**: Linear+ReLU, Conv+ReLU, Conv+BN을 **하나의 op**로 합쳐 별도 step을 제거
> **선수 지식**: [28_ir.md](28_ir.md), BatchNorm 수식, ReLU 정의
> **공장 비유**: 공정 통합 — "구멍 뚫고 → 광택" 두 라인을 한 라인에서 한번에 처리하도록 합침

---

## 이 파일이 중요한 이유

각 op를 따로 실행하면 op마다 DMA + 메모리 round-trip이 발생합니다. **연속된 두 op를 합치면 중간 텐서를 외부 메모리에 쓰지 않아도 됩니다** → 사이클·전력 큰 절약. 학계 컴파일러(TVM, MLIR)에서 똑같은 기법을 씁니다.

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

## 연습 문제

1. Residual block (`y = x + Conv(ReLU(BN(Conv(x))))`)에서 첫 번째 Conv+BN+ReLU가 합쳐질까? 두 번째 Conv는? `_single_consumer_ok` 관점에서.
2. BN folding 수식을 직접 유도해 보세요. PyTorch BN의 수식과 맞는지.
3. 만약 `apply_all_fusions`에서 BN folding을 가장 마지막에 두면 무엇이 잘못될까?
4. fusion이 잘못 동작하면 어떤 검증이 깨질까? (힌트: `test_asset_drift.py`의 fixed asset)

---

## 다음 파일로 넘어가기

→ [34_dma_scheduler.md](34_dma_scheduler.md): `dma_scheduler.py` — TilePlanEntry → DMA command sequence + MMIO 레지스터 시퀀스
