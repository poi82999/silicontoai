# C경로 상세 주간 계획 (종합형: HW + SW + 이론)
## 목표: "이 학부생은 벌써 대학원 수준이네" 평가 받기

> **기간**: 2025년 1월 ~ 2025년 12월 (12개월)  
> **투입 시간**: 주 15~20시간 (학기 중 15h, 방학 중 20h)  
> **최종 산출물**: 
> - 40개 이상 git commits
> - 400줄 이상 코드 기여 (RTL + compiler)
> - 논문 리뷰 2개 이상
> - 분석 문서 10페이지 이상

---

# 📅 타임라인 개요

```
2025년 1월 (겨울방학, 2주)         → PHASE 0: 입문 + PHASE 1 기초
2025년 1월~4월 (봄학기, 16주)      → PHASE 1 심화 + PHASE 2 병행
2025년 5월~6월 (여름방학, 8주)     → PHASE 1 완성 + PHASE 3 시작
2025년 7월~12월 (가을학기, 16주)   → PHASE 3 + PHASE 5 + PHASE 6
```

---

# WEEK 1-2: PHASE 0 입문 (겨울방학)

## 목표
프로젝트 전체 구조 이해 + 현재 상태 파악 + "무엇을 할 것인가" 명확히

### Week 1: 프로젝트 빠른 둘러보기

#### 월요일 (3시간)
- [ ] `docs/study_guide/` 모든 문서 읽기 (README 포함)
- [ ] GitHub 리포지토리 히스토리 훑기
  ```bash
  git log --oneline | head -30  # 최근 30개 커밋
  git log --graph --all --oneline  # 전체 브랜치 구조
  ```
- [ ] **메모**: 프로젝트 목표, 현재까지 구현된 것, 미완료 부분

#### 화~수요일 (4시간)
- [ ] `rtl/`, `l6/`, `host/` 디렉토리 구조 파악
  ```bash
  # 파일 크기 순 정렬 (큰 것부터 이해)
  find rtl -name "*.sv" -exec wc -l {} \; | sort -rn | head -10
  find l6 -name "*.py" -exec wc -l {} \; | sort -rn | head -10
  ```
- [ ] 각 디렉토리의 README 또는 가장 큰 파일 읽기
- [ ] Architecture diagram 찾아서 이해하기
  ```
  당신의 노트북에 그릴 것:
  [Host (ARM)]
      ↓ (AXI-Lite MMIO)
  [NPU Top]
      ├─ [DMA Controller]
      ├─ [Systolic Array (16×16)]
      ├─ [SRAM Bank (activation)]
      ├─ [Accumulator Buffer]
      └─ [Control Unit]
  ```

#### 목요일 (2시간)
- [ ] 현재 테스트 실행해보기
  ```bash
  cd tb
  make test_mac_basic  # 또는 available test
  # 파형 보기 (gtkwave 또는 Vivado)
  ```
- [ ] "동작한다!" 확인

#### 금요일 (2시간)
- [ ] **Issue/TODO 찾기**
  ```bash
  grep -r "TODO\|FIXME\|XXX\|HACK" --include="*.sv" --include="*.py" .
  git log --grep="TODO" --oneline
  ```
- [ ] 프로젝트 디렉토리에 `ISSUES_FOUND.md` 작성
  ```markdown
  # 프로젝트 현황 분석
  
  ## 현재 구현 상태
  - RTL: 약 8000줄 (MAC, systolic array, SRAM, DMA)
  - Compiler (l6): 약 3000줄 (IR, fusion, lowering, scheduler, emitter)
  - Testbench: 약 2000줄 (UVM framework)
  
  ## 미완료/개선 가능 항목
  1. [찾은 것 1]: ...
  2. [찾은 것 2]: ...
  ...
  ```

---

### Week 2: 학습 계획 수립 + "첫 미션" 선택

#### 월요일 (2시간)
- [ ] 이 전체 로드맵 읽기 (`학부생_C경로_주간계획.md`)
- [ ] 자신이 **가장 관심 있는 부분** 표시
  ```
  예:
  - RTL의 어떤 부분? (MAC? Systolic Array? DMA?)
  - Compiler의 어떤 부분? (Fusion? Scheduling? Emitter?)
  - 이론? (아키텍처? 논문? 최적화?)
  ```

#### 화~수요일 (3시간)
- [ ] **첫 번째 미션 선택** (하나만)
  ```
  미션 선택 가이드:
  
  [RTL 쪽]
  - "SRAM port conflict detection assertion 추가" (2주 난도)
  - "Systolic array pipeline depth 분석" (1주 난도)
  - "DMA controller boundary check 검증" (2주 난도)
  
  [Compiler 쪽]
  - "BatchNorm fusion rule 추가" (2주 난도)
  - "Roofline model 자동화" (1주 난도)
  - "새로운 scheduling heuristic" (3주 난도)
  
  [이론 쪽]
  - "TPU 논문 정독 + 비교 분석" (2주 난도)
  - "아키텍처 이론 정리" (2주 난도)
  ```

#### 목요일~금요일 (2시간)
- [ ] 선택한 미션에 대해 **작은 문서** 작성:
  ```markdown
  # 첫 번째 미션: [제목]
  
  ## 선택 이유
  [왜 이걸 하기로 했는가?]
  
  ## 예상 난이도
  [몇 주 걸릴 것 같은가?]
  
  ## 성공 기준
  1. [달성 목표 1]
  2. [달성 목표 2]
  3. [달성 목표 3]
  
  ## 학습할 것
  - [이론 A]
  - [코드 스킬 B]
  - [분석 기법 C]
  ```

---

## Week 1-2 산출물

- [ ] `ISSUES_FOUND.md` (1페이지)
- [ ] `FIRST_MISSION.md` (1페이지)
- [ ] 프로젝트 구조도 (손그림 또는 drawio)

---

# WEEK 3-8: PHASE 1 심화 (컴퓨터 아키텍처 + RTL 분석)

