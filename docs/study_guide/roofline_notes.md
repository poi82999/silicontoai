# 📐 Roofline 마스터 정리 노트

> 작성: 2026-07-23 · 범위: **노드 1(성능 모델) 학습분 전체 통합** — 이론(Williams 2009) + 이 NPU 정량화 + 코드(`roofline.py`) + 미해결 쟁점.
> 성격: 흩어진 roofline 문서 6종을 하나로 묶은 **단일 참조점(single source of truth)**. 1쪽 요약이 필요하면 [roofline_summary.md](roofline_summary.md).
> 근거: `papers/Roofline An Insightful Visual Performance Model.pdf` (Williams/Waterman/Patterson, CACM 52(4), 2009) + 코드 검증(`l6/src/l6_toolchain/roofline.py`, `roofline_profiles.py`, `rtl/include/npu_def_pkg.sv`).

---

## 0. 이 노트의 위치 — 다른 roofline 문서와의 관계

| 문서 | 성격 | 이 노트와의 관계 |
|---|---|---|
| [roofline_summary.md](roofline_summary.md) | 1쪽 압축 요약 (Day 02 산출물) | 이 노트의 축약판 |
| [gemini_teaching/brief_01_roofline_deep.md](gemini_teaching/brief_01_roofline_deep.md) | Gemini 교육 프롬프트 (R1 실행 대기) | §7의 두 쟁점을 대화식으로 결론내는 세션 |
| [08_l6_toolchain/39_roofline.md](08_l6_toolchain/39_roofline.md) | `roofline.py` 코드 워크스루 | §6의 상세판 (단, §8 오류 주의) |
| [08_l6_toolchain/40_roofline_profiles.md](08_l6_toolchain/40_roofline_profiles.md) | 보드 프리셋 워크스루 | §5의 상세판 |
| [02_rtl_core/06_systolic_array.md](02_rtl_core/06_systolic_array.md) | 어레이 학술 배경 (2N 유도) | §7-Q1의 "어레이 입구" 관점 |
| [l6_roofline_manifest_schema.md](../l6_roofline_manifest_schema.md) | 컴파일러 산출물 스키마 | §6의 manifest 필드 계약 |

---

## 1. Roofline 모델이란 — Williams, Waterman, Patterson (CACM 2009)

### 논문의 한 줄 주장
> 어떤 커널의 성능은 결국 **연산 능력**과 **메모리 대역폭** 두 천장 중 낮은 쪽에 막힌다. 이 둘을 **operational intensity(연산 강도)** 축 위의 단일 로그-로그 그래프로 그리면, "지금 무엇이 병목이고 다음에 무엇을 최적화해야 하는가"가 눈에 보인다.

논문이 제시한 것은 단순한 공식이 아니라 **bound-and-bottleneck 분석을 위한 시각적 도구**다. 핵심 기여 4가지:

1. **Operational Intensity (OI)** 정의 = *DRAM 트래픽 1바이트당 연산 수* (ops / byte). 캐시를 통과한 뒤 실제 DRAM으로 오간 바이트를 기준으로 삼는 것이 포인트 — 메모리 계층의 재사용 효과가 이 값에 반영된다.
2. **두 천장의 min**으로 달성 성능을 예측: `min(Peak Compute, BW × OI)`.
3. **Ceilings(부분 천장)**: 하드웨어의 최대치는 최적화를 다 했을 때만 나온다. 논문은 천장을 여러 겹으로 그린다 —
   - *연산 천장*: SIMD 미사용 / ILP 부족 / mul-add 불균형 → 낮은 수평선들.
   - *대역폭 천장*: software prefetch 없음 / NUMA·memory affinity 미최적화 → 낮은 대각선들.
   - 이 겹겹의 천장이 **"어떤 순서로 최적화해야 하는가"를 알려주는 로드맵**이 된다.
4. **Ridge point**의 진단적 의미: 천장이 꺾이는 지점의 OI가 오른쪽에 있을수록 → *peak를 뽑아내기 어려운 기계*. 왼쪽에 있을수록 → 웬만한 커널도 쉽게 compute-bound(=peak)에 도달.

