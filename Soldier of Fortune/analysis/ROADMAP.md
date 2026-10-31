# SoF → Quake 2 Port — Reverse Engineering Roadmap (Multiplayer scope)

Status as of this pass. Bots are explicitly **out of scope** (user decision);
everything else is aimed at a *playable multiplayer* build on stock Q2 3.21.

Legend: **[x]** done · **[~]** in progress · **[ ]** not started

---

## 0. Foundation (done)

| | Item | Evidence |
|---|---|---|
| [x] | Q2 3.21 source acquired, builds as 32-bit `gamex86.dll` | `q2work/sof2/build.cmd` |
| [x] | Stock `game_export_t` = 20 slots, `game_import_t` = 44 slots, API v3 | `tools/test_api.c` |
| [x] | Stock `edict_t` = **0x37C**, `entity_state_t` = **0x54**, `gclient_t` = **0xEDC** | `tools/dump_offsets.c` |
| [x] | `EDICT_NUM` strides by `ge->edict_size` ⇒ module may extend `edict_t` freely | `server.h:69` |
| [x] | `player_state_t` = 0xB8, `stats[32]` shorts | `q_shared.h:1166` |
| [x] | Inventory sync = `svc_inventory` + `MAX_ITEMS`(256) shorts, on `inv` toggle | `g_cmds.c:484`, `cl_inv.c:33` |
| [x] | Weapon selection sync = `"use <item>"` cmd → `stats[STAT_SELECTED_ITEM]` | `g_items.c:786` |
| [x] | SoF module layout: `edict_t` 0x464, `gclient_t` 0x600, `client` at edict+0x74 | REA |
| [x] | SoF `GetGameAPI`, 24 handlers, 26-slot table | `exports.txt` |

**Correction on record:** earlier notes claimed `edict_t`=0x464 and
`entity_state_t`=0x74 as "stock". Those are **SoF's** values. Stock Q2 is
0x37C / 0x54. The port uses the stock values (client+server are both stock).

---

## 1. Weapons — table recovered, firing logic outstanding

| | Item | State |
|---|---|---|
| [x] | Table base `0x50159B20`, stride `0x14C`, **31 rows** | `decode_sof_weapontable.ps1` |
| [x] | Row field map (fire `+0x128`, altfire `+0x12C`, model `+0x054`, …) | REPORT §4.1 |
| [x] | 17 named weapons w/ model paths, damage, range, pellets, flags | `weapontable.txt` |
| [x] | 20 indirect call sites through the fire/altfire pointers | `firecallsites.txt` |
| [ ] | **True prototype of the fire handlers** | see Open Thread |
| [ ] | Semantics of `a5`/`a6`/`a13` (inferred from values, not proven) | |
| [ ] | `a7` bitfield meanings (fire mode / auto flags) | |
| [ ] | Per-weapon fire logic → stock `fire()` implementations | |
| [ ] | Reload / alt-fire / burst behaviour | |
| [ ] | Recoil, muzzle flash, sound, animation per weapon | |

## 2. Items, ammo, pickups

| | Item | State |
|---|---|---|
| [x] | Item index enum (1 … 0x27) recovered | REPORT §5 |
| [ ] | Item table structure read from binary (as done for weapons) | |
| [ ] | Ammo type ↔ item mapping, per-weapon ammo consumption | |
| [ ] | Pickup handlers: armor 50 / cap 200, health 25/50, medkit, goggles | partially in REPORT §5 |
| [ ] | Spawn functions for each pickup entity | |

## 3. Player / combat

| | Item | State |
|---|---|---|
| [x] | `T_Damage` located (`0x5008bb10`) | |
| [x] | SoF deltas ported: boss immunity, gib threshold 25, damage accumulation | `g_sof_combat.c` |
| [x] | 36 unit tests green | `tools/build_test.cmd` |
| [ ] | Death chain / obituary w/ SoF means-of-death | |
| [ ] | Health regen (`+0.02`/frame) wired into `RunFrame` | constants known, not wired |
| [ ] | Player death → gib/dismemberment (**new code**; stock Q2 has none) | |
| [ ] | Respawn, score, frags, spectate | |

## 4. Netcode / MP glue