## 목표
**이 프로젝트의 모든 설계 수치(31사이클, 2-bank SRAM, DMA burst)를 이론으로 설명할 수 있다**

---

## Week 3: 파이프라인 이론 + 첫 실습

### 월요일 (2시간)
- [ ] P&H RISC-V 4장 읽기 (처음 30분)
  - 4.1: Introduction to pipelining
  - 4.4~4.5: Pipelining basics
  
- [ ] 유튜브: MIT 6.004 Lecture 5 "Pipelining" (50분)
  - Playback speed 1.25x로 보기
  - **꼭 이해할 부분**: 파이프라인 깊이, hazard 종류 (data, structural, control)

### 화요일 (2시간)
- [ ] P&H RISC-V 4장 계속 (4.6~4.8)
  - Data hazards and forwarding
  - Control hazards and branch prediction
  
- [ ] **당신의 노트북에 정리**:
  ```markdown
  # 파이프라인 해저드 3가지
  
  ## 1. Data Hazard (데이터 종속성)
  예: 
    add $1, $2, $3
    sub $4, $1, $5  # $1을 기다려야 함
  해결책: Forwarding (bypass path)
  
  ## 2. Structural Hazard (자원 충돌)
  예: 동시에 메모리에서 읽으려는 여러 stage
  해결책: 자원 추가 또는 stall
  
  ## 3. Control Hazard (분기 불확실)
  예: branch 명령어의 target 미정
  해결책: branch prediction 또는 flush
  
  ## 이 프로젝트에서의 예
  - [systolic array에서 data hazard는?]
  - [SRAM read/write conflict는 structural hazard?]
  ```

### 수요일 (2시간)
- [ ] `rtl/core/systolic_array.sv` 읽기
  - 전체 코드 이해 (500줄 정도)
  - MAC PE가 뭐하는지 이해
  - (0,0)에서 (15,15)로 데이터가 흐르는 경로 추적

- [ ] **파이프라인 깊이 계산**:
  ```verilog
  // systolic array를 이렇게 생각해보자:
  
  // Stage 0: (0,0) PE에 데이터 도착
  // Stage 1: (0,1)에 activation 도착, (1,0)에 weight 도착
  // ...
  // Stage 30: (15,15)에 도착
  // Stage 31: (15,15)에서 결과 읽음
  
  // 왜 31? = 초기입력(1) + 15(row) + 15(col) = 31
  ```

### 목요일~금요일 (2시간)
- [ ] Vivado에서 간단한 TC 작성 & 파형 확인
  ```python
  # test_simple_mac.py
  # Input: 작은 행렬 (2x2)만
  # Output: 파형으로 31사이클 확인
  ```

---

### Week 3 산출물
- [ ] `Pipeline_Deep_Dive.md` (2페이지)
  - 파이프라인 이론 정리
  - 이 프로젝트의 31사이클 근거
- [ ] Vivado 파형 스크린샷 (2개)
- [ ] Git commit: "docs: pipeline architecture analysis"

---

## Week 4: SRAM 메모리 계층 + 캐시 이론

### 월요일~화요일 (3시간)
- [ ] P&H RISC-V 5장 읽기 (5.1~5.3)
  - Cache basics
  - Hit/miss ratio
  - **꼭 이해**: conflict miss는 뭔가?

- [ ] CMU 15-213 Lecture 8 보기 (YouTube, 50분)

### 수요일 (2시간)
- [ ] `rtl/core/dp_sram_bank.sv` 분석
  - 2개 bank 구조 이해
  - Port A, B의 역할
  - 어떤 신호들이 read/write를 제어하는가?

### 목요일~금요일 (2시간)
- [ ] **SRAM 대역폭 계산**:
  ```
  이 프로젝트:
  - SRAM 크기: ? bytes
  - 동시 읽기 포트: 2개 (Bank A, B)
  - 한 사이클에 읽을 수 있는 데이터: ? bytes
  - Peak bandwidth: ? GB/s
  
  Systolic Array 관점:
  - 16개 PE가 동시에 activation 읽기 필요
  - 각 PE가 몇 bytes? (fp16 = 2 bytes)
  - 필요 bandwidth: 16 * 2 bytes = 32 bytes/cycle @ 100MHz = 3.2 GB/s
  
  비교:
  - 필요 < 구현된가? 맞으면 Good design!
  ```

---

### Week 4 산출물
- [ ] `SRAM_Memory_Hierarchy.md` (2페이지)
- [ ] SRAM 대역폭 계산 표
- [ ] Git commit: "analysis: SRAM banking strategy"

---

## Week 5: DMA & 메모리 계층 통합

### 월요일 (2시간)
- [ ] CMU 15-213 Lecture 9~10 보기 (I/O, Virtual Memory)

### 화요일~수요일 (3시간)
- [ ] `host/npu_dma_controller.cpp` 읽기
  - DMA initiate 코드
  - Burst length 설정
  - mmap 패턴

- [ ] `rtl/system/dma_controller.sv` 읽기
  - AXI 신호 처리
  - Burst transaction handling

### 목요일~금요일 (2시간)
- [ ] **DMA Burst 효과 계산**:
  ```
  예시: ResNet-50 첫 layer activation 로드
  Input size: 224×224×3 = 150,528 bytes
  
  Without burst:
  - Transfers: 150,528 (각각 1 word = 1 byte 가정)
  - Setup overhead: 150,528회
  - Total time: 150,528 cycles + overhead
  
  With burst (size 32):
  - Transfers: 150,528 / 32 = 4,704
  - Setup overhead: 4,704회
  - Total time: 150,528 cycles (actual transfer) + 4,704 (overhead)
  
  Speedup: ~30x on setup!
  ```

---

### Week 5 산출물
- [ ] `DMA_Burst_Analysis.md` (2페이지)
- [ ] Burst 효과 성능 계산표
- [ ] Git commit: "analysis: DMA burst strategy"

---

## Week 6: 아키텍처 통합 + 성능 모델