### 로그-로그 그래프 (개념)
```
성능(GOPS) ▲
           │              ┌────────────  Peak Compute (수평 천장)
           │             ╱
           │            ╱   ← Memory roof (대각선, 기울기 = BW)
           │           ╱        y = OI × BW
           │          ╱
           │         ╱   ● Ridge point (두 천장이 만나는 곳)
           │        ╱      OI_ridge = Peak Compute ÷ BW
           │       ╱
           └──────┴──────────────────────► Operational Intensity (ops/byte)
             memory-bound  │  compute-bound
```
- 커널의 OI를 x축에 찍고 수직으로 올려, 대각선에 먼저 닿으면 **memory-bound**, 수평선에 닿으면 **compute-bound**.
- 로그-로그인 이유: 대역폭 대각선이 직선이 되고, 수 자릿수에 걸친 커널을 한 그림에 담기 위함.

> ⚠️ **용어 주의**: 논문은 "operational intensity"(=DRAM 바이트 기준)를 쓴다. 우리 코드/문서는 이를 "arithmetic intensity(AI)" 또는 "OI"로 혼용하는데, 우리는 *모델링된 총 전송 바이트*(act+weight+out)를 분모로 쓰므로 의미는 논문의 OI에 가깝다. 이 노트에서 **AI = OI**로 취급한다.

---

## 2. 핵심 공식과 용어

```
달성가능 성능(GOPS) = min( Peak Compute ,  Peak BW × AI )
```

| 용어 | 정의 | 성격 |
|---|---|---|
| **AI / OI** | `총 ops ÷ 총 bytes` | **workload**의 성질 (x축) |
| **Peak Compute** | `MAC수 × 2 × clock` | **machine**의 연산 천장 |
| **Peak BW** | off-chip 데이터 이동 대역폭 | **machine**의 메모리 천장 기울기 |
| **Memory roof** | `BW × AI` | 대각선 (해당 AI에서 메모리가 허용하는 최대) |
| **Ridge point** | `Peak Compute ÷ Peak BW` | **machine**의 밸런스 = 밑변 꺾임점 |
| **Achievable** | `min(Peak Compute, Memory roof)` | 이론적 상한 |
| **Achieved** | scheduler 실측 사이클로 역산한 성능 | 실제 도달치 |
| **판정** | `AI < Ridge → memory-bound / AI > Ridge → compute-bound` | |

- **1 MAC = 2 ops** (곱 1 + 합 1). ops와 peak 양쪽 모두에 `×2`가 붙어야 일관됨 → §8 참조.

---

## 3. 이 NPU 정량화 (코드로 검증됨)

기준: `sim_default` = 16×16 어레이, INT8, 100 MHz, 256-bit 외부 AXI (`rtl/include/npu_def_pkg.sv`).

| 항목 | 값 | 유도 |
|---|---|---|
| Peak Compute | **51.2 GOPS** | 256 MAC × 2 ops × 100 MHz = 51.2×10⁹ |
| Peak BW (외부 AXI) | **3.2 GB/s** (=25.6 Gbit/s) | 256 bit × 100 MHz ÷ 8 |
| **Ridge point** | **16 ops/byte** | 51.2 ÷ 3.2 |

> 코드는 대역폭을 **Gbit/s(25.6)** 로 입력받아 내부에서 ÷8 해 **3.2 GB/s**로 쓴다. 두 숫자는 같은 양의 다른 단위다 — 혼동 주의.

---

## 4. GEMM 크기별 판정 (sim_default)

`total_ops = 2MKN`, `total_bytes = MK·2 + KN·2 + MN·4` (act 2B, weight 2B, out 4B).

| (M,K,N) | total_ops | total_bytes | AI | Achievable | 판정 |
|---|---|---|---|---|---|
| (16,16,16) | 8,192 | 2,048 | **4** | 12.8 GOPS (25%) | memory-bound |
| (64,64,64) | 524,288 | 32,768 | **16** | 51.2 GOPS (100%) | **정확히 Ridge** |
| (256,256,256) | 33.5M | 524,288 | **64** | 51.2 GOPS (100%) | compute-bound (풀가동) |
| (1,2048,2048) | 8.39M | ~8.40M | **≈1** | 3.2 GOPS (6%) | memory-bound (벡터-행렬 최악) |