| | Item | State |
|---|---|---|
| [x] | SoF `PROTOCOL_VERSION` = 33 — matches stock | |
| [x] | Stock capacities sufficient (`MAX_STATS` 32, `MAX_ITEMS` 256) | |
| [ ] | Fold SoF-only 26-slot callbacks into stock 20-slot entry points | design decided, not implemented |
| [ ] | Client-side prediction parity for new weapons | |
| [ ] | Hitbox / collision parity | |

## 5. Client presentation

| | Item | State |
|---|---|---|
| [x] | `player.dll` identified as client player/weapon module | |
| [ ] | HUD (ammo/armor per weapon, health) | needed for playable MP |
| [ ] | Weapon view models + animations | |
| [ ] | Player models + animation set | |

## 6. Maps — **BLOCKER (measured, not assumed)**

| | Item | State |
|---|---|---|
| [x] | Format probed on a real SoF map (`User\maps\dm\beta17.bsp`) | |
| [x] | SoF BSP `ident` = `"IBSP"`, **version 46** | `bsp_inspect.ps1` |
| [x] | Stock Q2 3.21 `BSPVERSION` = **38** (`qcommon/qfiles.h:222`) | |
| [x] | Stock loader **hard-rejects** any other version | `qcommon/cmodel.c:602` |
| [ ] | Decision: converter vs. stock Q2 maps | **chose Option B** |
| [ ] | Q2 game data (`pak0.pak`: maps/models/sounds) | **now the runtime blocker** |

**Build status:** the full engine now compiles and links from source.
`build_engine.cmd` (generated from `ref_gl.dsp` / `quake2.dsp`) produces:

```
dist\Release\quake2.exe    531,456 bytes   x86   client+server+qcommon+win32
dist\Release\ref_gl.dll    333,824 bytes   x86   renderer, exports GetRefAPI
dist\Release\gamex86.dll   512,000 bytes   x86   our ported game module
```

All three are `IMAGE_FILE_MACHINE_I386` (0x014C), so they load into each other
correctly. The module is engine-complete; only game *data* is missing.

Blockers hit while building the engine (all resolved):
- `server\sv_null.c` stubs out the whole server — must not link with the real one.
- `win32\vid_dll.c` is required (defines `cl_hwnd`, hosts `ref_gl`) even though
  it is easy to mistake for "the DLL build".
- `rw_ddraw/rw_dib/rw_imp` belong to `ref_soft`, not the GL build.
- `game\q_shared.c` supplies `Com_sprintf` / `Q_strcasecmp`; the engine links it
  too (the game DLL keeps its own copy).
- Engine and game objects must live in separate folders — sharing one output
  dir produced duplicate-symbol link errors.

```
// qcommon/cmodel.c:602
if (header.version != BSPVERSION)
    Com_Error (ERR_DROP, "CMod_LoadBrushModel: %s has wrong version number (%i should be %i)", ...);
```

