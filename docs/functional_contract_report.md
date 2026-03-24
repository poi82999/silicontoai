# Functional Contract Report

## Scope

This document defines the functional contract of the NPU at the system and core boundaries.

The purpose of this report is to make the following items explicit.

- input and output format expectations
- phase-by-phase control intent
- timing semantics that affect correctness
- accumulator and drain behavior
- completion and acknowledgment rules
- pass and fail interpretation for contract-driven verification

This document is intentionally written as both a contract and a learning guide.
The hardware pipeline is explained with a factory analogy so that each control signal can be understood in the context of the full end-to-end process.

---

## System-Level Process Overview

At a high level, one NPU operation is organized as the following process.

1. DMA reads a block of source data from main memory.
2. The data is written into the currently writable SRAM bank set.
3. Bank ownership is swapped so the core reads from the newly prepared bank set.
4. The core either preloads weights into the systolic array or executes activation-driven MAC computation.
5. The core waits for pipeline residue to flush into the accumulator.
6. Accumulated output vectors are drained out for observation or comparison.
7. The host acknowledges completion and allows the system to return to idle.

This ordering is not just a convenient test sequence.
It is the intended contract between software control, system integration logic, SRAM staging, the compute core, and verification.

---

## Factory Analogy Of The End-To-End Pipeline

The full system can be understood as a factory with separate receiving, staging, production, storage, and shipping areas.

- Main memory is the external warehouse.
- DMA is the unloading forklift that brings material into the plant.
- Ping-pong SRAM banks are the staging warehouses.
- Bank swap logic is the warehouse manager that decides which side is being filled and which side is feeding production.
- Weight preload is the tooling setup step that mounts fixed molds into the machine.
- Activation execution is the actual production run.
- The accumulator is the finished-goods storage rack where partial products are combined into final inventory.
- Drain is the shipping request that pulls finished goods out for inspection or delivery.

This analogy matters because most control signals do not carry data.
They define when data is meaningful, where it is allowed to go, and whether new results overwrite or accumulate with prior state.

---

## Control Phase Definitions

The intended top-level control phases are listed below.

### 1. DMA Load Phase

The system imports a contiguous logical data region from main memory into the currently writable SRAM bank set.

Purpose:

- stage activations or weights before compute begins
- decouple external memory timing from core consumption timing

Factory analogy:

- trucks unload materials into the receiving warehouse

### 2. Bank Swap Phase

The writable SRAM bank set and the readable SRAM bank set exchange roles.

Purpose:

- prevent DMA write traffic and core read traffic from colliding on the same storage bank
- support ping-pong operation across consecutive workloads

Factory analogy:

- the receiving warehouse becomes the production feed warehouse, and the previous production feed warehouse becomes available for new deliveries

### 3. Weight Preload Phase

Weights are read from SRAM and spatially loaded into the systolic array processing elements.

Purpose:

- establish weight-stationary state before activation execution begins

Factory analogy:

- install molds or tooling into each machine station before production starts

### 4. Activation Execute Phase

Activation vectors are read from SRAM and streamed into the array.
The array performs MAC operations and produces partial sums that eventually reach the accumulator.

Purpose:

- perform the actual compute work of the tile

Factory analogy:

- feed raw material into the production line once the tooling is already mounted

### 5. Flush Phase

The system waits after the last activation input so that all in-flight partial sums exit the pipeline and are written into the accumulator.

Purpose:

- guarantee that the final visible state includes all work initiated in the execute phase

Factory analogy:

- stop feeding new material, but wait until everything already on the conveyor reaches finished-goods storage

### 6. Drain Phase

The host reads completed accumulated output vectors from the accumulator.

Purpose:

- observe final results for checking, transfer, or replay validation

Factory analogy:

- pull packaged goods from storage racks to the shipping dock for inspection

### 7. Done/Ack Phase

The system holds completion status until the host explicitly acknowledges that the phase result has been observed.