**결론**: **64³ 이상의 정방 GEMM이라야 PE가 풀가동**된다. 작은 타일·벡터-행렬(디코드류)은 AI가 낮아 메모리에 굶주린다 → §10의 LLM decode 렌즈와 직결.

---

## 5. 보드 프로파일 — 같은 커널, 다른 병목

`roofline_profiles.py`가 보드별 (BW, MAC, clock) 프리셋을 제공. 핵심은 **BW가 바뀌면 Ridge가 바뀌고, 판정이 뒤집힌다**는 것.

| 프로파일 | BW | MAC | clock | Ridge AI | 함의 |
|---|---|---|---|---|---|
| `sim_default` | 25.6 Gbit/s | 256 | 100 MHz | **16** | 표준 기준 |
| `arty_a7_100mhz` | 25.6 Gbit/s | 256 | 100 MHz | 16 | 실측 타이밍 WNS +2.627 ns 근거 |
| `zynq_system_100mhz` | 25.6 Gbit/s | 256 | 100 MHz | 16 | RTL/system replay |
| **`pynq_z2_overlay`** | **3.2 Gbit/s** | 256 | 100 MHz | **128** | PS7 32-bit control-plane → 거의 모두 memory-bound |

**PYNQ 이야기**: 오버레이가 `ps7/M_AXI_GP0`(32-bit)를 통해 붙어 대역폭이 8배 작다 → Ridge=128. 즉 어지간한 GEMM은 전부 memory-bound로 떨어진다. **하드웨어 연산속도가 아니라 데이터 공급이 병목**임을 보여주는 교과서적 사례.

> API: `resolve_roofline_profile("pynq_z2_overlay", dma_bandwidth_gbps=16.0)`처럼 프리셋 + 개별 override 가능.

---

## 6. 코드 — `l6/src/l6_toolchain/roofline.py`

### 두 개의 진입점
1. **`analyze_roofline(shape, *, dma_bandwidth_gbps, mac_throughput, clock_mhz, ...)`** → 순수 이론값.
   - `total_ops = 2·M·K·N`
   - `total_bytes = M·K·ie + K·N·we + M·N·oe` (기본 ie=2, we=2, oe=4)
   - `peak_compute = MAC × 2 × clock` — **`×2`가 코드에 명시**(L98)
   - `memory_roof = AI × (BW_Gbit ÷ 8)`
   - `achievable = min(...)`, `bottleneck`, `utilization` 반환. 이 함수에서는 `achieved = achievable`.
2. **`analyze_roofline_with_scheduler(...)`** → scheduler를 태워 **실측 achieved** 추정.
   - `plan_linear_tiles → reorder_tiles(strategy) → estimate_schedule_cost` 로 `total_cycles` 산출.
   - `achieved = total_ops ÷ (cycles ÷ clock)`, 단 `achievable`로 상한 캡.
   - **`achievable − achieved`의 간극 = scheduler 효율**. 이것이 이 코드가 단순 이론 계산기를 넘어서는 지점.

### manifest 통합
`compiler.CompilerOptions.include_roofline_in_manifest=True`이면 compute step마다 roofline 블록이 `compile_manifest.json`과 per-step manifest에 기록됨(스키마: [l6_roofline_manifest_schema.md](../l6_roofline_manifest_schema.md)). inspector/CI가 이 계약을 소비. 비-compute step은 roofline 블록을 내지 않음.

---

## 7. 두 개의 핵심 쟁점 (미해결 → R1 브리프에서 결론낼 것)

### Q1. Roofline의 메모리 축은 어떤 대역폭인가? — Ridge 16 vs 32