### 월요일~화요일 (3시간)
- [ ] **모든 설계 수치를 하나의 문서로 통합**
  ```markdown
  # 이 NPU 가속기의 설계 결정: 왜 이렇게?
  
  ## 설계 선택지 1: Systolic Array vs GPU (SIMT)
  - 선택: SA
  - 이유: inference latency에 유리, 전력 효율
  
  ## 설계 선택지 2: Array 크기 16×16 vs 128×128
  - 선택: 16×16
  - 이유: FPGA에 맞는 크기, 메모리 계층 최적화
  
  ## 설계 선택지 3: SRAM 뱅크 개수
  - 선택: 2-bank
  - 이유: conflict miss 회피, 대역폭 충분
  
  ## 설계 선택지 4: DMA burst length
  - 선택: 32-word bursts
  - 이유: setup overhead 감소
  
  ... (계속)
  ```

### 수요일~금요일 (3시간)
- [ ] **Roofline Model로 성능 상한선 계산**:
  ```python
  # l6/src/l6_toolchain/roofline.py 참고
  
  # Peak compute (FLOPS)
  peak_mac_per_cycle = 16 * 16 * 2  # 512 MACs/cycle
  freq_mhz = 100
  peak_flops = 512 * 100e6 = 51.2 GFLOPS
  
  # Peak memory bandwidth
  sram_bandwidth_gb_s = 3.2  # calculated above
  
  # Arithmetic intensity (CONV2D)
  # For 3x3 kernel, 224x224 input
  ops_per_byte = (9 * output_operations) / (input_bytes + weight_bytes)
  
  # Roofline
  if arithmetic_intensity < (peak_flops / bandwidth):
      performance_limit = "memory-bound"
  else:
      performance_limit = "compute-bound"
  ```

---

### Week 6 산출물
- [ ] `Architecture_Design_Decisions.md` (3~4페이지)
  - 모든 설계 수치의 근거
  - 트레이드오프 분석
- [ ] Roofline 그래프 (matplotlib)
- [ ] Git commit: "analysis: complete architecture justification"

---

## Week 7-8: 첫 번째 실험 & 논문 연결

### Week 7: 첫 번째 실습 프로젝트

#### 월요일~수요일 (4시간)
- [ ] **미션: Systolic Array Critical Path 분석**
  ```python
  # Vivado timing report에서:
  1. Critical path 찾기 (longest delay path)
  2. 각 stage의 delay 측정
  3. Bottleneck 식별
  
  # 예상 findings:
  - MAC 연산이 longest delay? 20ns?
  - SRAM access가 long? 15ns?
  - 맣 critical path는?
  
  # 개선 아이디어?
  - Pipelining 추가?
  - Gate sizing?
  ```

#### 목요일~금요일 (2시간)
- [ ] 결과 문서화:
  ```markdown
  # Systolic Array Critical Path Analysis
  
  ## Vivado Timing Report
  [캡처]
  
  ## Critical Path
  - Starting point: ...
  - Ending point: ...
  - Total path delay: XX ns
  - Clock period: 10 ns (100 MHz)
  - Timing slack: XX ns
  
  ## Bottleneck Identification
  [각 stage별 breakdown]
  
  ## Potential Improvements
  1. [아이디어 1]
  2. [아이디어 2]
  ```

---

### Week 8: 논문 연결 + Phase 1 마무리

#### 월요일~수요일 (3시간)
- [ ] **Jouppi et al. TPU 논문 읽기** (ISCA 2017)
  - Abstract + Section 1: Introduction
  - Section 2: TPU Architecture (특히 Systolic array 부분)
  - Section 3: Performance Analysis
  
  **읽으면서 노트**:
  ```
  TPU의 systolic array:
  - Size: 135×135 (우리는 16×16)
  - Peak FLOPS: ?
  - Memory hierarchy: ?
  
  우리와의 차이점:
  1. [차이점 1]
  2. [차이점 2]
  3. [차이점 3]
  ```

#### 목요일~금요일 (2시간)
- [ ] **비교 분석 문서 작성**:
  ```markdown
  # 우리 프로젝트 vs TPU: 아키텍처 비교
  
  | 항목 | TPU | 우리 프로젝트 |
  |------|-----|----------|
  | Array Size | 135×135 | 16×16 |
  | Peak FLOPS | 92 TFLOPS | 51.2 GFLOPS |
  | Dataflow | WS (Weight-Stationary) | WS |
  | Memory hierarchy | Weight SRAM (6MB), Unified Buffer (24MB) | ... |
  | ... | | |
  
  ## 배운 점
  1. TPU가 이렇게 큰 이유는?
  2. 우리가 16×16을 선택한 이유와의 연결?
  3. 같은 원리를 따르면서도 다른 트레이드오프?
  ```

---

## PHASE 1 최종 산출물 (Week 1-8)

```
문서:
- Pipeline_Deep_Dive.md (2p)
- SRAM_Memory_Hierarchy.md (2p)
- DMA_Burst_Analysis.md (2p)
- Architecture_Design_Decisions.md (4p)
- Systolic_Array_Critical_Path.md (2p)
- TPU_Comparison.md (2p)

코드/분석:
- Vivado timing report 스크린샷 (5개)
- Roofline 그래프
- Critical path 추적 표

Git commits: 7개
```

---

# WEEK 9-14: PHASE 2 (RTL/UVM 검증) + PHASE 3 병행

## 목표
**RTL 버그 5개 찾기 + Assertion 5개 추가 + Compiler 1개 기여**

---

## Week 9-10: SystemVerilog/UVM 학습 (2주)

### Week 9: 문법 & 기존 코드 이해

#### 월요일 (2시간)
- [ ] The UVM Primer 읽기 (전체, ~200쪽)
  - Chapter 3: UVM Components & Phases (가장 중요)

#### 화수요일 (4시간)
- [ ] `tb/uvm_npu_tb/npu_uvm_pkg.sv` 완전히 읽기
  - 클래스 계층도 그리기
  - 각 클래스의 역할 이해

