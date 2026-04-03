#pragma once

#include <array>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <map>
#include <optional>
#include <regex>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

namespace replay {

namespace fs = std::filesystem;

struct Manifest {
    std::string packageId;
    std::string activationsFile;
    std::string weightsFile;
    std::string goldenFile;
    std::string accClearPolicy;
    int seqLen = 0;
    int kTileCount = 0;
    int mTileBase = 0;
    int nTileBase = 0;
    int tileRows = 0;
    int tileCols = 0;
    std::vector<int> drainAddresses;
    std::vector<int> accAddrSequence;
    std::vector<int> accClearSequence;
};

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

struct SystemConfig {
    bool present = false;
    uint64_t weightsSrcAddr = 0;
    uint64_t activationsSrcAddr = 0;
    int weightsTotalBytes = 0;
    int activationsTotalBytes = 0;
    int weightBurstLen = 0;
    int weightTotalBursts = 0;
    int activationBurstLen = 0;
    int activationTotalBursts = 0;
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

struct GoldenEntry {
    int drainAddr = 0;
    int globalRow = 0;
    int globalColBase = 0;
    std::array<int32_t, 16> vector{};
};

using ReplayLaneBits = uint8_t;
using ReplaySignedLane = int8_t;
using ReplayRow16x8 = std::array<ReplayLaneBits, 16>;

struct PackageData {
    fs::path packageDir;
    Manifest manifest;
    SystemConfig system;
    std::vector<ReplayRow16x8> activationRows;
    std::vector<ReplayRow16x8> weightRows;
    std::map<int, GoldenEntry> goldenByDrainAddr;
};

inline ReplaySignedLane interpretLaneAsSigned(ReplayLaneBits value) {
    return static_cast<ReplaySignedLane>(value);
}

inline ReplayLaneBits prepareLaneForDutDrive(ReplayLaneBits value) {
    return static_cast<ReplayLaneBits>(interpretLaneAsSigned(value));
}

inline std::string readTextFile(const fs::path& path) {
    std::ifstream input(path);
    if (!input) {
        throw std::runtime_error("Failed to open file: " + path.string());
    }

    std::ostringstream buffer;
    buffer << input.rdbuf();
    return buffer.str();
}

inline bool tryExtractString(const std::string& text, const std::string& key, std::string* outValue) {
    std::regex pattern("\\\"" + key + "\\\"\\s*:\\s*\\\"([^\\\"]+)\\\"");
    std::smatch match;
    if (!std::regex_search(text, match, pattern)) {
        return false;
    }
    *outValue = match[1].str();
    return true;
}

inline std::string extractString(const std::string& text, const std::string& key) {
    std::string value;
    if (!tryExtractString(text, key, &value)) {
        throw std::runtime_error("Missing string field: " + key);
    }
    return value;
}

inline bool tryExtractInt(const std::string& text, const std::string& key, int* outValue) {
    std::regex pattern("\\\"" + key + "\\\"\\s*:\\s*(-?\\d+)");
    std::smatch match;
    if (!std::regex_search(text, match, pattern)) {
        return false;
    }
    *outValue = std::stoi(match[1].str());
    return true;
}

inline int extractInt(const std::string& text, const std::string& key) {
    int value = 0;
    if (!tryExtractInt(text, key, &value)) {
        throw std::runtime_error("Missing integer field: " + key);
    }
    return value;
}

inline bool tryExtractUInt64(const std::string& text, const std::string& key, uint64_t* outValue) {
    std::regex pattern("\\\"" + key + "\\\"\\s*:\\s*(\\d+)");
    std::smatch match;
    if (!std::regex_search(text, match, pattern)) {
        return false;
    }
    *outValue = static_cast<uint64_t>(std::stoull(match[1].str()));
    return true;
}

inline uint64_t extractUInt64(const std::string& text, const std::string& key) {
    uint64_t value = 0;
    if (!tryExtractUInt64(text, key, &value)) {
        throw std::runtime_error("Missing integer field: " + key);
    }
    return value;
}

inline bool tryExtractBool(const std::string& text, const std::string& key, bool* outValue) {
    std::regex pattern("\\\"" + key + "\\\"\\s*:\\s*(true|false|0|1)");
    std::smatch match;
    if (!std::regex_search(text, match, pattern)) {
        return false;
    }
    const std::string value = match[1].str();
    *outValue = (value == "true" || value == "1");
    return true;
}

inline std::vector<int> extractIntArray(const std::string& text, const std::string& key) {
    std::regex pattern("\\\"" + key + "\\\"\\s*:\\s*\\[([^\\]]*)\\]");
    std::smatch match;
    if (!std::regex_search(text, match, pattern)) {
        throw std::runtime_error("Missing integer array field: " + key);
    }

    std::vector<int> values;
    std::regex numberPattern("-?\\d+");
    auto begin = std::sregex_iterator(match[1].first, match[1].second, numberPattern);
    auto end = std::sregex_iterator();
    for (auto it = begin; it != end; ++it) {
        values.push_back(std::stoi((*it).str()));
    }
    return values;
}

inline std::vector<ReplayRow16x8> parseRows16x8(const std::string& text) {
    std::regex rowsPattern("\\\"rows\\\"\\s*:\\s*\\[([\\s\\S]*)\\]");
    std::smatch match;
    if (!std::regex_search(text, match, rowsPattern)) {
        throw std::runtime_error("Missing rows array in payload");
    }

    std::vector<ReplayRow16x8> rows;
    std::regex rowPattern("\\[([^\\]]+)\\]");
    auto begin = std::sregex_iterator(match[1].first, match[1].second, rowPattern);
    auto end = std::sregex_iterator();
    for (auto it = begin; it != end; ++it) {
        ReplayRow16x8 row{};
        std::regex numberPattern("-?\\d+");
        auto numBegin = std::sregex_iterator((*it)[1].first, (*it)[1].second, numberPattern);
        auto numEnd = std::sregex_iterator();
        int index = 0;
        for (auto numIt = numBegin; numIt != numEnd; ++numIt) {
            if (index >= 16) {
                throw std::runtime_error("Row contains more than 16 elements");
            }
            row[index++] = static_cast<ReplayLaneBits>(std::stoi((*numIt).str()));
        }
        if (index != 16) {
            throw std::runtime_error("Row does not contain exactly 16 elements");
        }
        rows.push_back(row);
    }

    return rows;
}

inline std::map<int, GoldenEntry> parseGolden(const std::string& text) {
    std::map<int, GoldenEntry> goldenByAddr;
    std::regex objectPattern("\\{\\s*\\\"drain_addr\\\"[\\s\\S]*?\\}");
    auto begin = std::sregex_iterator(text.begin(), text.end(), objectPattern);
    auto end = std::sregex_iterator();

    for (auto it = begin; it != end; ++it) {
        const std::string objectText = it->str();
        GoldenEntry entry;
        entry.drainAddr = extractInt(objectText, "drain_addr");
        entry.globalRow = extractInt(objectText, "global_row");
        entry.globalColBase = extractInt(objectText, "global_col_base");

        std::regex vectorPattern("\\\"vector\\\"\\s*:\\s*\\[([^\\]]*)\\]");
        std::smatch vectorMatch;
        if (!std::regex_search(objectText, vectorMatch, vectorPattern)) {
            throw std::runtime_error("Missing golden vector for drain_addr=" + std::to_string(entry.drainAddr));
        }

        std::regex numberPattern("-?\\d+");
        auto numBegin = std::sregex_iterator(vectorMatch[1].first, vectorMatch[1].second, numberPattern);
        auto numEnd = std::sregex_iterator();
        int index = 0;
        for (auto numIt = numBegin; numIt != numEnd; ++numIt) {
            if (index >= 16) {
                throw std::runtime_error("Golden vector contains more than 16 elements");
            }
            entry.vector[index++] = static_cast<int32_t>(std::stoi((*numIt).str()));
        }
        if (index < 1) {
            throw std::runtime_error("Golden vector must contain at least one element");
        }

        goldenByAddr[entry.drainAddr] = entry;
    }

    if (goldenByAddr.empty()) {
        throw std::runtime_error("No golden entries found");
    }

    return goldenByAddr;
}

inline Manifest parseManifest(const std::string& text) {
    Manifest manifest;
    manifest.packageId = extractString(text, "package_id");
    manifest.activationsFile = extractString(text, "activations");
    manifest.weightsFile = extractString(text, "weights");
    manifest.goldenFile = extractString(text, "golden");
    manifest.accClearPolicy = extractString(text, "acc_clear_policy");
    manifest.seqLen = extractInt(text, "seq_len");
    manifest.kTileCount = extractInt(text, "k_tile_count");
    manifest.mTileBase = extractInt(text, "m_tile_base");
    manifest.nTileBase = extractInt(text, "n_tile_base");
    manifest.tileRows = extractInt(text, "tile_rows");
    manifest.tileCols = extractInt(text, "tile_cols");
    manifest.drainAddresses = extractIntArray(text, "drain_addresses");
    int dummy = 0;
    if (tryExtractInt(text, "seq_len", &dummy)) {
        std::regex fieldPattern("\\\"acc_addr_sequence\\\"\\s*:");
        if (std::regex_search(text, fieldPattern)) {
            manifest.accAddrSequence = extractIntArray(text, "acc_addr_sequence");
        }
        std::regex clearPattern("\\\"acc_clear_sequence\\\"\\s*:");
        if (std::regex_search(text, clearPattern)) {
            manifest.accClearSequence = extractIntArray(text, "acc_clear_sequence");
        }
    }
    return manifest;
}

inline SystemConfig parseSystemConfig(const std::string& text) {
    SystemConfig system;
    if (!tryExtractUInt64(text, "weights_src_addr", &system.weightsSrcAddr)) {
        return system;
    }

    system.present = true;
    system.activationsSrcAddr = extractUInt64(text, "activations_src_addr");
    system.weightsTotalBytes = extractInt(text, "weights_total_bytes");
    system.activationsTotalBytes = extractInt(text, "activations_total_bytes");
    system.weightBurstLen = extractInt(text, "weight_burst_len");
    system.weightTotalBursts = extractInt(text, "weight_total_bursts");
    system.activationBurstLen = extractInt(text, "activation_burst_len");
    system.activationTotalBursts = extractInt(text, "activation_total_bursts");
    system.initialBankSel = extractInt(text, "initial_bank_sel");
    if (!tryExtractBool(text, "swap_before_weight_preload", &system.swapBeforeWeightPreload)) {
        throw std::runtime_error("Missing boolean field: swap_before_weight_preload");
    }
    if (!tryExtractBool(text, "swap_before_execute", &system.swapBeforeExecute)) {
        throw std::runtime_error("Missing boolean field: swap_before_execute");
    }
    system.weightTarget = extractString(text, "weight_target");
    system.activationTarget = extractString(text, "activation_target");
    system.expectedDmaDoneCount = extractInt(text, "expected_dma_done_count");
    system.expectedNpuDoneCount = extractInt(text, "expected_npu_done_count");
    system.flushCycles = extractInt(text, "flush_cycles");
    int verificationAccAddrOverride = 0;
    if (tryExtractInt(text, "verification_acc_addr_override", &verificationAccAddrOverride)) {
        system.verificationAccAddrOverride = verificationAccAddrOverride;
    }
    bool verificationOneShotAccClear = false;
    if (tryExtractBool(text, "verification_one_shot_acc_clear", &verificationOneShotAccClear)) {
        system.verificationOneShotAccClear = verificationOneShotAccClear;
    }
    bool expectForwardingHit = false;
    if (tryExtractBool(text, "expect_forwarding_hit", &expectForwardingHit)) {
        system.expectForwardingHit = expectForwardingHit;
    }

    std::regex passesPattern("\\\"passes\\\"\\s*:\\s*\\[([\\s\\S]*?)\\]");
    std::smatch passesMatch;
    if (std::regex_search(text, passesMatch, passesPattern)) {
        const std::string passesText = passesMatch[1].str();
        std::regex objectPattern("\\{[\\s\\S]*?\\}");
        auto begin = std::sregex_iterator(passesText.begin(), passesText.end(), objectPattern);
        auto end = std::sregex_iterator();
        for (auto it = begin; it != end; ++it) {
            const std::string passText = it->str();
            SystemPass pass;
            pass.passIndex = extractInt(passText, "pass_index");
            pass.weightsSrcAddr = extractUInt64(passText, "weights_src_addr");
            pass.activationsSrcAddr = extractUInt64(passText, "activations_src_addr");
            pass.weightBurstLen = extractInt(passText, "weight_burst_len");
            pass.weightTotalBursts = extractInt(passText, "weight_total_bursts");
            pass.activationBurstLen = extractInt(passText, "activation_burst_len");
            pass.activationTotalBursts = extractInt(passText, "activation_total_bursts");
            bool accClear = false;
            if (!tryExtractBool(passText, "acc_clear", &accClear)) {
                throw std::runtime_error("Missing boolean field: acc_clear");
            }
            pass.accClear = accClear;
            system.passes.push_back(pass);
        }
    }

    return system;
}

inline void validateCommonManifest(const Manifest& manifest) {
    if (manifest.seqLen < 1) {
        throw std::runtime_error("Package error: execution.seq_len must be >= 1");
    }
    if (manifest.kTileCount < 1) {
        throw std::runtime_error("Package error: execution.k_tile_count must be >= 1");
    }
    if (manifest.tileCols < 1 || manifest.tileCols > 16) {
        throw std::runtime_error("Package error: tile.tile_cols must be within [1, 16] for the current replay flow");
    }
    if (manifest.tileRows != manifest.seqLen) {
        throw std::runtime_error("Package error: tile.tile_rows must match execution.seq_len in the current replay flow");
    }
    if (manifest.accClearPolicy != "first_pass_overwrite" &&
        manifest.accClearPolicy != "always_overwrite" &&
        manifest.accClearPolicy != "always_accumulate") {
        throw std::runtime_error("Replay driver error: unsupported acc_clear_policy: " + manifest.accClearPolicy);
    }
}

inline PackageData loadPackage(const fs::path& packageDir) {
    PackageData package;
    package.packageDir = packageDir;

    const std::string manifestText = readTextFile(packageDir / "manifest.json");
    package.manifest = parseManifest(manifestText);
    package.system = parseSystemConfig(manifestText);
    validateCommonManifest(package.manifest);

    package.activationRows = parseRows16x8(readTextFile(packageDir / package.manifest.activationsFile));
    package.weightRows = parseRows16x8(readTextFile(packageDir / package.manifest.weightsFile));
    package.goldenByDrainAddr = parseGolden(readTextFile(packageDir / package.manifest.goldenFile));

    const int expectedActivationRows = package.manifest.seqLen * package.manifest.kTileCount;
    const int expectedWeightRows = 16 * package.manifest.kTileCount;

    if (static_cast<int>(package.activationRows.size()) < expectedActivationRows) {
        throw std::runtime_error("Package error: activation row count must be at least seq_len * k_tile_count");
    }
    if (static_cast<int>(package.weightRows.size()) < expectedWeightRows) {
        throw std::runtime_error("Package error: weight row count must be at least 16 * k_tile_count");
    }
    if (static_cast<int>(package.activationRows.size()) > expectedActivationRows) {
        package.activationRows.resize(expectedActivationRows);
    }
    if (static_cast<int>(package.weightRows.size()) > expectedWeightRows) {
        package.weightRows.resize(expectedWeightRows);
    }
    if (static_cast<int>(package.goldenByDrainAddr.size()) < static_cast<int>(package.manifest.drainAddresses.size())) {
        throw std::runtime_error("Package error: golden entries are missing for one or more drain addresses");
    }

    return package;
}

}  // namespace replay