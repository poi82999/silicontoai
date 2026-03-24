#include <array>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "verilated.h"
#include "Vnpu_core_top.h"
#include "Vnpu_core_top___024root.h"
#include "replay_package.h"

namespace fs = std::filesystem;
using replay::GoldenEntry;
using replay::Manifest;
using replay::PackageData;

struct CoreCoverageState {
    bool forwardingHitSeen = false;
    bool drainRequestSeen = false;
};

// Helper to advance clock
void tick(Vnpu_core_top* dut, VerilatedContext* contextp) {
    dut->clk = 0; contextp->timeInc(1); dut->eval();
    dut->clk = 1; contextp->timeInc(1); dut->eval();
}

void sampleCoverage(Vnpu_core_top* dut, CoreCoverageState* coverageState) {
    const auto* root = dut->rootp;
    const bool forwardingHit = (root->npu_core_top__DOT__u_psum_buffer__DOT__acc_valid_q != 0)
        && (root->npu_core_top__DOT__u_psum_buffer__DOT__last_write_valid != 0)
        && (root->npu_core_top__DOT__u_psum_buffer__DOT__acc_addr_q
            == root->npu_core_top__DOT__u_psum_buffer__DOT__last_write_addr);
    coverageState->forwardingHitSeen = coverageState->forwardingHitSeen || forwardingHit;
    coverageState->drainRequestSeen = coverageState->drainRequestSeen || (dut->drain_re != 0);
}

void tickAndSample(Vnpu_core_top* dut, VerilatedContext* contextp, CoreCoverageState* coverageState) {
    dut->clk = 0;
    contextp->timeInc(1);
    dut->eval();
    dut->clk = 1;
    contextp->timeInc(1);
    dut->eval();
    sampleCoverage(dut, coverageState);
}

void writeReplayReport(const PackageData& package,
                       const std::vector<std::string>& mismatchLines,
                       int checkedLanes) {
    fs::path reportPath = package.packageDir / "replay_report.txt";
    std::ofstream report(reportPath);
    if (!report) {
        throw std::runtime_error("Failed to write replay report: " + reportPath.string());
    }

    report << "package=" << package.manifest.packageId << "\n";
    report << "k_passes=" << package.manifest.kTileCount << "\n";
    report << "drained_rows=" << package.manifest.drainAddresses.size() << "\n";
    report << "checked_lanes=" << checkedLanes << "\n";
    report << "mismatch_count=" << mismatchLines.size() << "\n";
    if (mismatchLines.empty()) {
        report << "status=PASS\n";
    } else {
        report << "status=FAIL\n";
        report << "details:\n";
        for (const auto& line : mismatchLines) {
            report << line << "\n";
        }
    }
}

void writeCoverageReport(const PackageData& package, const CoreCoverageState& coverageState) {
    fs::path reportPath = package.packageDir / "replay_coverage.txt";
    std::ofstream report(reportPath);
    if (!report) {
        throw std::runtime_error("Failed to write replay coverage report: " + reportPath.string());
    }

    int hitCount = 0;
    hitCount += coverageState.forwardingHitSeen ? 1 : 0;
    hitCount += coverageState.drainRequestSeen ? 1 : 0;

    report << "package=" << package.manifest.packageId << "\n";
    report << "coverage_points_total=2\n";
    report << "coverage_points_hit=" << hitCount << "\n";
    report << "coverage_points_missed=" << (2 - hitCount) << "\n";
    report << "cp_forwarding_hit_seen=" << (coverageState.forwardingHitSeen ? "HIT" : "MISS")
           << " note=core_runner_same_address_forwarding\n";
    report << "cp_drain_request_seen=" << (coverageState.drainRequestSeen ? "HIT" : "MISS")
           << " note=core_runner_drain_request\n";
}

void clearInputs(Vnpu_core_top* dut) {
    dut->acc_valid = 0;
    dut->acc_clear = 0;
    dut->acc_addr = 0;
    dut->drain_re = 0;
    dut->drain_addr = 0;
    dut->weight_load_en = 0;
    for (int i = 0; i < 4; ++i) {
        dut->sram_act_in[i] = 0;
        dut->sram_weight_in[i] = 0;
    }
}

void packVector16x8(WData* target, const std::array<uint8_t, 16>& values) {
    for (int i = 0; i < 4; ++i) {
        target[i] = 0;
    }
    for (int lane = 0; lane < 16; ++lane) {
        int wordIndex = lane / 4;
        int byteOffset = (lane % 4) * 8;
        target[wordIndex] |= static_cast<WData>(values[lane]) << byteOffset;
    }
}

bool policyAccClear(const std::string& policy, int passIndex) {
    if (policy == "first_pass_overwrite") {
        return passIndex == 0;
    }
    if (policy == "always_overwrite") {
        return true;
    }
    if (policy == "always_accumulate") {
        return false;
    }
    throw std::runtime_error("Replay driver error: unsupported policy");
}

void resetDut(Vnpu_core_top* dut, VerilatedContext* contextp, CoreCoverageState* coverageState) {
    dut->clk = 0;
    dut->rst_n = 0;
    clearInputs(dut);
    for (int i = 0; i < 10; ++i) {
        tickAndSample(dut, contextp, coverageState);
    }
    dut->rst_n = 1;
}