#### 목금 (2시간)
- [ ] 기존 테스트 실행:
  ```bash
  cd tb && make test_mac_basic
  # Waveform 보기
  ```

---

### Week 10: RTL 버그 찾기 시작

#### 월화수 (4시간)
**체계적 코드 리뷰**:

```python
# 각 RTL 모듈을 이 체크리스트로 리뷰
checklist = [
    "Reset 신호 제대로 처리됨?",
    "Clock domain crossing 이슈 있나?",
    "Off-by-one error 있나? (address, counter)",
    "Overflow/underflow 검증되나?",
    "Dead code 있나?",
    "Latency/timing violation 있나?",
    "Edge case (full, empty, boundary) 처리되나?",
    "Blocking vs non-blocking assignment 올바른가?",
]

# 검토 대상 모듈들:
modules_to_review = [
    "rtl/core/mac_pe.sv",
    "rtl/core/systolic_array.sv",
    "rtl/memory/dp_sram_bank.sv",
    "rtl/memory/psum_accumulator_buffer.sv",
    "rtl/system/dma_controller.sv",
]
```

#### 목금 (3시간)
- [ ] 찾은 문제점들을 `RTL_ISSUES.md`에 정리:
  ```markdown
  # RTL Code Review Findings
  
  ## Issue 1: [모듈명] - [문제 간단 설명]
  위치: [파일:라인]
  심각도: [Critical/Major/Minor]
  
  문제 코드:
  ```verilog
  [코드]
  ```
  
  분석:
  [왜 문제인가?]
  
  가능한 영향:
  [이게 버그를 일으킬 수 있는가?]
  
  해결 방안:
  [어떻게 고칠 것인가?]
  ```

---

## Week 11-12: Assertion 작성 + Test 추가 (2주)

### Week 11: Assertion 설계

#### 월화 (3시간)
- [ ] 발견한 각 이슈별로 **assertion으로 검증 가능한가?** 판단

```verilog
// 예시들:

// Issue: SRAM port conflict 검증 없음
property sram_no_conflict;
  @(posedge clk) disable iff (~rst_n)
  ~(port_a_valid & port_b_valid & (port_a_addr == port_b_addr));
endproperty
assert property(sram_no_conflict) else 
  $error("SRAM port A and B conflict at addr %h", port_a_addr);

// Issue: Accumulator overflow 가능성
property accum_no_overflow;
  @(posedge clk)
  (accumulator_value < 32'hFFFFFFFF);  // signed overflow check
endproperty

// Issue: DMA burst should be aligned
property dma_burst_aligned;
  @(posedge clk) disable iff (~rst_n)
  $rose(dma_start) |-> (dma_address[4:0] == 5'b0);  // 32-byte aligned
endproperty
```

#### 수목금 (3시간)
- [ ] `tb/sv_assertions/student_assertions.sv` 파일 생성
  ```verilog
  // File: tb/sv_assertions/student_assertions.sv
  // Author: [Your name]
  // Date: 2025-01-XX
  // Description: Assertions to verify RTL correctness
  
  module npu_student_assertions (
    input clk,
    input rst_n,
    // ... 필요한 신호들
  );
  
    // Assertion 1: SRAM port conflict
    property sram_no_conflict;
      ...
    endproperty
    assert property(sram_no_conflict);
    
    // Assertion 2: DMA address aligned
    ...
    
    // Assertion 3: Systolic array valid propagation
    ...
    
    // Assertion 4: Accumulator range check
    ...
    
    // Assertion 5: (추가로 1개 더)
    ...
  
  endmodule
  ```

---

### Week 12: Test Case 작성 + 검증

#### 월화 (2시간)
- [ ] 각 assertion을 trigger하는 **test case** 작성

```python
# l6/test/test_rtl_edge_cases.py
class EdgeCaseTests(unittest.TestCase):
    
    def test_sram_port_conflict(self):
        """Trigger SRAM port conflict assertion"""
        # Setup: Configure DMA to read same address twice
        # Expected: Assertion should fail (이것이 정상!)
        
    def test_dma_burst_alignment(self):
        """Verify DMA burst alignment"""
        # Setup: Try to DMA from unaligned address
        # Expected: Assertion fires
        
    def test_systolic_array_boundary(self):
        """Test systolic array with max-size input"""
        # Setup: Full 224×224 input
        # Expected: No overflow, correct results
```

#### 수목금 (2시간)
- [ ] **Regression test** 작성 (assertion이 아닌 것 깬다)
  ```python
  # 모든 기존 기능이 여전히 동작하는지 확인
  def test_regression_basic_mac(self):
      # 간단한 MAC: 모든 assertion pass 해야 함
      ...
  ```

---

## Week 13-14: Compiler에 첫 기여 (2주)

이 2주 동안 **PHASE 3 시작** (병행):

### Week 13: Compiler 구조 이해 + Fusion Rule 설계

#### 월화 (3시간)
- [ ] `l6/src/l6_toolchain/ir.py` 읽기
  - NPUInstr 클래스 계층
  - 각 연산의 구조

#### 수 (2시간)
- [ ] `l6/src/l6_toolchain/fusion.py` 읽기
  - 현재 fusion rule 분석
  - 어떻게 matching/applying 하는지

#### 목금 (2시간)
- [ ] **새로운 Fusion Rule 설계**: BatchNorm Fusion
  ```
  패턴: Conv2D → BatchNorm
  
  Conv2D:
    output = input @ kernel + bias
  
  BatchNorm:
    output = (input - mean) / sqrt(variance + eps)
  
  Fused:
    output = (input @ kernel + bias - mean) / sqrt(var + eps)
    = input @ kernel + (bias - mean) / sqrt(var + eps)
  
  새로운 커널 weight:
    kernel' = kernel / sqrt(var + eps)
  
  새로운 bias:
    bias' = (bias - mean) / sqrt(var + eps)
  ```

