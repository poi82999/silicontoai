# 38. `replay_bridge.py` — L6 → System Replay 변환 + Verilator 자동 실행

> **파일 위치**: `l6/src/l6_toolchain/replay_bridge.py` (739줄)
> **역할**: L6 program package → system replay workload 디렉토리 변환 + Verilator 빌드/실행
> **선수 지식**: [35_emitter.md](35_emitter.md), [34_dma_scheduler.md](34_dma_scheduler.md), Verilator 빌드 시스템
> **공장 비유**: 출고 → 현장 작업 가교 — 본사 출하서를 현장(검증 리그)에서 즉시 실행 가능한 작업카드로 변환

---

## 이 파일이 중요한 이유

L6와 RTL을 잇는 **유일한 다리**입니다. compiler.py가 만든 program package를 RTL `tb/system_replay_main.cpp`가 직접 읽을 수 있는 system replay workload로 변환합니다. 또한 Verilator 빌드 + 실행까지 자동화 → "PyTorch → 검증된 RTL 결과"가 한 명령으로.

---

## 큰 그림: 3가지 책임

```
1. 변환:  export_replay_packages(L6 package_dir, output_dir)
              → list[ReplayPackageArtifact]
              (각 step별 system replay workload 디렉토리)

2. 빌드:  build_system_replay_binary(repo_root, binary_path)
              → SystemReplayBuildResult
              (Vnpu_system_top Verilator 바이너리 컴파일)

3. 실행:  run_system_replay_packages(binary_path, package_dirs, ...)
              → 각 package에 대해 binary 호출, chain summary 작성
```

---

## 자료구조 (L14-43)

### `ReplayPackageArtifact`

```python
@dataclass(frozen=True)
class ReplayPackageArtifact:
    source_package_dir: str    # L6 package
    replay_package_dir: str    # 변환된 system replay workload
    package_id: str
    source_op_type: str        # "gemm_tile" / "gemm_tiled" / "program_sequence"
```

### `SystemReplaySmokeResult`

```python
@dataclass(frozen=True)
class SystemReplaySmokeResult:
    binary_path: str
    chain_summary_path: str
    replay_package_dirs: tuple[str, ...]
    stdout: str
```

빌드+실행 종합 결과. CI에서 stdout을 확인.

### `SystemReplayBuildResult`

```python
@dataclass(frozen=True)
class SystemReplayBuildResult:
    binary_path: str
    stdout: str
```

---

## `export_replay_packages` (L45-100 부근) — Top-level dispatch

```python
def export_replay_packages(package_dir, output_dir, *, include_system=True,
                           weights_src_base=0, activations_src_base=8192):
    manifest = read_json_required(package_path / "manifest.json")
    op_type = manifest.get("op_type")

    if op_type == "program_sequence":
        return _export_program_sequence_replay_packages(...)
    if op_type == "gemm_tile":
        groups = [_build_single_tile_group(...)]
    elif op_type == "gemm_tiled":
        groups = _build_tiled_groups(...)
    else:
        raise ValueError(f"Replay bridge does not support source op_type: {op_type}")

    artifacts = []
    for group in groups:
        replay_package_dir = output_path / group["package_id"]
        _write_replay_package(replay_package_dir, group, ...)
        artifacts.append(ReplayPackageArtifact(...))
    return artifacts
```

**분기 의미**:
- `program_sequence`: 다단계 모델 → step별로 replay package 1개씩
- `gemm_tile`: single 16×16×16 → 1 package
- `gemm_tiled`: multi-tile GEMM → step과 무관하게 1 package (chain replay 안 함, 하나의 큰 GEMM)

**`weights_src_base`, `activations_src_base`**: DMA src 주소 기본값. AXI 주소 공간에서 weight와 activation을 다른 영역에 배치.

---

## L6 package → System Replay package 변환

### 시스템 replay package의 구조

L6 program package가 만든 것:
```
program_pkg/
├── manifest.json (op_type=program_sequence)
└── steps/step_000_<name>/
    ├── manifest.json (op_type=program_step)
    └── compute_package/
        └── (gemm_tile or gemm_tiled 구조)
```

→ 변환 후 system replay package:
```
replay_pkg/
├── manifest.json   (DMA addr, MMIO sequence, drain config 포함)
├── activation.bin  (raw bytes)
├── weight.bin
├── golden.bin
└── (선택) phase_sequence.json
```

### `_write_replay_package` — 핵심 변환 함수

```python
def _write_replay_package(replay_dir, group, *, include_system, weights_src_base, ...):
    # 1) raw binary 출력 (RTL이 직접 읽음)
    activation_bytes = _serialize_activation_to_bytes(group["activation_rows"])
    weight_bytes = _serialize_weight_to_bytes(group["weight_columns"])
    golden_bytes = _serialize_golden_to_bytes(group["golden_outputs"])
    (replay_dir / "activation.bin").write_bytes(activation_bytes)
    (replay_dir / "weight.bin").write_bytes(weight_bytes)
    (replay_dir / "golden.bin").write_bytes(golden_bytes)

    # 2) DMA schedule + MMIO sequence 생성
    if include_system:
        tiles = _reconstruct_tile_plan(group)
        dma_schedule = build_dma_schedule(tiles, double_buffer=True)
        mmio_sequence = generate_mmio_sequence(dma_schedule)

    # 3) manifest 작성 (verification_only_hook_policy="streamlined_dma_execute" 등)
    manifest = {
        "manifest_version": "0.1",
        "package_id": group["package_id"],
        "op_type": "system_replay_workload",
        "shape": {"m": ..., "k": ..., "n": ...},
        "compare": {"mode": "exact_int32"},
        "dma": {
            "weights_src_base": weights_src_base,
            "activations_src_base": activations_src_base,
            "schedule": [...],
        },
        "mmio_sequence": [...],
        "verification_only_hook_policy": "streamlined_dma_execute",
        "expected_npu_done_count": k_tile_count,
        ...
    }
    write_json(replay_dir / "manifest.json", manifest)
```

