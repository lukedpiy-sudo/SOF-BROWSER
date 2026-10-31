# pmove_ground.md — why the probe player sinks, and what the ucmd fields mean

Evidence: gamex86_all.txt (Ghidra decompile), ClientThink = FUNC 500f53a0 (header line 137971),
CheckGround = FUN_500b7600 (line 110154), plus PROTOCOL.md 4e/4e.4.

## 1. What ClientThink does with each ucmd field (record = param_2, 24 bytes)

- `msec +0`: frames = msec/10, remainder latched back (138083-138091). Runs regardless.
- `buttons +1`: latched `(~old)&new`; sprint bit 0x20 doubles move0/1/2 (138154-138158).
- `flags2 +2`: copied **verbatim** to `edict+0x3B8` (line 138282 `param_1[0xee] = (uint)param_2[2]`).
  In the whole 177k-line dump `+0x3B8` is only ever *written* (zeroed at 37901, incremented at
  44397) — **no ground/pmove consumer**. It is a game-logic flags byte, not a pmove field.
- `flags3 +3`: **never read** by ClientThink (no `param_2[3]` anywhere in 137971-138545).
- angles `+4/+6/+8`: signed 12-bit binary angles × 360/65536 written to client record
  `+0x30C/+0x310/+0x314` (138203-138205); slot order +4 pitch, +6 yaw, +8 roll (PROTOCOL.md 1428-1430).
- movement `+0x0A/+0x0C/+0x0E`: shorts × 0.125 written into the pmove vector block
  (138189-138196) — confirmed working (direction follows the yaw slot).
- extras `+0x10/+0x14`: copied to client record `+0x48C/+0x490` when non-zero (138269-138276),
  zeroed otherwise. Consumers: they are **model_state blend weights** — initialized to (1.0,0) or
  (0,1.0) at connect/reset (38638-38644), used by the 17-float blend routine that copies vs
  interpolates when `param[0x10] & 1` (131975-132014), and re-emitted to the player_state record
  `+0x10/+0x14` (42922-42923). They are **not** groundentity/crouch fields. Zeros = "use source A", harmless.

## 2. pm_type and ground detection

- Ground check = **FUN_500b7600** (110154-110171): `trace(origin=pm+4, start=pm+0x11C, end=pm+0x128,
  owner, hitmask=pm+0x15C (default 3))`; returns the entitynum only on a hit. It is called from the
  PM dispatchers (108514, 132601, 133029, 146308), i.e. per-frame, per client.
- **pm_type is NOT taken from the usercmd.** ClientThink itself computes it (line 138047:
  `pm_type = (client+0x2DC != 0)*2 + 5` on the time-lerp branch; main per-frame mapping at
  138098-138114: entity field `edict+0x19C == 1` → type 1 (walking/normal), `== 0xc` → 2,
  `param_1[8] == 0xff` → 3/6, else 4). The walking value the module expects is the type-1 branch
  driven by the **entity's own state** (solid/waterlevel), set in the client-record block
  (138069-138073 also seeds byte fields +0x10=0x20 / +0x11=0xE when client+0x2DC == 0).
- Therefore **our zeros in flags2/flags3/extras cannot make the player non-solid or skip the
  ground trace**. The sink must come from module-side state: either the client-record pmove block
  (groundentity at record base, start/end +0x11C/+0x128, hitmask +0x15C) is never initialized for
  our connection, or the spawn point on nycdm1 at (-2304,-1920) has no floor there and the
  downward trace legitimately keeps missing (z -39.9 = fell to some lower surface/void).

## 3. The pitch -45 "no movement" observation

- No pitch clamp was found in ClientThink; all three angle shorts are converted symmetrically
  (138203-138205). So it is not clamping.
- Most likely cause is the **bit packer, not the module**: negative binary angles. -45° =
  -8192 as u16 = 0xE000; the wire carries `v >> 4` as 12 *unsigned* bits (PROTOCOL.md 472,
  1436-1440). If the encoder applies an arithmetic shift / no `& 0xFFF` mask on a negative
  angle, the bitstream misaligns and the following move fields decode as garbage → no movement.
  Positive yaw worked because it never hit the sign bit. Movement projection itself uses yaw
  only (Q2 convention); pitch does not gate walking in any code we found.

## What the client must send (practical)

1. Keep flags2 = 0, flags3 = 0, extras = 0 (all fine — nothing ground-related in the ucmd).
2. Encode every angle field as `((v & 0xFFFF) >> 4) & 0xFFF` (unsigned!), never arithmetic-shift
   a negative binary angle; mask move fields `& 0x3FF` after `+0x1FE`.
3. The grounding problem is not fixable by ucmd values: probe must check whether FUN_500b7600's
   hitmask/content state for our client is initialized, and whether the spawn point actually has
   a floor. Move with move0>0 and look for the origin to stop descending — if it never stops,
   the trace itself is missing for our client (module-side), which is still unproven.

## Unproven

- Which entity field `edict+0x3B8` (flags2) actually feeds (only writes seen).
- Whether the engine runs pmove via the import call `(*DAT_5015cb34)(&pmove)` (138172) and how
  pmove_t's +0x11C/+0x128/+0x15C are initialized for a probe client.
- Whether the nycdm1 spawn (-2304,-1920,16) is over open space (would explain z -39.9 without
  any bug); one short probe (move0 held, watch z) would settle it.
