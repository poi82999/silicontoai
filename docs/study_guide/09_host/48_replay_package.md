# 48. `host/replay_package.h` — JSON Manifest C++ 파서

> **파일 위치**: `host/replay_package.h` (471줄)
> **역할**: L6 emitter가 만든 workload package JSON을 C++ struct로 파싱
> **선수 지식**: [35_emitter.md](../08_l6_toolchain/35_emitter.md), [36_validator.md](../08_l6_toolchain/36_validator.md), C++ filesystem
> **공장 비유**: 출하서 자동 인식기 — JSON 봉투를 열고 모든 항목을 C++ 작업표로 변환

---

## 이 파일이 중요한 이유

`tb/main.cpp`와 `tb/system_replay_main.cpp`가 모두 이 헤더를 include합니다. **워크로드 패키지의 모든 정보**(manifest, activation, weight, golden, system phase sequence)를 한 곳에서 파싱.

---

## 큰 그림: 4개 핵심 struct

```
Manifest          ← manifest.json 본체
SystemPass        ← 한 K-pass의 DMA + execute 계획
SystemConfig      ← 시스템 replay 전용 메타데이터
GoldenEntry       ← (drain_addr, expected vector)

PackageData       ← 위 4개 + activation/weight raw 데이터
```

---

## ① `Manifest` (L21-40)

```cpp
struct Manifest {
    std::string packageId;
    std::string activationsFile;     // 보통 "activation.bin"
    std::string weightsFile;         // 보통 "weight.bin"
    std::string goldenFile;          // 보통 "golden.bin"
    std::string accClearPolicy;      // "first_pass_only" 등
    int seqLen = 0;                  // execute seq_len
    int kTileCount = 0;              // split-K 패스 수
    int mTileBase, nTileBase, tileRows, tileCols;
    std::vector<int> drainAddresses;
    std::vector<int> accAddrSequence;
    std::vector<int> accClearSequence;
    std::string compareMode = "exact";        // "exact" / "tolerance"
    bool compareRequireExactMatch = true;
    float compareAbsTolerance = 0.0F;
    float compareRelativeTolerance = 0.0F;
};
```

**`compareMode`**: golden 비교 정책.
- `"exact"`: INT8/INT32 비트 정확 일치
- `"tolerance"`: FP16 모드 → `|diff| < abs_tol + rel_tol × |expected|`

→ test bench가 manifest의 이 필드를 읽고 비교 함수 분기.

---

## ② `SystemPass` (L42-51)

```cpp
struct SystemPass {
    int passIndex = 0;
    uint64_t weightsSrcAddr = 0;
    uint64_t activationsSrcAddr = 0;
    int weightBurstLen = 0;
    int weightTotalBursts = 0;
    int activationBurstLen = 0;
    int activationTotalBursts = 0;
    bool accClear = false;
};
```

**한 K-pass의 모든 정보**:
- DMA src 주소
- AXI burst 파라미터 (burst_len + total_bursts)
- accumulator clear 여부

→ system_replay_main.cpp가 `SystemPass`마다 `runDmaPhase` + `runExecutePhase` 차례로 실행.

---

## ③ `SystemConfig` (L53-75)

```cpp
struct SystemConfig {
    bool present = false;
    uint64_t weightsSrcAddr, activationsSrcAddr;
    int weightsTotalBytes, activationsTotalBytes;
    int weightBurstLen, weightTotalBursts;
    int activationBurstLen, activationTotalBursts;
    int initialBankSel = 0;
    bool swapBeforeWeightPreload = false;
    bool swapBeforeExecute = false;
    std::string weightTarget;
    std::string activationTarget;
    int expectedDmaDoneCount = 0;
    int expectedNpuDoneCount = 0;
    int flushCycles = 35;
    std::optional<int> verificationAccAddrOverride;
    bool verificationOneShotAccClear = false;
    bool expectForwardingHit = false;
    std::vector<SystemPass> passes;
};
```

**`present=false`이면**: core-only package (system 정보 없음). `tb/main.cpp` 전용.

**Forwarding-stress 패키지의 hook**:
- `verificationAccAddrOverride = 0`: 모든 누산을 같은 주소로 → forwarding 강제
- `verificationOneShotAccClear = true`: 첫 누산만 clear

→ `replay_bridge.py`가 forwarding 검증 패키지에 이 메타데이터 자동 추가.

---

## ④ `GoldenEntry` (L77-82)

```cpp
struct GoldenEntry {
    int drainAddr = 0;
    int globalRow = 0;
    int globalColBase = 0;
    std::array<uint32_t, 16> vector{};   // INT32 lane × 16
};
```

→ "row m을 drain하면 16개 column 값이 [g0, g1, ..., g15]여야 한다."

---

## ⑤ `PackageData` (L88-100 부근)