**핵심 metadata**:
- `verification_only_hook_policy="streamlined_dma_execute"`: tb/system_replay_main.cpp가 DMA 후 즉시 execute로 진행 (legacy hook 우회)
- `expected_npu_done_count=k_tile_count`: split-K이면 done 신호가 k_tile_count번 나야 함

---

## `build_system_replay_binary` — Verilator 빌드

```python
def build_system_replay_binary(*, repo_root, binary_path, ...):
    repo = Path(repo_root); binary = Path(binary_path)
    if binary.exists() and not options.force:
        return SystemReplayBuildResult(...)

    cmd = ["make", "-C", str(repo / "scripts"), "build-system",
           f"BUILD_SUFFIX={binary.parent.name}", ...]
    result = subprocess.run(cmd, capture_output=True, text=True, check=True)
    return SystemReplayBuildResult(binary_path=str(binary), stdout=result.stdout)
```

**핵심**: `scripts/Makefile`의 `build-system` 타겟을 호출 → Verilator가 `npu_system_top.sv`를 컴파일 → `Vnpu_system_top` 바이너리 생성.

**WSL 호환**: Windows에서 호출되면 WSL을 통해 bash 실행 (별도 helper 함수에서 처리).

---

## `run_system_replay_packages` — 자동 실행

```python
def run_system_replay_packages(*, binary_path, replay_package_dirs,
                                output_dir=None, gate_on_failure=True):
    chain_summary = []
    for pkg in replay_package_dirs:
        result = subprocess.run(
            [str(binary_path), str(pkg)],
            capture_output=True, text=True,
        )
        chain_summary.append({
            "package": pkg,
            "returncode": result.returncode,
            "passed": result.returncode == 0,
            "stdout_tail": result.stdout[-500:],
        })

    # chain summary를 디스크에 기록
    summary_path = output_dir / "chain_summary.json"
    write_json(summary_path, {"runs": chain_summary})

    if gate_on_failure and any(not r["passed"] for r in chain_summary):
        raise RuntimeError("System replay chain failed.")

    return summary_path
```

**chain replay**: 여러 step을 순차 실행, 각각의 stdout/returncode 수집.

---

## `export_and_run_system_replay_smoke` (Top-level convenience)

```python
def export_and_run_system_replay_smoke(*, package_dir, repo_root,
                                        binary_path=None, replay_output_dir=None):
    # 1) export
    artifacts = export_replay_packages(package_dir, replay_output_dir)
    # 2) build
    if binary_path is None:
        binary_path = repo_root / "build_system" / "Vnpu_system_top"
    build_result = build_system_replay_binary(repo_root=repo_root, binary_path=binary_path)
    # 3) run
    summary = run_system_replay_packages(
        binary_path=binary_path,
        replay_package_dirs=[a.replay_package_dir for a in artifacts],
        output_dir=replay_output_dir,
    )
    return SystemReplaySmokeResult(...)
```

→ 한 함수로 export + build + run. CI에서 사용.

---

## L6 ↔ RTL 데이터 흐름

```
L6 emitter (numpy)              system replay package (bytes)        RTL Verilator
────────────────                ─────────────────────────            ──────────────
weight matrix   (k, n) np      → weight.bin (column-major INT8)    → DMA → SRAM bank 0
activation matrix (m, k) np    → activation.bin (row-major INT8)   → DMA → SRAM bank 1
golden product (m, n) int32    → golden.bin (row-major INT32)      → drain output 비교
manifest.json (compare config) → 그대로 유지                          → tb/system_replay_main.cpp 파싱
```

---

## 핵심 개념 정리

| 개념 | 의미 | 어디서 |
|---|---|---|
| **L6 package vs replay package** | 추상 IR 산출물 → 하드웨어가 직접 읽는 byte 형태 | `_write_replay_package` |
| **op_type 분기** | program_sequence/gemm_tile/gemm_tiled | `export_replay_packages` |
| **streamlined_dma_execute** | RTL 검증 hook 정책 | manifest 메타데이터 |
| **Verilator subprocess** | Python에서 binary 호출 | `run_system_replay_packages` |
| **Chain summary** | 여러 step의 결과 모음 | `chain_summary.json` |

---

## 연습 문제

1. `program_sequence` source가 3개 step (linear, relu, linear)이라면 `export_replay_packages`가 만드는 replay package는 몇 개? (힌트: relu는 elementwise라 compute step 아님)
2. split-K 2-패스 GEMM의 `expected_npu_done_count`는?
3. weight.bin이 column-major인 이유는? (NPU systolic array의 weight 입력 순서와 일치)
4. `gate_on_failure=True`/`False` 차이는? CI에서 어느 게 적합?

---

## 다음 파일로 넘어가기

→ [39_roofline.md](39_roofline.md): `roofline.py` — Roofline 성능 모델 (memory-bound vs compute-bound 분석)
