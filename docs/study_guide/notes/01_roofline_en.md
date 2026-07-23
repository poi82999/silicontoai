# 📓 01 — Roofline (study notes, EN + 한국어 병기)

> Node 1 (Performance model / 성능 모델), ch.1 · started 2026-07-23 · [← preface](00_서론.md) · KR version: [01_roofline.md](01_roofline.md)
> Dense reference (조밀한 레퍼런스) → [../roofline_notes.md](../roofline_notes.md). This file = **the core, in my own words (핵심만, 내 말로).**
> Source: Williams/Waterman/Patterson, *Roofline*, CACM 52(4), 2009 + my code (`roofline.py`, `npu_def_pkg.sv`).
>
> 📖 병기 규칙: English is the note; **Korean in ( ) glosses the important / hard terms** (중요·난해 용어만 병기). Marks: 💡 intuition (직관) · ❓ my question (내 질문) · ⚠️ trap (함정) · 🔗 link (연결) · ✅ closed (결론)

---

## §0. Why I need this (왜 이게 필요한가)

I built the whole NPU but couldn't answer: **"Is this fast? If slow, what's the bottleneck (병목)?"** No ruler (성능을 잴 자尺가 없었다).

> 💡 An accelerator (가속기) is slow for exactly **one of two reasons**: ① not enough compute (연산 능력 부족 — PEs starve, PE가 놀며 굶음), or ② can't feed data fast enough (데이터 공급이 못 따라감). There is no third. Roofline draws both on one chart so I can see which wall (어느 벽) I'm hitting.

---

## §1. Williams' idea (2009)

**Operational Intensity (OI / 연산 강도)** — the whole model hinges on this (이 개념에 전부 달려 있다):
```
OI = (total ops) / (total bytes moved to/from DRAM)      [ops / byte]
     (총 연산 수)   (DRAM으로 오간 총 바이트)
```
> ❓ Why *DRAM* bytes? → If I reuse (재사용) data well in SRAM/cache, fewer bytes hit DRAM → same work, less traffic (트래픽) → OI goes up. So **OI = "how well am I reusing data," compressed to one number (재사용 정도를 한 숫자로 압축).** That's the real insight (진짜 통찰).

**Performance = the slower of two pipelines (두 파이프라인 중 느린 쪽), compute vs memory:**
```
achievable = min( Peak Compute ,  BW × OI )
(달성 가능)        └ flat roof      └ slope = BW
                    (수평 천장)      (기울기 = 대역폭)
```
- low OI  → `BW×OI` small → hit the diagonal (대각선/빗변) first = **memory-bound (메모리 병목)**
- high OI → hit `Peak Compute` = **compute-bound (연산 병목)**

```
GOPS(log) ▲
          │            ┌─────────── Peak Compute  (flat ceiling / 수평 천장)
          │           ╱
          │          ╱   slope = BW (기울기 = 대역폭)
          │         ● ← Ridge point (리지 포인트)
          │        ╱
          └───────┴────────────────► OI (ops/byte, log)
            memory-bound │ compute-bound
```

> 💡 **Ceilings aren't a single line (천장은 한 줄이 아니다).** Williams draws *stacked* roofs (겹겹의 천장): compute side (no-SIMD / low-ILP 명령어수준 병렬성 부족 / mul-add imbalance 곱셈-덧셈 불균형) and memory side (no-prefetch 선인출 없음 / no-NUMA 비균일메모리 최적화 없음). Each lower roof = an optimization you haven't done yet → the chart is a **prescription, not just a prediction (예측이 아니라 처방).**
> 🔗 the SIMD ceiling returns in Node 1's next topic; memory hierarchy (메모리 계층) in Node 2 (CS311).

---

## §2. Ridge Point — the heart (이 노트의 심장)

