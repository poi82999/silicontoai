# Roofline 핵심 1쪽 요약 — 이 NPU 적용

> 작성: 2026-05-29 (Day 02, W1 산출물)
> 근거: Williams/Waterman/Patterson, "Roofline", CACM 52(4), 2009 (`papers/`) +
> 실제 코드 검증 (`rtl/include/npu_def_pkg.sv`, `l6/src/l6_toolchain/roofline.py`, `roofline_profiles.py`)

---

## 1. 모델 한 줄

```
달성가능 성능(GOPS) = min( Peak Compute ,  Peak BW × AI )
```
- **AI (Arithmetic Intensity)** = ops ÷ bytes — *workload*의 성질
- **Ridge point** = Peak Compute ÷ Peak BW — *기계*의 밸런스
- AI < Ridge → **memory-bound** / AI > Ridge → **compute-bound**

## 2. 이 NPU의 검증된 수치 (sim_default = 100 MHz, 256-bit AXI)

| 항목 | 값 | 유도 |
|---|---|---|
| Peak Compute | **51.2 GOPS** | 256 MAC × 2 ops × 100 MHz |
| Peak BW (외부 AXI) | **3.2 GB/s** (25.6 Gbit/s) | 256-bit × 100 MHz |
| **Ridge point** | **16 ops/byte** | 51.2 ÷ 3.2 |

## 3. 프로파일별 Ridge point

| 프로파일 | Peak BW | Ridge AI | 함의 |
|---|---|---|---|
| sim_default / arty_a7 / zynq | 3.2 GB/s | **16** | 표준 기준 |
| **pynq_z2_overlay** | 0.4 GB/s | **128** | 32-bit 제어경로 → 거의 모두 memory-bound |

## 4. GEMM 크기별 판정 (sim_default)

| (M,K,N) | AI | 달성 GOPS | 판정 |
|---|---|---|---|
| (16,16,16) | 4 | 12.8 | memory-bound |
| (64,64,64) | 16 | 51.2 | **정확히 Ridge** |
| (256,256,256) | 64 | 51.2 | compute-bound (풀가동) |
| (1,2048,2048) | 1 | 3.2 | memory-bound (벡터-행렬 최악) |

→ **64³ 이상 큰 GEMM이라야 PE가 풀가동.** 작은 타일·벡터 연산은 메모리에 굶주린다.

## 5. ⚠️ 학습 가이드와의 불일치 (반드시 기억)

`docs/study_guide/02_rtl_core/06_systolic_array.md`는 "Ridge AI ≈ 32 (= 2N), BW 1.6 GB/s"라고 적음.
이는 **어레이 입구 스트리밍 강도**(activation만, 1바이트, 단방향)이며,
roofline 판정에 쓰는 **off-chip 밸런스(Ridge=16)**와는 **다른 양**이다.

| | 가이드 (32) | 코드 (16) |
|---|---|---|
| BW 축 | 어레이 입구 1.6 GB/s | 외부 AXI 3.2 GB/s |
| bytes | act만, 1B | act+wt+out, 2/2/4B |
| 의미 | 어레이 내부 특성치(2N) | 기계 밸런스 (판정 기준) |

**판정에는 항상 코드 기준(Ridge=16)을 쓴다.**

## 6. 미해결 질문 (다음 세션)

- on-chip SRAM 대역폭 기준 roofline도 별도로 그릴 가치가 있는가? (H&P 4.8 확인)
- `roofline.py`가 INT8 payload를 16-bit slot(2B)으로 세는데, 실제 DRAM 전송량과 괴리 없는지? (emitter/DMA 확인)