void runReplay(Vnpu_core_top* dut, VerilatedContext* contextp, const PackageData& package, CoreCoverageState* coverageState) {
    const Manifest& manifest = package.manifest;

    if (!manifest.accAddrSequence.empty() && static_cast<int>(manifest.accAddrSequence.size()) != manifest.seqLen) {
        throw std::runtime_error("Package error: acc_addr_sequence length must match seq_len");
    }
    if (!manifest.accClearSequence.empty() && static_cast<int>(manifest.accClearSequence.size()) != manifest.seqLen) {
        throw std::runtime_error("Package error: acc_clear_sequence length must match seq_len");
    }

    std::cout << "[REPLAY] package=" << manifest.packageId << "\n";

    for (int pass = 0; pass < manifest.kTileCount; ++pass) {
        std::cout << "[REPLAY] K pass " << pass << " weight preload\n";
        for (int row = 0; row < 16; ++row) {
            packVector16x8(dut->sram_weight_in, package.weightRows[pass * 16 + row]);
            dut->weight_load_en = static_cast<uint16_t>(1u << row);
            tickAndSample(dut, contextp, coverageState);
        }
        dut->weight_load_en = 0;
        for (int i = 0; i < 4; ++i) {
            dut->sram_weight_in[i] = 0;
        }

        std::cout << "[REPLAY] K pass " << pass << " execute\n";
        for (int row = 0; row < manifest.seqLen; ++row) {
            packVector16x8(dut->sram_act_in, package.activationRows[pass * manifest.seqLen + row]);
            dut->acc_valid = 1;
            dut->acc_clear = static_cast<uint8_t>(manifest.accClearSequence.empty()
                ? (policyAccClear(manifest.accClearPolicy, pass) ? 1 : 0)
                : (manifest.accClearSequence[row] != 0 ? 1 : 0));
            dut->acc_addr = static_cast<uint16_t>(manifest.accAddrSequence.empty() ? row : manifest.accAddrSequence[row]);
            tickAndSample(dut, contextp, coverageState);
        }

        dut->acc_valid = 0;
        dut->acc_clear = 0;
        dut->acc_addr = 0;
        for (int i = 0; i < 4; ++i) {
            dut->sram_act_in[i] = 0;
        }
    }

    std::cout << "[REPLAY] Flush 35 cycles\n";
    for (int i = 0; i < 35; ++i) {
        tickAndSample(dut, contextp, coverageState);
    }
}

int compareReplay(Vnpu_core_top* dut, VerilatedContext* contextp, const PackageData& package, CoreCoverageState* coverageState) {
    const Manifest& manifest = package.manifest;
    int mismatchCount = 0;
    int checkedLanes = 0;
    std::vector<std::string> mismatchLines;

    for (int drainAddr : manifest.drainAddresses) {
        auto goldenIt = package.goldenByDrainAddr.find(drainAddr);
        if (goldenIt == package.goldenByDrainAddr.end()) {
            throw std::runtime_error("Package error: missing golden entry for drain_addr=" + std::to_string(drainAddr));
        }

        dut->drain_addr = static_cast<uint16_t>(drainAddr);
        dut->drain_re = 1;
        tickAndSample(dut, contextp, coverageState);
        dut->drain_re = 0;
        tickAndSample(dut, contextp, coverageState);

        const GoldenEntry& golden = goldenIt->second;
        for (int lane = 0; lane < 16; ++lane) {
            ++checkedLanes;
            int32_t expected = golden.vector[lane];
            int32_t observed = static_cast<int32_t>(dut->psum_drain_out[lane]);
            if (expected != observed) {
                ++mismatchCount;
                std::ostringstream line;
                line << "[MISMATCH] package=" << manifest.packageId
                     << " drain_addr=" << drainAddr
                     << " lane=" << lane
                     << " global=(row=" << (manifest.mTileBase + drainAddr)
                     << ", col=" << (manifest.nTileBase + lane)
                     << ") expected=" << expected
                     << " observed=" << observed;
                mismatchLines.push_back(line.str());
                std::cerr << line.str() << "\n";
            }
        }
    }

    writeReplayReport(package, mismatchLines, checkedLanes);
    writeCoverageReport(package, *coverageState);

    if (mismatchCount == 0) {
        std::cout << "[REPLAY PASS] package=" << manifest.packageId
                  << " k_passes=" << manifest.kTileCount
                  << " drained_rows=" << manifest.drainAddresses.size()
                  << " checked_lanes=" << checkedLanes
                  << " report=" << (package.packageDir / "replay_report.txt").string() << "\n";
    } else {
        std::cout << "[REPLAY FAIL] package=" << manifest.packageId
                  << " mismatches=" << mismatchCount
                  << " report=" << (package.packageDir / "replay_report.txt").string() << "\n";
    }

    return mismatchCount;
}

fs::path resolvePackagePath(int argc, char** argv) {
    if (argc > 1) {
        return fs::path(argv[1]);
    }

    const std::vector<fs::path> candidates = {
        fs::path("../workloads/reference_gemm_tile_m0_n0_k0to15"),
        fs::path("workloads/reference_gemm_tile_m0_n0_k0to15")
    };

    for (const auto& candidate : candidates) {
        if (fs::exists(candidate / "manifest.json")) {
            return candidate;
        }
    }

    throw std::runtime_error("Failed to resolve default workload package path");
}

int main(int argc, char** argv) {
    try {
        fs::path packagePath = resolvePackagePath(argc, argv);
        PackageData package = replay::loadPackage(packagePath);

        VerilatedContext* contextp = new VerilatedContext;
        contextp->commandArgs(argc, argv);
        Vnpu_core_top* dut = new Vnpu_core_top{contextp};
        CoreCoverageState coverageState;

        resetDut(dut, contextp, &coverageState);
        runReplay(dut, contextp, package, &coverageState);
        int mismatchCount = compareReplay(dut, contextp, package, &coverageState);

        dut->final();
        delete dut;
        delete contextp;

        return mismatchCount == 0 ? 0 : 1;
    } catch (const std::exception& ex) {
        std::cerr << "[REPLAY ERROR] " << ex.what() << "\n";
        return 2;
    }
}