Set the two roofs equal (두 천장을 같다고 놓기):
```
Peak Compute = BW × OI*   →   OI* = Peak Compute / BW     [ops/byte]
```
> 💡 Ridge = **the minimum reuse needed to reach peak on this machine (이 기계에서 peak를 뽑는 데 필요한 최소 재사용량).**
> - Ridge **left/small (왼쪽/작음)** → easy to hit compute-bound = easy machine (peak 뽑기 쉬운 기계)
> - Ridge **right/large (오른쪽/큼)** → even good reuse stays memory-bound = hard machine (뽑기 어려운 기계)
>
> This one number defines the machine's personality (이 한 숫자가 기계의 성격을 규정).

---

## §3. Plug in my NPU (내 NPU에 대입 — sim_default: 16×16, INT8, 100 MHz, 256-bit AXI)

**① Peak Compute (연산 천장)**
```
= (#MACs) × (ops/MAC) × clock
= 256 × 2 × 100 MHz = 51.2 × 10⁹ = 51.2 GOPS
```
> ❓ Why ×2? → 1 MAC (곱셈-누산) = 1 mul + 1 add = **2 ops**. I count ops as 2MKN, so peak must also carry ×2 for units to match (단위가 맞으려면 peak에도 ×2).
> ⚠️ **Trap (함정):** one doc writes peak = `256×100/1000 = 25.6 GOPS` (dropped the ×2 / ×2 누락). The code (`roofline.py` L98) + manifest say **51.2** — this was a real bug I caught while consolidating (정리하다 잡은 실제 버그). → [../roofline_notes.md §8](../roofline_notes.md)

**② Peak BW (메모리 천장 기울기 — external AXI 외부 버스)**
```
= (bus width) × clock = 256 bit × 100 MHz = 25.6 Gbit/s = 3.2 GB/s
```
> ⚠️ 25.6 Gbit/s and 3.2 GB/s are the **same quantity, different units (같은 양, 다른 단위)** (÷8). Code takes Gbit/s, divides by 8 internally.

**③ Ridge ★**
```
Ridge = 51.2 GOPS / 3.2 GB/s = 16 ops/byte
```
> ┌────────────────────────────────────────────┐
> │ My NPU: Peak 51.2 GOPS · BW 3.2 GB/s · **Ridge = 16** │
> └────────────────────────────────────────────┘
> 💡 To keep PEs busy (PE를 계속 돌리려면), I must do **≥16 ops per DRAM byte.** Anything less starves on memory (그 이하는 메모리에 굶는다).

---

## §4. Classify GEMMs by size (크기별로 직접 판정해보기)

For (M,K,N): `ops = 2·M·K·N`, `bytes = M·K·2 + K·N·2 + M·N·4` (act 2B, wt 2B, out 4B / 입력·가중치·출력), `OI = ops/bytes`.

| (M,K,N) | ops | bytes | OI | vs Ridge 16 | verdict (판정) |
|---|---|---|---|---|---|
| (16,16,16) | 8,192 | 2,048 | **4** | < | memory-bound (25% util 활용률) |
| (64,64,64) | 524,288 | 32,768 | **16** | = | **exactly Ridge (정확히 리지)** (100%) |
| (256,256,256) | 33.5M | 524,288 | **64** | > | compute-bound (full / 풀가동) |
| (1,2048,2048) | 8.39M | ~8.40M | **≈1** | ≪ | worst memory-bound (최악, 6%) |

> 💡 **Need ~64³ square GEMM to run PEs at 100% (64³쯤 되어야 PE 100% 가동).** Small tiles (작은 타일) or vector-matrix (벡터-행렬, M=1) have low OI → compute idles (연산기가 논다), memory pants (메모리만 헐떡).
> 🔗 (1,2048,2048) is worst because M=1 → each weight used once then thrown away (가중치를 한 번 쓰고 버림) = zero reuse (재사용 0). Same face as the LLM-decode problem (LLM 디코드 문제와 같은 얼굴) in §8.

---

## §5. Same kernel, different machine — the bottleneck moves (같은 커널, 다른 기계 — 병목은 이동한다)

Since Ridge = Peak/BW, **lowering BW pushes Ridge right (대역폭을 낮추면 리지가 오른쪽으로 밀림).**