---

### Week 14: Fusion Rule 구현

#### 월화 (3시간)
- [ ] Fusion rule 구현:
  ```python
  # l6/src/l6_toolchain/fusion.py에 추가
  
  class ConvBatchNormFusionRule:
      """Fuses Conv2D -> BatchNorm into single operation"""
      
      def match(self, graph):
          """Find Conv2D followed by BatchNorm"""
          matches = []
          for node in graph.nodes:
              if isinstance(node, ConvInstr):
                  # Check if next node is BatchNorm
                  next_node = graph.get_next(node)
                  if isinstance(next_node, BatchNormInstr):
                      matches.append((node, next_node))
          return matches
      
      def apply(self, graph, matched_nodes):
          """Replace with fused operation"""
          for conv_node, bn_node in matched_nodes:
              # Extract parameters
              conv_weight = conv_node.weight
              conv_bias = conv_node.bias
              bn_mean = bn_node.mean
              bn_var = bn_node.variance
              bn_eps = bn_node.epsilon
              
              # Fuse weights
              fused_weight = conv_weight / np.sqrt(bn_var + bn_eps)
              fused_bias = (conv_bias - bn_mean) / np.sqrt(bn_var + bn_eps)
              
              # Create fused node
              fused = FusedConvBNInstr(
                  input_shape=conv_node.input_shape,
                  weight=fused_weight,
                  bias=fused_bias,
                  stride=conv_node.stride,
              )
              
              # Replace in graph
              graph.replace([conv_node, bn_node], [fused])
          
          return graph
  ```

#### 수목금 (2시간)
- [ ] Test case 작성:
  ```python
  # l6/test/test_fusion_conv_bn.py
  
  def test_conv_bn_fusion(self):
      """Test Conv2D + BatchNorm fusion"""
      # Create simple model with Conv->BN
      model = create_simple_conv_bn_model()
      ir = ir_from_onnx(model)
      
      # Apply fusion
      fused_ir = apply_fusion(ir)
      
      # Verify fusion happened
      self.assertEqual(count_ops(fused_ir, 'Conv2D'), 0)  # Conv2D gone
      self.assertEqual(count_ops(fused_ir, 'BatchNorm'), 0)  # BN gone
      self.assertEqual(count_ops(fused_ir, 'FusedConvBN'), 1)  # Fused exists
      
      # Verify numerical correctness
      ref_output = reference_implementation(model, test_input)
      fused_output = run_on_compiler(fused_ir, test_input)
      np.testing.assert_allclose(ref_output, fused_output, rtol=1e-5)
  ```

---

## PHASE 2+3 (Week 9-14) 산출물

```
RTL 기여:
- 5개 assertions (80줄)
- 3개 test cases (120줄)
- RTL issues document (2p)

Compiler 기여:
- Conv+BN fusion rule (60줄)
- Fusion test (40줄)
- Fusion impact analysis (1p)

Git commits: 12개
```

---

# WEEK 15-22: PHASE 3 심화 + PHASE 5 시작

## 목표
- [ ] Compiler 이해도 심화 (scheduling, quantization)
- [ ] 논문 2개 이상 정독
- [ ] 성능 분석 정량화

---

## Week 15: Scheduling 이론

### 월화 (3시간)
- [ ] Dragon Book 8~9장 읽기 (Data-flow analysis, Optimization)

### 수목금 (3시간)
- [ ] `l6/src/l6_toolchain/scheduler.py` 분석
  ```python
  # 이해할 부분:
  1. Tiling strategy (왜 이 타일 크기?)
  2. Data reuse factor 계산
  3. Memory bandwidth utilization
  ```

---

## Week 16: Auto-scheduling 실험

### 월화수 (4시간)
- [ ] **미션: 여러 tiling 전략 비교**
  ```python
  # l6_toolchain/scheduler.py를 수정해서
  
  tiling_configs = [
      {"m": 4, "n": 4, "k": 16},  # Small tiles
      {"m": 8, "n": 8, "k": 16},  # Medium tiles
      {"m": 16, "n": 16, "k": 16}, # Large tiles
  ]
  
  for config in tiling_configs:
      ir = apply_scheduling(ir, config)
      cycles = cycle_simulator(ir, test_model)
      bandwidth = estimate_bandwidth(ir)
      print(f"Config {config}: {cycles} cycles, BW {bandwidth}")
  ```

### 목금 (2시간)
- [ ] 결과 분석 문서:
  ```markdown
  # Scheduling Strategy Impact
  
  ## Experiment Setup
  - Model: ResNet-18
  - Input: batch=1, 224×224×3
  
  ## Results
  | Tiling Config | Cycles | Bandwidth | Notes |
  |---|---|---|---|
  | 4×4×16 | XXXX | Y GB/s | Too small, overhead |
  | 8×8×16 | XXXX | Y GB/s | Balanced |
  | 16×16×16 | XXXX | Y GB/s | Can't fit in PE |
  
  ## Analysis
  [왜 이 타일 크기가 최적인가?]
  ```

---

## Week 17-18: 논문 2개 정독

### Week 17: Eyeriss (Row-Stationary Dataflow)

#### 월화 (3시간)
- [ ] Chen et al. "Eyeriss: A Spatial Architecture for Energy-Efficient DNN" 읽기
  - Abstract, Intro, Section 2 (Row-Stationary)
  - Section 3 (Architecture)

#### 수목금 (3시간)
- [ ] **비교 분석**: WS (Weight-Stationary, 우리) vs RS (Row-Stationary, Eyeriss)
  ```markdown
  # WS vs RS Dataflow Comparison
  
  ## Weight-Stationary (Our Design)
  - Weight: stationary in PE
  - Activation: flows from west to east
  - Partial sum: flows from north to south
  - Advantage: Weight reuse 최대
  - Disadvantage: Activation 대역폭 높음
  
  ## Row-Stationary (Eyeriss)
  - Activation: stationary (하나의 activation을 여러 weight에 사용)
  - Weight: flows
  - Partial sum: flows
  - Advantage: Activation 대역폭 낮음
  - Disadvantage: Weight 대역폭 높음
  
  ## 선택 기준
  - Model이 weight-heavy? WS 유리
  - Model이 activation-heavy? RS 유리
  - 우리 모델 (ResNet, BERT)은? → WS 더 유리한 이유
  ```

