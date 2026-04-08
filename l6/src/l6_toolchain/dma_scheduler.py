"""
DMA Scheduler: Convert tile schedules into DMA MMIO command sequences.

This module bridges the gap between high-level tile schedules (from scheduler.py)
and low-level DMA MMIO register programming.

Key responsibilities:
1. Convert tile dimensions + activation/weight payloads into DMA bursts
2. Handle ping-pong SRAM bank allocation with optimal reuse
3. Generate MMIO command sequences that can be directly replayed
4. Model double-buffering (DMA overlapping with compute)
"""

from __future__ import annotations

from dataclasses import dataclass
from typing import Sequence

from .lowering import TILE_SIZE, TilePlanEntry
from .scheduler import TileCostEstimate


# ============================================================================
# DMA Command Structure
# ============================================================================

AXI_BEAT_WIDTH = 256  # bits (16 x 16-bit FP16)
AXI_BEAT_BYTES = AXI_BEAT_WIDTH // 8  # 32 bytes
BYTES_PER_ELEMENT = 2  # 16-bit (FP16 or INT8 stored as 2-byte units)


@dataclass(frozen=True)
class DMAAXIBurst:
    """Single AXI burst transaction specification."""
    is_weight: bool  # True for weight loading, False for activation
    src_addr: int    # Byte address in external memory
    burst_len: int   # AXI burst length (actual beats = burst_len + 1)
    
    @property
    def beats(self) -> int:
        """Actual number of beats transferred."""
        return self.burst_len + 1
    
    @property
    def bytes_transferred(self) -> int:
        """Total bytes in this burst."""
        return self.beats * AXI_BEAT_BYTES


@dataclass(frozen=True)
class DMACommand:
    """Complete DMA command for one logical load (weight or activation)."""
    is_weight: bool
    bursts: tuple[DMAAXIBurst, ...]
    sram_bank_sel: int  # Which ping-pong bank to load into (0 or 1)
    
    @property
    def total_bursts(self) -> int:
        """Total number of AXI bursts in this command."""
        return len(self.bursts)
    
    @property
    def total_bytes(self) -> int:
        """Total bytes transferred in all bursts."""
        return sum(b.bytes_transferred for b in self.bursts)


@dataclass(frozen=True)
class DMAScheduleSequence:
    """Complete DMA schedule with all commands and timing."""
    commands: tuple[DMACommand, ...]
    double_buffer_enabled: bool
    bank_swap_strategy: str  # e.g., "ping-pong", "sequential"
    
    @property
    def total_dma_commands(self) -> int:
        """Total number of DMA commands."""
        return len(self.commands)


# ============================================================================
# Activation and Weight Payload Calculators
# ============================================================================

def calculate_activation_payload_bytes(tile: TilePlanEntry) -> int:
    """
    Calculate bytes needed for activation data for a single tile.
    
    Activations for a tile of shape [tile_m, tile_k]:
    - Layout: tile_m rows × tile_k columns (row-major)
    - Data type: FP16 or signed INT8 (but stored as 16-bit)
    - Total elements: tile_m * tile_k
    - Total bytes: tile_m * tile_k * 2 (bytes)
    
    Args:
        tile: Tile configuration
        
    Returns:
        Bytes required for this tile's activations
    """
    elements = tile.tile_m * tile.tile_k
    return elements * BYTES_PER_ELEMENT


def calculate_weight_payload_bytes(tile: TilePlanEntry) -> int:
    """
    Calculate bytes needed for weight data for a single tile.
    
    Weights for a tile of shape [tile_k, tile_n]:
    - Layout: tile_k rows × tile_n columns (systolic array order)
    - Data type: FP16 or signed INT8 (but stored as 16-bit)
    - Total elements: tile_k * tile_n
    - Total bytes: tile_k * tile_n * 2
    
    Note: Weights are reused across multiple tiles with same tile_n if
    the K dimension hasn't changed. The scheduler's weight_reuse flag
    handles skipping weight reloads.
    
    Args:
        tile: Tile configuration
        
    Returns:
        Bytes required for this tile's weights
    """
    elements = tile.tile_k * tile.tile_n
    return elements * BYTES_PER_ELEMENT


