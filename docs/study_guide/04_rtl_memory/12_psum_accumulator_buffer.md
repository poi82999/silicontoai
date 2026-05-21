# 12. `psum_accumulator_buffer.sv` — Psum 누산 버퍼

> **파일 위치**: `rtl/memory/psum_accumulator_buffer.sv`
> **역할**: Systolic array 출력 psum을 BRAM에 누적 저장 + RAW forwarding + drain
> **선수 지식**: [08_npu_core_top.md](../02_rtl_core/08_npu_core_top.md), [11_dp_sram_bank.md](11_dp_sram_bank.md)
> **공장 비유**: 완제품 창고 — 부품을 조립하고(누적), 출하 요청 시 꺼내줌(drain)

---

## 이 모듈이 중요한 이유

1. **누적 (Accumulate)**: Split-K 타일링에서 여러 tile의 partial sum을 같은 주소에 합산
2. **RAW Forwarding**: 연속 cycle에서 같은 주소에 쓰면 BRAM read latency 때문에 stale data 위험 → bypass로 해결
3. **Drain**: 최종 결과를 외부로 읽어내는 인터페이스

---

## 📚 학술적 배경: RAW forwarding은 CPU 파이프라인의 직계 후손

> Patterson, D., Hennessy, J. — *Computer Organization*, Ch.4.7-4.8 "Data Hazards and Forwarding".

CPU 파이프라인에서 `ADD R1, R2, R3` 직후 `SUB R4, R1, R5`는 **R1의 값이 아직 register file에 안 써졌는데 다음 instruction이 읽으려는 상황** = **RAW(Read-After-Write) hazard**. 해법:
- **Stall**: 1 cycle 기다림 (성능 손실)
- **Forwarding**: ALU 결과를 register file 거치지 않고 다음 stage 입력으로 bypass — **이 모듈이 정확히 그것**

이 NPU에서:
- BRAM write latency = 1 cycle (`always_ff`로 클럭 후 메모리 갱신)
- BRAM read latency = 1 cycle (synchronous read)
- ⇒ **연속 cycle에서 같은 addr에 write→read 하면 stale data 위험**

해법 (이 모듈이 구현):
```
if (write_addr == read_addr && write_en && read_en):
    read_data ← write_data    # bypass, BRAM 거치지 않고 직결
```

→ Patterson 1985년 RISC 파이프라인의 forwarding 회로가 30년 후 NPU에서 partial sum accumulator로 재등장. **Computer Architecture의 보편 패턴**.

📖 참고: P&H Ch.4.7 (Phase 1), H&P Appendix C.2 (forwarding 정량 분석), [전문가 학습 로드맵](../전문가_학습_로드맵.md) Phase 1.

> **💡 NPU 특화 변형**: CPU forwarding은 같은 register이면 항상 bypass. NPU accumulator는 **`acc_clear=1`이면 bypass 안 함** (덮어쓰기 의도 보존). 이것이 split-K의 첫 패스 처리 방식.

---

## 주요 포트

| 포트 | 방향 | 의미 |
|------|------|------|
| `acc_valid` | in | array_psum이 유효한지 |
| `acc_clear` | in | 1=덮어쓰기(새 타일), 0=기존값에 누적 |
| `acc_addr` | in | 누적 대상 BRAM 주소 |
| `array_psum` | in | systolic array 최하단 출력 (16×32bit) |
| `drain_re` | in | 읽기 활성화 |
| `drain_addr` | in | 읽을 주소 |
| `drain_data` | out | 읽은 데이터 (16×32bit) |

---

## 동작 모드

### Mode 1: Clear (새 타일 시작)
```
acc_clear = 1: BRAM[addr] ← array_psum  (기존 값 무시, 덮어쓰기)
```

### Mode 2: Accumulate (Split-K 누적)
```
acc_clear = 0: BRAM[addr] ← BRAM[addr] + array_psum  (기존 + 새 값)
```

### Mode 3: Drain (결과 추출)
```
drain_re = 1: drain_data ← BRAM[drain_addr]
```

---

## RAW Forwarding이 필요한 이유

```
Cycle N:   Write BRAM[5] ← 100
Cycle N+1: Read BRAM[5] → ??? (BRAM은 1 cycle latency!)
           → BRAM에서 읽으면 아직 이전 값이 나옴!

해결: Cycle N의 write 데이터를 직접 bypass
      → Cycle N+1에서 BRAM 대신 bypass 값(100) 사용
```

```systemverilog
logic forward_en;
assign forward_en = acc_valid_q && last_write_valid && (acc_addr_q == last_write_addr);

// BRAM에서 읽은 값 대신 직전 write 값을 사용
assign acc_rd_data = forward_en ? last_write_data : bram_rd_data;
```

---

## 파이프라인 타이밍 (2 cycle)

```
Cycle 0: acc_addr 입력 → BRAM read 발행
Cycle 1: BRAM read 결과 도착 + array_psum_q 도착
         → 누산 계산 → BRAM write
```

```systemverilog
// Cycle 0 → Cycle 1 파이프라인
acc_valid_q  <= acc_valid;
acc_clear_q  <= acc_clear;
acc_addr_q   <= acc_addr;
array_psum_q <= array_psum;
```

---

## INT8 vs FP16 누산

```systemverilog
if (DATA_MODE == NPU_DATA_MODE_INT8) begin
    // 정수 덧셈: 단순
    acc_sum[col] = acc_rd_data[col] + array_psum_q[col];
end else begin
    // FP32 덧셈: fp32_adder 서브모듈 사용
    fp32_adder u_add (...);
end
```

---

## 핵심 개념 정리

| 개념 | 설명 |
|------|------|
| Split-K | K축을 여러 타일로 분할 후 결과를 같은 주소에 누적 |
| RAW Hazard | Read-After-Write: 쓰기 직후 읽기 시 stale data 위험 |
| Forwarding/Bypass | BRAM 대신 직전 write 데이터를 바로 사용하여 hazard 해결 |
| acc_clear | 타일 경계를 구분. 새 타일이면 덮어쓰기, 이어지면 누적 |

---

## 연습 문제

1. Split-K 없이 (K≤16) 실행하면 `acc_clear`는 항상 어떤 값인가?
2. RAW forwarding 없이 연속 두 cycle에서 같은 addr에 누적하면 결과가 어떻게 되는가?
3. Drain 중에 accumulation이 동시에 일어날 수 있는가?

<details>
<summary>정답 보기</summary>

1. 항상 `1` (매 타일이 독립적이므로 항상 덮어쓰기)
2. 두 번째 cycle에서 BRAM의 이전 값(첫 번째 결과가 아닌)을 읽어 누적 → **첫 번째 결과가 유실됨**
3. 코드상 `drain_re`가 있으면 BRAM read가 drain_addr로 가므로, acc의 pre-fetch가 불가 → 설계상 drain과 acc는 시분할

</details>

---

## 다음 파일

→ [13. dma_controller.sv — AXI4 Read DMA](../05_rtl_system/13_dma_controller.md)