---

### Week 18: FlashAttention (Algorithm-Hardware Co-design)

#### 월화 (3시간)
- [ ] Dao et al. "FlashAttention: Fast and Memory-Efficient Exact Attention with IO-Awareness" 읽기
  - Abstract, Intro (memore bottleneck)
  - Section 2 (Algorithm)
  - Section 3 (Implementation details)

#### 수 (2시간)
- [ ] **핵심 아이디어 정리**:
  ```markdown
  # FlashAttention: Algorithm-Hardware Co-design
  
  ## 문제점
  표준 Attention은 memory-bound:
  - O(N) intermediate activation 저장 (N = sequence length)
  - HBM access 많음 → 느림
  
  ## FlashAttention의 해법
  - 표준 Attention을 blockwise로 분할
  - 각 block을 SRAM에 올려서 계산
  - HBM access 줄임 → 2배 빠름
  
  ## 우리 프로젝트에의 시사점
  - Systolic array도 같은 문제: memory-bound
  - Blockwise scheduling으로 SRAM reuse 증대
  - Quantization으로 SRAM footprint 줄이기
  ```

#### 목금 (2시간)
- [ ] Attention을 우리 SA에서 실행하면 어떨까?
  ```python
  # l6 compiler에서 attention 연산을 어떻게 처리할까?
  
  # 표준: Q×K^T (sequence_len × sequence_len, 512×512)
  # → 256KB의 intermediate (fp16) → SRAM에 못 들어감!
  
  # FlashAttention style:
  # Blockwise: (64×512) × (512×64) → 4KB per block
  # → SRAM에 쉽게 들어감!
  
  # 우리는 이미 이걸 하고 있나?
  ```

---

## Week 19-20: 성능 벤치마크 구축

### Week 19: Roofline Model 완성

#### 월화 (3시간)
- [ ] `l6/src/l6_toolchain/roofline.py` 개선
  ```python
  def roofline_analysis(model, hardware_config):
      """
      입력: PyTorch/ONNX 모델, 하드웨어 스펙
      출력: Roofline 그래프 + 각 operation별 위치
      """
      
      # 1. Peak compute 계산
      peak_compute = hardware_config.pe_count * 2 * hardware_config.freq
      
      # 2. Peak bandwidth 계산
      peak_bw = hardware_config.sram_bandwidth
      
      # 3. 각 operation별 arithmetic intensity 계산
      for op in model.operations:
          ai = calculate_arithmetic_intensity(op, hardware_config)
          
      # 4. Roofline 그래프
      import matplotlib.pyplot as plt
      fig, ax = plt.subplots()
      
      # Compute-bound region (slope = peak_compute / peak_bw)
      ai_range = np.logspace(-1, 3, 1000)
      compute_bound = np.minimum(peak_compute, peak_bw * ai_range)
      ax.loglog(ai_range, compute_bound, label='Roofline')
      
      # 각 operation 표시
      for op in model.operations:
          ai = op.arithmetic_intensity
          achieved = estimate_achievable_performance(op)
          ax.loglog(ai, achieved, 'o', label=op.name)
      
      plt.save('roofline.png')
  ```

#### 수목금 (2시간)
- [ ] ResNet-18에 대해 Roofline 분석:
  ```
  결과:
  - Conv layers: memory-bound (AI < 10)
  - Linear layers: compute-bound (AI > 10)
  - Attention: heavily memory-bound
  ```

---

### Week 20: Quantization 이해 + 적용

#### 월화 (3시간)
- [ ] `l6/src/l6_toolchain/quantize.py` 읽기
  - GPTQ, SmoothQuant 이해

#### 수목금 (2시간)
- [ ] **미션: INT8 vs FP16 성능 비교**
  ```python
  # ResNet-18으로 비교
  
  model_fp16 = load_model()
  cycles_fp16 = cycle_simulator(compile(model_fp16))
  
  model_int8 = quantize_to_int8(model_fp16)
  cycles_int8 = cycle_simulator(compile(model_int8))
  
  print(f"FP16: {cycles_fp16} cycles")
  print(f"INT8: {cycles_int8} cycles")
  print(f"Speedup: {cycles_fp16 / cycles_int8}x")
  ```

---

## PHASE 3+5 (Week 15-20) 산출물

```
Compiler 개선:
- Tiling strategy experiment (코드 + 문서)
- Roofline model 자동화 (100줄)
- Quantization 비교 분석 (1p)

논문 리뷰:
- Eyeriss vs WS comparison (2p)
- FlashAttention summary (2p)

성능 분석:
- Roofline graphs (2개)
- Quantization impact table

Git commits: 8개
```

---

# WEEK 21-28: PHASE 5 + PHASE 6 통합

## 목표
- [ ] 최신 논문 이해 (quantization, pruning)
- [ ] VLSI 기초 (OpenLane)
- [ ] 최종 프로젝트: 모든 요소 통합

---

## Week 21-22: 고급 최적화 논문들

### 월화 (3시간)
- [ ] Frantar et al. "GPTQ: Accurate Post-Training Quantization" 읽기
- [ ] Xiao et al. "SmoothQuant" 읽기

### 수목금 (3시간)
- [ ] **통합 분석**: 다양한 quantization 기법의 trade-off
  ```markdown
  # Quantization Techniques Comparison
  
  | 기법 | Accuracy | Speed | 구현 복잡도 |
  |-----|----------|-------|----------|
  | FP32 | Baseline | Slow | Low |
  | FP16 | ~0.1% loss | 2x | Low |
  | INT8 | 1-5% loss | 4x | Medium |
  | INT4 | 5-10% loss | 8x | High |
  | Dynamic quant | ~1% loss | 3x | Medium |
  | PTQ (GPTQ) | <1% loss | 8x | High |
  
  우리 프로젝트에서 권장: INT8 + GPTQ
  ```

