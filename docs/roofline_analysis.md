# Roofline 분석 — 이 NPU (실습 1 / R1 산출물)

> 작성: 2026-07-23 · brief_01 Part 3(실습 1)의 산출물.
> 근거: `l6/src/l6_toolchain/roofline.py` 모델 + `rtl/include/npu_def_pkg.sv`(sim_default).
> 관련: 개념 필기 [study_guide/notes/01_roofline.md](study_guide/notes/01_roofline.md) · 레퍼런스 [study_guide/roofline_notes.md](study_guide/roofline_notes.md) · [brief_01](study_guide/gemini_teaching/brief_01_roofline_deep.md)

---

## 그래프

![이 NPU(sim_default)의 Roofline. 로그-로그 축에 Peak Compute 51.2 GOPS 수평 천장과 3.2 GB/s 기울기의 메모리 대각선, Ridge=16 수직선. 네 개 GEMM을 16-bit slot(파란 채움)과 INT8 1바이트 패킹(주황 테두리)으로 찍음. 흐린 점선은 PYNQ 오버레이(BW 0.4 GB/s)의 두 번째 천장으로 Ridge가 128로 밀리며, 음영 구간(16~128)은 sim이 compute-bound인데 PYNQ는 여전히 memory-bound인 영역.](assets/roofline_sim_default.svg)

**기계(sim_default):** 16×16 INT8 @100 MHz, 256-bit AXI → Peak **51.2 GOPS** · BW **3.2 GB/s** · **Ridge = 16 ops/byte**.
그래프의 점은 각 workload의 **achievable(천장에 닿은 이론 상한)**이라 정의상 roofline 위에 놓인다. scheduler 실측(achieved)은 이 선 위 또는 아래에 찍힌다.

## 해석 (핵심 4문장)

1. **판정은 Ridge=16과의 대소로 끝난다.** OI가 16 미만인 (16³, 1×2048²)은 대각선(메모리 천장)에 막혀 PE가 논다 = memory-bound. (64³)은 정확히 꼭짓점, (256³)은 평평한 천장 = compute-bound 풀가동.
2. **INT8 패킹(주황)은 점을 오른쪽으로 민다** — 같은 연산을 더 적은 바이트로 옮기므로 OI가 오른다.
3. **그 결과가 병목마다 갈린다:** memory-bound 점(16³, 1×2048²)은 **대각선을 타고 위로** 올라가 실제로 빨라지고(12.8→17.1, 3.2→6.4 GOPS), compute-bound 점(64³, 256³)은 **평평한 천장을 따라 오른쪽으로만** 미끄러져 성능은 그대로고 여유(headroom)만 는다.
4. **즉 패킹의 이득은 "가장 memory-bound인 곳"에서 가장 크다** — 이게 §"핵심 발견"으로 이어진다.
5. **(PYNQ 오버레이)** 같은 peak인데 BW만 1/8이면 Ridge가 16→128로 밀린다. 음영 구간(16~128)의 워크로드는 sim에선 compute-bound지만 PYNQ에선 여전히 memory-bound — **병목은 커널이 아니라 기계가 정한다**(노트 [§5](study_guide/notes/01_roofline.md)). 실제로 64³·256³이 그 구간에 들어간다.

## 검증 수치 (roofline_plot.py 산출)

| shape | OI (16-bit slot) | perf | OI (INT8 packed) | perf | OI 이득 |
|---|---|---|---|---|---|
| 16³ | 4.00 | 12.8 | 5.33 | 17.1 | 1.333× |
| 64³ | 16.0 | 51.2 | 21.3 | 51.2 | 1.333× |
| 256³ | 64.0 | 51.2 | 85.3 | 51.2 | 1.333× |
| 1×2048² | 0.999 | 3.20 | 2.00 | 6.38 | 1.998× |

바이트 모델: `bytes = M·K·ie + K·N·we + M·N·oe`. 현재 `ie=we=2, oe=4`(16-bit slot), 패킹 시 `ie=we=1, oe=4`(**INT32 출력은 패킹 안 됨**).

## ★ 핵심 발견 — "패킹 = AI 2배"는 정사각 GEMM에선 틀리다

brief_01 Part 2 힌트(및 로드맵)의 *"INT8 1바이트 패킹 → AI 2배"*는 **부정확**하다. 그래프를 정량화하며 드러난 사실:

- **정사각 GEMM (M=K=N)**: act:wt:out 바이트비가 `2:2:4`, 패킹하면 `1:1:4` → 총 `8 → 6` → OI는 **정확히 8/6 ≈ 1.333×**, **크기와 무관**하게 일정. (16³·64³·256³이 모두 1.333×인 이유.)
- **weight-지배 (예: M=1 벡터-행렬)**: 트래픽의 거의 전부가 weight(K·N)이고 출력(M·N)은 무시할 만함 → 패킹이 트래픽을 거의 절반으로 → OI **≈2× (1.998×)**.
- **왜?** INT8 payload는 act/weight에만 있다(16-bit slot의 하위 8bit). **INT32 출력(4B)은 패킹 대상이 아니다.** 그래서 출력 바이트 비중이 클수록(정사각) 2×에서 멀어지고, 작을수록(벡터-행렬) 2×에 근접한다.

> 💡 그런데 weight-지배·M=1은 정확히 **LLM 디코드**의 얼굴이고 가장 깊은 memory-bound다. 즉 **"AI 2배"는 패킹이 가장 절실한 바로 그 영역에서만 성립** — 실무적으로 반가운 우연. (§9 자문 Q3의 옛 답 "OI 32"는 이 발견으로 정정: 64³는 16→**21.3**, 여전히 compute-bound로 넘어가긴 함.)

## 재현 방법

의존성 없는 순수 파이썬 생성기(matplotlib 불요):

```bash
python docs/study_guide/notes/roofline_plot.py
# → docs/assets/roofline_sim_default.svg 재생성 + 수치 표를 stdout에 출력
```

> matplotlib 버전 재구현은 **직접 하는 실습 과제**로 남긴다(brief_01의 교육 의도). 이 SVG는 정답 대조용 기준.

## 아직 안 닫힌 것

- **Q1 (BW 축 / hierarchical roofline)** — 이 그래프는 off-chip 단일 천장. SRAM 천장을 겹으로 그리는 hierarchical roofline은 H&P Quantitative §4.8 정독 후 별도 그림으로. → [notes/01_roofline.md §7](study_guide/notes/01_roofline.md)
- **문서 수정** — `08_l6_toolchain/39_roofline.md`의 Peak Compute 25.6 → 51.2 (×2 누락).
- 이 산출물로 brief_01 Part 3(실습 1)은 **닫힘**. 남은 R1은 Gemini 세션(Q1/Q2 대화식 결론) + SIMD/DLP(R2).