Purpose:

- avoid losing a completion event due to a one-cycle pulse or asynchronous software polling

Factory analogy:

- production reports completion and waits for the supervisor to sign off before starting the next order

---

## Signal Summary Table

The table below compresses the most important signal-level rules into one view.

| Signal | Dir | Width | Current RTL contract | Factory analogy | Milestone fit |
|---|---|---:|---|---|---|
| `mmio_start_dma` | in | 1 | Issue as a 1-cycle pulse only when DMA is idle. | Start one unloading job. | Appropriate for L0-L5. |
| `mmio_dma_target` | in | 1 | `0=activation`, `1=weight`; must remain correct for the full DMA job. | Label shipment type. | Appropriate for L0-L5. |
| `mmio_src_addr` | in | 64 | Byte address. Must be aligned to one AXI beat. In the current system configuration, one beat is 16 bytes. | Pickup address in the external warehouse. | Appropriate for L0-L5. |
| `mmio_burst_len` | in | 8 | AXI `arlen` value. Actual beats transferred per burst are `mmio_burst_len + 1`. | Boxes per forklift pass. | Appropriate for L0-L5. |
| `mmio_total_bursts` | in | 16 | Number of AR burst transactions in one DMA job. | Number of forklift passes. | Appropriate for L0-L5. |
| `mmio_dma_done` | out | 1 | One-cycle completion pulse from DMA. Not sticky. | Receiving completion lamp flashes once. | Acceptable for testbench-driven L0-L5; software-visible SoC integration may later prefer sticky status. |
| `mmio_swap_banks` | in | 1 | Must be a 1-cycle pulse. Holding high for multiple cycles causes repeated toggles. | Swap receiving and feed warehouses. | Appropriate now; must remain pulse-based unless guarded in RTL. |
| `mmio_start_npu` | in | 1 | Must be a 1-cycle pulse issued in `ST_IDLE`. | Start setup or production. | Appropriate for L0-L5. |
| `mmio_npu_mode` | in | 1 | `0=execute activations`, `1=preload weights`. Must be valid when `mmio_start_npu` is sampled. | Select setup mode or production mode. | Appropriate for L0-L5. |
| `mmio_npu_acc_clear` | in | 1 | Level control forwarded into the core pipeline. Must remain stable for the full execute phase in current RTL. | Clear shelf or accumulate on shelf. | Acceptable for current directed/replay flows; future mixed-policy workloads may need finer granularity. |
| `mmio_npu_seq_len` | in | 16 | Number of activation vectors to execute. Must be greater than 0 in execute mode. | Number of material batches on the line. | Appropriate for L0-L5. |
| `mmio_npu_done` | out | 1 | Sticky completion indication held until `mmio_clear_done`. | Completion lamp stays on. | Appropriate for L0-L5. |
| `mmio_clear_done` | in | 1 | Acknowledge `mmio_npu_done`; use as a 1-cycle pulse in `ST_DONE`. | Supervisor sign-off. | Appropriate for L0-L5. |
| `weight_load_en` | in/core | 16 | One-hot load enable wave across the 16 preload cycles. | Install tooling into one station at a time. | Appropriate for L0-L5. |
| `acc_valid` | in/core | 1 | Logical compute-valid at the core boundary; accumulator commit occurs after 31-cycle internal alignment. | Finished goods acceptance light. | Appropriate for L0-L5. |
| `acc_addr` | in/core | 9 | Tile-local accumulator slot index carried with the compute event and aligned through the pipeline. | Shelf index. | Appropriate for L0-L5 if workload packages use the same address meaning. |
| `drain_re` | in | 1 | Must be a 1-cycle pulse. Read request is sampled on one clock edge; `psum_drain_out` updates on the next clock edge. | Pick request from storage. | Appropriate for L0-L5. |
| `drain_addr` | in | 9 | Address sampled with `drain_re`; must remain stable for the request cycle. | Shelf to pick from. | Appropriate for L0-L5. |
| `psum_drain_out` | out | 16 x 32 | Holds the drained vector from the most recent completed drain read. New valid data appears one cycle after the request edge. | Goods at the shipping dock. | Appropriate for L0-L5. |