---

## Week 23: VLSI 기초 입문

### 월화 (2시간)
- [ ] Weste & Harris "CMOS VLSI Design" 1~2장 읽기
  - MOSFET 기초
  - CMOS logic families

### 수목금 (3시간)
- [ ] OpenLane 튜토리얼 시작:
  ```bash
  # OpenLane 설치 (Docker recommended)
  docker pull efabless/openlane:latest
  
  # 간단한 예제 실행 (Caravel)
  ```

---

## Week 24-26: 최종 프로젝트 설계

### Week 24: 전체 시스템 성능 분석

#### 월 (3시간)
- [ ] **엔드-투-엔드 벤치마크**
  ```python
  # Complete pipeline test
  
  def benchmark_complete(model_name, input_size):
      """
      ONNX model → Compile → Simulate → Analyze
      """
      
      # 1. Load & prepare model
      model = load_onnx_model(model_name)
      
      # 2. Apply optimizations
      model = apply_fusion(model)
      model = apply_quantization(model, "INT8+GPTQ")
      
      # 3. Compile
      ir = compile(model)
      schedule = schedule(ir)
      
      # 4. Simulate
      cycles = cycle_simulator(schedule)
      memory_traffic = analyze_memory(schedule)
      power = estimate_power(schedule)
      
      # 5. Roofline analysis
      ai = calculate_arithmetic_intensity(schedule)
      
      print(f"Model: {model_name}")
      print(f"Cycles: {cycles}")
      print(f"Memory: {memory_traffic} bytes")
      print(f"Power: {power} mW")
      print(f"Arithmetic Intensity: {ai}")
      print(f"Performance: {cycles_to_time(cycles)} ms")
  
  # 벤치마크 모델들
  models = ["ResNet-18", "ResNet-50", "MobileNetV2", "SqueezeNet"]
  for model in models:
      benchmark_complete(model, (1, 3, 224, 224))
  ```

#### 화목금 (4시간)
- [ ] 결과 분석 및 문서화:
  ```markdown
  # End-to-End Performance Benchmark
  
  ## Results Table
  | Model | Cycles | Latency (ms) | Power (mW) | Efficiency (GFLOPS/W) |
  |-------|--------|--------------|-----------|----------------------|
  | ResNet-18 | XXXX | XX | XX | XX |
  | ... | | | | |
  
  ## Key Findings
  1. [발견 1]
  2. [발견 2]
  3. [발견 3]
  
  ## Bottleneck Analysis
  - Memory-bound layers: [list]
  - Compute-bound layers: [list]
  
  ## Optimization Opportunities
  1. [최적화 1]
  2. [최적화 2]
  ```

---

### Week 25: RTL + Compiler 통합 검증

#### 월화 (3시간)
- [ ] RTL simulation과 compiler simulation 비교
  ```python
  # Compare RTL behavior with compiler prediction
  
  def verify_rtl_compiler_consistency():
      # 1. Generate simple workload
      input_tensor = torch.randn(1, 16, 16, 16)
      
      # 2. Compile
      ir = compile(model)
      compiler_output = simulate_compiler(ir, input_tensor)
      compiler_cycles = get_cycle_count(ir)
      
      # 3. RTL simulation
      rtl_output, rtl_cycles = simulate_rtl(input_tensor)
      
      # 4. Compare
      assert np.allclose(compiler_output, rtl_output, rtol=1e-5)
      print(f"Compiler cycles: {compiler_cycles}")
      print(f"RTL cycles: {rtl_cycles}")
      print(f"Difference: {abs(compiler_cycles - rtl_cycles) / rtl_cycles * 100}%")
  ```

#### 수목금 (2시간)
- [ ] 불일치 있으면 분석 및 수정
  ```
  예: Compiler가 500 cycles 예측했는데 RTL에서 550 cycles?
  → Memory stall을 compiler가 과소평가했을 가능성
  → scheduler에 feedback 반영
  ```

---

### Week 26: 최종 대형 실험

#### 월화수 (5시간)
- [ ] **대형 모델 벤치마크**: Full ResNet-50
  ```
  - Input: batch=8, 224×224×3 (realistic)
  - Full pipeline (download from ImageNet test set)
  - Compare with other accelerators (TPU, GPU estimate)
  ```

#### 목금 (2시간)
- [ ] 최종 결과 정리:
  ```markdown
  # ResNet-50 Full Benchmark on Our NPU
  
  ## Results
  - Throughput: X images/sec (batch=8)
  - Latency: XX ms per image
  - Power: XX mW
  - Energy: XX mJ per image
  
  ## Comparison
  | Accelerator | Throughput | Power | Energy Efficiency |
  |---|---|---|---|
  | Our NPU | X | XX mW | XX GFLOPS/W |
  | Google TPU | Y | YY mW | YY GFLOPS/W |
  | NVIDIA GPU | Z | ZZ mW | ZZ GFLOPS/W |
  
  ## Analysis
  - 우리의 장점: [list]
  - 우리의 단점: [list]
  ```

---

## PHASE 5+6 (Week 21-26) 산출물

```
논문 분석:
- Quantization comparison (2p)
- VLSI fundamentals (1p)

성능 분석:
- End-to-end benchmark (3p, 여러 그래프)
- RTL-Compiler consistency check (1p)
- ResNet-50 full benchmark (2p)

코드:
- Roofline automation (100줄)
- Quantization comparison (50줄)
- RTL verification (80줄)

Git commits: 6개
```

---

# WEEK 27-28: 최종 정리 + 발표 준비

## Week 27: 모든 작업 문서화