PYNQ-Z2 overlay (오버레이): PS7 32-bit control-plane (제어 경로) → BW = 3.2 **Gbit/s**, 8× smaller than sim (sim보다 8배 작음).
```
Ridge(PYNQ) = 51.2 / (3.2/8) = 51.2 / 0.4 = 128 ops/byte
```
> 💡 Ridge 16 → 128 drags almost every §4 GEMM into memory-bound (거의 전부 메모리 병목으로 끌어내림). Compute (51.2 GOPS) is unchanged but useless (그대로지만 못 써먹음) — data supply is the wall. Textbook (교과서적) **"fast compute ≠ fast system (빠른 계산기 ≠ 빠른 시스템)."**

---

## §6. So what do I do — prescription depends on the wall (처방은 병목마다 다르다)

| bottleneck | what helps (효과 있는 것) | wasted effort (헛수고) |
|---|---|---|
| **compute-bound** (OI > Ridge) | ↑clock · ↑#PEs · narrower dtype (더 좁은 수치형 INT8/FP8) | raising OI does nothing (OI 올려봤자 무효) |
| **memory-bound** (OI < Ridge) | **raise OI**: tiling (타일링) · fusion (융합) · reuse (재사용) · packing (패킹) / ↑BW | adding clock/PEs does nothing (클럭·PE 추가 무효) |

> ❓ Self (자문): *"OI=8 kernel — does 2× clock make it faster?"*
> → No. Ridge=16, so OI=8 is memory-bound. **Clock doesn't help** — memory is the wall. Must lift OI ≥16 (tiling/fusion) first, then clock converts to speed (그제서야 클럭이 속도로 전환).
> ✅ Instant answer here = §6 closed (즉답되면 §6 종료).

---

## §7. Two things that confused me — real learning (내가 헷갈린 두 지점 = 진짜 학습)

### ❓ Q1. Is the memory-axis BW giving Ridge 16 or 32? (BW 축이 16이냐 32냐)

My guide (`06_systolic_array.md`) says "Ridge ≈ 2N = 32, BW 1.6 GB/s"; the code says "16, BW 3.2 GB/s." Not a contradiction — **they measure different quantities (다른 양을 재는 것):**

| | guide (32) | code (16) |
|---|---|---|
| BW target | array *inlet (어레이 입구)* 1.6 GB/s | external AXI (외부 버스) 3.2 GB/s |
| bytes counted | activation only, 1B, one-way (활성값만, 1B, 단방향) | act+wt+out, 2/2/4B |
| meaning | *on-chip* streaming intensity (칩 내부 스트리밍 특성) | *whole-machine* off-chip balance (기계 전체 off-chip 밸런스) |

> ✅ Classic Roofline's memory ceiling = **off-chip DRAM bandwidth (칩 밖 DRAM 대역폭)** (the model asks "how fast can I pull data from *outside* the chip 칩 밖에서 얼마나 빨리 끌어오나"). **Use Ridge=16 (off-chip) for verdicts (판정엔 16을 쓴다).** The 2N=32 is an internal array trait only (내부 특성치일 뿐).
> 🔗 open thread (남은 갈래): *Hierarchical Roofline (계층적 루프라인)* — stacked DRAM/SRAM roofs (DRAM/SRAM 천장 겹치기) reconciles both on one chart → confirm in H&P 4.8.

### ❓ Q2. INT8 math, but why count 2 bytes? (INT8인데 왜 2바이트로 세나)

Code uses `input/weight_elem_bytes=2`. INT8 is 1 byte though.
Reason: `npu_def_pkg.sv` — *"Lane slot kept at 16 bits, only lower 8 bits carry INT8 payload (16비트 슬롯, 하위 8비트만 INT8 실데이터)."* So AXI/SRAM move the full 16-bit slot; **upper 8 bits are zero padding (상위 8비트는 0 패딩).**

