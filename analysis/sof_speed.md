# SoF movement scale (pmove) — what the wire actually carries

Sources: `analysis/gamex86_all.txt` (Ghidra decompile of gamex86.dll, base 0x20000000),
`logs/probe6.log` (live ground truth), `web/www/sofpredict.js`, `web/playerstate.js`.

## 1. How pmove consumes the ucmd movement shorts

ClientThink = `FUNC 500f53a0` (0x500F53A0), decompile lines 137971+.

- The ucmd arrives as 6 dwords copied verbatim (lines 138148-138152); the three movement
  values are the three shorts at ucmd +0x0A / +0x0C / +0x0E (`local_112`, `sStack_110`,
  `local_10e`) — not bit-packed bytes.
- Sprint: `if ((local_11c._1_1_ & 0x20) != 0 && !(*(byte*)(gclient+0x10) & 0x40))` →
  the three shorts are **doubled** in place (lines 138155-138157) and the sprint-state byte
  `gclient+0x550` is set to 1 (line 138158); it is set to 0 at line 138153 otherwise.
- Then, after the pmove call, ClientThink writes the engine floats (line 138193-138194):

  `pmove[1..3] = (float)ucmd_short * 0.125` and `pmove[0x93..0x95] (offset 0x24c) = short * 0.125`

  i.e. **the wire carries the movement in fixed-point ×8; the engine divides by 8**.
  A wire short of 400 = 50 engine movement units.
- View angles: wire i16 → float via `* 0.005493164` (= 360/65536), lines 138203-138205.

## 2. pmove constants actually used (NOT Quake II's)

Main movement body `FUNC 500b8970` (header line 110950) + `FUNC 500b8df0` (lines 111180+):

- **dt = 0.1 is hardcoded** — per-frame displacement `origin += vector * 0.1`
  (lines 110911-110916, 111251-111253); gravity applied as `sv_gravity * scale * 0.1`
  (lines 111010-111017, 111260-111264). No `sv_fps` variable in the arithmetic.
- **Stop-speed default = 100** — `if (pmove[0xa0] == 0.0) pmove[0xa0] = 100.0` (line 111214),
  used as `control = max(speed, 100)` in the damping term.
- **Ground damping base = 200**: `speed -= pmove[0xa1] * 200.0 * control * 0.1` (line 111274).
- **Damping coefficient is a per-entity attribute, not a constant**: `pmove[0xa1]` is set to
  ≈0.0143 (`0x3c23d70a`, lines 120813/120857) and `pmove[0xa3]`/`0xa5` to 0.7 (`0x3f333333`,
  lines 108627, 149732-149736), 1.0 (lines 118214-118217). So SoF uses a **drag model**, not
  Q2's `friction = 6` — the numbers 200 / 600 are bases multiplied by these per-entity scales.
- **Decel (stop) function `FUN_500b8cf0`** (line 111094): decrement by `field*0.01` when not
  moving, `field*12.0` when moving (lines 111103-111106). Air branch uses `* 600.0 * 0.5`
  (line 111298) vs ground `* 600.0 * 0.1` (line 111301).
- **Per-axis velocity clamp** = cvar `sv_maxvelocity` (`DAT_5015c96c + 0x18`), lines 110992-111003,
  111223-111234. `sv_gravity` = `DAT_5015d29c + 0x18` (plus `sv_gravityx/y/z`).
- **No `friction`, `stopspeed`, `accel`, `maxspeed`, `jump`, `step` cvars exist** in gamex86.dll;
  there are no `PM_*` named functions. `run_pitch`/`run_roll` (`DAT_5015c958`, `DAT_5015d2a0`)
  are view bob — `FUNC 500f75c0` is the camera/bob function, not pmove.
- Fall-damage thresholds 100 / 200 / 400 on the velocity magnitude (lines 111051-111062).
- Run/sprint: ClientThink doubles the movement shorts (line 138155). Live probe shows walk
  velocity 1600 → run 2400, i.e. **×1.5 in the observed data**, so the ×2 must apply to the
  *input* short, not to the resulting velocity, or the probe's run phase was capped by
  `sv_maxvelocity`. Not proven.

## 3. Constant table

| quantity | engine value (decompile) | sofpredict.js now | should be |
|---|---|---|---|
| dt | hardcoded 0.1 (110911, 111251) | `dt = 0.1` | keep 0.1 |
| stopspeed | 100 default, per-entity override (111214) | `STOPSPEED 100` | keep 100 |
| friction | not 6: `200 * drag * control * dt` (111274), drag ≈ 0.0143 / 0.7 per entity | `FRICTION 6` | drop `FRICTION`, use per-entity drag ≈0.0143 with base 200 |
| accel | `maxspeed * drag * 600 * dt` ground (111301), `drag*600*0.5` air (111298) | `ACCEL 10` | not a fixed 10 — model is drag-based |
| maxspeed | cvar `sv_maxvelocity` per-axis clamp (110992) | `MAXSPEED 320` | read `sv_maxvelocity` default from the server, not 320 |
| gravity | cvar `sv_gravity` × per-entity scale × 0.1 (111010-111017) | `GRAVITY 800` | unproven; default value not in these dumps |
| jump | no constant found | `JUMP 270` | unproven, remove/derive |
| step | no constant found | `STEP 18` | unproven |
| run/sprint | ×2 on the movement shorts (138155), button 0x20 | not implemented | ×2 on the input short |
| movement shorts | wire i16, engine = `short * 0.125` (138193-138194) | treated as raw bytes | ×0.125 before use |
| angles | wire i16 × 0.005493164 = 360/65536 (138203) | correct | keep |

## 4. Velocity scaling the browser must apply

The wire player-state velocity is three raw i16 (`web/playerstate.js` line 139, no scale);
the origin is three i16 with the 1/8 scale (line 134). ClientThink's `* 0.125` shows the wire
fields are the ×8 fixed-point form of the engine floats, so the browser should compare
prediction with `wire_i16 * 0.125`, i.e. multiply its predicted velocity by **8** to match the wire.

**Unproven:** the live numbers do not fit that scaling. probe6.log steady state: wire velocity
1600 but measured origin motion ≈ 58-98 units/s (13.000/6.500 units per printed frame at
10 Hz, phase total 52 units over 0.9 s). ×8 scaling predicts 200 units/s; raw (no scaling)
predicts 1600. No single factor reconciles them (ratios 16.4 / 2.05), so the velocity field's
unit — per-frame vs per-second, and whether the printed per-frame deltas span more than one
server frame — is still unproven. The origin quantization to 1/8 units is solid; the velocity
unit is not.