### 월화 (4시간)
- [ ] 모든 분석 문서 **통합 보고서**로 만들기:
  ```markdown
  # Student Contributions to SiliconToAI NPU Project
  ## [Your Name], KAIST CSE, Class of 2025
  
  ## Executive Summary (1p)
  - 이 12개월간의 작업 요약
  - 주요 성과 3가지
  
  ## Part 1: Architecture & Theory (3p)
  - Pipeline deep dive
  - Memory hierarchy
  - Design decision analysis
  
  ## Part 2: RTL & Verification (3p)
  - Code review findings
  - Assertions added (5개)
  - Test cases (3개)
  
  ## Part 3: Compiler & Optimization (4p)
  - Fusion rules
  - Scheduling strategies
  - Quantization analysis
  
  ## Part 4: Performance Analysis (3p)
  - Roofline modeling
  - End-to-end benchmarks
  - Comparison with prior work
  
  ## Part 5: Hardware-Software Co-design (2p)
  - Algorithm-architecture co-optimization ideas
  - Lessons from FlashAttention/TPU
  
  Total: ~16 pages
  ```

### 수목금 (3시간)
- [ ] GitHub readme 작성:
  ```markdown
  # Student Contributions (2025 Winter-Fall)
  
  ## Commits
  - [Link to commit history]
  - Total: 40+ commits
  - Lines added: 400+
  
  ## Key Files Modified
  - RTL: [list]
  - Compiler: [list]
  - Tests: [list]
  
  ## Documentation
  - [Architecture Analysis](docs/analysis/...)
  - [RTL Review](docs/analysis/...)
  - [Performance Analysis](docs/analysis/...)
  
  ## Publications (if applicable)
  - [None yet, but potential paper ideas]
  ```

---

## Week 28: 최종 발표 준비

### 월 (3시간)
- [ ] **20분 발표 슬라이드** 준비:
  ```
  Slide 1: Title
  Slide 2: Motivation (12개월 무엇을 했나?)
  Slide 3-4: Architecture Analysis (파이프라인, SRAM, DMA)
  Slide 5-6: RTL Contributions (assertion, bugs found)
  Slide 7-8: Compiler Contributions (fusion, scheduling)
  Slide 9-10: Performance Analysis (Roofline, benchmarks)
  Slide 11-12: Hardware-Software Co-design Ideas
  Slide 13: Future Work
  Slide 14: Conclusion
  Slide 15: Q&A
  ```

### 화수 (2시간)
- [ ] **5분 elevator pitch** 준비:
  ```
  "저는 지난 12개월간 이 NPU 프로젝트에서
  3가지를 했습니다.
  
  첫째, 아키텍처 수준에서 31사이클 파이프라인,
  2-bank SRAM, DMA burst의 설계 이유를 이론으로
  완전히 이해했습니다.
  
  둘째, RTL에서 5개의 숨겨진 버그를 찾아서
  assertion과 test case를 추가했습니다.
  
  셋째, 컴파일러에 Batch Norm Fusion rule을 추가해서
  성능을 15% 개선했습니다.
  
  모두 git에 기록되어 있습니다."
  ```

### 목금 (2시간)
- [ ] 발표 practice
  - 교수님께 이메일 보내기 (발표 일정 제안)

---

## 최종 체크리스트

### Git & Code
- [ ] 40개 이상 commits
- [ ] 400줄 이상 새로운 코드
- [ ] 각 commit에 설명 있음
- [ ] Test coverage 80% 이상

### 문서
- [ ] 아키텍처 분석 (3p)
- [ ] RTL review (2p)
- [ ] 컴파일러 기여 (3p)
- [ ] 성능 분석 (3p)
- [ ] 최종 통합 보고서 (16p)

### 논문 읽음
- [ ] P&H (선택 부분)
- [ ] TPU (ISCA 2017)
- [ ] Eyeriss (ISSCC 2016)
- [ ] FlashAttention (NeurIPS 2022)
- [ ] GPTQ + SmoothQuant

### 실험 완료
- [ ] RTL simulation (5개 이상 test case)
- [ ] Compiler simulation (ResNet-18 이상)
- [ ] Roofline analysis
- [ ] Quantization comparison
- [ ] Full end-to-end benchmark

### 발표 준비
- [ ] 20분 슬라이드
- [ ] 5분 pitch
- [ ] Q&A 대비

---

# 📊 최종 산출물 요약

## 코드 기여
```
RTL:
├─ Assertions: 5개 (80줄)
├─ Test cases: 3개 (120줄)
└─ Bug fixes: 1~2개 (50줄)

Compiler:
├─ Fusion rule: 1~2개 (120줄)
├─ Scheduling experiment: (50줄)
├─ Roofline automation: (100줄)
└─ Quantization analysis: (50줄)

Total: 400줄+, 40+ commits
```

## 문서
```
분석 문서: 16페이지
- Architecture Theory: 4p
- RTL & Verification: 3p
- Compiler & Optimization: 4p
- Performance Analysis: 3p
- Co-design Ideas: 2p

모두 GitHub에 .md 파일로 저장
```

## 발표
```
- 20분 학술 발표
- 5분 elevator pitch
- 이메일로 교수님께 공유 가능한 모든 결과
```

---

# 🎯 "미친 학부생" 평가를 받는 순간

**교수님 면담에서:**

```
당신: "교수님, 저 이 한 학기동안 
      아키텍처부터 컴파일러까지 
      전체 시스템을 공부하고 
      여러 개선을 했는데요...
      [16페이지 보고서 보여줌]
      
      특히 RTL에서 발견한 5개 버그와
      컴파일러의 fusion rule,
      성능 분석까지 했습니다."

교수님: "[페이지를 넘겨보다가]
        와... 이거 정말 좋은데?
        이 정도면 벌써 대학원 수준인데?
        
        [더 자세히 보다가]
        이거 게재할 수 있을 것 같은데...
        우리랑 같이 논문 써볼래?"
```

---

**당신은 "미친 학부생" 등극 ✨**

자, 이제 시작하세요. 12개월 후에 만나요! 🚀
