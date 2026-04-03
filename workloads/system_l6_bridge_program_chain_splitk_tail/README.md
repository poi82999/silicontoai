# system_l6_bridge_program_chain_splitk_tail

Committed L6 replay-bridge regression asset for chained system replay.

- Source shape flow: `(16x32) -> fc0(16x16, split-K=2) -> relu -> fc1(16x20, tail-n=4)`
- Replay package count: 3
- Package order:
  - `step_000_fc0/program_chain_splitk_tail_src_fc0_m0_n0`
  - `step_002_fc1/program_chain_splitk_tail_src_fc1_m0_n0`
  - `step_002_fc1/program_chain_splitk_tail_src_fc1_m0_n16`
- Purpose: exercise a fixed repo-hosted multi-step `program_sequence` bridge output without regenerating inputs during smoke tests.

The checked-in payloads were generated from the L6 `export_program_package()` + `export_replay_packages()` path by `l6/regenerate_fixed_replay_assets.py`.