---

## DMA Contract

The DMA interface controls how source data enters the on-chip staging banks.

### `mmio_start_dma`

Role in pipeline:

- starts one DMA ingestion phase

Factory analogy:

- dispatches a forklift job to unload a specific shipment into the plant

Timing semantics:

- this signal is intended to act as a start request from the host
- it should be driven as a 1-cycle pulse
- a new DMA request is legal only when the previous DMA operation is complete

Contract rule:

- software must not issue a new DMA start for overlapping work before `mmio_dma_done` indicates the prior transfer is complete

### `mmio_dma_target`

Role in pipeline:

- selects whether the incoming DMA payload is activation data or weight data

Factory analogy:

- labels the shipment as either raw material or tooling inventory

Encoding:

- `0`: activation load
- `1`: weight load

Contract rule:

- the host must program this field consistently with the intended downstream compute phase

### `mmio_src_addr`

Role in pipeline:

- provides the starting location in main memory for the DMA read

Factory analogy:

- gives the pickup aisle and rack location for the forklift route

Timing and format semantics:

- this field is a byte address, not a beat index
- the DMA AR generator copies this value directly into `araddr`
- each accepted burst increments `araddr` by `(mmio_burst_len + 1) * AXI_BEAT_BYTES`
- in the current `npu_system_top` configuration, `AXI_DATA_WIDTH = 128`, so `AXI_BEAT_BYTES = 16`

Current implementation consequence:

- software and replay tooling must program `mmio_src_addr` in bytes
- source addresses should be aligned to 16 bytes in the current system configuration

Contract rule:

- the address must reference a data region whose layout matches the programmed target type and vector format

### `mmio_burst_len`

Role in pipeline:

- determines the AXI burst length for each DMA request chunk

Factory analogy:

- determines how many boxes are loaded in one continuous forklift pass

Contract rule:

- software must treat this field as part of the AXI transaction definition, not as an abstract tensor length
- the actual number of beats read by one burst is `mmio_burst_len + 1`

### `mmio_total_bursts`

Role in pipeline:

- determines how many burst transactions are issued for the current DMA job

Factory analogy:

- determines how many forklift passes are required to finish the unloading order

Contract rule:

- the combination of source address, burst length, and total bursts defines the full DMA transfer extent
- completion is defined by receiving the last response beat of the `mmio_total_bursts`-th issued burst

### `mmio_dma_done`

Role in pipeline:

- reports completion of the programmed DMA job

Factory analogy:

- signals that warehouse receiving has finished unloading the current shipment

Timing semantics:

- in the current RTL, this is a one-cycle pulse generated when the final burst response completes
- it is not sticky and is not separately acknowledged

Contract rule:

- bank swap or compute that depends on the loaded data must not start until this completion condition is observed

---

## Bank Swap Contract

Ping-pong SRAM usage is part of the functional contract, not an implementation detail.

### `mmio_swap_banks`

Role in pipeline:

- toggles which SRAM bank set is writable by DMA and which bank set is readable by the core

Factory analogy:

- changes which warehouse is designated for receiving and which one is designated for production feed

Timing semantics:

- in the current RTL, `bank_sel` toggles on every rising clock edge while `mmio_swap_banks` is high
- therefore the legal programming model is a single-cycle pulse only

Contract rule:

- bank swap is legal only at a phase boundary where the previously written data is ready for consumption and the previously read bank is safe to reuse
- software must never hold this signal high across multiple cycles

### `bank_sel`

Role in pipeline:

- internally records the current ping-pong ownership state

Factory analogy:

- the warehouse operation board that shows which building is in receiving mode and which building is in production-feed mode

Contract rule:

- activation and weight routing must both follow the same bank ownership convention for a given phase

---

## NPU Mode Contract

The NPU start request must always be interpreted together with the selected mode.

### `mmio_start_npu`

Role in pipeline:

- starts a core phase

Factory analogy:

- presses the production control button that either starts tooling setup or starts the production run

Timing semantics:

- the legal programming model is a single-cycle pulse issued while the system is in `ST_IDLE`

Contract rule:

- this signal alone does not define the action; `mmio_npu_mode` determines which phase is requested

### `mmio_npu_mode`

Role in pipeline:

- selects between weight preload and activation execution

Factory analogy:

- selects between setup mode and production mode on the machine control panel

Encoding:

- `0`: activation execute mode
- `1`: weight preload mode

Contract rule:

- software must not request activation execution unless the required weights have already been staged and preloaded

### `mmio_npu_seq_len`

Role in pipeline:

- defines how many activation input steps the execute phase should consume

Factory analogy:

- determines how many raw-material batches will enter the production line for the current order

Timing semantics:

- in execute mode, the current RTL transitions out of `ST_EXEC_ACT` when `exec_cnt == mmio_npu_seq_len - 1`
- this makes `mmio_npu_seq_len = 0` an illegal value for execute mode

Contract rule:

- this field must match the logical workload fragment being executed and must not exceed the staged activation data prepared in SRAM
- execute mode requires `mmio_npu_seq_len >= 1`

### `mmio_npu_done`

Role in pipeline:

- indicates that the requested core phase has finished, including the required post-processing wait for pipeline completion

Factory analogy:

- indicates that either tooling setup or the production batch has finished and the station is awaiting supervisor acknowledgment

Contract rule:

- this signal is a phase completion indicator, not a final end-to-end replay pass indicator
- in execute mode, completion includes the explicit flush interval after the last activation input

### `mmio_clear_done`

Role in pipeline:

- acknowledges that the host observed the done condition and permits return to idle

Factory analogy:

- the supervisor signs the completion sheet so the line can accept the next order

Contract rule:

- software must acknowledge `mmio_npu_done` before expecting a clean new phase launch sequence
- the legal programming model is a single-cycle pulse while the system is in `ST_DONE`

---

## Accumulator Contract

The accumulator contract is one of the most important parts of the design because it defines how partial sums become architecturally visible outputs.

### `acc_valid`

Role in pipeline:

- marks that the current array bottom output must be committed into the accumulator

Factory analogy:

- turns on the receiving light that tells finished-goods storage to accept the product currently arriving at the end of the conveyor

Timing semantics:

- at the core interface, this signal is asserted in alignment with the logical compute step
- inside the core, it is delayed through the 31-cycle pipeline before it reaches the accumulator write-back point

Contract rule:

- verification and replay logic must reason about the delayed write-back point, not only the original request cycle

### `acc_addr`

Role in pipeline:

- selects which accumulator entry receives the current output vector

Factory analogy:

- gives the shelf index where the finished product batch must be stored

Timing semantics:

- this address travels with the corresponding compute transaction and is internally pipeline-aligned before write-back

Contract rule:

- the workload definition must map this address to a stable tile-local output meaning so that drained results can be compared against golden data

### `acc_clear`

Role in pipeline:

- selects overwrite versus accumulate behavior for the current accumulator target entry

Factory analogy:

- decides whether the target shelf is cleared for a new order or whether the incoming goods are added to existing inventory on that shelf

Encoding:

- `1`: overwrite with the new array output vector
- `0`: add the new array output vector to the existing stored vector

Timing semantics:

- this signal is interpreted together with `acc_valid` and `acc_addr`, then delayed through the core pipeline into the accumulator
- in the current system RTL, this control is driven directly from `mmio_npu_acc_clear` and is not latched only once at phase start

Contract rule:

