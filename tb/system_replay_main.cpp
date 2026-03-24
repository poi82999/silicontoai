#include <array>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <memory>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vnpu_system_top.h"
#include "Vnpu_system_top___024root.h"
#include "replay_package.h"

namespace fs = std::filesystem;

using replay::GoldenEntry;
using replay::Manifest;
using replay::PackageData;
using replay::SystemPass;

namespace {

constexpr int kBytesPerWord = 16;
constexpr int kWeightRowsPerPass = 16;
constexpr int kDefaultTimeoutCycles = 10000;

struct ReplayCounters {
    int dmaDoneCount = 0;
    int npuDoneCount = 0;
    int drainedRows = 0;
    int checkedLanes = 0;
    int bankSwapCount = 0;
    int weightDmaLaunchCount = 0;
    int activationDmaLaunchCount = 0;
    int preloadLaunchCount = 0;
    int executeLaunchCount = 0;
};

struct AssertionCheck {
    std::string name;
    bool pass = false;
    std::string note;
};

struct CoveragePoint {
    std::string name;
    bool hit = false;
    std::string note;
};

struct RuntimeOptions {
    bool traceEnabled = false;
    fs::path traceFile;
    fs::path chainSummaryFile;
};

struct TraceState {
    bool enabled = false;
    fs::path outputPath;
    std::unique_ptr<VerilatedVcdC> trace;
};

struct AxiSlaveState {
    bool arready = true;
    uint8_t rid = 0;
    std::array<uint32_t, 4> rdata{};
    uint8_t rresp = 0;
    bool rlast = false;
    bool rvalid = false;
    uint8_t rCnt = 0;
    uint64_t rAddr = 0;
};

struct AxiMemoryModel {
    std::vector<std::array<uint8_t, 16>> words;
    AxiSlaveState state;

    void reset() {
        state = AxiSlaveState{};
    }

    void ensureWordIndex(uint64_t wordIndex) {
        if (wordIndex >= words.size()) {
            words.resize(static_cast<size_t>(wordIndex + 1), std::array<uint8_t, 16>{});
        }
    }

    void writeRow(uint64_t byteAddress, const std::array<uint8_t, 16>& row) {
        if (byteAddress % kBytesPerWord != 0) {
            throw std::runtime_error("Package error: source addresses must be 16-byte aligned");
        }
        const uint64_t wordIndex = byteAddress / kBytesPerWord;
        ensureWordIndex(wordIndex);
        words[static_cast<size_t>(wordIndex)] = row;
    }

    std::array<uint32_t, 4> readWordAsU32(uint64_t wordIndex) const {
        std::array<uint32_t, 4> packed{};
        if (wordIndex >= words.size()) {
            return packed;
        }
        const auto& row = words[static_cast<size_t>(wordIndex)];
        for (int word = 0; word < 4; ++word) {
            uint32_t value = 0;
            for (int byte = 0; byte < 4; ++byte) {
                value |= static_cast<uint32_t>(row[word * 4 + byte]) << (byte * 8);
            }
            packed[word] = value;
        }
        return packed;
    }

    void drive(Vnpu_system_top* dut) const {
        dut->arready = state.arready;
        dut->rid = state.rid;
        for (int i = 0; i < 4; ++i) {
            dut->rdata[i] = state.rdata[i];
        }
        dut->rresp = state.rresp;
        dut->rlast = state.rlast;
        dut->rvalid = state.rvalid;
    }