| | 학습 가이드 (`06_systolic_array.md`) | 코드 (`roofline.py`) |
|---|---|---|
| BW 축 | 어레이 입구 **1.6 GB/s** | 외부 AXI **3.2 GB/s** |
| bytes | activation만, 1B, 단방향 | act+weight+out, 2/2/4B |
| AI | **2N = 32** | **16** |
| 의미 | 어레이 *내부* 스트리밍 특성치 | *기계* 밸런스 (판정 기준) |

- **고전 Roofline(Williams 2009)의 메모리 천장 = off-chip DRAM 대역폭.** 모델의 목적이 "칩 *밖*에서 데이터를 얼마나 빨리 끌어오나"의 한계를 그리는 것이기 때문.
- 어레이 입구 2N=32는 *on-chip* 특성치 → 고전 roofline 축이 아니다.
- **잠정 결론: 단일 roofline 판정에는 Ridge=16(off-chip)을 쓴다.** 2N=32는 "어레이 내부 특성"으로만 인용.
- **확장**: *Hierarchical Roofline* (DRAM/L2/SRAM마다 천장을 겹으로) 를 쓰면 "SRAM 천장"과 "DRAM 천장"을 따로 그릴 수 있음 → 이 NPU에 적용 시 두 관점이 화해됨. H&P Quantitative 4.8절에서 확인 예정.

### Q2. INT8인데 왜 byte를 2로 세나? — 유효 AI 절반 낭비

- `roofline.py`는 `input_elem_bytes=2, weight_elem_bytes=2`로 센다. 그런데 이 NPU는 INT8(1B) 연산.
- 근거: `npu_def_pkg.sv` — *"Lane slot width kept at 16 bits … Only the lower 8 bits carry INT8 payload."* 즉 실제 AXI/SRAM은 16-bit slot을 통째로 옮기고 상위 8bit는 0 패딩.
- **결론**: 2바이트 카운팅은 *실제 전송량*에는 충실(패딩까지 나르니까). 하지만 이는 **설계 낭비** — act/weight 대역폭의 50%가 0 패딩을 나른다. INT8을 1바이트로 패킹하면 AI 상승 — **정사각 GEMM은 8/6배(≈1.33×), weight-지배(M=1 디코드)만 ≈2×** (INT32 출력은 패킹 안 되므로 shape 의존, [roofline_analysis.md](../roofline_analysis.md) 검증). (노드 6 양자화/INT8 패킹 이슈의 연장선.)

---

## 8. ⚠️ 발견한 문서 불일치 (수정 필요)

정리 중 새로 발견 — **[08_l6_toolchain/39_roofline.md](08_l6_toolchain/39_roofline.md)의 Peak Compute가 틀렸다.**

| 출처 | Peak Compute | 상태 |
|---|---|---|
| `39_roofline.md` (L73, L89) | `256 × 100 / 1000 = 25.6 GOPS` | ❌ **`×2`(1 MAC=2 ops) 누락** |
| 실제 코드 `roofline.py` (L98) | `256 × 2 × 100e6 = 51.2 GOPS` | ✅ |
| `roofline_summary.md`, manifest 스키마 | 51.2 GOPS | ✅ |

- 39번 문서는 ops를 `2MKN`으로 세면서(=MAC당 2 ops) peak에는 `×2`를 빼먹어 **내부 모순**. 판정 자체(bottleneck/util 비율)는 우연히 바뀌지 않지만(양쪽 축을 같은 배수로 스케일하면 교차점 불변), **절대 GOPS 수치가 절반으로 표기됨**. → 39번 문서 L66-89를 51.2 기준으로 보강 필요.
- (기지) `06_systolic_array.md`의 "Ridge≈32"는 오류가 아니라 *다른 양*(어레이 입구 2N)임 — §7-Q1. 다만 "판정용 Ridge와 혼동 주의" 문구 보강 후보.

---

## 9. compute-bound vs memory-bound — 처방이 다르다

| 병목 | 증상 | 성능을 올리는 처방 | 헛수고 |
|---|---|---|---|
| **compute-bound** (AI > Ridge) | PE 풀가동, BW 여유 | 클럭↑, PE 수↑, 더 나은 수치포맷(INT8/FP8) | AI를 더 높여도 무효 |
| **memory-bound** (AI < Ridge) | PE 놀고 있음, 메모리 대기 | **AI를 높이기**: 타일링·fusion·데이터 재사용·패킹(Q2), BW↑ | 클럭↑·PE 추가는 무효 |