- the first contributing partial sum for a target output slot should assert clear when a fresh result is required
- later contributions to the same output slot should deassert clear when accumulation across multiple passes is required
- because the current system-level source is a direct MMIO level, software must keep this signal stable across the full execute phase unless mid-phase semantic changes are explicitly intended and verified

Learning note:

- `acc_clear` is not just a reset-like control bit
- it defines the arithmetic meaning of the write and therefore determines whether multi-pass tiling produces a correct result or a duplicated result

### Same-Address Forwarding

Role in pipeline:

- preserves correctness when back-to-back writes target the same accumulator address

Factory analogy:

- if two boxes are scheduled for the same shelf before the rack database finishes updating, the warehouse uses the most recent local handwritten total instead of stale inventory records

Contract rule:

- consecutive writes to the same address must observe the latest committed logical value, even when the physical memory read path would otherwise return stale data

---

## Drain Contract

Drain defines how results are observed after accumulation is complete.

### `drain_re`

Role in pipeline:

- requests a read from the accumulator storage

Factory analogy:

- sends a pick request to the finished-goods warehouse

Timing semantics:

- this signal should be driven as a 1-cycle pulse
- when `drain_re` is sampled high on clock edge `N`, the requested BRAM entry is fetched on edge `N`
- `psum_drain_out` is updated on edge `N+1`
- the drained vector may therefore be sampled after the `N+1` rising edge

Contract rule:

- the host or testbench must respect the accumulator read timing when sampling output data
- holding `drain_re` high for multiple cycles issues repeated read requests in the current RTL model

### `drain_addr`

Role in pipeline:

- selects which accumulator entry to read

Factory analogy:

- identifies which storage shelf should be picked for shipment or inspection

Timing semantics:

- this address is sampled together with `drain_re`
- it must remain stable for the request cycle

Contract rule:

- the drain address space must use the same stable output-slot interpretation as the accumulation address space

### `psum_drain_out`

Role in pipeline:

- exposes the drained vector result for the requested accumulator entry

Factory analogy:

- the 16 packaged items that arrive at the shipping dock after a pick request is served

Timing semantics:

- in the current RTL, this output holds the most recently completed drain result until a later drain request updates it

Contract rule:

- comparison against expected results must occur only when the read latency requirement has been satisfied

---

## Input And Output Format Contract

The design operates on vectorized lane-based data, and the logical interpretation of those lanes must be stable across DMA, SRAM, core execution, drain, and golden comparison.

### Activation Input Format

- one SRAM read word supplies a 16-lane activation vector
- each lane is 8 bits wide
- the vector is consumed as `sram_act_in[15:0][7:0]` at the core boundary

Factory analogy:

- one tray carries 16 raw-material pieces into the machine at once

### Weight Input Format

- one SRAM read word supplies a 16-lane weight vector
- each lane is 8 bits wide
- the vector is consumed as `sram_weight_in[15:0][7:0]` at the core boundary

Factory analogy:

- one tooling rack carries 16 mold elements for installation into the array

### Drain Output Format

- one drain read returns a 16-lane output vector
- each lane is 32 bits wide
- the vector is observed as `psum_drain_out[15:0][31:0]`

Factory analogy:

- one shipping request pulls out 16 finished packages associated with one storage shelf index

Contract rule:

- workload packages, directed tests, and replay infrastructure must all use the same lane ordering and address interpretation

## Global Output Mapping Contract

L0 is not complete unless the locally visible accumulator outputs are mapped to a stable logical output coordinate system.

### Current tile-local meaning

In the current RTL, one accumulator entry stores one 16-lane output vector.

- `acc_addr` identifies the tile-local output row slot
- lane index `j` in `psum_drain_out[j]` identifies the tile-local output column within the current 16-column group

This means the current local interpretation is:

$$
	ext{local output coordinate} = (\text{row} = acc\_addr,\ \text{col} = j)
$$

### Extension to global coordinates

For workloads whose output width exceeds 16 columns, a package-level tile index must provide the global column offset.