**Stock Q2 cannot load any SoF map.** The magic is still `IBSP` (same Quake
lineage) but the version is 46 — the RtCW lineage, 8 versions past stock Q2.
The lump directory is also a custom layout: SoF stores `(offset,length)` pairs
from +0x08 with no `numlumps` field, versus stock's `dheader_t { ident, version,
lumps[HEADER_LUMPS] }` (`qcommon/qfiles.h:262` lists the stock lump order).

Consequences:
- Every SoF `.bsp` is unusable by our stock module as-is.
- SoF ships only version-46 maps (the single `.bsp` on disk is v46; the rest are
  inside `pak0.pak`, 705 MB).
- **Option A** — write a v46→v38 BSP converter (bspc-style). Very large job,
  and version 46 also changes lump contents, not just the directory.
- **Option B** — run the ported gameplay on stock Q2 3.21 maps. Reaches playable
  multiplayer fastest; loses SoF levels/geometry.

---

## Open thread — fire handler prototype

`0x50101230` is the `+0x128` fire handler for 8 rows, yet its dossier shows a
single-argument, loop-free body with no weapon/damage/ammo identifiers. It is
reached only through a function pointer, so Ghidra inferred `__cdecl(int*)` and
the body does not match a multi-pellet hitscan routine.

Next probe: disassemble one confirmed call site (e.g. `0x5006583B`, `0x50065BD6`)
and read the argument registers to recover the real prototype. Note that Ghidra
reported `0x500F284` as `outside_segments` despite it lying in `.text`
(RVA `0x1000`–`0x115BD2`), so byte-scan call sites must be validated against
the section table (`pe_sections.ps1`) before trusting them.

---

## Rough effort estimate

Excluding maps, roughly in "RE passes" (each pass ≈ one subsystem read from the
binary + a code change + tests):

| Area | Passes | Notes |
|---|---|---|
| Weapons firing | 3–4 | largest remaining gameplay gap |
| Items / ammo | 2–3 | |
| Death / gib / respawn | 2 | death chain known, gibs are new code |
| MP glue (26→20 slots) | 1 | design already decided |
| HUD + view models | 3–4 | mostly assets, not RE |
| **Subtotal (no maps)** | **11–14** | |
| Map compatibility | ? | **unknown until spiked** |

The honest answer on "how long": the RE is roughly **half done for multiplayer**,
with weapons firing as the dominant remaining item. But total completion is
gated by the map question — if stock Q2 cannot read SoF maps, a converter or
fresh Q2-compatible maps are required, and that is a much larger job than any
item above.

**Recommended next action: spike map loading before more RE.** It is one
experiment that can invalidate or reshape the whole plan.
## Status update 2026-10-20 (multiplayer playable, SoF RE continuing)

### Verified working
* Dedicated server binds UDP 27910, loads `q2dm1`, and two real clients
  connect, spawn and play (`run_multiplayer_test.ps1` -> PASS).
* In-game self-test drives the real server firing path
  (`ClientThink` -> `Weapon_Generic` -> `Sof_CanFire` -> `Sof_ConsumeAmmo`
  -> `fire_shotgun` -> `T_Damage`) and proves the recovered SoF ammo
  mechanism end to end: `ammo 25->22 (consumed 3), target health 100->0`,
  VERDICT PASS (`run_selftest.ps1`).
* 30/30 unit tests pass (`tools/build_test.cmd`).
* `ref_soft.dll` (software renderer) now builds and links; it imports
  nothing from the engine (self-contained `rw_sysshim.c`).
* `ref_gl.dll`, `quake2.exe`, `gamex86.dll` all build and publish to
  `dist\Release` (`build.cmd` now copies the DLL - it previously left a
  stale module in the run tree).

### New SoF RE this session (REPORT.md 4.29, 4.30)
* Fire-rate gate located: `weapon_object+0x37C` is the next-allowed-fire
  timestamp, compared against `level.time`; `edict+0x370` is the player's
  next-action time (primary re-arms after 2.0 s, alternate after 0.5 s).
* Weapon table `+0x118`/`+0x11C` are the per-weapon **fire delays in
  seconds**, not spread (the earlier "spread" reading was wrong).
* SoF weapons have a **heat** model: a formatted weapon value is compared
  against 0.99, with 150.0 as the heat/spread scale.
* Q2's `fcomp [level.time]` gate idiom: `fnstsw ax; test ah,5; jp skip`.

### Open items, in priority order
1. **SoF content is Quake III format** (`.bsp` v46, `.m32` models, `.tga`
   textures, plus SoF's proprietary `.ghb/.rof/.rmf/.gsq/.adp/.os`).
   The port is therefore still Quake II content with SoF *mechanics*.
   Making it genuinely SoF needs v46->v38 BSP conversion, m32->md2 model
   conversion, tga->pcx and wav->wal, plus the SoF HUD, movement model,
   player models and sound set. This is the main remaining project.
2. Implement the recovered fire-delay gate in the port (per-client
   next-fire time + `sof_weapon_t.attack_delay`), and the heat model.
3. SoF reload mechanic (weapon vtable `+0xF0`) and the dry-fire sounds at
   `0x600`/`0x60E`.
4. Software renderer still crashes when the game module is loaded: the
   renderer registers the player skin model itself, and the crash is a NULL
   model in its model tree. `pak4.pak` now supplies
   `players/male/tris.md2`, but the crash persists - the exact missing
   model still has to be identified.