```cpp
struct PackageData {
    fs::path packageDir;
    Manifest manifest;
    SystemConfig systemConfig;
    std::vector<ReplayRow16x16> activations;   // m row × 16 lane
    std::vector<ReplayRow16x16> weights;       // n col × 16 lane
    std::vector<GoldenEntry> goldens;
};
```

→ 위 모든 정보를 한 객체에. main에서 `loadPackage(dir)`로 한 번에 읽음.

---

## 파싱 함수: `loadPackage` (L200 부근)

```cpp
inline PackageData loadPackage(const fs::path& packageDir) {
    PackageData pkg;
    pkg.packageDir = packageDir;

    pkg.manifest = parseManifest(packageDir / "manifest.json");
    pkg.systemConfig = parseSystemConfig(packageDir / "manifest.json");

    if (fs::exists(packageDir / "activation.bin")) {
        pkg.activations = readActivationBin(packageDir / "activation.bin", ...);
    } else {
        pkg.activations = readActivationJson(packageDir / pkg.manifest.activationsFile);
    }
    pkg.weights = ...;
    pkg.goldens = readGolden(packageDir / pkg.manifest.goldenFile);

    return pkg;
}
```

**핵심**: `.bin` (raw) 우선, 없으면 `.json` (legacy) — 두 경로 모두 지원.

---

## JSON 파싱: 헤더-only 미니 파서

이 헤더는 **외부 JSON 라이브러리 의존성을 피하기 위해** 미니 파서를 직접 구현. `<regex>`로 필드 추출:

```cpp
inline std::optional<int> parseIntField(const std::string& json, const std::string& key) {
    std::regex pattern("\"" + key + "\"\\s*:\\s*(-?\\d+)");
    std::smatch match;
    if (std::regex_search(json, match, pattern)) {
        return std::stoi(match[1].str());
    }
    return std::nullopt;
}
```

→ 표준 JSON parser (nlohmann/json, rapidjson 등)는 무거우니 **본 프로젝트 manifest 형식에 한정된** 미니 파서.

**한계**: nested object, array of objects 같은 복잡한 케이스는 별도 헬퍼 필요. 그런 case는 별도 정규식 + 수작업 split.

---

## 데이터 변환 헬퍼

### `prepareLaneForDutDrive`

```cpp
inline uint16_t prepareLaneForDutDrive(uint16_t laneBits) {
    // INT8 lane → 16-bit DUT input (sign-extension)
    int8_t signed8 = static_cast<int8_t>(laneBits & 0xFF);
    return static_cast<uint16_t>(signed8);   // 자동 sign-extension
}
```

**왜**: NPU MAC PE는 `[15:0]` width를 받지만 INT8만 의미. `(int8_t)laneBits` cast로 sign-extension.

### `decodeCompareValue`

```cpp
inline int32_t decodeCompareValue(const GoldenEntry& g, int lane, const std::string& mode) {
    return static_cast<int32_t>(g.vector[lane]);
}
```

**비교 시 사용**: `mode == "tolerance"`이면 FP32 변환, `"exact"`이면 INT32 그대로.

---

## L6 emitter ↔ host parser 계약

| L6 emitter (Python) | C++ replay_package.h |
|---|---|
| `manifest.json["package_id"]` | `Manifest::packageId` |
| `compare.mode` | `Manifest::compareMode` |
| `dma.passes[]` | `SystemConfig::passes[]` |
| `golden.bin` (INT32 little-endian) | `GoldenEntry::vector[16]` |
| `activation.bin` (INT8 row-major) | `ReplayRow16x16` |

→ 한 쪽만 바뀌면 다른 쪽이 깨짐. **JSON schema = 계약**.

---

## 핵심 개념 정리

| 개념 | 의미 |
|---|---|
| **Header-only mini JSON parser** | 외부 의존성 없이 manifest 읽기 |
| **`std::optional<T>`** | "있으면 값, 없으면 std::nullopt" |
| **`.bin` vs `.json`** | raw bytes 우선, legacy JSON fallback |
| **Sign-extension cast** | `int8_t → uint16_t`로 [15:0] DUT 입력 |
| **Compare mode 분기** | exact (INT) vs tolerance (FP) |

---

## 연습 문제

1. golden.bin 한 row가 16 × 4 = 64 byte인 이유는? endianness는?
2. `present=false` 패키지를 system_replay_main.cpp에 던지면 어떤 결과? 어떻게 막아야 할까?
3. nlohmann/json 같은 풀 JSON 파서 대신 정규식 미니 파서를 쓴 trade-off는?
4. `prepareLaneForDutDrive`에서 `int8_t` cast를 안 하고 `static_cast<uint16_t>(laneBits)` 직접 하면 어떤 버그?

---

## 🎉 Phase 9 완료!

3개 host 헤더를 모두 학습했습니다.

```
npu_dma_controller.h    mock_allocator.h    replay_package.h
```

→ Phase 6 (FPGA wrappers) — 마지막 단계