The intended global interpretation for replay packaging is:

$$
	ext{global row} = m\_tile\_base + acc\_addr
$$

$$
	ext{global col} = n\_tile\_base + j
$$

where:

- `m_tile_base` is the starting output row index of the current workload tile
- `n_tile_base` is the starting output column index of the current 16-column tile
- `j` is the drained lane index in the range `0..15`

Contract rule:

- L2 workload packages must carry enough metadata to reconstruct `m_tile_base` and `n_tile_base`
- `acc_addr` alone is not a complete global output coordinate when the workload spans multiple output tiles
- golden data comparison must be defined against global output coordinates, even if the hardware emits tile-local vectors

Milestone guidance:

- for the current directed system flow, `m_tile_base = 0` and `n_tile_base = 0` are sufficient
- for L2 and beyond, explicit tile offsets become mandatory because replay must distinguish different 16-column output groups

---

## Timing Contract

The architectural timing assumption for the compute datapath is 31 cycles.

This timing is derived as follows.

- 15 cycles of activation skew
- 1 cycle of array propagation stage
- 15 cycles of psum deskew

Factory analogy:

- raw material does not reach all machine stations at the same instant
- finished products also need time to reconverge into an ordered output flow before storage

Contract consequence:

- a logically issued compute event does not become an accumulator write immediately
- any specification, scoreboard, replay checker, or sign-off rule that ignores this 31-cycle alignment risks flagging correct behavior as a failure

### Flush Requirement

After the last activation input of an execute phase, the system must wait long enough for all in-flight results to reach and update the accumulator.

Factory analogy:

- even after the last raw-material tray is inserted, finished goods already on the conveyor still need time to reach storage

Current implementation note:

- the system FSM includes an explicit flush state after execution before declaring phase completion
- in the current RTL, `ST_FLUSH` waits 35 cycles before `mmio_npu_done` is raised
- this is stricter than the nominal 31-cycle datapath timing and intentionally includes implementation margin for write-back safety

Milestone guidance:

- this conservative flush contract is appropriate for current L0 through L5 milestones because it favors deterministic replay correctness over maximum throughput
- if future performance work shortens flush latency, the contract must be revised together with scoreboards, replay infrastructure, and sign-off criteria

---

## Done/Ack Handshake Contract

Completion reporting is intentionally sticky so that the host can safely observe it.

### Why sticky done is required

- software or external control may not sample a single-cycle pulse reliably
- phase completion needs to remain visible until the observer confirms receipt

Factory analogy:

- the operator leaves the completion lamp on until the supervisor signs the worksheet

### Required behavior

- the producer raises a done indication when the current phase has fully completed according to its contract
- the done indication remains asserted until the host supplies an explicit acknowledgment
- the next phase should be launched only after the current done condition has been acknowledged and the system has returned to a clean idle-ready state

Milestone guidance:

- sticky `mmio_npu_done` is the correct contract choice for current replay and sign-off milestones because it removes ambiguity from host-side polling
- non-sticky DMA completion is acceptable for the current testbench-oriented environment, but should be reconsidered if the control model becomes software-polled rather than tightly scripted

---

## Legal And Illegal Sequence Contract

The interface contract is not only about signal meaning. It also constrains which phase transitions are legal.

### Legal sequences

The following are legal control patterns in the current design.

1. DMA load -> `mmio_dma_done` -> bank swap -> weight preload -> `mmio_npu_done` -> clear done
2. DMA load -> `mmio_dma_done` -> bank swap -> activation execute -> flush -> `mmio_npu_done` -> clear done
3. Split-K execution for one output tile:
	- first K pass with `mmio_npu_acc_clear = 1`
	- later K passes with `mmio_npu_acc_clear = 0`
	- drain only after the last pass of that output tile has completed
4. N-tile iteration:
	- compute one 16-column tile completely
	- drain or externalize that tile result
	- move to the next 16-column tile as a logically new output column group