    AxiSlaveState computeNext(const Vnpu_system_top* dut) const {
        AxiSlaveState next = state;

        if (!dut->rst_n) {
            return AxiSlaveState{};
        }

        if (!dut->arvalid && !state.rvalid) {
            next.arready = true;
        }

        if (dut->arvalid && state.arready) {
            next.arready = false;
            next.rCnt = dut->arlen;
            next.rAddr = static_cast<uint64_t>(dut->araddr) >> 4;
            next.rvalid = true;
            next.rdata = readWordAsU32(next.rAddr);
            next.rid = static_cast<uint8_t>(dut->arid);
            next.rlast = (dut->arlen == 0);
        } else if (state.rvalid && dut->rready) {
            if (state.rCnt == 0) {
                next.rvalid = false;
                next.rlast = false;
                next.arready = true;
            } else {
                next.rCnt = static_cast<uint8_t>(state.rCnt - 1);
                next.rAddr = state.rAddr + 1;
                next.rdata = readWordAsU32(state.rAddr + 1);
                next.rlast = (state.rCnt == 1);
            }
        }

        return next;
    }
};

struct ReplayResult {
    std::string status;
    ReplayCounters counters;
    std::vector<std::string> mismatchLines;
    std::vector<std::string> eventLines;
    std::vector<AssertionCheck> assertionChecks;
    std::vector<CoveragePoint> coveragePoints;
    std::string detail;
};

struct RunnerCoverageState {
    bool dmaStartSeen = false;
    bool dmaDoneSeen = false;
    bool weightLoadModeStartSeen = false;
    bool executeModeStartSeen = false;
    bool forwardingHitSeen = false;
    bool drainRequestSeen = false;
    bool splitKSeen = false;
    bool multiburstSeen = false;
    bool nTileSeen = false;
    bool mTileSeen = false;
    bool negativeValidationSeen = false;
};

struct PackageExecutionSummary {
    std::string packageId;
    std::string status;
    fs::path packageDir;
    std::string detail;
};

TraceState* gTraceState = nullptr;
RunnerCoverageState* gCoverageState = nullptr;

std::string withTimestamp(VerilatedContext* contextp, const std::string& line) {
    return "[t=" + std::to_string(contextp->time()) + "] " + line;
}

void appendEvent(std::vector<std::string>* events, VerilatedContext* contextp, const std::string& line) {
    const std::string stamped = withTimestamp(contextp, line);
    events->push_back(stamped);
    std::cout << stamped << "\n";
}

void tick(Vnpu_system_top* dut, VerilatedContext* contextp, AxiMemoryModel* memory) {
    memory->drive(dut);
    dut->clk = 0;
    dut->eval();
    if (gTraceState && gTraceState->enabled) {
        gTraceState->trace->dump(contextp->time());
    }
    contextp->timeInc(1);

    const AxiSlaveState nextState = memory->computeNext(dut);

    memory->drive(dut);
    dut->clk = 1;
    dut->eval();
    if (gCoverageState) {
        const auto* root = dut->rootp;
        const bool forwardingHit = (root->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_valid_q != 0)
            && (root->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_valid != 0)
            && (root->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__acc_addr_q
                == root->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__last_write_addr);
        gCoverageState->forwardingHitSeen = gCoverageState->forwardingHitSeen || forwardingHit;
        gCoverageState->drainRequestSeen = gCoverageState->drainRequestSeen || (dut->drain_re != 0)
            || (root->npu_system_top__DOT__u_npu_core__DOT__u_psum_buffer__DOT__drain_re_q != 0);
        gCoverageState->dmaDoneSeen = gCoverageState->dmaDoneSeen || (dut->mmio_dma_done != 0);
    }
    if (gTraceState && gTraceState->enabled) {
        gTraceState->trace->dump(contextp->time());
    }
    contextp->timeInc(1);

    memory->state = nextState;
}

void clearInputs(Vnpu_system_top* dut) {
    dut->mmio_start_dma = 0;
    dut->mmio_dma_target = 0;
    dut->mmio_src_addr = 0;
    dut->mmio_burst_len = 0;
    dut->mmio_total_bursts = 0;
    dut->mmio_swap_banks = 0;
    dut->mmio_start_npu = 0;
    dut->mmio_npu_mode = 0;
    dut->mmio_npu_acc_clear = 0;
    dut->mmio_test_acc_addr_override_en = 0;
    dut->mmio_test_acc_addr_override = 0;
    dut->mmio_test_one_shot_acc_clear_en = 0;
    dut->mmio_clear_done = 0;
    dut->mmio_npu_seq_len = 0;
    dut->drain_re = 0;
    dut->drain_addr = 0;
}

RuntimeOptions parseRuntimeOptions(int argc, char** argv, std::vector<fs::path>* packagePaths) {
    RuntimeOptions options;
    for (int index = 1; index < argc; ++index) {
        const std::string arg = argv[index];
        if (arg == "--trace") {
            options.traceEnabled = true;
            continue;
        }
        if (arg.rfind("--trace-file=", 0) == 0) {
            options.traceEnabled = true;
            options.traceFile = fs::path(arg.substr(std::string("--trace-file=").size()));
            continue;
        }
        if (arg.rfind("--chain-summary=", 0) == 0) {
            options.chainSummaryFile = fs::path(arg.substr(std::string("--chain-summary=").size()));
            continue;
        }
        packagePaths->push_back(fs::path(arg));
    }
    return options;
}

void writeChainSummaryFile(const fs::path& outputPath,
                           const std::vector<PackageExecutionSummary>& summaries,
                           const std::vector<CoveragePoint>& aggregateCoverage) {
    std::ofstream output(outputPath);
    if (!output) {
        throw std::runtime_error("Failed to write replay chain summary: " + outputPath.string());
    }

    int passCount = 0;
    int packageErrorCount = 0;
    int failCount = 0;
    for (const auto& summary : summaries) {
        if (summary.status == "PASS") {
            ++passCount;
        } else if (summary.status == "PACKAGE_ERROR") {
            ++packageErrorCount;
        } else {
            ++failCount;
        }
    }

    output << "packages_total=" << summaries.size() << "\n";
    output << "packages_passed=" << passCount << "\n";
    output << "packages_with_expected_package_error=" << packageErrorCount << "\n";
    output << "packages_failed=" << failCount << "\n";
    output << "package_results:\n";
    for (const auto& summary : summaries) {
        output << summary.packageId << " status=" << summary.status;
        if (!summary.detail.empty()) {
            output << " detail=" << summary.detail;
        }
        output << " report=" << (summary.packageDir / "replay_report.txt").string() << "\n";
    }
    output << "aggregate_coverage:\n";
    for (const auto& point : aggregateCoverage) {
        output << point.name << "=" << (point.hit ? "HIT" : "MISS") << " note=" << point.note << "\n";
    }
}

void writeReportFile(const PackageData& package, const ReplayResult& result) {
    const fs::path reportPath = package.packageDir / "replay_report.txt";
    std::ofstream report(reportPath);
    if (!report) {
        throw std::runtime_error("Failed to write replay report: " + reportPath.string());
    }

    report << "package=" << package.manifest.packageId << "\n";
    report << "k_passes=" << package.manifest.kTileCount << "\n";
    report << "drained_rows=" << result.counters.drainedRows << "\n";
    report << "checked_lanes=" << result.counters.checkedLanes << "\n";
    report << "dma_done_count=" << result.counters.dmaDoneCount << "\n";
    report << "npu_done_count=" << result.counters.npuDoneCount << "\n";
    report << "mismatch_count=" << result.mismatchLines.size() << "\n";
    report << "status=" << result.status << "\n";
    if (!result.detail.empty()) {
        report << "detail=" << result.detail << "\n";
    }
    if (gTraceState && gTraceState->enabled) {
        report << "trace_file=" << gTraceState->outputPath.string() << "\n";
    }
    if (!result.mismatchLines.empty()) {
        report << "details:\n";
        for (const auto& line : result.mismatchLines) {
            report << line << "\n";
        }
    }
}

void writeEventsFile(const PackageData& package, const ReplayResult& result) {
    const fs::path eventsPath = package.packageDir / "replay_events.txt";
    std::ofstream events(eventsPath);
    if (!events) {
        throw std::runtime_error("Failed to write replay events: " + eventsPath.string());
    }
    for (const auto& line : result.eventLines) {
        events << line << "\n";
    }
}

void writeEventSummaryFile(const PackageData& package, const ReplayResult& result) {
    const fs::path summaryPath = package.packageDir / "replay_event_summary.txt";
    std::ofstream output(summaryPath);
    if (!output) {
        throw std::runtime_error("Failed to write replay event summary: " + summaryPath.string());
    }

    output << "package=" << package.manifest.packageId << "\n";
    output << "event_count=" << result.eventLines.size() << "\n";
    output << "weight_dma_launches=" << result.counters.weightDmaLaunchCount << "\n";
    output << "activation_dma_launches=" << result.counters.activationDmaLaunchCount << "\n";
    output << "preload_launches=" << result.counters.preloadLaunchCount << "\n";
    output << "execute_launches=" << result.counters.executeLaunchCount << "\n";
    output << "bank_swaps=" << result.counters.bankSwapCount << "\n";
    output << "dma_done_count=" << result.counters.dmaDoneCount << "\n";
    output << "npu_done_count=" << result.counters.npuDoneCount << "\n";
    output << "drained_rows=" << result.counters.drainedRows << "\n";
    if (gTraceState && gTraceState->enabled) {
        output << "trace_file=" << gTraceState->outputPath.string() << "\n";
    }
}

void writeAssertionSummaryFile(const PackageData& package, const ReplayResult& result) {
    const fs::path assertionsPath = package.packageDir / "replay_assertions.txt";
    std::ofstream output(assertionsPath);
    if (!output) {
        throw std::runtime_error("Failed to write replay assertions: " + assertionsPath.string());
    }

    int passCount = 0;
    for (const auto& check : result.assertionChecks) {
        if (check.pass) {
            ++passCount;
        }
    }

    output << "package=" << package.manifest.packageId << "\n";
    output << "assertions_total=" << result.assertionChecks.size() << "\n";
    output << "assertions_passed=" << passCount << "\n";
    output << "assertions_failed=" << (result.assertionChecks.size() - passCount) << "\n";
    for (const auto& check : result.assertionChecks) {
        output << check.name << "=" << (check.pass ? "PASS" : "FAIL") << " note=" << check.note << "\n";
    }
}

void writeCoverageSummaryFile(const PackageData& package, const ReplayResult& result) {
    const fs::path coveragePath = package.packageDir / "replay_coverage.txt";
    std::ofstream output(coveragePath);
    if (!output) {
        throw std::runtime_error("Failed to write replay coverage: " + coveragePath.string());
    }

    int hitCount = 0;
    for (const auto& point : result.coveragePoints) {
        if (point.hit) {
            ++hitCount;
        }
    }

    output << "package=" << package.manifest.packageId << "\n";
    output << "coverage_points_total=" << result.coveragePoints.size() << "\n";
    output << "coverage_points_hit=" << hitCount << "\n";
    output << "coverage_points_missed=" << (result.coveragePoints.size() - hitCount) << "\n";
    for (const auto& point : result.coveragePoints) {
        output << point.name << "=" << (point.hit ? "HIT" : "MISS") << " note=" << point.note << "\n";
    }
}

bool policyAccClear(const Manifest& manifest, int passIndex) {
    if (manifest.accClearPolicy == "first_pass_overwrite") {
        return passIndex == 0;
    }
    if (manifest.accClearPolicy == "always_overwrite") {
        return true;
    }
    if (manifest.accClearPolicy == "always_accumulate") {
        return false;
    }
    throw std::runtime_error("Replay driver error: unsupported acc_clear_policy");
}

std::vector<SystemPass> buildPassPlan(const PackageData& package) {
    if (!package.system.present) {
        throw std::runtime_error("Package error: system.* metadata is required for system replay");
    }

    if (!package.system.passes.empty()) {
        if (static_cast<int>(package.system.passes.size()) != package.manifest.kTileCount) {
            throw std::runtime_error("Package error: system.execution.passes must match execution.k_tile_count");
        }
        return package.system.passes;
    }

    if (package.manifest.kTileCount != 1) {
        throw std::runtime_error("Package error: multi-pass packages must declare system.execution.passes[]");
    }

    SystemPass pass;
    pass.passIndex = 0;
    pass.weightsSrcAddr = package.system.weightsSrcAddr;
    pass.activationsSrcAddr = package.system.activationsSrcAddr;
    pass.weightBurstLen = package.system.weightBurstLen;
    pass.weightTotalBursts = package.system.weightTotalBursts;
    pass.activationBurstLen = package.system.activationBurstLen;
    pass.activationTotalBursts = package.system.activationTotalBursts;
    pass.accClear = policyAccClear(package.manifest, 0);
    return {pass};
}

void validateSystemPackage(const PackageData& package) {
    if (!package.system.present) {
        throw std::runtime_error("Package error: system.* metadata is missing");
    }
    if (package.system.initialBankSel != 0) {
        throw std::runtime_error("Package error: current runner requires initial_bank_sel = 0 because reset defines bank_sel=0");
    }
    if (package.system.flushCycles < 0) {
        throw std::runtime_error("Package error: flush_cycles must be non-negative");
    }
    if (package.system.weightsTotalBytes != static_cast<int>(package.weightRows.size()) * kBytesPerWord) {
        throw std::runtime_error("Package error: weights_total_bytes does not match weight payload size");
    }
    if (package.system.activationsTotalBytes != static_cast<int>(package.activationRows.size()) * kBytesPerWord) {
        throw std::runtime_error("Package error: activations_total_bytes does not match activation payload size");
    }
    if ((package.system.weightBurstLen + 1) * kBytesPerWord * package.system.weightTotalBursts != package.system.weightsTotalBytes) {
        throw std::runtime_error("Package error: top-level weight DMA plan does not match weights_total_bytes");
    }
    if ((package.system.activationBurstLen + 1) * kBytesPerWord * package.system.activationTotalBursts != package.system.activationsTotalBytes) {
        throw std::runtime_error("Package error: top-level activation DMA plan does not match activations_total_bytes");
    }
    if (package.system.expectedDmaDoneCount < 1 || package.system.expectedNpuDoneCount < 1) {
        throw std::runtime_error("Package error: expected done counts must be positive");
    }
    if (package.system.verificationAccAddrOverride.has_value()) {
        const int overrideAddr = *package.system.verificationAccAddrOverride;
        if (overrideAddr < 0 || overrideAddr > 511) {
            throw std::runtime_error("Package error: verification_acc_addr_override must be in [0, 511]");
        }
    }

    const std::vector<SystemPass> passes = buildPassPlan(package);
    for (const auto& pass : passes) {
        if (pass.weightsSrcAddr % kBytesPerWord != 0 || pass.activationsSrcAddr % kBytesPerWord != 0) {
            throw std::runtime_error("Package error: per-pass source addresses must be 16-byte aligned");
        }
        if ((pass.weightBurstLen + 1) * kBytesPerWord * pass.weightTotalBursts != kWeightRowsPerPass * kBytesPerWord) {
            throw std::runtime_error("Package error: per-pass weight DMA plan must transfer exactly 256 bytes");
        }
        if ((pass.activationBurstLen + 1) * kBytesPerWord * pass.activationTotalBursts != package.manifest.seqLen * kBytesPerWord) {
            throw std::runtime_error("Package error: per-pass activation DMA plan must transfer seq_len * 16 bytes");
        }
    }
}

void populateMemory(AxiMemoryModel* memory, const PackageData& package) {
    const std::vector<SystemPass> passes = buildPassPlan(package);
    for (const auto& pass : passes) {
        const int weightBase = pass.passIndex * kWeightRowsPerPass;
        for (int row = 0; row < kWeightRowsPerPass; ++row) {
            memory->writeRow(pass.weightsSrcAddr + static_cast<uint64_t>(row * kBytesPerWord), package.weightRows[weightBase + row]);
        }

        const int actBase = pass.passIndex * package.manifest.seqLen;
        for (int row = 0; row < package.manifest.seqLen; ++row) {
            memory->writeRow(pass.activationsSrcAddr + static_cast<uint64_t>(row * kBytesPerWord), package.activationRows[actBase + row]);
        }
    }
}

void resetDut(Vnpu_system_top* dut, VerilatedContext* contextp, AxiMemoryModel* memory) {
    clearInputs(dut);
    dut->rst_n = 0;
    memory->reset();
    for (int i = 0; i < 8; ++i) {
        tick(dut, contextp, memory);
    }
    dut->rst_n = 1;
    for (int i = 0; i < 2; ++i) {
        tick(dut, contextp, memory);
    }
}

void pulseStartDma(Vnpu_system_top* dut, VerilatedContext* contextp, AxiMemoryModel* memory) {
    dut->mmio_start_dma = 1;
    tick(dut, contextp, memory);
    dut->mmio_start_dma = 0;
}

void pulseSwapBanks(Vnpu_system_top* dut, VerilatedContext* contextp, AxiMemoryModel* memory) {
    dut->mmio_swap_banks = 1;
    tick(dut, contextp, memory);
    dut->mmio_swap_banks = 0;
}

void pulseStartNpu(Vnpu_system_top* dut, VerilatedContext* contextp, AxiMemoryModel* memory) {
    dut->mmio_start_npu = 1;
    tick(dut, contextp, memory);
    dut->mmio_start_npu = 0;
}

void pulseClearDone(Vnpu_system_top* dut, VerilatedContext* contextp, AxiMemoryModel* memory) {
    dut->mmio_clear_done = 1;
    tick(dut, contextp, memory);
    dut->mmio_clear_done = 0;
}

void waitForDmaDone(Vnpu_system_top* dut,
                    VerilatedContext* contextp,
                    AxiMemoryModel* memory,
                    ReplayResult* result,
                    int timeoutCycles,
                    const std::string& phaseName) {
    for (int cycle = 0; cycle < timeoutCycles; ++cycle) {
        tick(dut, contextp, memory);
        if (dut->mmio_dma_done) {
            ++result->counters.dmaDoneCount;
            appendEvent(&result->eventLines, contextp, "[SYSTEM REPLAY] dma_done phase=" + phaseName + " count=" + std::to_string(result->counters.dmaDoneCount));
            return;
        }
    }
    throw std::runtime_error("Replay driver error: timeout while waiting for mmio_dma_done during " + phaseName);
}

void waitForNpuDone(Vnpu_system_top* dut,
                    VerilatedContext* contextp,
                    AxiMemoryModel* memory,
                    ReplayResult* result,
                    int timeoutCycles,
                    const std::string& phaseName) {
    for (int cycle = 0; cycle < timeoutCycles; ++cycle) {
        tick(dut, contextp, memory);
        if (dut->mmio_npu_done) {
            ++result->counters.npuDoneCount;
            appendEvent(&result->eventLines, contextp, "[SYSTEM REPLAY] npu_done phase=" + phaseName + " count=" + std::to_string(result->counters.npuDoneCount));
            return;
        }
    }
    throw std::runtime_error("Replay driver error: timeout while waiting for mmio_npu_done during " + phaseName);
}

void launchWeightDma(Vnpu_system_top* dut,
                     VerilatedContext* contextp,
                     AxiMemoryModel* memory,
                     ReplayResult* result,
                     const SystemPass& pass) {
    dut->mmio_dma_target = 1;
    dut->mmio_src_addr = pass.weightsSrcAddr;
    dut->mmio_burst_len = static_cast<uint8_t>(pass.weightBurstLen);
    dut->mmio_total_bursts = static_cast<uint16_t>(pass.weightTotalBursts);
    ++result->counters.weightDmaLaunchCount;
    appendEvent(&result->eventLines, contextp, "[SYSTEM REPLAY] dma_weights pass=" + std::to_string(pass.passIndex) +
                                             " src_addr=" + std::to_string(pass.weightsSrcAddr) +
                                             " burst_len=" + std::to_string(pass.weightBurstLen) +
                                             " total_bursts=" + std::to_string(pass.weightTotalBursts));
    pulseStartDma(dut, contextp, memory);
    waitForDmaDone(dut, contextp, memory, result, kDefaultTimeoutCycles, "dma_weights_pass_" + std::to_string(pass.passIndex));
}

void launchActivationDma(Vnpu_system_top* dut,
                         VerilatedContext* contextp,
                         AxiMemoryModel* memory,
                         ReplayResult* result,
                         const SystemPass& pass) {
    dut->mmio_dma_target = 0;
    dut->mmio_src_addr = pass.activationsSrcAddr;
    dut->mmio_burst_len = static_cast<uint8_t>(pass.activationBurstLen);
    dut->mmio_total_bursts = static_cast<uint16_t>(pass.activationTotalBursts);
    ++result->counters.activationDmaLaunchCount;
    appendEvent(&result->eventLines, contextp, "[SYSTEM REPLAY] dma_activations pass=" + std::to_string(pass.passIndex) +
                                             " src_addr=" + std::to_string(pass.activationsSrcAddr) +
                                             " burst_len=" + std::to_string(pass.activationBurstLen) +
                                             " total_bursts=" + std::to_string(pass.activationTotalBursts));
    pulseStartDma(dut, contextp, memory);
    waitForDmaDone(dut, contextp, memory, result, kDefaultTimeoutCycles, "dma_activations_pass_" + std::to_string(pass.passIndex));
}

void launchPreload(Vnpu_system_top* dut,
                   VerilatedContext* contextp,
                   AxiMemoryModel* memory,
                   ReplayResult* result,
                   const SystemPass& pass) {
    dut->mmio_npu_mode = 1;
    ++result->counters.preloadLaunchCount;
    appendEvent(&result->eventLines, contextp, "[SYSTEM REPLAY] preload_weights pass=" + std::to_string(pass.passIndex));
    pulseStartNpu(dut, contextp, memory);
    waitForNpuDone(dut, contextp, memory, result, kDefaultTimeoutCycles, "preload_pass_" + std::to_string(pass.passIndex));
    pulseClearDone(dut, contextp, memory);
}

void launchExecute(Vnpu_system_top* dut,
                   VerilatedContext* contextp,
                   AxiMemoryModel* memory,
                   ReplayResult* result,
                   const PackageData& package,
                   const SystemPass& pass) {
    dut->mmio_npu_mode = 0;
    dut->mmio_npu_acc_clear = pass.accClear ? 1 : 0;
    dut->mmio_npu_seq_len = static_cast<uint16_t>(package.manifest.seqLen);
    if (package.system.verificationAccAddrOverride.has_value()) {
        dut->mmio_test_acc_addr_override_en = 1;
        dut->mmio_test_acc_addr_override = static_cast<uint16_t>(*package.system.verificationAccAddrOverride);
    }
    dut->mmio_test_one_shot_acc_clear_en = package.system.verificationOneShotAccClear ? 1 : 0;
    ++result->counters.executeLaunchCount;
    appendEvent(&result->eventLines, contextp, "[SYSTEM REPLAY] execute pass=" + std::to_string(pass.passIndex) +
                                             " acc_clear=" + std::to_string(pass.accClear ? 1 : 0) +
                                             " acc_addr_override=" +
                                             (package.system.verificationAccAddrOverride.has_value()
                                                 ? std::to_string(*package.system.verificationAccAddrOverride)
                                                 : std::string("off")));
    pulseStartNpu(dut, contextp, memory);
    waitForNpuDone(dut, contextp, memory, result, kDefaultTimeoutCycles, "execute_pass_" + std::to_string(pass.passIndex));
    pulseClearDone(dut, contextp, memory);
    dut->mmio_npu_acc_clear = 0;
    dut->mmio_test_acc_addr_override_en = 0;
    dut->mmio_test_acc_addr_override = 0;
    dut->mmio_test_one_shot_acc_clear_en = 0;
}

void drainAndCompare(Vnpu_system_top* dut,
                     VerilatedContext* contextp,
                     AxiMemoryModel* memory,
                     const PackageData& package,
                     ReplayResult* result) {
    for (int drainAddr : package.manifest.drainAddresses) {
        const auto goldenIt = package.goldenByDrainAddr.find(drainAddr);
        if (goldenIt == package.goldenByDrainAddr.end()) {
            throw std::runtime_error("Package error: missing golden entry for drain_addr=" + std::to_string(drainAddr));
        }

        dut->drain_addr = static_cast<uint16_t>(drainAddr);
        dut->drain_re = 1;
        tick(dut, contextp, memory);
        dut->drain_re = 0;
        tick(dut, contextp, memory);
        tick(dut, contextp, memory);

        ++result->counters.drainedRows;
        appendEvent(&result->eventLines, contextp, "[SYSTEM REPLAY] drain addr=" + std::to_string(drainAddr) +
                                             " data0=" + std::to_string(static_cast<int32_t>(dut->psum_drain_out[0])) +
                                             " data15=" + std::to_string(static_cast<int32_t>(dut->psum_drain_out[15])));

        const GoldenEntry& golden = goldenIt->second;
        for (int lane = 0; lane < 16; ++lane) {
            ++result->counters.checkedLanes;
            const int32_t expected = golden.vector[lane];
            const int32_t observed = static_cast<int32_t>(dut->psum_drain_out[lane]);
            if (expected != observed) {
                std::ostringstream mismatch;
                mismatch << "[MISMATCH] package=" << package.manifest.packageId
                         << " drain_addr=" << drainAddr
                         << " lane=" << lane
                         << " global=(row=" << golden.globalRow
                         << ", col=" << (golden.globalColBase + lane)
                         << ") expected=" << expected
                         << " observed=" << observed;
                result->mismatchLines.push_back(mismatch.str());
            }
        }
    }
}

void updateDerivedCoverage(const PackageData& package, ReplayResult* result, RunnerCoverageState* coverageState) {
    coverageState->dmaDoneSeen = coverageState->dmaDoneSeen || (result->counters.dmaDoneCount > 0);
    coverageState->splitKSeen = coverageState->splitKSeen || (package.manifest.kTileCount > 1);
    coverageState->nTileSeen = coverageState->nTileSeen || (package.manifest.nTileBase > 0);
    coverageState->mTileSeen = coverageState->mTileSeen || (package.manifest.mTileBase > 0);
    coverageState->negativeValidationSeen = coverageState->negativeValidationSeen || (result->status == "PACKAGE_ERROR");

    bool multiburst = package.system.weightTotalBursts > 1 || package.system.activationTotalBursts > 1;
    for (const auto& pass : package.system.passes) {
        multiburst = multiburst || pass.weightTotalBursts > 1 || pass.activationTotalBursts > 1;
    }
    coverageState->multiburstSeen = coverageState->multiburstSeen || multiburst;
}

void buildRunnerAssertions(const PackageData& package, ReplayResult* result) {
    result->assertionChecks = {
        {"ap_expected_dma_done_count", result->counters.dmaDoneCount == package.system.expectedDmaDoneCount,
         "observed=" + std::to_string(result->counters.dmaDoneCount) + " expected=" + std::to_string(package.system.expectedDmaDoneCount)},
        {"ap_expected_npu_done_count", result->counters.npuDoneCount == package.system.expectedNpuDoneCount,
         "observed=" + std::to_string(result->counters.npuDoneCount) + " expected=" + std::to_string(package.system.expectedNpuDoneCount)},
        {"ap_expected_drained_rows", result->status == "PACKAGE_ERROR" || result->counters.drainedRows == static_cast<int>(package.manifest.drainAddresses.size()),
         "observed=" + std::to_string(result->counters.drainedRows) + " expected=" + std::to_string(package.manifest.drainAddresses.size())},
        {"ap_no_data_mismatches", result->status == "PACKAGE_ERROR" || result->mismatchLines.empty(),
         "mismatch_count=" + std::to_string(result->mismatchLines.size())},
        {"ap_expected_forwarding_hit", !package.system.expectForwardingHit || gCoverageState == nullptr || gCoverageState->forwardingHitSeen,
         "expect_forwarding_hit=" + std::string(package.system.expectForwardingHit ? "1" : "0") +
         " observed=" + std::string((gCoverageState && gCoverageState->forwardingHitSeen) ? "1" : "0")},
        {"ap_status_is_expected", result->status == "PASS" || result->status == "PACKAGE_ERROR",
         "status=" + result->status}
    };
}

void buildRunnerCoverage(const PackageData& package, const RunnerCoverageState& coverageState, ReplayResult* result) {
    result->coveragePoints = {
        {"cp_dma_start_seen", coverageState.dmaStartSeen, "weight_launches=" + std::to_string(result->counters.weightDmaLaunchCount) + " activation_launches=" + std::to_string(result->counters.activationDmaLaunchCount)},
        {"cp_dma_done_seen", coverageState.dmaDoneSeen, "dma_done_count=" + std::to_string(result->counters.dmaDoneCount)},
        {"cp_weight_load_mode_start_seen", coverageState.weightLoadModeStartSeen, "preload_launches=" + std::to_string(result->counters.preloadLaunchCount)},
        {"cp_execute_mode_start_seen", coverageState.executeModeStartSeen, "execute_launches=" + std::to_string(result->counters.executeLaunchCount)},
        {"cp_forwarding_hit_seen", coverageState.forwardingHitSeen, "observed_internal_forward_en=" + std::string(coverageState.forwardingHitSeen ? "1" : "0")},
        {"cp_drain_request_seen", coverageState.drainRequestSeen, "drained_rows=" + std::to_string(result->counters.drainedRows)},
        {"cp_split_k_seen", coverageState.splitKSeen, "k_tile_count=" + std::to_string(package.manifest.kTileCount)},
        {"cp_multiburst_dma_seen", coverageState.multiburstSeen, "weight_total_bursts=" + std::to_string(package.system.weightTotalBursts) + " activation_total_bursts=" + std::to_string(package.system.activationTotalBursts)},
        {"cp_n_tile_seen", coverageState.nTileSeen, "n_tile_base=" + std::to_string(package.manifest.nTileBase)},
        {"cp_m_tile_seen", coverageState.mTileSeen, "m_tile_base=" + std::to_string(package.manifest.mTileBase)},
        {"cp_negative_validation_seen", coverageState.negativeValidationSeen, "status=" + result->status}
    };
}

std::vector<CoveragePoint> buildAggregateCoverage(const RunnerCoverageState& coverageState) {
    return {
        {"cp_dma_start_seen", coverageState.dmaStartSeen, "aggregate_chain_hit=" + std::string(coverageState.dmaStartSeen ? "1" : "0")},
        {"cp_dma_done_seen", coverageState.dmaDoneSeen, "aggregate_chain_hit=" + std::string(coverageState.dmaDoneSeen ? "1" : "0")},
        {"cp_weight_load_mode_start_seen", coverageState.weightLoadModeStartSeen, "aggregate_chain_hit=" + std::string(coverageState.weightLoadModeStartSeen ? "1" : "0")},
        {"cp_execute_mode_start_seen", coverageState.executeModeStartSeen, "aggregate_chain_hit=" + std::string(coverageState.executeModeStartSeen ? "1" : "0")},
        {"cp_forwarding_hit_seen", coverageState.forwardingHitSeen, "aggregate_chain_hit=" + std::string(coverageState.forwardingHitSeen ? "1" : "0")},
        {"cp_drain_request_seen", coverageState.drainRequestSeen, "aggregate_chain_hit=" + std::string(coverageState.drainRequestSeen ? "1" : "0")},
        {"cp_split_k_seen", coverageState.splitKSeen, "aggregate_chain_hit=" + std::string(coverageState.splitKSeen ? "1" : "0")},
        {"cp_multiburst_dma_seen", coverageState.multiburstSeen, "aggregate_chain_hit=" + std::string(coverageState.multiburstSeen ? "1" : "0")},
        {"cp_n_tile_seen", coverageState.nTileSeen, "aggregate_chain_hit=" + std::string(coverageState.nTileSeen ? "1" : "0")},
        {"cp_m_tile_seen", coverageState.mTileSeen, "aggregate_chain_hit=" + std::string(coverageState.mTileSeen ? "1" : "0")},
        {"cp_negative_validation_seen", coverageState.negativeValidationSeen, "aggregate_chain_hit=" + std::string(coverageState.negativeValidationSeen ? "1" : "0")}
    };
}

ReplayResult runSystemReplay(Vnpu_system_top* dut,
                             VerilatedContext* contextp,
                             AxiMemoryModel* memory,
                             const PackageData& package,
                             RunnerCoverageState* coverageState) {
    ReplayResult result;
    result.status = "PASS";

    validateSystemPackage(package);
    populateMemory(memory, package);
    resetDut(dut, contextp, memory);

    const std::vector<SystemPass> passes = buildPassPlan(package);
    for (const auto& pass : passes) {
        coverageState->dmaStartSeen = true;
        launchWeightDma(dut, contextp, memory, &result, pass);
        if (package.system.swapBeforeWeightPreload) {
            ++result.counters.bankSwapCount;
            appendEvent(&result.eventLines, contextp, "[SYSTEM REPLAY] swap_before_weight_preload pass=" + std::to_string(pass.passIndex));
            pulseSwapBanks(dut, contextp, memory);
        }

        coverageState->weightLoadModeStartSeen = true;
        launchPreload(dut, contextp, memory, &result, pass);
        coverageState->dmaStartSeen = true;
        launchActivationDma(dut, contextp, memory, &result, pass);
        if (package.system.swapBeforeExecute) {
            ++result.counters.bankSwapCount;
            appendEvent(&result.eventLines, contextp, "[SYSTEM REPLAY] swap_before_execute pass=" + std::to_string(pass.passIndex));
            pulseSwapBanks(dut, contextp, memory);
        }

        coverageState->executeModeStartSeen = true;
        launchExecute(dut, contextp, memory, &result, package, pass);
    }

    appendEvent(&result.eventLines, contextp, "[SYSTEM REPLAY] flush cycles=" + std::to_string(package.system.flushCycles));
    for (int cycle = 0; cycle < package.system.flushCycles; ++cycle) {
        tick(dut, contextp, memory);
    }

    drainAndCompare(dut, contextp, memory, package, &result);

    if (result.counters.dmaDoneCount != package.system.expectedDmaDoneCount) {
        throw std::runtime_error("Replay driver error: observed dma_done count does not match expected count");
    }
    if (result.counters.npuDoneCount != package.system.expectedNpuDoneCount) {
        throw std::runtime_error("Replay driver error: observed npu_done count does not match expected count");
    }

    if (!result.mismatchLines.empty()) {
        result.status = "FAIL";
        result.detail = "DUT mismatches observed";
    }
    if (package.system.expectForwardingHit && !coverageState->forwardingHitSeen) {
        result.status = "FAIL";
        result.detail = "Forwarding coverage expectation was not met";
    }

    updateDerivedCoverage(package, &result, coverageState);
    buildRunnerAssertions(package, &result);
    buildRunnerCoverage(package, *coverageState, &result);
    return result;
}

std::string classifyError(const std::string& message) {
    if (message.rfind("Package error:", 0) == 0) {
        return "PACKAGE_ERROR";
    }
    if (message.rfind("Replay driver error:", 0) == 0) {
        return "DRIVER_ERROR";
    }
    return "FAIL";
}

TraceState openTrace(Vnpu_system_top* dut, const PackageData& package, const RuntimeOptions& options) {
    TraceState traceState;
    if (!options.traceEnabled) {
        return traceState;
    }

    Verilated::traceEverOn(true);
    traceState.enabled = true;
    traceState.outputPath = options.traceFile.empty() ? (package.packageDir / "replay_trace.vcd") : options.traceFile;
    traceState.trace = std::make_unique<VerilatedVcdC>();
    dut->trace(traceState.trace.get(), 99);
    traceState.trace->open(traceState.outputPath.string().c_str());
    return traceState;
}

void closeTrace(TraceState* traceState) {
    if (traceState && traceState->enabled && traceState->trace) {
        traceState->trace->close();
    }
}

fs::path resolveDefaultPackagePath() {
    const std::vector<fs::path> candidates = {
        fs::path("../workloads/system_reference_gemm_tile_m0_n0_k0to15"),
        fs::path("workloads/system_reference_gemm_tile_m0_n0_k0to15")
    };
    for (const auto& candidate : candidates) {
        if (fs::exists(candidate / "manifest.json")) {
            return candidate;
        }
    }

    throw std::runtime_error("Failed to resolve default system workload package path");
}

PackageExecutionSummary executePackage(const fs::path& packagePath,
                                      const RuntimeOptions& options,
                                      RunnerCoverageState* aggregateCoverage,
                                      int* exitCode) {
    PackageData package = replay::loadPackage(packagePath);
    TraceState traceState;
    RunnerCoverageState packageCoverage;
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(0, static_cast<const char**>(nullptr));
    Vnpu_system_top* dut = new Vnpu_system_top{contextp};
    AxiMemoryModel memory;

    try {
        traceState = openTrace(dut, package, options);
        gTraceState = &traceState;
        gCoverageState = &packageCoverage;
        ReplayResult result = runSystemReplay(dut, contextp, &memory, package, &packageCoverage);
        writeReportFile(package, result);
        writeEventsFile(package, result);
        writeEventSummaryFile(package, result);
        writeAssertionSummaryFile(package, result);
        writeCoverageSummaryFile(package, result);

        aggregateCoverage->dmaStartSeen = aggregateCoverage->dmaStartSeen || packageCoverage.dmaStartSeen;
        aggregateCoverage->dmaDoneSeen = aggregateCoverage->dmaDoneSeen || packageCoverage.dmaDoneSeen;
        aggregateCoverage->weightLoadModeStartSeen = aggregateCoverage->weightLoadModeStartSeen || packageCoverage.weightLoadModeStartSeen;
        aggregateCoverage->executeModeStartSeen = aggregateCoverage->executeModeStartSeen || packageCoverage.executeModeStartSeen;
        aggregateCoverage->forwardingHitSeen = aggregateCoverage->forwardingHitSeen || packageCoverage.forwardingHitSeen;
        aggregateCoverage->drainRequestSeen = aggregateCoverage->drainRequestSeen || packageCoverage.drainRequestSeen;
        aggregateCoverage->splitKSeen = aggregateCoverage->splitKSeen || packageCoverage.splitKSeen;
        aggregateCoverage->multiburstSeen = aggregateCoverage->multiburstSeen || packageCoverage.multiburstSeen;
        aggregateCoverage->nTileSeen = aggregateCoverage->nTileSeen || packageCoverage.nTileSeen;
        aggregateCoverage->mTileSeen = aggregateCoverage->mTileSeen || packageCoverage.mTileSeen;
        aggregateCoverage->negativeValidationSeen = aggregateCoverage->negativeValidationSeen || packageCoverage.negativeValidationSeen;

        if (result.status == "PASS") {
            std::cout << "[SYSTEM REPLAY PASS] package=" << package.manifest.packageId
                      << " drained_rows=" << result.counters.drainedRows
                      << " checked_lanes=" << result.counters.checkedLanes
                      << " report=" << (package.packageDir / "replay_report.txt").string() << "\n";
        } else {
            std::cout << "[SYSTEM REPLAY FAIL] package=" << package.manifest.packageId
                      << " mismatches=" << result.mismatchLines.size()
                      << " report=" << (package.packageDir / "replay_report.txt").string() << "\n";
            *exitCode = 1;
        }

        dut->final();
        closeTrace(&traceState);
        gTraceState = nullptr;
        gCoverageState = nullptr;
        delete dut;
        delete contextp;
        return {package.manifest.packageId, result.status, package.packageDir, result.detail};
    } catch (const std::exception& ex) {
        closeTrace(&traceState);
        gTraceState = nullptr;
        gCoverageState = nullptr;
        dut->final();
        delete dut;
        delete contextp;

        ReplayResult errorResult;
        errorResult.status = classifyError(ex.what());
        errorResult.detail = ex.what();
        updateDerivedCoverage(package, &errorResult, &packageCoverage);
        buildRunnerAssertions(package, &errorResult);
        buildRunnerCoverage(package, packageCoverage, &errorResult);
        writeReportFile(package, errorResult);
        writeEventSummaryFile(package, errorResult);
        writeAssertionSummaryFile(package, errorResult);
        writeCoverageSummaryFile(package, errorResult);

        aggregateCoverage->dmaStartSeen = aggregateCoverage->dmaStartSeen || packageCoverage.dmaStartSeen;
        aggregateCoverage->dmaDoneSeen = aggregateCoverage->dmaDoneSeen || packageCoverage.dmaDoneSeen;
        aggregateCoverage->weightLoadModeStartSeen = aggregateCoverage->weightLoadModeStartSeen || packageCoverage.weightLoadModeStartSeen;
        aggregateCoverage->executeModeStartSeen = aggregateCoverage->executeModeStartSeen || packageCoverage.executeModeStartSeen;
        aggregateCoverage->forwardingHitSeen = aggregateCoverage->forwardingHitSeen || packageCoverage.forwardingHitSeen;
        aggregateCoverage->drainRequestSeen = aggregateCoverage->drainRequestSeen || packageCoverage.drainRequestSeen;
        aggregateCoverage->splitKSeen = aggregateCoverage->splitKSeen || packageCoverage.splitKSeen;
        aggregateCoverage->multiburstSeen = aggregateCoverage->multiburstSeen || packageCoverage.multiburstSeen;
        aggregateCoverage->nTileSeen = aggregateCoverage->nTileSeen || packageCoverage.nTileSeen;
        aggregateCoverage->mTileSeen = aggregateCoverage->mTileSeen || packageCoverage.mTileSeen;
        aggregateCoverage->negativeValidationSeen = aggregateCoverage->negativeValidationSeen || packageCoverage.negativeValidationSeen;

        std::cerr << "[SYSTEM REPLAY ERROR] " << ex.what() << "\n";
        if (errorResult.status != "PACKAGE_ERROR") {
            *exitCode = 2;
        }
        return {package.manifest.packageId, errorResult.status, package.packageDir, errorResult.detail};
    }
}

}  // namespace