> ✅ Counting 2B is honest to *actual traffic (실제 전송량엔 충실)* (padding is moved too / 패딩까지 나르니까). But it's **design waste (설계 낭비)** — half of act/weight bandwidth carries zeros (대역폭 절반이 0을 나름). Pack INT8 to 1 byte (1바이트로 패킹) → OI rises (OI 상승): exactly 8/6≈1.33× for square GEMM, ≈2× only for weight-dominated shapes (M=1 decode) — the INT32 output isn't packed, so the gain is shape-dependent (출력은 패킹 안 됨 → shape 의존). → [Practice 1](../../roofline_analysis.md)
> 🔗 leads into Node 6 (quantization 양자화, INT8/FP8 packing). "Add packing opt to l6 (l6에 패킹 최적화 추가)" = candidate project.

---

## §8. Where I sit in the world + 2026 lens (세상 속 좌표 + 2026 렌즈)

| design | array | full-GEMM OI | character (성격) |
|---|---|---|---|
| my NPU | 16×16 | ~32 (2N) / off-chip 16 | FPGA mid-range, tuned to BRAM BW (BRAM 대역폭에 맞춤) |
| TPU v1 | 256×256 | ≈512 | extreme compute-bound, datacenter DRAM (데이터센터용) |
| Eyeriss | Row-Stationary | — | energy/reuse optimized (에너지·재사용 최적화, dataflow 데이터플로우 축) |

> 💡 **2026 frontier = memory wall (최전선 = 메모리 장벽).** LLM decode (디코드) is token-by-token M=1 vector-matrix → like (1,2048,2048), **OI≈1, deep memory-bound (깊은 메모리 병목)**; >50% of attention-kernel cycles wait on memory (어텐션 커널 사이클 절반 이상이 메모리 대기). The CNN-era "big GEMM → compute-bound" picture breaks for LLM inference (CNN 시대 그림이 LLM 추론에선 무너짐).
> 🔗 In Node 3, for each TPU/Eyeriss paper add one paragraph: *"where this design breaks down on decode (이 설계가 디코드에서 무너지는 지점)."*

---

## §9. Self-check — answer without looking (안 보고 답하기)

1. **Clock → 200 MHz, Ridge?** → Peak Compute *and* Peak BW both ×2 → Ridge = 102.4/6.4 = **16, unchanged (불변).** (Balance is clock-invariant / 밸런스는 클럭에 불변.)
2. **OI=8 kernel, 2× clock faster?** → No, memory-bound (< Ridge 16). §6.
3. **Pack INT8 to 1B — does (64,64,64) stay at Ridge?** → square GEMM only gains 8/6 (≈1.33×) → OI 16→**21.3** → **crosses to compute-bound (넘어감, 간신히).** ※ "2× → 32" is wrong — the INT32 output isn't packed. → [Practice 1](../../roofline_analysis.md)
4. **Why does (1,2048,2048) hug the diagonal, one sentence? (빗변에 붙는 이유 한 문장)** → M=1 ⇒ zero weight reuse (재사용 0) ⇒ OI≈1, extreme memory-bound.

> ✅ Instant answers to all 4 = roofline concept graduated (개념부 졸업). Only the deliverable (산출물) remains.

---

## §10. Still open → next note (아직 안 닫힌 것 → 다음 노트)

- [ ] **Practice 1 (deliverable / 산출물):** plot in matplotlib — flat 51.2 / diagonal 3.2 GB/s / Ridge=16 vline (수직선) + dashed compare for INT8 1B packing (패킹 점선 비교) + the four GEMM points → `docs/roofline_analysis.md`. **The last piece that closes roofline (roofline을 닫는 마지막 조각).**
- [ ] **H&P Quantitative §4.8** → settle Q1 (hierarchical roofline / SRAM roof).
- [ ] Fix doc: `39_roofline.md` peak 25.6 → 51.2 (§3 trap).
- [ ] Then → Node 1's other half = **SIMD/DLP (데이터 수준 병렬성)** (H&P 4.1–4.4).

---

*Status (상태): §0–§9 concepts done · §10 deliverable open → practice 1 is the next action (다음 액션은 실습 1).*
