# 40. `roofline_profiles.py` — 보드별 Roofline 프리셋

> **파일 위치**: `l6/src/l6_toolchain/roofline_profiles.py` (93줄)
> **역할**: sim/Arty/Zynq/PYNQ 4종 보드의 bandwidth/MAC/clock 기본값 모음
> **선수 지식**: [39_roofline.md](39_roofline.md)
> **공장 비유**: 공장별 표준 사양표 — 본사 시뮬레이터, A공장(Arty), B공장(Zynq) 각각의 처리능력 기준

---

## 이 파일이 중요한 이유

매번 `dma_bandwidth_gbps=25.6, mac_throughput=256, clock_mhz=100.0` 적기 귀찮고, **보드별로 값이 달라**서 (PYNQ는 PS7 control plane 32-bit이라 3.2 Gbit/s) 잘못 입력하기 쉽습니다. 이 파일이 정답을 한 곳에 모음.

---

## 자료구조: `RooflineProfile` (L6-14)

```python
@dataclass(frozen=True)
class RooflineProfile:
    name: str
    description: str
    dma_bandwidth_gbps: float
    mac_throughput: int
    clock_mhz: float
```

---

## 4가지 프리셋 (L17-57)

| profile | bandwidth | MAC | clock | 어디서 |
|---|---|---|---|---|
| `sim_default` | 25.6 Gbit/s | 256 | 100 MHz | rtl/include/npu_def_pkg.sv `EXT_AXI_DATA_WIDTH=256` |
| `arty_a7_100mhz` | 25.6 Gbit/s | 256 | 100 MHz | vivado/fpga_core_bringup_top.xdc, l7_preboard_bringup_results.md |
| `zynq_system_100mhz` | 25.6 Gbit/s | 256 | 100 MHz | RTL/system replay 모델 |
| `pynq_z2_overlay` | **3.2 Gbit/s** | 256 | 100 MHz | PS7 M_AXI_GP0 → npu_pl/s_axi (32-bit control plane proxy) |

**핵심 차이**: PYNQ는 control plane이 32-bit이라 bandwidth가 8배 작음. 같은 GEMM이 PYNQ에서는 더 일찍 memory-bound.

---

## API 함수

### `list_roofline_profiles` (L60-61)

```python
def list_roofline_profiles() -> tuple[RooflineProfile, ...]:
    return tuple(_PROFILES.values())
```

CLI에서 `--list-profiles`로 모든 프리셋 보여주기.

### `get_roofline_profile` (L64-69)

```python
def get_roofline_profile(name: str) -> RooflineProfile:
    try:
        return _PROFILES[name]
    except KeyError as exc:
        valid = ", ".join(sorted(_PROFILES))
        raise ValueError(f"Unknown roofline profile '{name}'. Valid profiles: {valid}") from exc
```

이름으로 프리셋 가져오기. 없으면 친절한 에러 (`raise ... from exc`로 원인 chain 유지).

### `resolve_roofline_profile` (L72-86) — 가장 자주 쓰임

```python
def resolve_roofline_profile(profile_name, *, dma_bandwidth_gbps=None,
                              mac_throughput=None, clock_mhz=None):
    base = get_roofline_profile(profile_name)
    return RooflineProfile(
        name=base.name,
        description=base.description,
        dma_bandwidth_gbps=base.dma_bandwidth_gbps if dma_bandwidth_gbps is None else dma_bandwidth_gbps,
        mac_throughput=base.mac_throughput if mac_throughput is None else mac_throughput,
        clock_mhz=base.clock_mhz if clock_mhz is None else clock_mhz,
    )
```

**핵심**: 프리셋 + 개별 override. 예: "PYNQ 기본인데 bandwidth만 16.0으로 가정하고 분석" — `resolve_roofline_profile("pynq_z2_overlay", dma_bandwidth_gbps=16.0)`.

---

## CLI 사용

```bash
# 프리셋 목록
python -m l6_toolchain compile --list-roofline-profiles

# 프리셋 사용
python -m l6_toolchain compile ... \
    --include-roofline-manifest \
    --roofline-profile arty_a7_100mhz

# 프리셋 + override
python -m l6_toolchain compile ... \
    --roofline-profile pynq_z2_overlay \
    --roofline-dma-bandwidth-gbps 16.0
```

---

## 프리셋 추가하는 법

새 보드 (예: VCU118)를 추가하려면:

```python
_PROFILES["vcu118_250mhz"] = RooflineProfile(
    name="vcu118_250mhz",
    description="Xilinx VCU118 with 256-bit AXI at 250 MHz, ...",
    dma_bandwidth_gbps=64.0,
    mac_throughput=256,
    clock_mhz=250.0,
)
```

이게 다. CLI/inspector가 자동으로 인식.

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **Profile = preset** | 보드별 default값 묶음 |
| **Resolve = preset + override** | base 프리셋에 일부 값만 갈아끼움 |
| **`raise ... from exc`** | 에러 chain 보존 (원인 트레이스) |
| **immutable dict registry** | `_PROFILES` 모듈 레벨 상수 |

---

## 연습 문제

1. `pynq_z2_overlay`에서 256×256×256 GEMM은 memory-bound일까 compute-bound일까? `analyze_roofline`으로 확인.
2. 같은 GEMM을 `arty_a7_100mhz`에서 분석하면 결과가 어떻게 다른가?
3. 새 프리셋 `arty_a7_200mhz` (clock만 2배)를 추가하고 utilization이 어떻게 변하는지 측정.
4. `resolve_roofline_profile("missing_name")`이 발생시키는 에러 메시지를 직접 확인.

---

## 다음 파일로 넘어가기

→ [41_inspector.md](41_inspector.md): `inspector.py` — workload package를 사람이 읽기 좋게 출력하는 CLI 도구
