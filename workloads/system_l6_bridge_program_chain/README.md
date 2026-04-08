# system_l6_bridge_program_chain

Committed L6 replay-bridge regression asset for chained system replay.

- Source shape flow: `(16x16) -> fc0(16x16) -> relu -> fc1(16x16)`
- Replay package count: 2
- Package order:
  - `step_000_fc0/program_chain_src_fc0`
  - `step_002_fc1/program_chain_src_fc1`
- Purpose: exercise a fixed repo-hosted multi-step `program_sequence` bridge output without regenerating inputs during smoke tests.

The checked-in payloads were generated from the L6 `export_program_package()` + `export_replay_packages()` path by `l6/regenerate_fixed_replay_assets.py`.
