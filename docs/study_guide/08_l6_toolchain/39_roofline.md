# 39. `roofline.py` — Roofline 성능 모델

> **파일 위치**: `l6/src/l6_toolchain/roofline.py` (171줄)
> **역할**: 주어진 GEMM이 **memory-bound**인지 **compute-bound**인지 정량 분석
> **선수 지식**: [33_scheduler.md](33_scheduler.md), Operational Intensity 개념
> **공장 비유**: 생산성 분석가 — "이 주문은 자재 운반이 병목인가, 작업자가 모자란가?"

---

## 이 파일이 중요한 이유

NPU나 GPU 같은 가속기는 항상 두 가지 한계 중 하나에 막힙니다: **계산 능력**(compute roof) 또는 **메모리 대역폭**(memory roof). Roofline 모델은 이걸 한 그래프에 시각화하고, 어디를 최적화해야 가장 효과 큰지 알려주는 표준 분석법입니다.

---

## Roofline 이론 한 페이지

```
실제 성능 (GOPS)
    ▲
    │           ┌──────────  peak_compute_gops (수평선)
    │          ╱
    │         ╱      ← memory roof (대각선)
    │        ╱           기울기 = bandwidth (GB/s)
    │       ╱              y = OI × bandwidth
    │      ╱
    │     ╱                          ↑ 이 점을 지나면 compute-bound
    │    ╱─────── balance OI         ↓ 이 점 이전이면 memory-bound
    │   ╱
    └────────────────────────► OI (FLOPs / Byte)
        memory-bound  │  compute-bound
```

- **OI (Operational Intensity)**: `total_ops / total_bytes` — 1바이트당 몇 번 계산하는가
- **memory_roof_gops**: `bandwidth × OI` — 메모리 한계에서 낼 수 있는 최대 성능
- **achievable_gops**: `min(peak_compute, memory_roof)` — 실제 한계
- **bottleneck**: achievable이 어느 roof에 막혔는지

---

## 자료구조: `RooflineResult` (L10-28)

```python
@dataclass(frozen=True)
class RooflineResult:
    m: int; k: int; n: int
    total_ops: int                  # 2*m*k*n (multiply + add)
    total_bytes: int                # input + weight + output
    operational_intensity: float    # ops/bytes
    peak_compute_gops: float        # 하드웨어 최대
    peak_bandwidth_gbps: float
    memory_roof_gops: float         # bandwidth × OI
    achievable_gops: float          # min of two roofs
    achieved_gops: float            # 실제 측정 (scheduler가 cycle 알면)
    utilization_percent: float
    bottleneck: Literal["compute", "memory"]
    estimated_cycles: int | None = None
    schedule_strategy: str = "weight_reuse"
```

---

## 핵심 함수: `analyze_roofline` (L60-130 부근)

```python
def analyze_roofline(shape, *, dma_bandwidth_gbps, mac_throughput, clock_mhz,
                     input_elem_bytes=2, weight_elem_bytes=2, output_elem_bytes=4):
    m, k, n = _validate_shape(shape)
    total_ops = 2 * m * k * n                   # ① 총 연산 수
    total_bytes = m*k*ie + k*n*we + m*n*oe      # ② 총 메모리 전송량
    oi = total_ops / total_bytes                # ③ OI

    peak_compute_gops = mac_throughput * clock_mhz / 1000.0    # ④ 계산 한계
    peak_bandwidth_bps = dma_bandwidth_gbps * 1e9 / 8.0        # ⑤ 대역폭 한계 (B/s)
    memory_roof_ops_per_sec = peak_bandwidth_bps * oi
    memory_roof_gops = memory_roof_ops_per_sec / 1e9

    achievable_gops = min(peak_compute_gops, memory_roof_gops)
    bottleneck = "memory" if memory_roof_gops < peak_compute_gops else "compute"
    utilization = achievable_gops / peak_compute_gops * 100

    return RooflineResult(...)
```

### 단위 변환 디테일

- `mac_throughput`: cycle당 MAC 수 (NPU=256)
- `clock_mhz`: 클럭 (100MHz)
- `peak_compute_gops = 256 × 100 / 1000 = 25.6 GOPS`
- `dma_bandwidth_gbps`: Gbit/s로 받음, 내부에서 byte/s로 변환

### 예시

| Shape | OI | bottleneck | utilization |
|---|---|---|---|
| 16×16×16 | 4 ops/B | memory | 3% |
| 256×256×256 | 64 ops/B | compute | ~100% |
| 16×512×16 | 28.4 ops/B | memory or compute | 중간 |

→ 작은 GEMM은 memory-bound, 큰 GEMM일수록 compute-bound. 일반적으로 OI를 높여야 utilization이 올라감.

---

## `analyze_roofline_with_scheduler` (L130 이후) — Scheduler 결합

```python
def analyze_roofline_with_scheduler(shape, *, ..., schedule_strategy="weight_reuse"):
    base = analyze_roofline(shape, ...)

    # Scheduler로 실제 cycle 추정
    spec = _GemmShape(m=shape[0], k=shape[1], n=shape[2])
    tiles = plan_linear_tiles(spec)
    ordered = reorder_tiles(tiles, strategy=schedule_strategy)
    cost = estimate_schedule_cost(ordered, strategy=schedule_strategy)

    cycles = cost.total_cycles
    seconds = cycles / (clock_mhz * 1e6)
    achieved_gops = base.total_ops / seconds / 1e9

    return RooflineResult(
        ...,
        achievable_gops=base.achievable_gops,
        achieved_gops=achieved_gops,
        utilization_percent=achieved_gops / peak_compute_gops * 100,
        estimated_cycles=cycles,
        schedule_strategy=schedule_strategy,
    )
```

**의미**: 이론적 한계(achievable)가 아니라 **실제 scheduler가 산출한 사이클로 계산한 성능**(achieved). 둘의 차이가 **scheduler 효율**.

---

## compiler.py와의 통합

```python
# compiler.CompilerOptions
include_roofline_in_manifest: bool = False
roofline_profile: str = "sim_default"
roofline_dma_bandwidth_gbps: float | None = None
roofline_mac_throughput: int | None = None
roofline_clock_mhz: float | None = None
```

`include_roofline_in_manifest=True`이면 manifest에 roofline 분석이 기록되어 inspector로 볼 수 있음.

→ 다음 모듈(`roofline_profiles.py`)이 board별 default 값을 제공.

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **Operational Intensity (OI)** | `ops / bytes` — 1바이트당 계산량 |
| **Compute roof** | 하드웨어 peak GOPS (MAC × clock) |
| **Memory roof** | `bandwidth × OI` (대각선) |
| **Achievable** | min(compute, memory) |
| **Achieved** | scheduler 실측 사이클로 계산한 실제 성능 |
| **Bottleneck** | compute or memory (어느 roof에 막혔나) |

---

## 연습 문제

1. 16×16×16 (INT8 in/weight, INT32 out)의 OI는? bandwidth 25.6 Gbit/s, MAC 256, 100MHz일 때 bottleneck은?
2. 같은 shape에서 OI를 늘리려면 무엇을 키워야 할까? (M, K, N 중)
3. `achievable_gops`와 `achieved_gops`의 차이는 무엇을 의미하나? 이 차이를 줄이려면?
4. memory-bound인 케이스에서 weight_reuse 전략이 효과 있는 이유는?

---

## 다음 파일로 넘어가기

→ [40_roofline_profiles.md](40_roofline_profiles.md): board별 (sim/Arty/Zynq/PYNQ) bandwidth/clock 프리셋 모음
