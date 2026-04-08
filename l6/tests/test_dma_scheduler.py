"""
Unit tests for DMA scheduler module.
"""

import pytest
from pathlib import Path

from l6.src.l6_toolchain.dma_scheduler import (
    DMAAXIBurst,
    DMACommand,
    DMAScheduleSequence,
    calculate_activation_payload_bytes,
    calculate_weight_payload_bytes,
    calculate_axi_bursts_for_payload,
    generate_dma_commands,
    build_dma_schedule,
    generate_mmio_sequence,
    AXI_BEAT_BYTES,
)
from l6.src.l6_toolchain.lowering import TilePlanEntry
from l6.src.l6_toolchain.scheduler import estimate_tile_cost, TileCostEstimate


class TestPayloadCalculators:
    """Test activation and weight payload size calculations."""
    
    def test_activation_payload_single_tile(self):
        """Test activation payload for a 16x16 tile."""
        tile = TilePlanEntry(
            tile_m=16,
            tile_n=16,
            tile_k=16,
            emit_drain_after=False,
        )
        
        # 16 * 16 * 2 bytes = 512 bytes
        expected_bytes = 16 * 16 * 2
        actual_bytes = calculate_activation_payload_bytes(tile)
        
        assert actual_bytes == expected_bytes
        assert actual_bytes % AXI_BEAT_BYTES == 0, "Should be AXI-aligned"
    
    def test_weight_payload_single_tile(self):
        """Test weight payload for a 16x16 tile."""
        tile = TilePlanEntry(
            tile_m=16,
            tile_n=16,
            tile_k=16,
            emit_drain_after=False,
        )
        
        # Weights are tile_k x tile_n: 16 * 16 * 2 bytes = 512 bytes
        expected_bytes = 16 * 16 * 2
        actual_bytes = calculate_weight_payload_bytes(tile)
        
        assert actual_bytes == expected_bytes
    
    def test_activation_payload_m_offset(self):
        """Test activation with M offset (different rows)."""
        tile = TilePlanEntry(
            tile_m=8,   # Reduced M
            tile_n=16,
            tile_k=16,
            emit_drain_after=False,
        )
        
        # 8 * 16 * 2 bytes = 256 bytes
        expected_bytes = 8 * 16 * 2
        actual_bytes = calculate_activation_payload_bytes(tile)
        
        assert actual_bytes == expected_bytes


class TestAXIBurstCalculation:
    """Test AXI burst decomposition."""
    
    def test_single_burst_payload(self):
        """Test payload that fits in one AXI burst."""
        # 16-beat burst carries 16 * 32 = 512 bytes
        payload_bytes = 512
        src_addr = 0x0000_0000
        
        bursts = calculate_axi_bursts_for_payload(src_addr, payload_bytes)
        
        assert len(bursts) == 1
        assert bursts[0].burst_len == 15  # 16 beats
        assert bursts[0].src_addr == src_addr
        assert bursts[0].bytes_transferred == 512
    
    def test_multi_burst_payload(self):
        """Test payload requiring multiple bursts."""
        # 32 beats = 2 bursts
        payload_bytes = 32 * AXI_BEAT_BYTES  # 32 beats total
        src_addr = 0x0000_0000
        
        bursts = calculate_axi_bursts_for_payload(src_addr, payload_bytes)
        
        assert len(bursts) == 2
        assert bursts[0].burst_len == 15  # First burst: 16 beats
        assert bursts[1].burst_len == 15  # Second burst: 16 beats
        assert bursts[1].src_addr == src_addr + 16 * AXI_BEAT_BYTES
    
    def test_partial_final_burst(self):
        """Test payload with a partial final burst."""
        # 24 beats = 1 full (16) + 1 partial (8)
        payload_bytes = 24 * AXI_BEAT_BYTES
        src_addr = 0x0000_0000
        
        bursts = calculate_axi_bursts_for_payload(src_addr, payload_bytes)
        
        assert len(bursts) == 2
        assert bursts[0].burst_len == 15  # 16 beats
        assert bursts[1].burst_len == 7   # 8 beats (arlen = 7)
    
    def test_alignment_validation(self):
        """Test that unaligned payloads raise an error."""
        unaligned_bytes = 100  # Not a multiple of 32
        
        with pytest.raises(ValueError, match="must be multiple of AXI beat size"):
            calculate_axi_bursts_for_payload(0, unaligned_bytes)


class TestDMACommandGeneration:
    """Test DMA command generation from tile schedules."""
    
    def test_single_tile_commands(self):
        """Test command generation for a single tile."""
        tile = TilePlanEntry(
            tile_m=16,
            tile_n=16,
            tile_k=16,
            emit_drain_after=False,
        )
        
        cost = estimate_tile_cost(tile, weight_reuse=False)
        commands = generate_dma_commands([cost])
        
        # Should have at least 2 commands: activation + weight
        assert len(commands) >= 2
        
        # First command should be activation (not weight)
        assert commands[0].is_weight == False
        
        # Second command should be weight
        assert commands[1].is_weight == True


class TestDMAScheduleBuilding:
    """Test complete DMA schedule construction."""
    
    def test_build_schedule_single_tile(self):
        """Test building a schedule with one tile."""
        tile = TilePlanEntry(
            tile_m=16,
            tile_n=16,
            tile_k=16,
            emit_drain_after=False,
        )
        
        cost = estimate_tile_cost(tile)
        schedule = build_dma_schedule([cost])
        
        assert schedule.double_buffer_enabled == True
        assert schedule.bank_swap_strategy == "ping-pong"
        assert len(schedule.commands) >= 2


class TestMMIOSequenceGeneration:
    """Test MMIO register write sequence generation."""
    
    def test_mmio_sequence_structure(self):
        """Test that MMIO sequence has expected structure."""
        tile = TilePlanEntry(
            tile_m=16,
            tile_n=16,
            tile_k=16,
            emit_drain_after=False,
        )
        
        cost = estimate_tile_cost(tile)
        schedule = build_dma_schedule([cost])
        mmio_writes = generate_mmio_sequence(schedule)
        
        # Should have register writes
        assert len(mmio_writes) > 0
        
        # Check for expected register names
        reg_names = {w.register_name for w in mmio_writes}
        assert "mmio_dma_target" in reg_names
        assert "mmio_src_addr" in reg_names
        assert "mmio_start_dma" in reg_names


if __name__ == "__main__":
    pytest.main([__file__, "-v"])