### Illegal sequences

The following are contract violations in the current design.

1. Issuing `mmio_start_dma` for new work before the previous DMA job has completed
2. Holding `mmio_swap_banks` high across multiple cycles
3. Issuing `mmio_start_npu` while the system is not idle
4. Using execute mode with `mmio_npu_seq_len = 0`
5. Starting activation execute before the required weight tile has been preloaded
6. Treating `mmio_dma_done` as sticky status rather than a pulse event
7. Draining data before the required execute plus flush interval has completed
8. Sampling drain output in the same cycle as the drain request edge
9. Reusing the same accumulator contents for a new output tile without either overwrite semantics or an explicit tile reset policy

### Practical enforcement rule

For L2 handoff, the replay environment should treat each illegal sequence above as an immediate package or driver error, not as an ambiguous DUT mismatch.

---

## Sign-Off Pass/Fail Contract

The functional contract is not complete unless it defines what counts as success.

This section distinguishes between hard gates for L0 close and deferred metrics that belong to later milestones.

### L0 close criteria

L0 may be treated as complete when all of the following are true.

1. The signal semantics in this report are sufficient to explain DMA, bank swap, weight preload, execute, flush, drain, and done/ack behavior without referring back to RTL source.
2. Address units, timing units, overwrite versus accumulate rules, and drain sampling rules are all explicit and unambiguous.
3. Tile-local output coordinates and their extension to global output coordinates are defined well enough for workload packaging.
4. Legal and illegal control sequences are explicit.
5. The document is specific enough that L2 package design can proceed without inventing new control semantics.

### Minimum pass condition for a directed system test

- DMA loads the intended payload into the correct bank set
- bank swap occurs at a legal phase boundary
- weight preload completes before activation execution begins
- execution completes with required flush latency observed
- drained output matches the expected golden vector at the requested address or addresses

Current hard gate:

- exact match is required for all checked drained lanes
- the allowed mismatch count is 0
- any assertion failure during the run is a fail

### Minimum pass condition for a core replay test

- workload package format is accepted without ambiguity
- activation and weight vectors are injected with the documented lane ordering
- accumulator semantics follow the documented `acc_clear` and `acc_valid` rules
- drained data matches golden results after documented read latency

Current hard gate:

- exact match is required for every lane of every drained vector covered by the package manifest
- the allowed mismatch count is 0
- any package field needed to resolve output coordinates must be present and internally consistent

### Minimum fail condition

- any mismatch in lane value, target address interpretation, overwrite versus accumulate behavior, or expected timing alignment is considered a contract violation
- any legal/illegal sequence violation listed in this report is considered a contract violation
- any missing package metadata required to reconstruct global output coordinates is considered a contract violation

### Coverage and assertion status for L0 close

- assertion failures are gating: 0 failures allowed in the flows used to justify a passing contract claim
- assertion coverage collection is required as infrastructure, but no minimum percentage threshold is imposed as an L0 exit gate
- functional or coverage percentage thresholds should become explicit sign-off gates in L5, not L0

### Practical interpretation

- a test can fail even when the arithmetic units are correct if the control contract is violated
- a test can also appear to pass accidentally if the workload or checker ignores the documented timing and address semantics

### L2 handoff rule

When L0 closes and L2 begins, the package format is allowed to add metadata fields, but it is not allowed to redefine any of the signal semantics fixed by this report.

---

## Contract Summary By Signal Role

Use the following mental model when reading or extending the design.

- DMA signals decide what enters the plant.
- bank swap decides which warehouse is feeding production.
- weight preload signals configure the machine.
- activation execute signals start real computation.
- accumulator signals define how finished products are stored.
- drain signals define how stored results are observed.
- done and acknowledge signals define when the system is allowed to move to the next order.

If these roles remain explicit, later phases such as workload packaging, replay, system sign-off, and compiler mapping can all inherit a stable contract instead of reverse-engineering intent from RTL behavior.