def calculate_axi_bursts_for_payload(
    src_addr: int,
    payload_bytes: int,
    target_burst_len: int = 15,  # 16-beat bursts (AXI arlen=15)
) -> tuple[DMAAXIBurst, ...]:
    """
    Break a payload into AXI bursts.
    
    Given a payload size (e.g., activation or weight data), determine
    the minimum number of bursts needed and return their specifications.
    
    Args:
        src_addr: Starting byte address in external memory
        payload_bytes: Total data to transfer
        target_burst_len: Preferred AXI burst length (arlen value)
        
    Returns:
        Tuple of burst specifications covering the entire payload
        
    Raises:
        ValueError: If payload_bytes is not aligned properly
    """
    if payload_bytes % AXI_BEAT_BYTES != 0:
        raise ValueError(
            f"Payload ({payload_bytes} bytes) must be multiple of AXI beat size ({AXI_BEAT_BYTES} bytes)"
        )
    
    total_beats_needed = payload_bytes // AXI_BEAT_BYTES
    beats_per_burst = target_burst_len + 1
    
    bursts = []
    current_addr = src_addr
    remaining_beats = total_beats_needed
    
    while remaining_beats > 0:
        # Use full-size bursts where possible
        if remaining_beats >= beats_per_burst:
            burst_len = target_burst_len
            used_beats = beats_per_burst
        else:
            # Partial burst for remainder
            burst_len = remaining_beats - 1
            used_beats = remaining_beats
        
        burst = DMAAXIBurst(
            is_weight=(src_addr % 2 == 1),  # Placeholder logic (to be replaced with proper tracking)
            src_addr=current_addr,
            burst_len=burst_len,
        )
        bursts.append(burst)
        
        current_addr += used_beats * AXI_BEAT_BYTES
        remaining_beats -= used_beats
    
    return tuple(bursts)


# ============================================================================
# DMA Schedule Generation
# ============================================================================

def generate_dma_commands(
    tiles: Sequence[TileCostEstimate],
    act_base_addr: int = 0x0000_0000,
    wt_base_addr: int = 0x1000_0000,
    enable_weight_reuse: bool = True,
) -> tuple[DMACommand, ...]:
    """
    Generate DMA commands from a tile schedule.
    
    For each tile in the schedule, this produces DMA commands to load
    activations and weights (skipping weight reloads if enabled).
    
    Args:
        tiles: Ordered sequence of tile cost estimates from scheduler
        act_base_addr: Base address for activation data in external memory
        wt_base_addr: Base address for weight data in external memory
        enable_weight_reuse: Skip weight DMA if same weights as previous tile
        
    Returns:
        Tuple of DMA commands in execution order
    """
    commands = []
    current_act_offset = 0
    current_wt_offset = 0
    last_weight_tile_n = None
    last_weight_tile_k = None
    bank_counter = 0
    
    for tile_estimate in tiles:
        tile = tile_estimate.tile
        
        # ===== Activation Load =====
        act_bytes = calculate_activation_payload_bytes(tile)
        act_bursts = calculate_axi_bursts_for_payload(
            src_addr=act_base_addr + current_act_offset,
            payload_bytes=act_bytes,
        )
        
        act_cmd = DMACommand(
            is_weight=False,
            bursts=act_bursts,
            sram_bank_sel=bank_counter % 2,
        )
        commands.append(act_cmd)
        current_act_offset += act_bytes
        
        # ===== Weight Load (with reuse detection) =====
        should_reload_weights = True
        if enable_weight_reuse and tile_estimate.weight_reuse:
            should_reload_weights = False
        
        if should_reload_weights:
            wt_bytes = calculate_weight_payload_bytes(tile)
            wt_bursts = calculate_axi_bursts_for_payload(
                src_addr=wt_base_addr + current_wt_offset,
                payload_bytes=wt_bytes,
            )
            
            wt_cmd = DMACommand(
                is_weight=True,
                bursts=wt_bursts,
                sram_bank_sel=bank_counter % 2,
            )
            commands.append(wt_cmd)
            current_wt_offset += wt_bytes
            last_weight_tile_n = tile.tile_n
            last_weight_tile_k = tile.tile_k
        
        # Bank alternates for double-buffering
        bank_counter += 1
    
    return tuple(commands)