> 판정 질문 예: "AI=8 workload는 클럭 2배로 빨라지나?" → sim_default에서 Ridge=16이므로 AI=8은 memory-bound → **클럭을 올려도 무효**(메모리가 병목). AI를 16 이상으로 올려야 클럭 상승이 성능으로 전환.

---

## 10. 산업계 좌표 + 2026 LLM 렌즈

| 설계 | 어레이 | full-GEMM AI | 위치 |
|---|---|---|---|
| 이 NPU | 16×16 | ~32(2N) / off-chip 16 | FPGA mid-range, BRAM 대역폭에 맞춤 |
| TPU v1 | 256×256 | ≈512 | 매우 compute-bound, DRAM 충분한 데이터센터용 |
| Eyeriss | Row-Stationary | — | 에너지/재사용 최적화 (dataflow 축) |

**2026 최전선 = memory wall.** LLM 디코드는 토큰당 (M=1) 벡터-행렬이 지배적 → §4의 (1,2048,2048)처럼 **AI≈1의 깊은 memory-bound**. attention 커널 사이클의 50%+가 메모리 대기. 즉 CNN 시대에 그린 "큰 GEMM으로 compute-bound 달성" 그림이 LLM 추론에서는 무너진다. → roofline 사고가 그 어느 때보다 중요(R1이 정확한 선택). TPU/Eyeriss 논문(노드 3)을 읽을 때 **"이 설계가 decode에서 무너지는 지점" 1문단**을 각 논문에 붙일 것.

---

## 11. 미해결 질문 & 다음 액션

- [ ] **R1 실행**: [brief_01](gemini_teaching/brief_01_roofline_deep.md) PROMPT를 Gemini에 → §7-Q1(BW 축)·Q2(INT8 패딩) 대화식 결론.
- [ ] **실습 1**: matplotlib로 이 NPU roofline 그래프(수평 51.2 / 대각 3.2GB/s / Ridge=16 수직선) + INT8 1B 패킹 시 대각선 이동을 점선 비교 + 4개 GEMM 포인트 → `docs/roofline_analysis.md`.
- [ ] **H&P Quantitative 4.8절** 정독 → Q1의 hierarchical roofline / SRAM 천장 확정.
- [ ] **문서 수정**: §8의 39_roofline.md Peak Compute(25.6→51.2) 보강, 06_systolic_array.md에 "판정 Ridge와 2N 구분" 문구.
- [ ] (검증) `roofline.py`가 16-bit slot 2바이트로 세는 것이 emitter/DMA의 실제 DRAM 전송량과 일치하는지 확인(Q2 실측).

---

## 12. 참고자료

**논문 (papers/, 로컬 전용)**
- Williams, S., Waterman, A., Patterson, D. — *Roofline: An Insightful Visual Performance Model for Multicore Architectures*, CACM 52(4), 2009. — 이 노트의 이론 근거.
- Jouppi et al. — *In-Datacenter Performance Analysis of a TPU*, ISCA 2017. (노드 3, 256×256 좌표)
- Chen et al. — *Eyeriss*, ISCA 2016. (노드 3, RS dataflow)
- Kung & Leiserson — *Systolic Arrays for VLSI*, 1979. (skew/deskew 수학적 필연성)

**코드 / 스펙**
- `l6/src/l6_toolchain/roofline.py` — 분석 엔진
- `l6/src/l6_toolchain/roofline_profiles.py` — 보드 프리셋
- `rtl/include/npu_def_pkg.sv` — 16×16, 256-bit AXI, INT8 16-bit slot 근거
- [l6_roofline_manifest_schema.md](../l6_roofline_manifest_schema.md) — 산출물 계약

**교과서**
- H&P *Computer Architecture: A Quantitative Approach* 4.8절 (Roofline 심화, hierarchical)
- P&H *Computer Organization* 1.10절 (Amdahl / 성능 기초)