int main(int argc, char** argv) {
    std::vector<fs::path> packagePaths;
    try {
        RuntimeOptions options = parseRuntimeOptions(argc, argv, &packagePaths);
        if (packagePaths.empty()) {
            packagePaths.push_back(resolveDefaultPackagePath());
        }
        if (packagePaths.size() > 1 && !options.traceFile.empty()) {
            throw std::runtime_error("Replay driver error: --trace-file is only supported for single-package replay");
        }

        RunnerCoverageState aggregateCoverage;
        std::vector<PackageExecutionSummary> summaries;
        int exitCode = 0;
        for (const auto& packagePath : packagePaths) {
            summaries.push_back(executePackage(packagePath, options, &aggregateCoverage, &exitCode));
        }

        if (packagePaths.size() > 1 || !options.chainSummaryFile.empty()) {
            const fs::path chainSummaryPath = options.chainSummaryFile.empty() ? fs::path("replay_chain_summary.txt") : options.chainSummaryFile;
            writeChainSummaryFile(chainSummaryPath, summaries, buildAggregateCoverage(aggregateCoverage));
            std::cout << "[SYSTEM REPLAY CHAIN] summary=" << chainSummaryPath.string()
                      << " packages=" << summaries.size() << "\n";
        }

        return exitCode;
    } catch (const std::exception& ex) {
        std::cerr << "[SYSTEM REPLAY ERROR] " << ex.what() << "\n";
        return 2;
    }
}