def build_dma_schedule(
    tiles: Sequence[TileCostEstimate],
    act_base_addr: int = 0x0000_0000,
    wt_base_addr: int = 0x1000_0000,
) -> DMAScheduleSequence:
    """
    Build a complete DMA schedule from a tile sequence.
    
    Args:
        tiles: Tile schedule from scheduler.estimate_schedule_cost()
        act_base_addr: Base address for activations
        wt_base_addr: Base address for weights
        
    Returns:
        Complete DMA schedule ready for replay
    """
    commands = generate_dma_commands(
        tiles,
        act_base_addr=act_base_addr,
        wt_base_addr=wt_base_addr,
        enable_weight_reuse=True,
    )
    
    return DMAScheduleSequence(
        commands=commands,
        double_buffer_enabled=True,
        bank_swap_strategy="ping-pong",
    )


# ============================================================================
# MMIO Register Sequence Generation (for Verilator/Replay)
# ============================================================================

@dataclass(frozen=True)
class MMIORegisterWrite:
    """Single MMIO register write for DMA control."""
    register_name: str
    value: int
    description: str = ""


def generate_mmio_sequence(
    schedule: DMAScheduleSequence,
) -> tuple[MMIORegisterWrite, ...]:
    """
    Generate MMIO register writes to execute the DMA schedule.
    
    This produces the low-level register programming needed to replay
    the DMA schedule on actual hardware or in simulation.
    
    Sequence pattern:
    1. Set mmio_dma_target (0=act, 1=wt)
    2. Set mmio_src_addr
    3. Set mmio_burst_len
    4. Set mmio_total_bursts
    5. Pulse mmio_start_dma
    6. Wait for mmio_dma_done
    7. Pulse mmio_swap_banks (for ping-pong)
    8. Repeat for next command
    
    Args:
        schedule: DMA schedule to convert
        
    Returns:
        Sequence of MMIO register writes with timing annotations
    """
    writes = []
    
    for cmd_idx, cmd in enumerate(schedule.commands):
        target_val = 1 if cmd.is_weight else 0
        writes.append(MMIORegisterWrite(
            register_name="mmio_dma_target",
            value=target_val,
            description=f"Command {cmd_idx}: Set {'weight' if cmd.is_weight else 'activation'} target",
        ))
        
        for burst_idx, burst in enumerate(cmd.bursts):
            writes.append(MMIORegisterWrite(
                register_name="mmio_src_addr",
                value=burst.src_addr,
                description=f"Command {cmd_idx}, burst {burst_idx}: Source address",
            ))
            
            writes.append(MMIORegisterWrite(
                register_name="mmio_burst_len",
                value=burst.burst_len,
                description=f"Command {cmd_idx}, burst {burst_idx}: AXI arlen",
            ))
            
            # For sequences with multiple bursts, set total_bursts differently
            # This is a simplification; actual logic may batch bursts
            is_last_burst = (burst_idx == len(cmd.bursts) - 1)
            total_bursts_val = (len(cmd.bursts) - burst_idx)
            
            writes.append(MMIORegisterWrite(
                register_name="mmio_total_bursts",
                value=total_bursts_val,
                description=f"Command {cmd_idx}: Total bursts in this command",
            ))
            
            writes.append(MMIORegisterWrite(
                register_name="mmio_start_dma",
                value=1,  # Pulse
                description=f"Command {cmd_idx}, burst {burst_idx}: Issue DMA pulse",
            ))
            
            # (Implicitly wait for mmio_dma_done before next command)
        
        # After all bursts for this command, swap banks if double-buffering
        if schedule.double_buffer_enabled and cmd_idx < len(schedule.commands) - 1:
            writes.append(MMIORegisterWrite(
                register_name="mmio_swap_banks",
                value=1,  # Pulse
                description=f"Command {cmd_idx}: Swap ping-pong banks",
            ))
    
    return tuple(writes)


# ============================================================================
# Public API
# ============================================================================

__all__ = [
    "DMAAXIBurst",
    "DMACommand",
    "DMAScheduleSequence",
    "MMIORegisterWrite",
    "calculate_activation_payload_bytes",
    "calculate_weight_payload_bytes",
    "calculate_axi_bursts_for_payload",
    "generate_dma_commands",
    "build_dma_schedule",
    "generate_mmio_sequence",
]
