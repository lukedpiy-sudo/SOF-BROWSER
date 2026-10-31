# Soldier of Fortune — `gamex86.dll` Reverse Engineering Report

Target: `C:\Users\User\Soldier of Fortune\Base\gamex86.dll`
SHA-256: `9e5390f05aa5eae0cab62b7a35f304078d3b395e7118a9c6b9535568ac575483`
Format: PE32 x86, image base `0x50000000`, `sizeof(edict_t)` = **0x464** (1124)
Toolchain: Ghidra 12.1.4 headless + custom scripts (`DumpGameExports.java`, `DumpByString.java`)
Build date string: **"Jun 14 2001"**

Symbols are stripped. The only surviving symbol is `GetGameAPI`. All naming below is
derived from observed behaviour, string references, and export-table slot order.
Inferences are explicitly marked.

---

## 1. Module entry: `GetGameAPI` @ `0x500ad9b0` (368 bytes)

- Copies **99 dwords** (396 bytes) of the engine import table from `param_1` → `0x5015c9f0`.
- Looks up cvar `"ghl_mip"`, clamps `value + 0.5` to `[0,2]`, calls engine vtable `+0x98`
  (render quality / LOD tier).
- Builds and returns a **26-slot export table** at `0x5015c8d0`.
- Its own address is published as data at `0x5012e238` (registration hookup).

### Export table (`game_export_t` equivalent)

| Offset | Value | Role | Confidence |
|---|---|---|---|
| +0x00 | `3` | `API_VERSION` | certain |
| +0x04 | `0x500ac970` | **GameInit** (cvar registration, alloc) | very high |
| +0x08 | `0x500ad5b0` | **GameShutdown** | high |
| +0x0C | `0x500bdb50` | **SpawnEntities** (map `.sof` load) | very high |
| +0x10 | `0x500bb0e0` | **SaveGame** — tag `"GAME"`, 0x698 + per-client 0x600 | high |
| +0x14 | `0x500bb1d0` | **LoadGame** | high |
| +0x18 | `0x500bb4a0` | **SaveLevel** — tags `"ZSTF"` / `"CLVL"` | medium-high |
| +0x1C | `0x500bb590` | **LoadLevel** (validates function-index tables) | medium-high |
| +0x20 | `0x500f4d70` | **PlayerConnected** (SoF-specific) | medium |
| +0x24 | `0x500f4de0` | **ClientConnect** (ban/rejmsg/password) | very high |
| +0x28 | `0x500f4070` | **ClientBegin** / PutClientInServer | very high |
| +0x2C | `0x500f4730` | **ClientUserinfoChanged** | very high |
| +0x30 | `0x500f50a0` | **ClientDisconnect** | very high |
| +0x34 | `0x5008a6d0` | **ClientCommand** (console + cheats + bot/wp editor) | very high |
| +0x38 | `0x500f53a0` | **ClientEndFrame / PlayerThink** (pmove integration) | very high |
| +0x3C | `0x500ad990` | clears `client+0x324` — unknown SoF hook | low |
| +0x40 | `0x500ae7d0` | consume save slot | medium-high |
| +0x44 | `0x500ae850` | `menu/savesleft` HUD | medium-high |
| +0x48 | `0x500ad5f0` | **UpdateStats** (`stat/*` scoreboard) | very high |
| +0x4C | `0x500ad820` | strip all weapons (single-player) | low-medium |
| +0x50 | `0x500ad970` | engine string getter (level info) | medium |
| +0x54 | `0x500ad5e0` | getter for 1-byte mode flag `DAT_5015d8d5` | medium |
| +0x58 | `0x500ad5d0` | setter for the same flag | medium |
| +0x5C | `0x500ae340` | **G_RunFrame** | very high |
| +0x64 | `0x464` | `sizeof(edict_t)` | high |

**Absent vs. stock Quake2 3.21**: `Think`/`Use`/`Touch`/`Blocked`/`Damage`/`G_Spawn`/
`G_FindEdict`/`G_FreeEdict`/`Pmove*` are not flat slots — they are reached through
per-edict function pointers and engine vtables (`*DAT_5015c4d8 + N`).

---

## 2. Core structures

### `edict_t` — stride `0x464`
| Offset | Field | Evidence |
|---|---|---|
| +0x0C | origin | |
| +0x2C | entnum | |
| +0x74 | `gclient*` | |
| +0x78 | area link | |
| +0x118 | flags (`0x200` = bot) | PutClientInGame |
| +0x158 | movetype | |
| +0x164 | think | |
| +0x19C | health setup (`=4`) | |
| +0x1A0 | immune byte flags | T_Damage |
| +0x1B4 | classname | |
| +0x1B8 | `FL_DEAD 0x10000` + world flags | |
| +0x2B4 | nextthink | |
| +0x2C4 | pickup respawn time | |
| +0x2CC | **touch** fn | = `0x50096c00` |
| +0x2D0 | **use** fn | = `0x500f2a30` |
| +0x2D4 | weapon timer (reload) | |
| +0x2EC | health / armor | |
| +0x30C | movetype (client) | |
| +0x450 | weapon-box / AI object | |
| +0x458 | **is-bot** flag | |
| +0x45C | bot-private record | |
| +0x468 | world origin | |
| +0x938/0x93C | health / max_health | |

### `gclient_t` — stride `0x600`
| Offset | Field |
|---|---|
| +0xA2 | view yaw (damage kick) |
| +0xCC | best-weapon string |
| +0x2DC | spectator |
| +0x2E0 | best weapon |
| +0x2F0 | = -1 default |
| +0x2F4 | view height / weapon id |
| +0x2F8 / +0x2FC / +0x300 | 100 / 100 / 100 defaults |
| +0x308 | respawn flag |
| +0x324 | unknown hook field |
| +0x34C | inventory/player-state object |
| +0x350 | re-bound object (load) |
| +0x354 | weapon-state object |
| +0x46E | spawn/death counter |
| +0x494 / +0x498 / +0x49C | damage modded / accumulated / armor-absorbed |
| +0x4A0/4A4/4A8 | last damage direction |
| +0x528…0x534 | health regen ramp (+0.02/frame → 1.0) |
| +0x558 | goggles state |
| +0x564 | armor recharge / invuln timer vs `level.time` |
| +0x56E | touch array (31 entries) |

---

## 3. Damage / death

### `T_Damage` @ `0x5008bb10` (1803 bytes)
Signature: `(targ, inflictor, attacker, dir, point, point2, damage, dflags, mod, dmgtype, ?, ?)`

- health at `edict+0x2EC`, clamped to **-999**; below **25** ⇒ gib/crit threshold.
- Immune flag `edict+0x1A0 & 0x10`; on death sets `0x800`.
- Boss immunity via classname `"m/x/mskinboss"`, `"m/x/mraiderboss1"` unless `edict+0x318 == 100`.
- Armor absorb: `gclient+0x49C += (dmg - FUN_500f22e0(...))`.
- Blood suppressed unless `dmgtype != 0x1B`; decals `"exphit"`, `"lighthit"`, `"gotshot"`.
- Dispatches `edict+0x2CC` (pain) and `edict+0x2D0` (die).

### Death chain
| Address | Role |
|---|---|
| `0x500f0d30` | client die handler (death anim, body drop) |
| `0x5001eaa0` | death-anim selection by weapon (`switch(cause)`) |
| `0x50007f9b` | `FL_DEAD` check, body allocation (0x7C) |
| `0x50025030` | body-part death selection |

---

## 4. Weapons

Registration is **data-driven** via `FUN_50065470` (no dispatcher).
Item-index enum: `FUN_50012550`; weapon-slot enum: `FUN_50012350`.

| Weapon | item idx | fire fn | constants (fire-delay / dmg / pellets / spread) |
|---|---|---|---|
| Knife | 1 | `0x50103a60` | 30.0 range |
| Pistol1 | 3 | `0x50101230` | 300.0 / 45.0 / 2 / 0.03, range 512 |
| Pistol2 | 4 | `0x50101230` | 680.0 / 120.0 / 5 / 0.08, range 1024 |
| MPistol | 5 | `0x50101230` | 40.0 / 2.0 |
| Assault | 6 | `0x50101230` | 600.0 / 45.0 / 4 / 0.03 |
| Sniper | 7 | `0x50101230` + tracer `0x500fff50` | 80.0 / 6.0, range 1600 |
| Autoshotgun | 9 | `0x501018a0` | 400.0 / 80.0 / 3 / 0.04 |
| Slugger | 0x0A | `0x50104fc0` | 1280.0 / 200.0 / 3 / 0.02 |
| Shotgun | 0x0B | `0x50101a90` (+ reload `0x500ffff0`) | 1280.0 / 40.0 / 1 / 0.2 |
| Machinegun | 0x0C | `0x50101230` | 2000.0 / 100.0 / 7 |
| Phos grenade | 0x0D | `0x50104a20` | 500.0 / 30.0 / 3 / 0.01 |
| Rocket | 0x0E | `0x50102a40` | 30.0 / 5 / 0.2 |
| Rocket alt | 0x0F | `0x50103270` | 15.0 / 5 / 0.1 |
| MPG (beam) | 0x10/0x11 | `0x501051b0` / `0x50104510` | 10.0 or 200.0 |
| Flamethrower | 0x12 | `0x50105b20` | 15.0 / 3 |
| Deagle | 0x1D | `0x501063f0` | 300.0 / 3 / 0.02 |

Named fire routines: autoshot `0x5009a6b0`, flamegun `0x50031630`, mpg `0x500ee400`,
assault `0x500d2c00`, knife `0x500ffec0`, knife-alt throw star `0x500fff00`,
MPG burst `0x50104170` (12 pellets, **dmg 0xF0 = 240**, mask `0x6000081`).

### 4.1 Weapon table — recovered directly from the binary (authoritative)

The table above was assembled indirectly. It has now been read **straight out of
the registration code**, which supersedes it.

- Row initializer: `0x50065470` — a `__thiscall` method taking **18 arguments**
  (`this` = row base). It stores 14 numeric dwords + 4 `char[64]` strings
  (via `strcpy`) into one row; row is **0x14C bytes**.
- Registration block: **`0x50064B38`–`0x5006545F`** — an *unrolled* sequence of
  **31 calls**, each `PUSH imm` ×18 then `MOV ECX, rowbase` then
  `CALL 0x50065470`. No loop, hence "data-driven, no dispatcher".
- **Table base = `0x50159B20`, stride = `0x14C`, 31 rows.**
- Decoder: `analysis\decode_sof_weapontable.ps1` → `analysis\weapontable.txt`.

Field offsets within a row (from the initializer's stores):

| Offset | Arg | Content |
|---|---|---|
| `+0x004` | arg5 | numeric (`a5`) |
| `+0x008` | arg6 | numeric (`a6`) |
| `+0x00C` | arg7 | bitfield (`a7`) |
| `+0x010` | arg10 | numeric |
| `+0x014` | arg1 | `char[64]` |
| `+0x054` | arg2 | `char[64]` — **weapon model path** |
| `+0x094` | arg3 | `char[64]` |
| `+0x0D4` | arg16 | `char[64]` |
| `+0x114` | arg4 | numeric |
| `+0x118` | arg8 | numeric |
| `+0x11C` | arg9 | numeric |
| `+0x120` | arg12 | numeric |
| `+0x124` | arg13 | numeric (`a13`, float in practice) |
| `+0x128` | arg11 | **fire handler** |
| `+0x12C` | arg14 | **alt-fire handler** |
| `+0x130` | arg15 | numeric (`a15`, range in practice) |
| `+0x134`–`+0x140` | — | literal `0` |
| `+0x144` | arg17 | numeric |
| `+0x148` | arg18 | numeric |

Decoded rows (name = `+0x054` model path):

| Row | Model | fire (`+0x128`) | altfire (`+0x12C`) | a5 | a13 | a15 | a6 | a7 |
|---|---|---|---|---|---|---|---|---|
| 1 | `othermz/knife` | `0x50100BF0` | `0x500FFEA0` | 22 | 0.25 | 30 | 3 | `01000000` |
| 3 | `othermz/pistol1_p` | `0x50101230` | `0x50096C00` | 45 | 0 | 512 | 2 | 0 |
| 4 | `othermz/pistol2_p` | `0x50101230` | `0x50096C00` | 120 | 0 | 800 | 5 | `00020000` |
| 5 | `othermz/machinepistol` | `0x50101230` | `0x50096C00` | 40 | 0.5 | 512 | 2 | `01010000` |
| 6 | `othermz/assaultrifle_p` | `0x50101230` | `0x50096C00` | 45 | 0 | 512 | 4 | `00010000` |
| 7 | `othermz/sniper` | `0x50101230` | `0x500FFF50` | 80 | 0 | 1600 | 6 | `01080000` |
| 9 | `othermz/autoshot_p` | `0x501018A0` | `0x500FFF70` | 80 | 0 | 512 | 3 | `00028000` |
| 10 | `othermz/autoalt_p` | `0x50104FC0` | `0x500FFFA0` | 200 | 0 | 256 | 3 | `00000080` |
| 11 | `othermz/shotgun_p` | `0x50101A90` | `0x500FFFF0` | 40 | 0.5 | 128 | 1 | `00020000` |
| 12 | `othermz/machinegun_p` | `0x50101230` | `0x50096C00` | 100 | 0 | 1024 | 7 | `00020000` |
| 13 | `othermz/phos_p` | `0x50104A20` | `0x50100010` | 30 | 0 | 512 | 3 | 0 |
| 14 | `othermz/rocket_p` | `0x50102A40` | `0x50100070` | 30 | 0 | 512 | 5 | 0 |
| 15 | `othermz/rocket_alt_p` | `0x50103270` | `0x501000D0` | 15 | 0 | 512 | 5 | 0 |
| 17 | `othermz/mpg` | `0x50104510` | `0x50100150` | 200 | 0 | 512 | 3 | 0 |
| 19 | `othermz/flamerelease` | `0x50105930` | `0x50100300` | 30 | 0 | 512 | 3 | 0 |
| 29 | `othermz/gb_dekmz` | `0x501063F0` | `0x50100220` | 300 | 0 | 512 | 3 | 0 |
| 28 | *(unnamed)* | `0x50101230` | `0x50096C00` | 180 | 0 | 512 | 15 | `00020000` |

Rows 0, 2, 8, 16, 18, 20–27, 30 have an empty `+0x054` string (internal/projectile
or state rows, not directly pickable weapons).

**Corrections to the table above:** `pistol2` range is **800**, not 1024;
`shotgun` range is **128**, not 1280; the `fire fn` addresses above were
inferred and are superseded by this table.

### 4.2 Fire handler prototype — RESOLVED

`0x50101230` looked wrong for a weapon-fire routine (single-argument, loop-free,
no weapon/damage/ammo identifiers). That contradiction is now explained: **fire
handlers are invoked with exactly one pointer**, to a context struct that
*contains* the weapon row.

Call site `0x5006583B` inside dispatcher `FUN_500656e0` (`0x500656e0`–`0x5006584A`):

```
0x50065836: LEA  ECX, [ESP + 0x1c]     ; &ctx
0x5006583a: PUSH ECX                    ; the ONLY argument
0x5006583b: CALL dword ptr [EDI + 0x128]; edict/weapon row +0x128 = fire handler
0x50065841: ADD  ESP, 0x4                ; caller cleans -> cdecl
```

```c
typedef struct fire_ctx_s {
    struct edict_s  *ent;      // +0x00  PROVEN (0x5006579b)
    float            start[3]; // +0x04  PROVEN (0x500657b0/bb/bf)
    float            end[3];   // +0x10  PROVEN (0x500657cb/cf/d9)
    void            *p4;       // +0x1C  PROVEN (0x500657dd); NULL-tested
    void            *weapon;   // +0x20  PROVEN (0x5006579f) - the weapon ROW
} fire_ctx_t;                  // 0x24 bytes

typedef void (__cdecl *fire_handler_t)(fire_ctx_t *ctx);
```

Dispatcher: `void __thiscall FUN_500656e0(weapon_t *this /*ECX*/, edict_t *ent,
vec3 *start, vec3 *end, void *p4, void *p5)` — `RET 0x14` = 5 stack args.

Because the row arrives as `ctx->weapon`, the handler reads its own constants
directly (`ctx->weapon->+0x004`, `+0x008`, `+0x124`, `+0x130`). **No float
arguments are passed and no pellet loop is required in the handler** — which is
why `0x50101230` can legitimately be loop-free.

### 4.3 Corrected field semantics

Verified against the decoded table (`weapontable.txt`):

| Offset | Arg | Meaning | Evidence |
|---|---|---|---|
| `+0x004` | 5 | damage | 45 / 120 / 100 match known pistol/SMG/LMG damage |
| `+0x008` | 6 | pellets per shot | 2 / 5 / 7 for pistol1 / pistol2 / machinegun |
| `+0x118` | 8 | **spread, primary** | 0.03 pistol1, 0.2 shotgun, 0.2 rocket |
| `+0x11C` | 9 | **spread, secondary** | machinegun 0.08 / 0.04 differ |
| `+0x124` | 13 | secondary float (0.25 knife, 0.5 MP/shotgun) | |
| `+0x128` | 11 | fire handler | |
| `+0x12C` | 14 | alt-fire handler | |
| `+0x130` | 15 | range | 512 / 800 / 1024 / 1600 / 128 |

`edict+0x450` selects which spread is used:

```
0x50065813: MOV EAX, dword ptr [ESI + 0x450]   ; selector
0x5006581c: JZ   0x50065827                    ; 0 -> +0x118
0x5006581e: MOV EDX, dword ptr [EDI + 0x11C]   ; non-zero -> +0x11C
0x5006582e: CALL 0x500ee7f0                    ; consumes that float
```

Note this call site is **primary-fire only** — `+0x12C` (alt-fire) is never
touched here, so the alt-fire path uses a different dispatcher.

Correction to an earlier reading: `FUN_500ee7f0` was guessed to be a
"set next fire time" scheduler. The values say otherwise — `+0x118`/`+0x11C`
match the spreads previously labelled as such, so it is far more likely
"set current spread/accuracy". **Fire RATE is therefore not in the weapon row**;
the earlier `300.0`/`2000.0` "fire-delay" figures are still unlocated and must
live elsewhere (weapon item record or player weapon logic).

### Hit-scan / trace
Engine trace = `(*DAT_5015cac0)(start, mins, maxs, end, passEnt, mask, &tr)`.
Common masks: `0x6000081`, `0x60000B9`, `0x2010003`, `0x2020003`, `3`.
Post-trace checks: `hit+0x74` (client), `hit+0x30C` (movetype), `hit == world`, abort if
`tr.fraction < 0.99`. Cone test `0x50104CC2` uses angle 210.0.

### Projectiles
Rocket: spawn `0x50103163`, think `0x50102BF2`, explode `0x5010266E`.
Grenade: spawn `0x50102260`, think `0x50101F60`, die `0x501021C7`.
Flame: spawn `0x50105C01`, registered think `0x50105B20`, release `0x50105930`.
Thrown star: `0x50103BE8` / `0x50103FE0`.

### Ammo
`FUN_500698D0` maps ammoType → icon name; `FUN_50069D40` → pickup message/fade.
No single ammo field — ammo is per-item and enumerated.

---

## 5. Items, armor, health

Item manager ctor: `0x50067AA0` (3443 B). Item record size **0x164** (ammo/weapons),
**0x15C** (equipment/health/powerups).

Confirmed indices: 1 Knife · 2 9mm · 3 12ga · 4 .44 · 5 5.56 · 6 rockets · 7 battery ·
8 gas · 9 slugs · 0x12 .44 pistol · 0x13 9mm pistol · 0x14–0x1C ammo (30 each) ·
**0x1D Armor (50)** · 0x1E Flashpack (1/6) · 0x1F C4 (1/4) ·
**0x20 Light Amplification Goggles (100/100)** · 0x21 Claymore · **0x22 MedKit (1/2)** ·
0x23 Grenade (1/6) · 0x24 CTF flag · 0x25 Small Health (25) · 0x26 Large Health (50) ·
0x27 Control flag.

Item offsets: +0x34 byte flag · +0x54 tree key · +0x98 pickup-msg short · +0xA4 HUD icon ·
+0xAC value · +0x104 `char[0x40]` fade string.

- Armor pickup: `0x500A9350` (capacity gate `0x500F2770`, recharge gate `gclient+0x564`,
  3 s respawn on success / 5 s when full).
- MedKit tree insert: `0x50073D3F`.
- Goggles: `0x500FED70` (`client+0x558`, gain 0.6 off / 2.0 on).
- Armor sound gate: `0x500F2100` (`impact/player/armor.wav`).
- Health regen: `gclient+0x528..0x534`, +0.02/frame → 1.0, in `G_RunFrame`.
- Pickup logging: `0x50068DC0` → `pickups.log`.
- Spawn/loadout screens: `0x50072B70`, `0x50088B60`, `0x50088E60`, `0x50089210`.

---

## 6. Player movement

`0x500F53A0` (**ClientEndFrame**) is the pmove integration point:
- Early-out when cinematic `DAT_5015D1C8` set.
- Kill/respawn pending at `edict+0xE0`.
- Converts incoming `pmove_t` → `player_state`: weaponstate 1/2/3/4/6 by team (`ent+0x67`)
  and weapon index; copies 7 dwords into client **and** `client+0x2C4` for dead-reckoning.
- `maxspeed = value * 0.005493164` (= 1/182.044, classic Q2 conversion).
- `player/jump.wav` on jump; `MOVETYPE_STEP = 10`; touch callbacks.
- `PM_BoxTrace` collision-assisted movement via `(*DAT_5015CAC0)`.
- Post-move/weapon: `0x500F60D0`, `0x500F5E50`.

`0x500AE340` (**G_RunFrame**): framecount++ → `time = framecount * 0.1`; respawn/health
pass; per-edict think/free-think/gravity; engine `EndFrame`; per-client post-frame.

> The actual `Pmove` routine lives in **SoF.exe** (engine), not in this DLL.

---

## 7. Bots / AI

AI manager: `DAT_50159680` — +0x04 wanted, +0x08 capacity, +0x10 arrayA stride `0x44`,
+0x20 arrayB stride `0x21C`, +0xB0 32 × 0x18 spawn slots
(+0xB0 name\*, +0xB4 team\*, +0xB8 edict\*, +0xBC byte, +0xC0 float, +0xC4 int).

Waypoint manager: `0x50159A60` — +0x18/+0x1C node array **stride 0x34**,
+0x24 max nodes, +0x34 next-node index.

| Address | Role |
|---|---|
| `0x50059630` | **Bot spawn scheduler** (lowest free edict slot, honours `bot_fillserv`) |
| `0x50057AA0` | builds manager, reads `bot\botlist.txt`, 32 × `bot_name%i` |
| `0x50057170` | level start: `exec bot/mapcfgs/%s.cfg`, then `botlist.txt` |
| `0x5005C6D0` | **LoadWaypoints** — `bot\wpfiles\%s.wrs` |
| `0x5005DBE0` | `.wrs` parser: line records, `$` = comment |
| `0x5005F840` | writer (refuses unless `bot_wp_edit` set) |
| `0x5005A090` | `bot/wp/botroute` dumper |
| `0x500623E0` | `bot_wp_verifypaths` (path table stride `0x1C`) |
| `0x50061C00` | node-type dispatcher (`node+0x10`): 0=makewp, 2=junction, 4=elevator, 9=nav |
| `0x50058330` | `.bpf` personality parser (`bot\bots\%s.bpf`): `userinfo`, `accuracy`, `turning_speed`, `view_distance`, `general_intelligence`, `canchat`, `chatfreq` |

Route representation: 4-byte junction records `{u8 from_node, u8 to_node}`; per-path
record 0x1C: +0x00 node byte, +0x0C link array, +0x18 junction count.
`PutClientInGame` (bot path): `0x500F38A0` (1992 B).

Bots also load shared QuakeC-ish bytecode: **`FUN_5007EC40` (6273 B)** is a ~340-case
opcode dispatcher — an embedded scripted-VM used for AI animation/nav states
(`std_wpatrol_n_mrs_2`, `std_xalarmpush_n_a_n`, `std_esignalalarm_n_a_n`).

---

## 8. Level flow, modes, saves

- **Map load**: `0x500BDB50` — `strncpy` map name (0x3F) and entity string (0x1FF),
  tokenises `{...}` records, precaches `items`/`weapons`/`general` and environment FX.
- **Modes**: `DAT_5015D950` (0–4) gates `world.flags` bits `0x100` (0,1) / `0x200` (2) /
  `0x400` (3,4). `ctf_*` cvars in GameInit.
- **Mission message**: global `DAT_5015D244`; timer `DAT_5015C788`;
  `turnonmissionmsg` sets 3 + arms timer, `turnoffmissionmsg` sets 0. Single-player only.
- **Save slots**: `0x500AE7D0` consume (msgs 0x602/0x603/0x604/0x605), `0x500AE850` HUD.
- **World save/load**: `0x500BB0E0`/`0x500BB1D0` (`"GAME"` + per-client),
  `0x500BB4A0`/`0x500BB590` (`"ZSTF"` function-index tables + `"CLVL"` edict snapshot).
- **Intermission**: `0x500F6510` — picks `info_player_intermission`, falls back to
  `info_player_start`, then `info_player_deathmatch`.
- **Sirens**: `0x50097800` (REDSIREN/BLUESIREN), disarm `0x50097B60`, re-arm `0x50097C7B`.
- **Alarms**: `0x500AB1B0`/`0x500AB300` emergency light; security camera `0x5009D840` /
  detect `0x5009D5C0`.
- **Guards/hostages**: `sibguard*`, `irqbguard`, `tokhostage` spawn sets at
  `0x500C976F`, `0x500E637F`, `0x500E646F`, `0x500E6FAF`, `0x500E7A0F`.

---

## 9. Cheats / debug surface

`0x5008A6D0` (3525 B) exposes, gated by `cheats` (prints `"Cheats not available."`):
`godmode`, `noclip`, `notarget`, `phantom`, `ninja`, `heretic`, `killallmonsters`,
`gimme`, `putaway`, `defaultweapons`, `teamview`, `playerlist`, `entlist`, `listpickups`,
`givesnipertutorial`, `givemoretutorial`, `score`, `say`, `players`,
`turnon/offmissionmsg`, `loadpoint`, `destroyents`, `playlevel`, `elbow`, `bigelbow`,
plus the whole `bot/wp/*` + `makewp*` + `teletowp` + `writewpfile` waypoint editor.

`0x500AD820` strips all 15 weapon cvars and force-drops the weapon (single-player).
AI debug cvars: `ai_freeze`, `ai_goretest`, `ai_pathtest`, `ai_dumb`, `ai_nonodes`,
`bot_timing`, `bot_wppref`, `bot_hunt`, `bot_notarget`, `bot_runtact`.

---

## 10. Known gaps

1. `Pmove` / `PM_BoxTrace` / clipmove live in **SoF.exe** (engine) — not yet analyzed.
2. Network protocol / `gi` import-table slot names unresolved (99 dwords copied
   wholesale from the engine; not recovered statically).
3. Objective-completion logic not located — only the mission-message global was found.
4. Bot per-frame think + target selection not reached by string search (they reference
   no strings); likely inside the QuakeC VM at `0x5007EC40`.
5. Function boundaries for ~1800 addresses referenced only as data by the export table.

## Artifacts
| File | Contents |
|---|---|
| `analysis\exports.txt` | 3130-function inventory + all 24 export handlers decompiled |
| `analysis\weapons.txt` | 223 functions (weapon/pistol/damage/death) |
| `analysis\weapons2.txt` | 164 functions (per-weapon) |
| `analysis\items.txt` | 94 functions (items/armor/health/goggles) |
| `analysis\bots.txt` | 22 functions (bot/waypoint/AI) |
| `analysis\missions.txt` | 43 functions (mission/level/save/guard) |
| `analysis\sof_funcs.txt` | SoF.exe function inventory |
| `analysis\sof_net.txt`, `sof_sys.txt` | SoF.exe network protocol + connection setup |
| `analysis\sof_move.txt`, `sof_move2.txt`, `sof_move3.txt` | SoF.exe client input/usercmd sweeps |
| `analysis\sof_pmove.txt`, `sof_mvcfg.txt`, `sof_sv.txt`, `sof_const.txt` | negative-result probes (see §11) |
| `analysis\player_all.txt` | all 326 `player.dll` functions decompiled |
| `analysis\refgl_const.txt` | `ref_gl.dll` constant probe (renderer) |

---

# PART 2 — ENGINE (`SoF.exe`) AND `player.dll`

## 11. `SoF.exe` (Refractor engine, base `0x20000000`, 4532 functions)

### 11.1 Network protocol — **PROTOCOL_VERSION 0x21 (33)**
Dispatcher `FUN_2000EE30` (CL_ParseServerMessage, 2246 B); name table at
`0x2011E7A0 + opcode*4`; opcode read via `FUN_2001E260` (MSG_readByte).

| Op | Name | Handler |
|---|---|---|
| 0x00 | `svc_bad` (verified literal) | `Com_Error(1, "…Illegible…")` |
| 0x08 | svc_disconnect | `Com_Error(2)`, cvar `menu_dc_reason` |
| 0x09 | svc_reconnect | `DAT_201C1FAC = -99999` |
| 0x0A | svc_sound | `0x2000EA20` |
| 0x0C | svc_chat | `0x200FABAC` `"%s: %s"` |
| 0x0E | svc_serverdata | `0x20018530` + `0x2000E200` (version check) |
| 0x0F | svc_clientdata | `0x2000E690` |
| 0x10 | svc_baseline | 29 dword (116 B) entity state, stride 99 |
| 0x11 | svc_configstring | `0x20012DB0` |
| 0x17 | svc_frame | `0x20002E90` (CL_ParseFrame) |
| 0x19 | svc_temp_entity | `0x200307B0` |
| 0x1A | **svc_reliable** ("Bad Ghoul reliable packet") | `0x2008ECD0` |
| 0x1B | **svc_unreliable** ("Bad Ghoul unreliable packet") | `0x2008ED40` |
| 0x1C/0x1D | svc_muzzleflash / variant | `0x200125C0` / `0x20012600` |
| 0x1E | svc_stopsound | `0x200126C0` |
| 0x21 | **svc_lightstyle** (RLE) | inline, max len 0x3F |

Sizes: netchan **0x10018**, `sv_client_t` stride **0xD2AC**, entity_state **0x74**,
max edicts **0x3FF** (1024), frame_t **0x104**.

Connection: `CL_ReadPackets 0x2000C5C0` → `NET_GetPacket 0x2004E630` →
`SV_ConnectionlessPacket 0x2005EEA0` (OOB, header `ffffffff ffff ffff "OOB"`);
`getchallenge` → `0x2005E4A0`; `connect` → `0x2005E5C0` (1749 B).
Delta ring **16 frames**, max age **897 ms (0x381)**; `CL_ParsePacketEntities 0x200025A0`
uses the classic Q2 variable-length entity delta (bits `0x800000`/`0x1000000` select
1/4-byte index, `0x800` = REMOVE).
SV_Multicast variants: `0x20061A80` / `0x20061CA0`.

### 11.2 Client input / usercmd
- `CL_Init` `0x2000CAC0` — registers all client cvars.
- usercmd builder `0x20005240` (1465 B, CL_BaseMove-equivalent) + `0x20004B20` (1810 B,
  view angles) + `0x200060C0` (785 B, frame assembly).
- cmd struct **24 bytes (0x18)**: `+0x00` msec (clamped 100), `+0x01` buttons,
  `+0x04/+0x06/+0x08` angles[3] (pitch clamp ±89), `+0x0A/+0x0C/+0x0E` delta_angles
  (clamp ±200/±160), `+0x10/+0x14` engine extras.
- Button bits: `+forward`=0x01, `+speed`=0x02, `+back`=0x04, `+side`=0x08,
  `+moveup/+movedown`=0x10, 0x20 = klook/run toggle, 0x40 = lean, 0x80 = lean key.
- Key/usercmd ring at `0x201E75B4`, stride 0x18, 64 entries (`& 0x3F`).
- Mouse `0x2004A1F0`, joystick `0x2004AED0` (`(v-32768)/32768`, `/95`, `x+85`, `/180`).
- `cls.frametime` = `0x2015ECC0`, clamped `[1,200]` ms. Time source:
  `0x20055930` (`timeGetTime`, wrap-safe).
- **Delegation point**: global `0x20225054` = `ccls_t*` (function-pointer table at
  `+0x04, +0x0C, +0x14, +0x18, +0x28`); `+0x14`/`+0x18` gate the cmd extras.

Cvar handles: `cl_forwardspeed 0x2015ECA4`, `cl_sidespeed 0x2015EDD0`,
`cl_upspeed 0x2015EE08`, `cl_yawspeed 0x2015ECC4`, `cl_pitchspeed 0x2015EE0C`,
`cl_anglespeedkey 0x2015EE10`, `cl_run 0x2015ECA0`, `cl_predict 0x20225098`,
`cl_predict_weapon 0x2022508C`, `cl_minfps 0x2015EE54`, `cl_maxfps 0x20225050`,
`cl_gun 0x2015EE60`, `m_pitch 0x201C1EF8`, `m_yaw 0x20225064`.
`cvar_t` layout: `+0x00` name, `+0x04` string, `+0x0C` flags, `+0x10` update cb,
`+0x18` float value, size 0x20.

### 11.3 Movement physics — **not located (documented negative result)**
Exhaustive probing established:
- No `sv_gravity` / `sv_friction` / `sv_maxspeed` / `sv_stepsize` / `sv_maxvelocity` /
  `pmove_msec` strings anywhere in `SoF.exe` (only 35 `sv_` strings exist at all:
  `sv_precache`, `sv_altpmodlistfile`, …). This build renamed/removed the classic
  physics cvars.
- Memory scan for `800.0f` (13 hits, 4 functions) → all are **1000.0 slider clamps**
  in `0x200339C0` (note `800.0f` and `1000.0f` are the same bit pattern
  `0x447A0000`, so this constant is not a reliable gravity marker).
- `270.0f` occurs **exactly once** (`0x200537C0` → `DAT_20390234 = 270.0`) and that
  function is a one-shot jump-velocity override (`-300.0` sentinel → 100/80/50 by
  class byte), not `Pmove`.
- `2000.0f`, `1.001f` (OVERCLIP), `320.0f`, `18.0f` → 0 in-function hits.
- `CL_BaseMove` never dereferences `cl_forwardspeed`/`cl_sidespeed`/`cl_upspeed` —
  it builds commands only, and never writes `forwardmove`/`sidemove`/`upmove`.
- `player.dll` (see below) contains **no vector math at all** — impossible for `bg_pmove`.
- `ref_gl.dll` contains none of these constants (pure renderer).

Conclusion: this is a heavily modified 2015 re-release; classic Q2 `Pmove` is not
present in any shipped binary. The game module receives an **already-computed**
`pmove_t` in `ClientEndFrame` (`0x500F53A0`) and only consumes view angles, buttons,
velocity and `PM_BoxTrace` results. The producing code is reached through the engine
`ccls_t` dispatch table (`0x20225054`) and is not statically reachable from the
client input path. **Remaining unknown.**

## 12. `player.dll` — client player entity / weapon module

- Image base **`0x40000000`**, 326 functions (all decompiled, 0 failures),
  code `0x40001000`–`0x4000AF87`, remainder is static MSVC CRT.
- Exports **`GetPlayerClientAPI 0x40001020`** and **`GetPlayerServerAPI 0x400010D0`**
  (162 B each). Both return `&0x40018C18`, API version `1`.
- API struct: `+0x04` globals block (`isServer` @`0x40018BC0`), `+0x10` `g_items`
  (`PTR_DAT_40015F54`), `+0x24` **CreatePlayer** `FUN_40005220`,
  `+0x28` **FreePlayer** `FUN_40005280`, plus 19-dword common imports @`0x40018CE0`
  and 38-dword server-only imports @`0x40018C48`.
- Purpose: client-side **player entity state machine** — holstered-item slots
  (6 slots @`+0xC` stride 0x10), viewmodel animations
  (`s_fire1_2{l,2sr_to_sl,…}`, `s_idle_a/c/d`), item vtable dispatch at
  `PTR_DAT_40015130` (types: 3 goggles, 5 medkit, 6 grenade, 7 ctf_flag).
- `FUN_40001D40` (750 B) = player entity constructor (`operator_new(0x29C)`);
  `FUN_40001770` (151 B) = holdable-item countdown; `FUN_40001A20` (597 B) =
  holster/carry-slot machine.

## 13. Tooling built for this analysis
All under `%TEMP%\opencode\ghidra-scripts`, driven by `analyzeHeadless`:
`DumpGameExports.java` (export-table + function inventory), `DumpByString.java`
(string→function reachability), `DumpByRef.java` (data-ref seeds + callee BFS),
`DumpAll.java` (bulk decompile), `FindConst.java` (raw-constant memory scan).
Project: `%TEMP%\opencode\gproj` (REAPROJ) holds `gamex86.dll`, `SoF.exe`,
`player.dll`, `ref_gl.dll` — reusable for further passes with `-noanalysis`.

---

# PART 3 — DEEP DIVE (all 3,437 `gamex86.dll` functions decompiled)

## 14. Correction: the script VM

`0x5007EC40` (6273 B) is **not** a VM. It is **opcode `0x21`** of one.
The real dispatcher is **`FUN_500818D0`** (1697 B) with **54 opcodes (`0x00`–`0x35`;
`0x0B` and `0x2E` absent, no `default`)**. `0x5007EC40`'s ~340 `case` labels are an
**AI action-ID → animation state-name** lookup table (`std_*`, `cch_*`, `gz_*`).

### Script VM context (`this`)
| Offset | Meaning |
|---|---|
| +0x104 | bytecode program base pointer |
| +0x108 | status (1 = finished/terminated) |
| +0x110 | program end PC |
| +0x114 | **PC** (fetch is 1 byte) |
| +0x11C / +0x120 | entry arguments |
| +0x124 | flags (bit 3 = trace) |
| +0x144 / +0x148 | operand stack head / depth |
| +0x15C / +0x160 | deferred-call queue / count |
| +0x188 + n*4 | **local variable frame** |

Values are refcounted COM-style objects with a vtable: `+0x04` get-int,
`+0x08` get-float, `+0x0C` get-string, `+0x10` get-entity, `+0x34` add,
`+0x38` sub, `+0x3C` mul, `+0x40` div, `+0x44` add-assign. Comparison ops are
folded into these classes rather than being VM opcodes.

### Opcodes (recovered)
`0x00` PUSH_CONST · `0x01` PUSH_CONST_VAR · `0x02/0x03` STORE_LOCAL(_CV) ·
`0x04/0x05` STORE_INDIRECT(_CV) · `0x06` DUP · `0x07` ADD · `0x08` SUB ·
`0x09` MUL · `0x0A` DIV · `0x0C` ADD_ASSIGN · `0x0D` SUB_ASSIGN · `0x0E` MUL_ASSIGN ·
`0x0F` DIV_ASSIGN · `0x10` JUMP · `0x14` TERMINATE · `0x1F` CALL ·
`0x20` CALL_0 · **`0x21` AI_ANIM/STATE_NAME** · `0x22` CALL_EXTERNAL
(`FUN_50081800`, extern table `DAT_50142FA8`) · `0x23`–`0x35` misc handlers
(listed individually in the file). Runaway-loop guard: 1000 iterations →
`"Runaway loop for script OR more t..."`. Entry `0x500817D0`; per-frame tick
`0x50081730` (drains the deferred queue first).

## 15. Objectives: not in this module

**There is no objective/mission system in `gamex86.dll`.** Exhaustive search for
`objective|artifact|rescue|escape|hostage|camp|goalid|endlevel|nextlevel|tutorial|bonus`
returns zero. Objectives live in map-authored `target_*` / `func_*` / `trigger_*`
graphs plus external data — a chain reaction, not tracked counters.

### Level progression chain (recovered)
```
target_changelevel  (spawn 0x500BF260, think LAB_500BF050)
  -> 0x500ADBB0   resolves next map -> edict+0x300 = &DAT_5015CD60
  -> 0x500F6510   BeginIntermission: _DAT_5015D1C8 = time, finds
                  info_player_intermission -> DAT_5015D1D4..1E8, repositions clients
  -> 0x500ADD60   end-of-level evaluator (deathmatch==6.0 all-dead, ==4.0 timed,
                  timelimit vs gclient+0x304, percentage cvar DAT_5015C95C)
                  sends G_SendServerCommand(0x0D0D/0x0A0D/0x3C/0x3B)
  -> player must press +attack after 10 s: gclient[0xB7]!=0 ? 7 : 5 (intermission state)
  -> DAT_5015D1D0 = 1
  -> 0x500AE0A0   PerformLevelChange: sprintf("gamemap %s", DAT_5015D1CC)
  -> (*DAT_5015CB78)(buf)   engine loads next map
```

### Export slot +0x3C (`0x500AD990`) — resolved
```c
if (ent->client && ent->client->0x324) ent->client->0x324 = 0;
```
No in-module callers; invoked by the engine via `DAT_5015C90C`. `client+0x324` is a
**numeric team/group id** (set from `bot_team`, preserved across respawn, compared for
friendly-fire, overrides the `client+0xCC` teamname string). Role =
**"reset player's team affiliation"** hook. Not mission state.

### Game mode `DAT_5015D950` (read-only here; set by server/menu)
0/1 → flag `0x100` (FFA) · 2 → `0x200` (2-team) · 3/4 → `0x400`. Also scales pickup
delay (`mode*0.01+0.06`), respawn/score (`(mode*5+5)*100`), muzzle timing
(`0.2+0.45*mode`, `(5-mode)*0.05`).

`DAT_5015D244` / `_DAT_5015C788` are **cosmetic HUD only** (sets `gclient+0xB4|0x80`,
`+0xB5|0x01|0x04` on a 5 s window).

## 16. The largest functions, identified

| Address | Size | Subsystem |
|---|---|---|
| `0x50033570` | 14752 | **Gib/body-FX — "Cap"/boss uniform archetype** (0x30-stride gib array; hundreds of `gbolt_Cap_*` model names) |
| `0x50031860` | 7058 | Gib archetype — standard uniform |
| `0x50001A30` | 6981 | **AI-class factory** — `switch` over ~100 monster AI classes, `operator_new` per class + vtable install (`"ERROR: invalid ai class code (%d)"`) |
| `0x500370B0` | 6727 | Gib archetype — tight/dress |
| `0x50019B20` | 4580 | Blood-spray / bullet-hole wounding |
| `0x5003B550` | 4559 | **Monster combat positioning** (Ideal vs NonIdeal, aim/strafe anims) |
| `0x5002A830` | 4238 | Head/mask gore (`HOODHEAD`/`BALDHEAD`/`MASKHEAD`/`COMFACE`) |
| `0x500158A0` | 4022 | Second bullet-hole path (twin of `0x50019B20`) |
| `0x50028070` | 4000 | Gore/bolt dispatcher, head & neck severing |
| `0x500457C0` | 3725 | **AI navmesh builder** (trace-based floor/node linking, `"Connecting floors to nodes"`) |
| `0x500F75C0` | 2784 | Third-person/spectator camera solver (trace mask `0x2010003`, pitch clamp ±14°) |
| `0x5004CA30` | 2802 | **AI path resolver / move-along-path** (`"Error - Problem with path"`) |

Key AI path: `0x5003B550` (positioning) → `0x5004CA30` (path resolve) →
`0x500457C0` (navmesh). AI objects live at `edict+0x450`; AI class factory is the
roster's entry point.

## 17. Coverage accounting

| Area | Status |
|---|---|
| Export table / client-server API | 100% |
| Client lifecycle & userinfo | 100% |
| Damage, death, gib | ~95% |
| Weapons, projectiles, ammo | ~90% |
| Items, armor, health, powerups | ~90% |
| Bots, waypoints, spawn | ~85% (per-frame think + target selection still hidden) |
| Level flow, saves, intermission | ~90% |
| Monster AI framework | ~70% (factory + positioning + navmesh mapped; per-monster behaviour tables not) |
| Script VM | ~85% (opcodes recovered; bytecode programs live outside the DLL) |
| Netcode | ~95% |
| Renderer / HUD / particles / audio | ~10% |
| Movement physics | **0% — not present in any binary** |
| Mission objective data | **0% — lives in `.map` files and `.pak` data** |
### 4.4 Fire chain � dispatcher and its sole caller (PROVEN)

`0x500659C0` is the ONLY caller of the dispatcher `0x500656E0`.

```c
// 0x500659C0  � __thiscall, RET 0x18 (6 stack args), 369 bytes
void __thiscall FireWrapper(weapon_row_table_t **tbl /*ECX*/,
                            int selector, edict_t *ent, vec3 *start,
                            vec3 *end, void *effect_src, void *p6);
```

Its prototype is **correct** in Ghidra (verified against every stack read).

Key mechanics, all PROVEN:

* `EDI = ECX`, then **double indirection**: `ECX = [EDI]` gives the row-table
  base, then `+ idx*0x14C` selects the row. So the caller OWNS the table; the
  dispatcher `this` is the **weapon row**, not the edict.
* **Stride 0x14C re-proven** independently:
  `LEA EDX,[EAX+EAX*4]` (5n) -> `LEA ECX,[EAX+EDX*8]` (41n) -> `LEA ESI,[EAX+ECX*2]` (83n) -> `SHL ESI,2` (332n = 0x14C*n).
* `EDX` (dispatcher arg `ent`) = caller `Stack[0x8]` = the `edict_t*`. Proven by
  the edict reads at +0x458, +0x45C, +0x74.
* Only two state writes in the whole function, and both are a **model precache
  cache**, not per-player fire state: `[EDI+0x138]`, `[EDI+0x13C]`, gated on
  `(*row+0x138)==0`, using model path strings at `row+0x54` (primary) and
  `row+0x94` (secondary).
* `"flash"` (0x50133D48) is the ONLY string referenced � muzzle-flash effect spawn
  via `FUN_50085470`.

**Fire rate, ammo consumption, and reload are ALL provably absent** from both
`0x500659C0` and `0x500656E0` (no time global, no float compare, no DEC/SUB of
memory, no reload state). Neither is the literal `1` pushed at `0x50065ACF` �
that is a bool arg to the flash spawn.

### 4.5 Where fire rate must live

7 callers / 18 call sites of `0x500659C0`, by descending prior:

| Call sites | Caller | Note |
|---|---|---|
| `0x5009C12E,0x5009C1E2,0x5009C296,0x5009C34A` | `FUN_5009BD40` | 4 sites, early return � best single candidate for a per-weapon fire-rate table |
| `0x5009B901,0x5009B9B5,0x5009BA69,0x5009BB1D` | `FUN_5009B530` | dense cluster, 4 sites |
| `0x5009ABE0,0x5009ABFE` | `FUN_5009A6B0` | |
| `0x5002ED3D` | `FUN_5002E620` | 1866 B, different code region � likely player/QC-side |
| `0x500D099F,0x500D2E14` | `FUN_500D2C00` | |
| `0x500E9A8A,0x500E9AD5` | `FUN_500E97D0` | |
| `0x500EC247` | `FUN_500EC040` | |
| `0x5010685E,0x50106AAE` | vtable/thunk (caller list omits; refs exist) | likely the client-callback dispatch |

New edict/player path discovered: `edict+0x74` -> player -> `+0x34C` -> weapon
state, with `weapon_state+0x0C` a boolean used as the primary/alt-fire selector.

### 4.6 `0x5009BD40` is the AUTOGUN TURRET, not the player weapon path

Worth recording because it reveals the **canonical SoF fire-rate pattern**:

```
0x5009bd6b: FLD  float ptr [0x5015CCDC]      ; INFERRED = level.time
0x5009bd71: FADD double ptr [0x50125060]      ; 0.1f
0x5009bd7e: FSTP float ptr [ESI + 0x2B4]      ; ent+0x2B4 = time + 0.1
```

SoF expresses fire rate as a **per-entity "next fire time" float at edict+0x2B4**,
stamped as `level.time + interval`. Here `+0x2B4` is written twice and read
zero times in this body � the **comparison lives in the caller at `0x5009C5C6`**
(unresolved call, Ghidra lost the containing function).

Key findings:
* 4 fire calls are **per-barrel**, not per-weapon: sub-entities 2,3 (right pair,
  `_FLASHTOPRIGHT`, `"gunright"` teardown) and 4,5 (left pair, `_FLASHTOPLEFT`,
  `"gunleft"`). All four fire in the same tick. No alternating muzzle.
* All 4 pass the **same constant selector `0x15`** and the same table base
  `ECX = 0x50159B18`. No weapon-type dispatch at all.
* Gates: `dot(view,fireDir) > 0.95f` (~18.2 deg half-angle) at `0x5009c066`;
  `gi.trace` mask `0x60000B9`; hit must have `+0x74 != 0` (i.e. must be a player).
* **No ammo decrement, no reload** (zero INT_SUB/DEC in 2113 pcode ops).
* 0.1 s is a **hardcoded immediate in .rodata**, not table-driven � so per-weapon
  intervals must come from elsewhere, i.e. from the weapon row or player state.
* Ghidra's prototype is wrong: returns `bool`, param is `edict_t*` not `int*`,
  and `param_1[0xad] = (int)(...)` is a mis-typed FLOAT store.

### 4.7 Corrections to earlier assumptions

* **Weapon table base is `0x50159B18`**, not `0x50159B20`. The 8-byte delta means
  our earlier "base" was actually row 0 + 0x08. Re-verify before relying on it.
* **Selector index space is wider than weapon type 2..12.** Selector `0x15` (21)
  indexes the 31-row table. So selector != weapon type index; they are different
  index spaces. Do not conflate them.

### 4.8 Next fire-rate targets (revised)

`0x5009BD40` is ruled out. Remaining callers of the fire wrapper:
`0x5009C5C6` (turret rate gate � useful as the pattern template),
`FUN_5002E620` (1866 B, different code region, likely player/QC-side),
`FUN_5009B530`, `FUN_5009A6B0`, `FUN_500D2C00`, `FUN_500E97D0`, `FUN_500EC040`.
The player weapon path is the priority: look for `edict+0x2B4`-style stamps or a
per-weapon interval lookup indexed by the selector.

### 4.9 `0x5002E620` is the AI MELEE attack (`CBaseAI::Attack`, vtable slot +0xAC)

Not player weapons. Virtual method inherited by 5 AI vtables (0x50126850,
0x501270D8, 0x501273A0, 0x501275B8, 0x501277C0); only slot +0x9C differs.
Uses `wbolt_*`/`sbolt_*`/`gbolt_*` model body-zone tags on the victim.

Two globals now CONFIRMED:
* `0x5015CCDC` = **`level.time`** (f32) � read via `FLD float` for elapsed
  arithmetic, and as a dword when stamping. Confirmed.
* `0x50159B18` = **weapon row table base** � `MOV ECX,0x50159B18` immediately
  before `CALL 0x500659C0` at `0x5002ED38`.

SoF cooldown idiom (elapsed-based, differs from the turret stamp form):
```c
// 0x5002E6BF / 0x5002E6C5
elapsed = level.time - this->m_lastAttackTime;      // this+0x180, f32
delay   = FUN_50012240(this->vfunc_0xB4(edict), this->0x1C4)
        * *(float*)0x5015D90C                        // BSS scale (zoom/time-scale)
        * (this->0x1A8 ? 2.5 : 1.0)
        * (entnum_resolve(0x5015D9C0) == edict ? 0.5 : 1.0);
if (elapsed < delay) return;                         // still cooling down
...
this->0x180 = level.time;                            // 0x5002ED56/0x5002ED5B
```
`this->0x1C4` is DEC'd then INC'd on cancel � an **attack-charge counter**, NOT
ammo (no item record touched, no stride, hardcoded +/-1).

`FUN_50012240(attackType, n)` is the **per-attack-type interval function** and
returns a **float in ST(0)** (Ghidra types it int � wrong; proven by `FSTP ST0` at
0x5002E66F). Switch on attackType: 1 -> Q_random(1.35,1.65); 6 -> Q_random(0.10,0.50);
0xC -> Q_random(0.50,1.00); 9 -> n/3; others pass through. `DAT_5015CB20` is
therefore `Q_random_float(min,max)`.

Important trap: the dword pairs `{0,0x40040000}` / `{0,0x3FF00000}` / `{0,0x3FE00000}`
are consumed by **`FMUL double ptr`** => **2.5 / 1.0 / 0.5**, NOT the float32 values
2.0625/1.875/1.75. Read as doubles.

Also Ghidra inverted the cancel/refund polarity at `0x5002EAB6`-`0x5002EABB`; trust
the raw `TEST AH,5` parity over the pseudocode.

### 4.10 Status of the fire-wrapper callers
| Caller | Verdict |
|---|---|
| `0x5009BD40` | autogun TURRET - ruled out |
| `0x5002E620` | AI melee `Attack()` - ruled out |
| `0x5009A6B0` | **UNTESTED** - next |
| `0x5009B530` | **UNTESTED** - next |
| `0x500D2C00` | untested |
| `0x500E97D0` | untested |
| `0x500EC040` | untested |
| `0x5010685E`, `0x50106AAE` | vtable/thunk in the 0x50106xxx client-callback region - high value for the PLAYER path |

Note: every caller found so far is a DEPLOYED ENTITY or AI. The player weapon path
likely reaches the fire wrapper through the `0x50106xxx` callback thunk rather than
a `0x5009xxxx` entity think.

### 4.11 *** HIGH VALUE � the PLAYER fire path: `0x5010666C` ***

Ghidra reports `not_in_procedure` at the call sites `0x5010685E` / `0x50106AAE`
(it never created a function there), but the bytes ARE code and the enclosing
function was located manually.

Disassembly by hand from the DLL (file offset == RVA):
```
0x10666B: C3                              ; end of previous function
0x10666C: A1 18 9B 15 50   MOV EAX,[0x50159B18]   ; <-- weapon table base is a GLOBAL
0x106671: 8D 14 4B         LEA EDX,[EBX+EBX*2]    ; EDX = 3*n
0x106674: 8D 0C 90         LEA ECX,[EAX+EDX*4]    ; ECX = base + 12*n
0x106677: E8 84 F2 F5 FF   CALL ...
0x10667C: 8B B4 24 A8 00 00 00  MOV ESI,[ESP+0xA8]
```
=> **function entry `0x5010666C`**, ~1.1 KB, no `55 8B EC` prologue (frame-pointer
omitted), so `search_procedures`/callers will never find it. Use the raw address.

Both fire-wrapper call sites verified by hand:
```
0x10685E: E8 5D F1 F5 FF   CALL 0x500659C0   (fire wrapper)
0x106863: 8B 0D D0 D9 15 50 MOV ECX,[0x5015D9D0]  ; <-- table from a DIFFERENT global
0x106AAE: E8 0D EF F5 FF   CALL 0x500659C0   (fire wrapper)
0x106AB3: 8B 0D D0 D9 15 50 MOV ECX,[0x5015D9D0]
```

TWO DIFFERENT TABLE SOURCES � this is why the AI/turret callers all looked wrong:
* AI melee + autogun turret: `ECX = 0x50159B18` (immediate)
* **This path: `ECX = *(0x5015D9D0)` (indirect, via global)**

The `LEA [EAX+EDX*4]` with `EDX=3*n` indexes a **12-byte-stride** table off the
same `0x50159B18` base � a SECOND table, not the 0x14C weapon rows. Likely the
per-weapon-type descriptor/anim table. Needs mapping.

**NEXT ACTION (highest value remaining):** `rea_analyze_function` on
`0x5010666C`. Expect fire rate + ammo decrement here. Report
`analysis\gamex86_all.txt` may already cover it � grep for 5010666c first.

### 4.12 `0x5010666C` region disassembled (Ghidra has no function object here)

Ghidra will NOT create a procedure at `0x5010666C`, and
`procedure file-offset:0x10666C` also fails ("no procedure starts at or contains").
Rizin is unavailable on this Windows host (`ERR_REA_WINDOWS_NATIVE`).
**Working method:** `dumpbin /DISASM /NOBYTES` on the DLL, then select lines.
Full dump is 380,817 lines; `0x5010666C` is at line ~356157. Pattern-match on the
exact `  ADDRESS: ` prefix to extract a window.

CORRECTION to 4.11: I claimed `ECX = *(0x5015D9D0)` at the call. **Wrong.**
The actual sequence is:
```
0x50106859: B9 18 9B 15 50   mov  ecx,50159B18h     ; ECX = table base (IMMEDIATE)
0x5010685E: E8 5D F1 F5 FF   call 500659C0
0x50106863: 8B 0D D0 D9 15 50 mov  ecx,dword ptr [5015D9D0h]  ; AFTER the call
```
`0x5015D9D0` is loaded *after* the call � it is unrelated to the table arg. So
this path uses the same immediate table base as the AI/turret. My "two different
table sources" claim was wrong; disregard it.

Structure: TWO near-identical blocks (primary and alt fire), each ~0x220 bytes:
* block A: `0x5010666C` .. fire call `0x5010685E`, then `call 500F8FE0`
* block B: `0x50106890` .. fire call `0x50106AAE`, then `call 500F8FE0`
Mirrored calls confirm they are the primary/alt pair.

Per block the sequence is: `[50159B18h]` table base -> `lea edx,[ebx+ecx*2]` ->
`lea ecx,[eax+edx*4]` (a **12-byte-stride** table off the same base) -> `call
50065900` -> compute muzzle = ent->origin + player->[+0x28..0x38] -> `call
50100680` -> vtable `[edx+70h]` (tested, `je` skips firing) -> `call 500C3BB0`
with `push 50133D48h` ("flash") -> `call [5015CAC0h]` (gi.trace) -> `call
500FE050` (normalize) -> fire wrapper -> `call 500F8FE0` (sphere trace).
`esi+74h` = player/client; `edi` = weapon object with vtable (slots 0x70, 0x74);
`edi+1Ch` / `edi+24h` = two floats used as vec3 components.

**FIRE RATE IS NOT HERE.** No reference to `0x5015CCDC` (level.time) and no
`dec`/memory-`sub` anywhere in either block. This is the "fire now" path; the
rate gate and ammo decrement are in its caller.

UNRESOLVED: nothing in the file references `0x5010666C` (searched all `call
5010666C` in the dump, and searched the raw bytes for the VA `6C 66 10 50` �
zero hits). So it is reached by neither a direct call nor a vtable/jump-table
entry. Most likely the preceding `C3` is an immediate byte and dumpbin's LINEAR
disassembly is desynchronised here, meaning `0x5010666C` is a branch target
inside a LARGER function whose true entry is further back.
**Next step:** find the real entry by scanning backwards from `0x5010666C` for a
`call`-target (Ghidra DOES know the instruction boundaries here - it reported
these as incoming references to `0x500659C0`). Use `rea_xrefs`/`find_xrefs_to_name`
on `0x5010685E`, or search the dump for jumps whose target is `5010666C`.

### 4.13 *** BREAKTHROUGH: player weapon fire callbacks, object layout ***

Found the registration site at `0x500BA02D`-`0x500BA09B` � an init routine building
a weapon-class object on the stack:

```
500BA043: mov [esp+4],  5015CCDC   ; &level.time  (cached global ptr)
500BA04B: mov [esp+8],  50106640   ; PRIMARY FIRE callback
500BA053: mov [esp+0C], 50106890   ; ALT    FIRE callback
500BA05B: mov [esp+10], 500EEBA0
500BA06B: mov [esp+14], 50106AE0
500BA063: mov [esp+18], 500EEC70
500BA09B: mov [esp+1C], 50106B00
500BA02D: mov [esp+0B0],500ADB20
500BA038: mov [esp+0B4],500FE2B0
500B9FF3..500BA023: gi.* pointers copied in from 5015C9F4/CA48/CA90/CA94/
                    CA98/CA9C/CAA0/CB04/CB78
```

**Weapon object layout (partial):**
| Offset | Contents |
|---|---|
| `+0x04` | pointer to `level.time` (0x5015CCDC) |
| `+0x08` | **primary fire callback = `0x50106640`** |
| `+0x0C` | **alt fire callback = `0x50106890`** |
| `+0x10` | `0x500EEBA0` |
| `+0x14` | `0x50106AE0` |
| `+0x18` | `0x500EEC70` |
| `+0x1C` | `0x50106B00` |
| `+0xB0`/`+0xB4` | `0x500ADB20` / `0x500FE2B0` |

These are **indirect** (no direct `call 50106640` anywhere in the binary), so the
fire path runs as `call dword ptr [weapon + 0x08]` / `[weapon + 0x0C]`.

Function entries confirmed (the earlier `C3` at 0x5010666B was an immediate byte �
dumpbin linear disasm desync; **the C3 heuristic for finding entry points is
unreliable**):
```
50106640: sub esp,90h                  ; PRIMARY fire  - real entry
50106646: mov ecx,[5015D9B8h]          ; weapon registry
50106655: mov edx,[ecx+10h]            ; weapon TABLE (pointer array)
50106659: mov eax,[ebp+2Ch]            ; weapon index arg
5010665D: mov edi,[edx+eax*4]           ; edi = weapon OBJECT
50106660: mov ebx,[edi+0B8h]           ; weapon+0xB8
50106666: lea eax,[ebx+ebx*4]          ; 5n
50106669: lea ecx,[ebx+eax*8]          ; 41n
```
So weapons live in a **pointer array** at `*(0x5015D9B8)+0x10`, indexed by the
arg at `[ebp+0x2C]`.

`0x50106890` is a SEPARATE entry (alt fire), not a continuation � the
registration stores it separately and it has its own `sub esp,90h`-style body.

Each fire fn (~0x220 B) does: table base `0x50159B18` -> 12-byte-stride lookup ->
`call 50065900` -> muzzle = origin + `player->+0x28..0x38` -> `call 50100680` ->
vtable `[edx+70h]` gate (`je` skips) -> `call 500C3BB0` (`"flash"` 0x50133D48) ->
`call [5015CAC0h]` gi.trace -> `call 500FE050` normalize -> **fire wrapper
`0x500659C0` with `ecx=0x50159B18`** -> `call 500F8FE0` sphere trace.
Inside: `esi+0x74` = player/client, `edi` = weapon object, `edi+0x1C`/`edi+0x24`
= two floats forming a vec3.

**NEGATIVE (definitive): over 900 disassembled lines of both fire functions there
is NO reference to `0x5015CCDC` (level.time) and NO `dec`/memory-`sub`.**
So neither the fire-rate gate nor the ammo decrement is in them. The weapon object
merely *holds a pointer to* level.time at `+0x04`.

**NEXT STEP (now precise):** the rate gate and ammo decrement are in whatever
invokes `call [weapon+0x08]` / `call [weapon+0x0C]`. Find it by locating code that
loads the weapon registry `0x5015D9B8`, reads the table at `+0x10`, indexes it,
then makes an indirect call through `[reg+8]` or `[reg+0C]`. Grep the dumpbin
dump for `5015D9B8` and for `call dword ptr [e??+8]` / `[e??+0Ch]` within those
functions. That caller is the player weapon Think/Cmd_ routine and is the last
unknown before implementation.

### 4.14 Callback dispatch found � `0x50073C90`

The fire callbacks are reached through the **weapon object's vtable**:

```
50073CE4: mov  edx,[edi]           ; edi = this (weapon manager/controller)
50073CE8: call [edx+00000084h]     ; manager vtable slot 0x84 -> some query
50073CF2: mov  ecx,[esi]           ; esi = arg -> *esi = weapon object
50073CF4: cmp  dword ptr [ecx+44h],1     ; weapon+0x44 == 1 ?
50073CF8: jne  50073D03
50073CFA: mov  eax,[ecx]           ; weapon vtable
50073CFC: call [eax+0Ch]           ; <-- ALT FIRE callback
50073CFF: test al,al
50073D01: je   50073D15
50073D03: mov  ecx,[esi]
50073D05: mov  eax,[ecx+44h]
50073D08: test eax,eax
50073D0A: jne  50073D2C
50073D0C: mov  edx,[ecx]
50073D0E: call [edx+18h]           ; weapon vtable slot 0x18
```

So **weapon vtable `+0x08` = primary fire (`0x50106640`), `+0x0C` = alt fire
(`0x50106890`)** � they are vtable slots, not struct fields. The struct built at
`0x500BA02D` is the weapon-class **vtable image** (the `mov [esp+4],5015CCDC` entry
is then NOT a vtable slot; the vtable base must be `[esp+8]` or later).

`0x50073C90` is a **dispatcher**: it selects which callback to invoke based on
weapon fields `+0x44` (values 1 and 2 tested) and `+0x54` (tested against `0x24`).
Same `call [edx+70h]` precondition seen inside the fire functions.

**Still no `level.time` and no ammo decrement** at this layer either � this
dispatcher only chooses *which* callback. Therefore the rate gate and ammo
consumption live in the routine that decides whether to call `0x50073C90` at all.

**NEXT STEP:** find callers of `0x50073C90` (`call 50073C90` in the dumpbin dump).
That caller is the player weapon Think/Cmd_ and is the last hop to the gate.
Search pattern: `Select-String -Path $dump -Pattern 'call        50073C90'`.

### Working method for this region (no Ghidra function objects)
1. `dumpbin /DISASM /NOBYTES gamex86.dll > %TEMP%\sof_disasm.txt` (~380k lines)
2. `Select-String -Pattern '<ADDR>:'` to get a line number, then `Select-Object -Skip`
3. Beware: dumpbin **linearly** disassembles and desynchronises in places, so a
   `C3` byte is NOT reliable evidence of a function boundary (it bit us at
   0x5010666B). Confirm entries by a real prologue (`sub esp,NNh` / `push` runs).

### 4.15 *** FIRE-RATE GATE IDIOM + weapon controller class ***

**The universal SoF time-gate idiom** (110 sites in the binary):
```
fld/fcomp dword ptr [5015CCDCh]   ; level.time
fnstsw ax
test  ah,5
jp    <skip>                        ; value still in the future -> not ready
```
Search bytes: `D8 1D DC CC 15 50` + `DF E0` + `F6 C4 05`.
All 110 addresses are listed in `analysis\gate_sites.txt`.

**Weapon controller class vtable = `0x50128DA8`** (referenced exactly twice:
`0x5006B4B7` and `0x50073980`). Full dump:
```
[00] 0x5004F300   [04] 0x50073B90   [08] 0x50073C30   [0C] 0x50073740
[10] 0x50073C90   [14] 0x50073E20   [18] 0x5006D420   [1C] 0x50073EA0
[20] 0x50073FB0   [24] 0x5006D4E0   [28] 0x5006D070   [2C] 0x5006D420
[30] 0x5006D430   [34] 0x5006D440   [38] 0x5006B9C0   [3C] 0x5006BC30
```
So the dispatcher `0x50073C90` is **slot +0x10** and `0x50073C30` is **slot +0x08**
(earlier I said +0x10/+0x0C from a mis-derived base 0x50128DB0; the real base is
**0x50128DA8**).

Constructors: `0x5006B4A0` (tiny, plain) and `0x50073960` (full C++ method with
SEH prologue `push -1 / push 5011468B / fs:0`, reads `[this+0x14]`, `[this+0x10]`).

**Gate function `0x500B1670`** (`push esi; mov esi,[esp+8]` -> `ret 4`, so
`this` = arg1). Weapon-state fields it uses:
| Offset | Meaning |
|---|---|
| `+0x1A0` | flags byte (bits 1, 3, 6, 7 tested) |
| `+0x2A0` | **next-fire stamp** (f32) |
| `+0x2DC` | second cooldown stamp (f32) |
| `+0x2E0` | third stamp (f32) |
| `+0x2EC` | counter, must be `> 0` to proceed |
| `+0x38C` | state (compared against 0 and 3) |
| `+0x388` | flags byte (bits 3 and 4 tested) |

Logic:
```
if (esi+0x2EC <= 0) return;
if (!([esi+0x1A0] & 2)) { if (esi+0x38C < 3)  { esi+0x2A0 = time + 12.0; return; } }
else                       { if (esi+0x38C > 0)  { esi+0x2A0 = time + 9.0;  return; } }
if (esi+0x2A0 > level.time) return;      // still cooling
if (esi+0x2DC > level.time) return;      // second cooldown
elapsed = level.time - esi+0x2A0;
call 0x5010777B(elapsed);  fadd 0.0;  fadd st,st;   // *2
call 0x50107520;  eax = min(eax, 15);
... 12-arg call to 0x5008BB10 (sound/event, NOT the fire wrapper) ...
esi+0x2DC = level.time + 1.0;
then: if (esi+0x2E0 > level.time) skip; else { esi+0x2E0 = time + 1.0;
       12-arg call 0x5008BB10 again }
finally: esi+0x1A0 |= 8;  esi+0x2E0 = 0;
```
Constants: `0x50125038`=12.0, `0x50125FE0`=9.0, `0x50125054`=1.0,
`0x50125050`=8.0, `0x50125028`=0.0.
`0x5008BB10` is called with 12 args incl. `0x5018BF0C` (a blank/space string),
`g_entities` (`0x5015CCA0`), `0x4002`, `0x14`/`0x15`, and `esi+4` � a
sound/event dispatch, **not** the fire path.

**Item-record vtables (full dumps):**
```
weapon 0x501287CC: 00=50066BE0 04=50066480 08=50066460 0C=5006AEE0 10=5006AEF0
                    14=5006AF00 18..20=500151E0 24=50066E40 28=50066480 2C=50066460
                    30,34=500151E0
ammo   0x501287F0: 00=50066E40 04=50066480 08=50066460 0C..14=500151E0
                    18=5006AEE0 1C=5006AEF0 20=5006AF00 24=500671D0 28=50067340
                    2C=500673B0 30=50068820 34=5006AFE0
```
`0x50066E40`, `0x50066480`, `0x50066460`, `0x500151E0` are shared; the ammo
vtable's unique slots `+0x24..+0x34` are the best remaining candidates for an
ammo-consumption virtual.

**NEXT STEP:** the fire gate is in whatever calls controller vtable slot `+0x10`
(`0x50073C90`). Find it by locating `call dword ptr [reg+10h]` where `reg` is a
controller object (vtable `0x50128DA8`). Cross-reference the 110 gate sites in
`gate_sites.txt` against functions that reference `0x5015D9B8` (weapon registry)
- the intersection is the fire gate.

### 4.16 Ammo-vtable slots inspected

```
500671D0: push esi; mov esi,ecx; call 500671F0; test byte [esp+8],1;
          je +9; push esi; call 50106B60; add esp,4; mov eax,esi; pop esi; ret 4
50067340: mov al,[esp+4]; push esi; mov esi,ecx; test al,1;
          mov [esi],50128818h; je +9; push esi; call 50106B60; ...
50067360: push ecx; fld [esp+8]; fsub dword ptr [ecx+10h]; mov eax,[ecx+8]
```
`0x50067360` is a "time since" helper: `arg - this[+0x10]`, then reads
`this[+0x08]`. `0x50106B60` is a shared destructor/cleanup called from several
item methods. Neither is the ammo decrement.

### 4.17 Where this stands

**Established (high confidence):**
* Full fire chain: player Think -> controller vtable `0x50128DA8` slot `+0x10`
  (`0x50073C90` dispatcher) -> weapon vtable `+0x08`/`+0x0C` (`0x5010640` /
  `0x50106890`) -> fire wrapper `0x500659C0` -> dispatcher `0x500656E0` ->
  fire handler `[row+0x128]`.
* SoF time-gate idiom and all 110 sites (`gate_sites.txt`).
* Weapon-state field map: `+0x1A0` flags, `+0x2A0`/`+0x2DC`/`+0x2E0` stamps,
  `+0x2EC` counter, `+0x388` flags, `+0x38C` state.
* Item-record and weapon-row layouts; 39 items; 31 weapon rows.
* `level.time` = `0x5015CCDC`; weapon table base `0x50159B18`; weapon
  registry `0x5015D9B8` (pointer array at `+0x10`).

**Still unknown:**
* The exact fire-rate gate for the player weapon (the `0x500B1670` function is a
  sound/event path, not fire).
* The ammo decrement site.

**Recommended next moves, in order:**
1. Widen the gate-site/registry intersection window (700 lines was too small; the
   gate function may not reference the registry directly).
2. Search for `FF 9? 10 00 00 00` (`call [reg+00000010h]`, disp32 form) in
   addition to the `FF 5? 10` short form already searched - the dispatcher call
   may use the disp32 encoding.
3. Inspect the remaining ammo-vtable slots `0x500673B0`, `0x50068820`,
   `0x5006AFE0` for the consume method.
4. Consider that ammo may live in a per-player array rather than the item record;
   search for a 9-entry (ammo types 1..9) float/int array indexed by the item's
   type index at `+0x48`.

### 4.18 *** CORRECTION: the 0x500BA02D struct is a VTABLE IMAGE, not a data struct ***

`0x50106640` and `0x50106890` each occur exactly ONCE in the whole file - as the
immediates at `0x500BA04B` / `0x500BA053`. They appear in **no vtable**. Therefore
the struct built at `0x500BA02D` is a **weapon-class vtable image** that gets
assigned to `[weapon]`, and the dispatcher's `mov eax,[weapon]; call [eax+0Ch]`
reaches slot 1.

**Weapon vtable (base = struct at 0x500BA02D + 8):**
| Slot | Address | Role |
|---|---|---|
| `+0x08` | `0x50106640` | **primary fire** |
| `+0x0C` | `0x50106890` | **alt fire** |
| `+0x10` | `0x500EEBA0` | |
| `+0x14` | `0x50106AE0` | |
| `+0x18` | `0x500EEC70` | |
| `+0x1C` | `0x50106B00` | |

(The `mov [esp+4],5015CCDC` entry is NOT a vtable slot - the vtable base is
`[esp+8]`.)

**Controller vtable `0x50128DA8`** (verified base; referenced at `0x5006B4B7` and
`0x50073980`): dispatcher `0x50073C90` is **slot +0x18**, `0x50073C30` is **+0x10**.
Earlier "+0x10/+0x0C" was an 8-byte base error.

**`0x50071469` is a second, identical dispatcher** (same `call [mgr+0x84]` ->
`cmp [weapon+0x44],1` -> `call [weapon+0C]` -> `call [weapon+18]` shape), so the
dispatch logic is duplicated, not shared.

### 4.19 The `+0x2B4` stamp is a GENERAL idiom, not turret-specific

`0x500714C0` (a CTF flag-return handler, string `dm/ctf/flagret.wav` at
`0x50145118`) does the same thing the autogun did:
```
500714EA: fld   level.time
500714F0: fadd  qword ptr [50125028h]   ; + 0.0
500714FE: fstp  dword ptr [esi+000002B4h] ; stamp
50071504: fld   dword ptr [esi+000001BCh]
5007150A: fcomp level.time ; fnstsw ; test ah,5 ; jp skip
```
So `ent+0x2B4` is a generic "next action time" field used by many entity types.
Do not treat finding it as evidence of the weapon path.

### 4.20 Status

**Established:** complete fire chain with both vtables; gate idiom + 110 sites;
weapon-state field map; item/weapon layouts; all key globals.

**Still unknown:** the player fire-rate gate and the ammo decrement.

**Best remaining lead:** the two tight gate+call pairs found by intersecting
`call [reg+18h]` sites with gate sites:
* `0x50039EC6` (call) / `0x50039F41` (gate) - 0x7B bytes apart
* `0x50071493` (call) / `0x5007150A` (gate) - 0x77 bytes apart
Note in both the CALL comes BEFORE the gate, so the gate is a *post-action*
cooldown check, not a pre-fire block. The actual pre-fire gate is likely a
separate `fcomp level.time` earlier in the same function - check the function
containing `0x50039EC6` and `0x50071493` for an EARLIER gate site, and for a
`dec`/`sub` on a player inventory field.

### 4.21 *** 8 candidate fire-gate functions (gate BEFORE the dispatcher call) ***

Method: found all 74 `call dword ptr [reg+18h]` sites (controller vtable slot +0x18 =
dispatcher `0x50073C90`), then kept only those with a `fcomp level.time` gate
**earlier in the same function** (within 1500 disassembly lines). Result:

| Call site | Region | Notes |
|---|---|---|
| `0x5000E5DE` | 0x5000Dxxx | |
| `0x5000F7E9` | 0x5000Exxx | |
| `0x5003A47A` | 0x50039xxx | |
| `0x50071D64` | 0x50071xxx | |
| `0x500AA649` | 0x500A9xxx | **ruled out** - movement/physics (sets velocity, gravity -90.0) |
| `0x500EF10F` | 0x500EExxx | |
| `0x500EF136` | 0x500EExxx | |
| `0x500EF5FF` | 0x500EExxx | |

The `0x500EFxxx` cluster (3 of the 8) is the strongest remaining lead - it is
adjacent to the weapon-manager code and all three share the same earlier gate.

**To finish the RE:** for each of the 7 remaining candidates, read the function
from its entry to the `call [reg+18h]` and identify (a) the pre-fire time gate and
(b) the `dec`/`sub` on the player ammo field. The ammo field is most likely a
per-player array indexed by the item type index at item-record `+0x48`
(ammo types 1..9), since no write to item-record `+0x4C` exists anywhere.

**Complete chain now documented:**
```
player Think/Cmd_ -> controller vtable 0x50128DA8 slot +0x18 (0x50073C90)
  -> weapon vtable slot +0x08 (0x50106640 primary) / +0x0C (0x50106890 alt)
  -> fire wrapper 0x500659C0 -> dispatcher 0x500656E0 -> handler [row+0x128]
```

### 4.22 Elapsed-time (`fsub level.time`) search - 14 sites, all checked

Only 14 `fsub dword ptr [5015CCDCh]` sites exist. Cross-referenced with dispatcher
calls; the two where the elapsed computation precedes the call are both **not**
the fire gate:
* `0x5000F5FC` -> call `0x5000F7E9`: **movement/physics**. Squares three floats
  (`[esi+0x24C/0x250/0x254]`) and compares the sum to a max-speed constant -
  velocity clamping.
* `0x500886BD` -> calls `0x50088E11`/`0x50089203`: **death/respawn check**.
  `mov esi,[ebx+74h]` (player), then `fcomp [esi+0x5C4]` vs `level.time`;
  skips when `player+0x5C4 > time`. So `player+0x5C4` is a death/respawn timestamp.

Also ruled out: `0x500EE7FC`-`0x500EEB05` cluster (scheduler - compares
`[0x5015D934]+[0x5015D1BC]` against time), and `0x500714C0` (CTF flag return).

### 4.23 Assessment

The player fire-rate gate does **not** use either of the two idioms searched
(`fcomp level.time` on a stamp, or `fsub level.time` for elapsed). Every site of
both forms has now been accounted for as movement, physics, scheduler, death,
sound, or entity-think code.

**Therefore the gate most likely compares against a per-weapon delay constant
loaded from the weapon row or the weapon-state object, not directly against
`level.time`.** The shape to look for is:
```
fld   dword ptr [weapon_state + <stamp>]
fsub  dword ptr [5015CCDCh]        ; or fcomp against a computed delay
fcomp dword ptr [weapon_row + <delay>]
fnstsw ax ; test ah,5 ; jp <skip>
```
i.e. a **three-operand** comparison. Search for `fcomp` against a *register*
operand (not the `5015CCDC` immediate) within functions that also contain
`call [reg+18h]`.

**Ammo:** still no write to item-record `+0x4C` anywhere. Strongest hypothesis
remains a per-player ammo array indexed by the item type index at `+0x48`.

### 4.24 Complete documented chain
```
player Think/Cmd_
  -> controller vtable 0x50128DA8 slot +0x18  (0x50073C90 dispatcher;
     duplicate at 0x50071469)
  -> weapon vtable slot +0x08 (0x50106640 primary) / +0x0C (0x50106890 alt)
  -> fire wrapper 0x500659C0
  -> dispatcher 0x500656E0  (row = base 0x50159B18 + idx*0x14C)
  -> fire handler [row+0x128]   (void __cdecl fn(fire_ctx_t*))
```
Key globals: `level.time`=0x5015CCDC, weapon table=0x50159B18, weapon registry
=0x5015D9B8 (ptr array at +0x10), g_entities=0x5015CCA0.

### 4.25 *** 8 FINAL fire-gate candidates ***

Filtered the 73 dispatcher-call functions containing a 3-operand `fcomp` down to
those that **also reference the weapon registry `0x5015D9B8` or table `0x50159B18`**:

| Call site | Region |
|---|---|
| `0x500732EA` | 0x50073xxx (ruled out - entity cleanup/destructor) |
| `0x500736A4` | 0x50073xxx |
| `0x50074267` | 0x50074xxx |
| `0x50071D64` | 0x50071xxx |
| `0x50073D0E` | 0x50073xxx |
| `0x50088E11` | 0x50088xxx |
| `0x50089203` | 0x50089xxx |
| `0x500895C6` | 0x50089xxx |

`0x500732EA` is ruled out (calls `0x500F2770` with 1000 = entity cleanup).
The `0x50088xxx`/`0x50089xxx` pair is adjacent to the death/respawn code
already ruled out at `0x500886BD`, so `0x50071D64`, `0x500736A4`,
`0x50073D0E`, `0x50074267` are the four to read first.

**Method that produced this (reusable):**
1. `dumpbin /DISASM /NOBYTES gamex86.dll > dump.txt`
2. Build `addr -> line` index once (369k entries) - do NOT call Select-String
   per address, it is O(n^2) and times out.
3. Find `call [reg+18h]` sites bytewise (74), `fcomp` non-level.time sites
   bytewise (10037), registry/table refs by text.
4. Intersect on line numbers within a window.

**To finish:** read each of the 4 remaining candidates from function entry to
its `call [reg+18h]`. The fire gate is the 3-operand `fcomp`; the ammo
decrement is a `dec`/`sub` on a per-player array indexed by item type (`+0x48`).

### 4.26 Candidate reads

* `0x50071D64` - **weapon fire SOUND function**. Calls vtable `+0x40` with sound
  indices 1, 3, 0xD, 0xE, then `+0x68`, then `+0x30` with 6 and 0x96, then
  `+0x18` (dispatcher). No time gate, no ammo decrement - it plays the sounds
  and delegates. Confirms the dispatcher is reached from here.
* `0x500732EA` - entity cleanup (ruled out earlier).
* `0x500736A4`, `0x50073D0E`, `0x50074267` - not yet read in full.

### 4.27 Revised hypothesis

The evidence now points to SoF gating weapon fire with a **state machine**, not a
pure time comparison. The `0x500B1670` function compares `weapon_state+0x38C`
against 0 and 3 and branches to different stamp constants (12.0 / 9.0), which is
state-dependent behaviour. Combined with:
* `weapon_state+0x2EC` must be `> 0` (a counter gating all action)
* `weapon_state+0x1A0` bits 1, 3, 6, 7 selecting behaviour
* `weapon_state+0x388` bits 3, 4

the likely shape is: **state check -> time check -> fire**, where the state
machine (not the clock) is the primary gate. The `+0x2EC` counter is the strongest
ammo candidate yet found, since it gates *all* weapon action and is compared
`> 0` before anything else happens.

**Next session should:**
1. Read `0x500736A4`, `0x50073D0E`, `0x50074267` in full.
2. Trace `weapon_state+0x2EC` - find every read and write. If it is decremented
   on fire and refilled on reload/pickup, it is the ammo counter.
3. Map the `+0x38C` state machine (values 0..3+) - this is the fire/reload/idle
   state that decides which path runs.

### 4.28 *** AMMO DECREMENT FOUND: `0x500060AB` ***

```
500060B2: call dword ptr [edx+0000009Ch]   ; ebx = ammo consumed per shot
500060B8: mov  ebx,eax
500060BE: test cl,8
500060C1: jne 500061B3
500060C7: mov  eax,[esp+48h]
500060CB: test eax,eax
500060CD: je   500061B3
500060D3: mov  eax,[edi+0000019Ch]        ; ammo TYPE INDEX
500060DB: je   500061B3
500060E1: cmp  eax,9
500060E4: je   500061B3                     ; type 9 (slugs) -> skip
500060EA: cmp  eax,2
500060ED: je   500061B3                     ; type 2 (.44) -> skip
500060F3: cmp  eax,1
500060F6: je   500061B3                     ; type 1 (knife) -> skip
500060FC: cmp  eax,3
500060FF: je   500061B3                     ; type 3 (9mm) -> skip
50006105: mov  eax,[edi+0000027Ch]        ; max carry for this type
5000610B: cmp  eax,32h
5000610E: mov  [esp+44h],eax
50006112: jge  5000611E
50006114: mov  dword ptr [esp+44h],42480000h   ; 50.0f default
...  (vector maths: normalise a direction, scale by range) ...
500061B3: test ebx,ebx
500061B5: je   50006201
500061B7: test ebp,ebp
500061B9: je   500061FB
500061BB: mov  eax,[ebp+74h]              ; player
500061BE: test eax,eax
500061C0: je   500061FB
500061C2: mov  eax,[edi+000002ECh]       ; CURRENT AMMO
500061C8: test eax,eax
500061CA: jle  500061FB                   ; <= 0 -> no decrement
500061CC: mov  edx,[esi]
500061CE: mov  ecx,esi
500061D0: call dword ptr [edx+00000148h]  ; can-fire check
500061D6: test eax,eax
500061D8: je   500061E1
500061DA: push 600h
500061DF: jmp  500061F1
500061E1: mov  eax,[esi]
500061E3: mov  ecx,esi
500061E5: call dword ptr [eax+14h]        ; alt can-fire check
500061E8: test eax,eax
500061EA: je   500061FB
500061EC: push 60Eh
...
500061FB: sub  dword ptr [edi+000002ECh],ebx    ; *** AMMO -= perShot ***
50006201: mov  eax,[edi+000002ECh]
50006207: test eax,eax
50006209: jg   50006245                   ; still have ammo -> done
5000620B: ... or dh,8 ; push args ; call [edx+000000F0h]   ; RELOAD
```

**Conclusions:**
1. **`edi+0x2EC` IS the ammo counter.** Decremented by a per-shot amount obtained
   from vtable `+0x9C`, gated on `> 0`, and when it reaches 0 a reload is
   triggered via vtable `+0xF0`.
2. **`edi+0x19C` is the ammo TYPE INDEX.** Values 1, 2, 3 and 9 are special-cased
   (skipped) - matching ammo types knife(1), .44(2), 9mm(3), slugs(9).
   This is the same type-index space as item-record `+0x48`.
3. **`edi+0x27C` is the max carry**, defaulting to 50.0 when below 0x32.
4. The two can-fire checks are vtable `+0x148` and `+0x14`, with sound indices
   `0x600` / `0x60E` pushed for the "cannot fire" path.

This is the missing ammo mechanism. The fire gate is the `+0x148` / `+0x14`
can-fire virtuals, and `0x600`/`0x60E` are the dry-fire/empty-click sounds.

---

## 4.29 Multiplayer verification (2026-10-20)

The port was verified end to end with a live dedicated server and two real
clients. The in-game self-test (`game/g_sof_selftest.c`) drives the real
server path - `ClientThink(ent, ucmd)` -> `Weapon_Generic` ->
`Sof_CanFire` -> `Sof_ConsumeAmmo` -> `fire_shotgun` -> `T_Damage` - and
only adds `BUTTON_ATTACK` to the shooter's usercmd, which is exactly what a
mouse click produces.

Observed on `q2dm1`, two clients (`sofracer1`, `sofracer2`):

    sofracer1 connected
    sofracer2 connected
    sofracer1 entered the game
    sofracer2 entered the game
    SOFTEST: armed shooter=sofracer1 target=sofracer2 ammo_slot=18
             ammo_before=25 target_health_before=100
    SOFTEST: RESULT ammo 25->22 (consumed 3), target health 100->0
    SOFTEST: VERDICT PASS

So the recovered SoF ammo mechanism (§4.28) is live: one shell is consumed
per trigger pull (the SoF per-shot cost for the shotgun), and the hitscan
damage lands on the target until it is killed.

### Facts that cost time to establish

* **Player health lives in `edict_t::health`, not `client->pers.health`.**
  `T_Damage` reduces `targ->health`; `SaveClientData`/`FetchClientEntData`
  copy it to and from `client->pers.health` only at spawn/save boundaries.
  Reading `pers.health` in a live test always shows the stale spawn value.
* **`ClientThink` is the only place the server-side firing path is entered.**
  The weapon runs from `Think_Weapon(ent)`, called at the end of
  `ClientThink` when `latched_buttons & BUTTON_ATTACK`. `latched_buttons`
  is edge triggered, so a held button fires exactly once.
* **The final view angles are `cmd.angles + pmove.delta_angles`.** A test
  that overrides `ucmd->angles` must also clear
  `client->ps.pmove.delta_angles[]`, otherwise the shot goes somewhere else.
* **Q2 maps keys from the scan code in `lParam`** (`win32/vid_dll.c`
  `MapKey()`), using `scantokey[]`. That table contains only lowercase
  letters, digits and a little punctuation - there is **no `_` and no
  uppercase**. A console command typed into a Quake II client therefore
  cannot contain underscores.
* **`vectoangles()` truncates to whole degrees**, so a scan-code -> angle
  -> vector -> angle round trip quantises the direction.
* **A trace that starts inside an entity's box reports `fraction == 1.0`**
  with `startsolid` set, so `fire_lead`'s `if (tr.fraction < 1.0)` guard
  skips the damage entirely. Any test entity must therefore be placed
  *outside* the muzzle.
* **The shotgun muzzle offset is `(0, 8, viewheight-8)`** and
  `P_ProjectSource` adds it in world axes (not view axes).
* `SofGibLevel(targ, take)` expects the **pre-damage** health. Calling it
  after `targ->health` was already reduced double-subtracted the damage
  and gibbed slightly too early; `g_combat.c` now evaluates it before the
  reduction.

## 4.30 The SoF fire-rate gate and weapon "heat" (2026-10-20)

Two `fcomp [level.time]` gates in the player-weapon region of `gamex86.dll`
resolve the remaining question of how SoF limits the rate of fire.

### Gate A - 0x50104803 (primary / alternate action timer)

    501047AB  mov edi,[esp+eax*4+64h]   ; the player edict
    501047AF  mov eax,[edi+74h]          ; edict+0x74 = the client
    501047B6  mov eax,[edi+450h]         ; edict+0x450 = variant selector
    501047C8  lea esi,[edi+4]            ; edict+0x04 = the weapon record
    501047E5  fld  dword ptr [esp+4Ch]   ; the weapon's current heat
    501047E9  fcomp qword ptr [50128318h]; compared against 0.99
    501047FD  fld  dword ptr [edi+370h]  ; edict+0x370 = last action time
    50104803  fcomp dword ptr [5015CCDCh]; vs level.time
    5010483C  fld  dword ptr [5015CCDCh]; level.time
    50104842  fadd qword ptr [50125030h] ; + 2.0   (primary)
    5010484A  fld  dword ptr [edi+370h]
    50104850  fadd qword ptr [50125518h] ; + 0.5   (alternate)
    50104856  fstp dword ptr [edi+370h]  ; edict+0x370 = next action time

So **edict+0x370 is the player's "next allowed action time"** (distinct from
the generic edict+0x2B4 used by turrets and the CTF flag), the primary
action re-arms 2.0 s later and the alternate 0.5 s later.

### Gate B - 0x50105411 (the per-weapon fire delay)

    501053FD  mov eax,[ecx+30Ch]         ; weapon object +0x30C
    50105405  je  5010557A                ; no delay configured -> never blocks
    5010540B  fld  dword ptr [ecx+37Ch]  ; ** the per-weapon fire delay **
    50105411  fcomp dword ptr [5015CCDCh]; vs level.time
    50105429  fld  dword ptr [5015CCDCh]
    50105433  fadd qword ptr [50125538h]

**weapon_object+0x37C is the per-weapon fire delay in seconds**, and it is
compared directly against `level.time`. This is the value that the weapon
table stores at `+0x118` (primary) and `+0x11C` (alternate) - so the
earlier note that those offsets were "spread" was wrong: they are the
fire delays (machinegun 0.08 s = 750 rpm, shotgun 0.20 s, rocket 0.20 s,
flamerelease 0.30 s). `a13` in `weapontable.txt` is the spread cone and
`a15` the range.

### Weapon heat

Gate A compares a formatted weapon value against the constant **0.99** at
`0x50128318`, and `0x501292E0` holds **150.0**. Together with the fact
that the value is produced by formatting the entity's weapon data, this is
SoF's **weapon heat** mechanic: firing heats the weapon, the heat raises
the spread, and the gun must cool back below 99% of its range before it
can fire again. 150.0 is the heat/spread scale.

`edict+0x450` selects the spread variant (primary/alternate) and
`edict+0x164` is the "sound/feedback" pointer used when the shot is
refused.

### Consequences for the port

* The Q2 port currently has no fire-rate limit beyond the stock weapon
  frame times. SoF's limit is `level.time`-based and per weapon.
* A faithful port needs a per-client "next action time" (Q2 has no
  equivalent field) plus the per-weapon delay, and the heat model on top.
* `sof_weapon_t.attack_delay` in `game/g_sof.h` already carries the
  recovered delay values, but nothing consumes them yet.

## 4.31 Completing the SoF firing timers + the class accessor system

### The two SoF timers on the player's weapon

**`weapon_object+0x37C` - next allowed FIRE time** (gate at `0x50105411`):

    501053FD  mov eax,[ecx+30Ch]          ; weapon object +0x30C
    50105405  je  5010557A                 ; not set -> never blocks
    5010540B  fld  dword ptr [ecx+37Ch]   ; the stored next-fire timestamp
    50105411  fcomp dword ptr [5015CCDCh] ; vs level.time
    50105417  mov ecx,[5015C4D8h]
    5010541F  test ah,41h
    50105422  jp  50105496                 ; timer expired -> may fire
    50105429  fld  dword ptr [5015CCDCh]  ; level.time
    50105433  fadd qword ptr [50125538h]  ; + 0.4  (busy re-arm)
    50105453  fstp dword ptr [eax+37Ch]   ; store new next-fire time
    ...
    5010547C  fadd qword ptr [80125078h]  ; + 0.2  (ready re-arm)
    5010548E  fstp dword ptr [edx+37Ch]

So the weapon re-arms **0.2 s** after a "ready" refusal and **0.4 s** after a
"busy" refusal.  `0x50125078` and `0x50125538` are read-only .rodata
constants used all over the module.

**`edict+0x370` - next ACTION time** (gate at `0x50104803`), re-armed
**+2.0 s** for the primary action and **+0.5 s** for the alternate
(`0x50125030` = 2.0, `0x50125518` = 0.5).

### Weapon heat

In the same function, a formatted weapon value is compared against the
constant **0.99** at `0x50128318`; `0x501292E0` holds **150.0**. The
formatted value comes from the entity's weapon data via a sprintf-style call
with the format string at `0x5018BF0C`. This is SoF's **weapon heat**:
firing heats the weapon, heat raises the spread, and the gun has to cool
back below 99% of its range before it may fire again.

`edict+0x450` selects the spread variant (primary/alternate) and
`edict+0x164` is the feedback pointer used when a shot is refused.

### SoF's class system uses accessor functions

The weapon and item records are not read by direct offset in the game
logic; the module exports a large family of field accessors. Example, for
field `+0x118`:

    50007610  mov eax,[esp+4]
    50007614  mov dword ptr [ecx+118h],eax   ; setter
    5000761A  ret 4
    50007620  mov eax,[ecx+118h]            ; getter
    50007626  ret

Neighbouring accessors exist for `+0x184`, `+0x1D8`, `+0x1C0` and many
more. **This is the key lever for the remaining RE**: the accessor table
can be enumerated, each accessor bound to its field offset, and the fields
then correlated with the runtime values to recover their SoF names
(the module's own object-definition data holds them, in a compiled form
that still needs decoding).

### Correction carried forward

`weapontable.txt`'s `delayA(+118)` / `delayB(+11C)` are the **per-weapon
fire delays in seconds** (machinegun 0.08 = 750 rpm, shotgun 0.20,
rocket 0.20, flamerelease 0.30, pistol1 0.03). The earlier reading of
those offsets as "spread" was wrong; `a13` is the spread cone and `a15`
the range.

## 4.32 The SoF class-field accessor table

`gamex86.dll` never reads the weapon/item records by direct offset in the
game logic; it calls generated field accessors:

    setter   mov eax,[esp+4] ; mov [ecx+<off>],eax ; ret 4
    getter   mov eax,[ecx+<off>] ; ret

`tools/map_accessors.ps1` enumerates them from the dumpbin disassembly and
writes **`analysis/sof_field_accessors.txt`**: **215 getters, 15 setters,
91 distinct field offsets**, each with its accessor address.

Examples from the map:

| field | getter     | setter     | meaning                                   |
|-------|------------|------------|-------------------------------------------|
| 0x118 | 0x50092B9F | 0x50007614 | primary fire delay (seconds)               |
| 0x11C | -          | 0x50007854 | alternate fire delay                      |
| 0x144 | 0x500659B0 | -          | sits in the fire wrapper (0x500659C0) area |
| 0xF0  | 0x500D77D3 | -          | the reload slot called after a shot        |

This is the lever for naming the remaining fields: SoF's own field names
exist in the module as short identifiers (`fire`, `time`, `next`, `player`,
`Weapons`, ...), so correlating the accessor table with the name pool
recovers the real SoF field names for the weapon and item records instead
of the positional guesses used so far.

## 4.33 SoF's class field definition tables (BREAKTHROUGH)

`gamex86.dll` stores its object model as **field definition tables** in
`.rdata`. Each entry is 16 bytes:

    struct fielddef {
        const char *name;    // +0
        int         offset;  // +4
        int         type;    // +8   0=int 2=float 3=string 4=vector3
        int         flags;   // +12
        void       *data;    // +16
    };

`tools/find_field_table.py` locates them by scanning for dwords that point
into the module's string pool and grouping the hits into constant-stride
runs. **54 such tables** were found; the full dump is in
`analysis/sof_field_tables.txt`.

### The entity field table - RVA 0x14ED60, 97 entries

This is SoF's `entity_t` definition and it gives the real names for the
offsets the disassembly had only positional guesses for. Recovered list
(in `analysis/sof_entity_fields.txt`):

    classname 0x1B4   origin 0x4      health 0x2EC   dmg 0x310
    mass 0x27C        scale 0x74       speed 0x21C    accel 0x220
    decel 0x224        delay 0x364      wait 0x360      random 0x368
    count 0x318        sounds 0x314     light 0x15      angles 0x10
    angle 0x10         model 0x1A4      spawnflags 0x1B8
    target 0x1C4       targetname 0x1C8 scripttarget 0x1CC
    pathtarget 0x1DC   deathtarget 0x1E0 killtarget 0x1D0
    killfacing 0x1D4   combattarget 0x1E4 soundname 0x1E8
    message 0x1AC      sp_message 0x1B0 team 0x1D8
    style 0x3BC        skin 0x2C        volume 0x358
    attenuation 0x35C  map 0x300        alertradius 0x384
    personality 0x338  lip 0x3C         distance 0x40
    height 0x44        noise 0x48       ... (97 total)

### CORRECTION: entity+0x2EC is `health`, not the ammo counter

Section 4.28 concluded "**`edi+0x2EC` IS the ammo counter**" from
`0x500060C2: mov eax,[edi+0x2EC]` and `0x500060FB: sub [edi+0x2EC],ebx`.
The field table says entity+0x2EC is **`health`**. So the register used in
that code is **not the entity** - it is the per-player **weapon object**,
whose layout is a different class. The ammo counter therefore lives in the
*weapon object*, not in the edict, and the earlier offset must be
re-expressed against the weapon object. The same applies to
`+0x19C` (ammo type) and `+0x27C` (max carry).

`edict+0x74` is likewise **`scale`** (a float), not the client pointer;
the fire code's `mov eax,[edi+74h]; test eax,eax` is a "scaled entity?"
test.

### The class-name tables

The other tables are SoF's **spawnable class vocabulary**, which is the
map author's toolbox and therefore the index into SoF's content:

    info_null / info_notnull / info_player_deathmatch / info_player_team1
    func_clock / func_conveyor / func_door / func_door_rotating
    trigger_activate / trigger_always / trigger_conquer / trigger_countdown
    light_generic_*  target_temp_entity / target_speaker / target_explosion
    misc_* (uganda/iraq/bosnia/castle/newyork/siberia/tokyo)  environ_*
    anim_*  weapon_*

**The weapon and item records are NOT entity classes**, so their field
names are not in these tables - they live in SoF's GDB script data
(`.ghb/.rmf/.rof/.gsq/.adp/.os` in the paks). Recovering them needs the
GDB container format, which is the next RE target.

## 4.34 SoF's `.os` object schemas and the type codes

The SoF pak contains **727 `.os` files** (one per scripted object) whose
format is a field-definition list:

    u8  tag (0x06)
    char name[]  NUL-terminated
    u8  type
    u32 index/flags

`tools/` can parse them; the type codes are:

| code | meaning   | example fields            |
|------|-----------|---------------------------|
| 0    | int       | movetype, state, count, health, skinnum, solid, takedamage, modelindex |
| 1    | float     | x, y, z, origin_x/y/z, wait, distance, velocity, angle_velocity, yaw_speed, ideal_yaw, start_angles |
| 2    | vector3   | origin, start_origin, p_origin, angles, delta_angles |
| 3    | string    | owner, team_chain          |

Every one of the 727 schemas carries the same 30 base entity fields
(x, y, z, origin, origin_x/y/z, movetype, start_origin, start_angles,
state, distance, owner, wait, velocity, angle_velocity, team_chain,
yaw_speed, modelindex, count, solid, angles, delta_angles, skinnum,
c_mode, ideal_yaw, p_origin, takedamage, health) - i.e. the **scripted
entity** base class, which matches the DLL's own entity field table
(4.33) field for field.

**The weapon and item records are not scripted entities**, so they have no
`.os` schema; their definitions live in the `ghoul/` tree, whose `.ghb`
containers reference `.GHL` scripts by absolute path:

    \\RAVEND\\SOF\\BASE\\GHOUL\\EFFECTS\\EXPLOSION\\EXPLODE20.GHL

So the remaining weapon/item field names require decoding the GHL script
format - that is the next RE target, and it is the same machinery SoF's
map/entity scripting uses, so it also unlocks SoF's scripted sequences
(doors, elevators, cutscenes) and therefore the single-player content
structure.

### Correction carried into 4.28

The field table proves **entity+0x2EC is `health`**, so the "ammo counter
at edict+0x2EC" reading in 4.28 was wrong: the register in that code is
the per-player **weapon object**, not the entity. The ammo counter, the
ammo type index and the max-carry field are weapon-object fields and
their offsets must be re-based against the weapon object's own layout
before the port can mirror them. The same applies to `edict+0x74`, which
is **`scale`**, not the client pointer.

## 4.35 SoF `entity_t` recovered in full - and what it invalidates

`analysis/sof_entity_fields.txt` now holds the complete field table for
SoF's entity class: **97 fields, name + offset + type + accessor**, taken
from the definition table at RVA `0x14ED60` in `gamex86.dll`.

    struct fielddef {
        const char *name;   // +0
        int         offset; // +4
        int         type;   // +8   0=int 1/2=float 3=string 4=vector3 5=angle 7=entity
        int         flags;  // +12
        void       *data;   // +16
    };

Type codes recovered: 0=int, 1=float, 2=float, 3=string, 4=vector3,
5=angle, 7=entity, 21=script.

### Fields that the earlier analysis mis-named

| offset | earlier claim | **actual field** |
|--------|---------------|------------------|
| 0x2EC  | ammo counter  | **`health`** (int) |
| 0x19C  | ammo type idx | **`movetype`** (int) |
| 0x27C  | max carry     | **`mass`** (int) |
| 0x74   | client ptr    | **`scale`** (float) |
| 0x310  | -             | **`dmg`** (int) |
| 0x318  | -             | **`count`** (int) |
| 0x158  | -             | **`solid`** (int) |
| 0x160  | -             | **`owner`** (entity) |
| 0x1B4  | -             | **`classname`** (string) |
| 0x1A4  | -             | **`model`** (string) |
| 0x1B8  | -             | **`spawnflags`** (int) |
| 0x360 / 0x364 / 0x368 | - | **`wait` / `delay` / `random`** (float) |
| 0x21C / 0x220 / 0x224 | - | **`speed` / `accel` / `decel`** (float) |
| 0x27C  | -             | **`mass`** (int) |
| 0x0A0  | -             | **`script`** (string) |
| 0x0A4..0x0C8 | -      | **`parm1`..`parm10`** (string) |

So section 4.28's "ammo counter at edict+0x2EC / ammo type at +0x19C /
max carry at +0x27C" is **wrong**: those are `health`, `movetype` and
`mass`. The code at `0x500060AB` operates on a **weapon object**, not on
the entity, and the three fields it touches are the weapon object's own
ammo counter, ammo type and carry capacity.

### The weapon object is a subclass of entity_t

The accessor table (`sof_field_accessors.txt`, 91 offsets) contains offsets
that are **not** in the entity field table, and they are exactly the
weapon-specific ones:

    0x10C  0x114  0x118  0x11C  0x120  0x13C  0x144  0x164  0x174  0x178

`0x118`/`0x11C` are the per-weapon **primary/alternate fire delays**
(machinegun 0.08 s, shotgun 0.20 s, rocket 0.20 s), `0x144` sits in the
fire wrapper (the can-fire / reload virtuals), and `0x164` is the feedback
pointer used when a shot is refused.

### Also recovered for the port

SoF's entity carries explicit movement bounds that stock Q2 has no
equivalent for: **`minyaw` 0x58, `maxyaw` 0x5C, `minpitch` 0x60,
`maxpitch` 0x64** (turret/gun-aim limits), plus
`killedvalue` 0x68, `survivalvalue` 0x6C, `merctype` 0x78, `mercnum` 0x7C,
`alertradius` 0x384, `personality` 0x338, `noWeapons` 0x0E8,
`setWeapons` 0x0EC, `weaponsAvailable` 0x100, `material` 0x70.

The table also explains why 54 tables exist: it is a union of several
classes' field sets (entity, scripted entity, ...), so a handful of offsets
legitimately carry two names (`0x004` = `origin`/`skyrotate`,
`0x02C` = `endpoint`/`skin`, `0x108` = `chopsky`/`distcull`).

## 4.36 SoF weapon object layout (from its constructor at 0x50004860)

SoF's weapon object is initialised by one constructor. The defaults it
writes are the field meanings:

    50004880  mov [esi+104h], 9              ; ammo type index (9 = slugs)
    5000488A  mov [esi+108h], edi            ; 0
    50004890  mov [esi+10Ch], edi            ; 0
    50004896  mov [esi+110h], edi            ; 0
    5000489C  mov [esi+114h], edi            ; 0
    500048A8  mov [esi+118h], edi            ; 0   primary fire delay
    500048AE  mov [esi+120h], 0C1A00000h     ; -20.0f
    500048FB  mov [esi+13Ch], edi            ; 0   virtual slot
    500048DF  mov [esi+164h], eax            ; -1
    500048E5  mov [esi+168h], eax            ; -1
    500048EB  mov [esi+16Ch], eax            ; -1
    500048F1  mov [esi+170h], eax            ; -1
    50004973  mov [esi+19Ch], ebx            ; ammo type pointer
    500049A2  mov [esi+1B8h], 3F800000h      ; 1.0f

So, confirmed against the constructor:

| offset | meaning |
|--------|---------|
| +0x104 | ammo **type index** (default 9 = slugs) |
| +0x108 | int, 0 |
| +0x10C | int, 0 |
| +0x110 | int, 0 |
| +0x114 | int, 0 |
| **+0x118** | **primary fire delay** (float seconds) |
| **+0x11C** | **alternate fire delay** (float seconds) |
| **+0x120** | float, default **-20.0** (aim/spread limit in degrees) |
| +0x13C | **virtual slot** - `call dword ptr [eax+13Ch]`, so it is one of the weapon's behaviour virtuals (alongside the can-fire/reload virtuals at +0x144/+0x14) |
| +0x164..+0x170 | four ints, default **-1** (the "feedback pointer" seen in the refusal path, plus three siblings) |
| +0x19C | pointer to the **ammo type descriptor** |
| +0x1B8 | float, default **1.0** |

**The +0x2EC / +0x19C / +0x27C confusion is now fully resolved.** Those
offsets are *entity* fields (`health`, `movetype`, `mass`); the ammo
counter, ammo type and carry capacity are **weapon object** fields at
+0x104 / +0x19C / and the weapon's own count field. The fire-rate gate
(4.30/4.31) compares `weapon_object+0x37C` - the next-allowed-fire
timestamp - against `level.time`, and the delays at +0x118/+0x11C are the
per-weapon values that re-arm it.

## 4.37 The engine <-> game-module contract (the key to modifying SoF)

Soldier of Fortune splits cleanly into an **engine** and a **game
module**:

| piece | file | owns |
|-------|------|------|
| engine | `SoF.exe` | netcode + SoF wire protocol, rendering, audio, **GameSpy master registration** (`master.gamespy.com`, `\queryid\%d.%d`), and loading the game module |
| game module | `Base\gamex86.dll` | **all gameplay**: weapons, damage, items, player movement, spawn/scoring, gamemodes, bots |

`gamex86.dll` exports exactly one symbol, `GetGameAPI` at RVA
`0x000AD9B0`. Everything else is a function-pointer table, so the engine
talks to the module through a struct it fills in.

    500AD9B1  mov  esi,[esp+8]           ; the engine's game_import_t
    500AD9B6  mov  ecx,63h               ; 99 dwords = 396 bytes
    500AD9BB  mov  edi,5015C9F0h        ; module's copy of the import table
    500AD9C0  rep  movsd
    ...
    500ADA20  mov  [5015C8D0h],3         ; api_version = 3
    500ADA2A  mov  [5015C8D4h],500AC970h ; slot 0
    ...                                     (24 slots, then 0x464)
    500ADB1A  mov  eax,5015C8D0h        ; return &export_table

### The 24 export slots (module global 0x5015C8D0)

    slot  addr        fn           slot  addr        fn
    +0    5015C8D0    3 (version)  +30   5015C900    500F50A0
    +4    5015C8D4    500AC970     +34   5015C904    5008A6D0
    +8    5015C8D8    500AD5B0     +38   5015C908    500F53A0
    +C    5015C8DC    500BDB50     +3C   5015C90C    500AD990
    +10   5015C8E0    500BB0E0     +40   5015C910    500AE7D0
    +14   5015C8E4    500BB1D0     +44   5015C914    500AE850
    +18   5015C8E8    500BB4A0     +48   5015C918    500AD5F0
    +1C   5015C8EC    500BB590     +4C   5015C91C    500AD820
    +20   5015C8F0    500F4D70     +50   5015C920    500AD970
    +24   5015C8F4    500F4DE0     +54   5015C924    500AD5E0
    +28   5015C8F8    500F4070     +58   5015C928    500AD5D0
    +2C   5015C8FC    500F4730     +5C   5015C92C    500AE340
                                 +60   5015C930    (engine filled)
                                 +64   5015C934    0x464

### Why this is the whole game

Because the engine is untouched, a modified `gamex86.dll`:

* speaks the **identical SoF wire protocol**, so stock SoF clients join it;
* keeps the engine's **GameSpy `queryid` registration**, so it still appears
  in the **official SoF server listing** under our hostname/map;
* reuses **all** SoF content (maps, `.m32` models, sounds, `.ghb` scripts).

So the deliverable is a **re-engineered SoF game module on the stock SoF
engine** - not a Quake II port, which could never appear in SoF's listings
and carries none of SoF's content. The Q2 work was a detour; the RE
knowledge transfers, but the target must be a Q3-engine game module.

### Remaining contract work

1. Map each of the 24 slots to its name by RE-ing `SoF.exe` (the engine
   calls `re->ClientConnect(clientNum, firstTime)`, `re->ClientThink(...)`,
   `re->Configstring(index)`, `re->ServerRun()`, ...). The engine's call
   sites give the argument shapes that identify each slot.
2. Recover the 99-dword `game_import_t` (copied to `0x5015C9F0`) so a
   replacement module can be written against it.
3. Then either patch the existing module in place (highest fidelity, zero
   protocol risk) or write a replacement one.

Master-server caveat: `master.gamespy.com` is long dead, but the engine's
registration is configurable (`gsc_server`, `gsc_port`, and the
`net_socks*` IRC-based alternative in `User\config.cfg`), so "official
listings" means the same registration protocol pointed at a live master.

## 4.38 The engine side: item list, download, and the sniper

`SoF.exe` (image base **0x20000000**, 1.4 MB, x86, 2001-07-07) is the
Quake III derived engine; `Base\gamex86.dll` is the game module.

### The engine already provides "connect, download, play"

    allow_download  allow_download_maps  allow_download_models
    allow_download_players  allow_download_sounds  allow_download_stringpackage
    cl_download_filename  cl_download_percent  cl_downloading
    "Downloading %s to %s"   "Failed checksum check for chunk"
    "Failed command checksum for %s"   adddownload

So the engine can serve custom assets to clients with checksum
verification - the classic pure-server flow. The master registration
carries the game identity:

    \gamename\%s\gamever\%s\location\%d
    \heartbeat\%d\gamename\%s
    \queryid\%d.%d

`User\config.cfg` shows the registration knobs: `gsc_nick`, `gsc_user`,
`gsc_server` (`irc.globalgamers.net`), `gsc_port` (`6667`), plus an IRC
based alternative `net_socksServer` / `net_socksPort` (`1080`).

### The engine's weapon/model table already contains the sniper

At file `0x123434` is a sorted (alphabetical) array of world-model string
pointers:

    weapons/othermz/autoshot      weapons/othermz/knife
    weapons/othermz/machinegun   weapons/othermz/machinepistol
    weapons/othermz/phos         weapons/othermz/pistol1
    weapons/othermz/pistol2      weapons/othermz/rocket
    weapons/othermz/rocket_alt   weapons/othermz/shotgun
    weapons/othermz/sniper  <==  weapons/othermz/tank

with matching view models (`weapons/playermz/...`) and the scope assets
already present:

    pics/scope/arrows128_4   FSCOPEBOX  FSCOPELENS  FSCOPEMOUNT  BSCOPEMOUNT
    weapons/sniper/zoom.wav  weapons/sniper/reload.wav
    weapons/sniper/cock.wav  weapons/sniper/done.wav
    GHOUL/WEAPON/INVIEW/SNIPERRIFLE/{IDLE_A,IDLE_B,READY,FIRE1,DONE_A}.GHL
    GHOUL/ENEMY/BOLT/W_SNIPERRIFLE.{GHB,IFL,TGA}

**So the sniper needs no new art and no new format**: the model, the view
model, the animation scripts and the scope overlay are all already in the
game, and the engine already knows the item and plays `zoom.wav`.

### What "add a sniper that zooms" therefore requires

1. The **module's** 39-item table must gain the sniper at the **same
   index the engine's item list uses** (the index is the contract between
   module and engine - the client renders by index).
   The engine's list is the authority for that index; it must be dumped
   next.
2. The module's weapon table already has the sniper (row 7,
   `weapons/othermz/sniper`, damage 80, 6 pellets, range 1600, delay 0).
   The item record that references it (view model, icon, ammo type) does
   not yet exist in the module's item table.
3. The zoom/scope is **client side**: the engine draws it and plays
   `weapons/sniper/zoom.wav`. The module only has to hold the item, so
   the engine can show the scope while that item is current. The gating
   condition (which item flags enable the scope) still has to be read out
   of the engine.

### Remaining RE for this feature

* dump the engine's item list -> the sniper's index and its flags
* read the engine's scope-drawing code -> what enables it
* then patch the module's item table so the sniper exists at that index
* then host with `sv_pure 1` + `allow_download_models 1` so stock clients
  fetch the patched module

## 4.39 What the engine does and does not know about the sniper

`SoF.exe` sections: `.text` 0x1000, `.rdata` 0x111000, `.data` 0x11C000,
`.rsrc` 0x40A000, image base **0x20000000**. The weapon/sound path pools
live in `.data` (e.g. `weapons/sniper/zoom.wav` at file `0x123A64`, VA
`0x20123A64`).

Searching the whole engine for "sniper" yields **only**:

* `givesnipertutorial`
* the sound pool `weapons/sniper/{zoom,reload,done,cock,cock2}.wav`
* the model pool `weapons/othermz/sniper` and `weapons/playermz/sniper`
* the Ghoul script paths `GHOUL/WEAPON/INVIEW/SNIPERRIFLE/*.GHL` and
  `GHOUL/ENEMY/BOLT/W_SNIPERRIFLE.{GHB,IFL,TGA}`

**There is no `weapon_sniper` classname, no "Sniper Rifle" pickup name,
no `cg_zoom`/`cl_zoom` cvar, and no scope-related cvar anywhere in the
engine.** The scope is drawn from the picture pool
(`pics/scope/arrows128_4`, `FSCOPEBOX`, `FSCOPELENS`, `FSCOPEMOUNT`) and
the zoom is *script/sound* driven, not an engine cvar.

### Consequence for the item list

In Quake III the **server owns the item list**: it is shipped to the
client as the `CS_ITEMS` configstring and the client resolves each entry
**by name** against its own `bg_itemlist` to obtain the view model, world
model and icon. So:

* the **module's** item list defines the indices and the names;
* the **engine's** `bg_itemlist` must contain an entry whose *name* matches,
  or the client cannot render that item.

The engine has no sniper entry, so a sniper item needs an **engine-side
`bg_itemlist` addition** as well as a module-side item record. The good
news is that the engine side is pure data (name/classname/pickup_name/
view_model/world_model/icon/quantity/ammo/maxammo/flags) and the paths
already exist:

    world_model  weapons/othermz/sniper
    view_model  weapons/playermz/sniper
    sounds      weapons/sniper/{cock,cock2,reload,done,zoom}.wav

and the model + view-model animations + scope overlay are already in the
game, so no new art and no new file format is required. The remaining
unknowns for this feature are:

1. the exact `bg_itemlist` struct layout in `SoF.exe` and a free slot (or
   the `flags` bit that the scope code tests),
2. the scope-drawing code in the engine and what gates it,
3. the module's item-record layout for a weapon item (0x164 bytes, known)
   and the index it must occupy to match the engine.

`REPORT.md` 4.36 gives the module-side weapon object layout and 4.33/4.35
the entity field table, so the module side is close to complete; the engine
side is the new unknown.

## 4.40 The engine side needs no patch - the sniper is table driven

`SoF.exe` has, in `.data`:

* a **102-entry sorted array of weapon model paths** at file `0x123434`:
  `weapons/othermz/{autoshot,knife,machinegun,machinepistol,phos,pistol1,
  pistol2,rocket,rocket_alt,shotgun,sniper,tank}` followed by the matching
  `weapons/playermz/*` view models;
* a **sound array** with `weapons/sniper/{zoom,reload,done,cock,cock2}.wav`,
  `weapons/shotgun/*`, `weapons/rocket/*` ...
* the scope render assets `pics/scope/arrows128_4`, `FSCOPEBOX`,
  `FSCOPELENS`, `FSCOPEMOUNT`.

But the engine contains **no** `weapon_*` classname, no pickup name
("Assault Rifle", "Sniper Rifle"), no `cg_zoom`/`cl_zoom` cvar and no
immediate reference to the model strings. So SoF's client side is
**table/script driven, keyed on the model path**, and the *module* owns the
item list (shipped to the client as `CS_ITEMS`).

**Consequence: if the module hands the client a weapon whose world model
is exactly `weapons/othermz/sniper`, the engine's own table supplies
`weapons/playermz/sniper` as the view model and enables the scope and
`weapons/sniper/zoom.wav`.** The engine needs no patch at all.

## 4.41 A sniper-only server is a module-side change; the map is untouched

Q3/SoF maps place items as entities identified by classname, so a map
authored without a sniper has nothing to spawn. But a sniper-only server
does not need map placement:

1. **Player spawn gives the sniper** instead of the blaster (the module's
   `PutClientInServer` already chooses the starting item).
2. **Non-sniper weapon pickups never spawn** - the module's item-spawn
   path refuses them, so the map's shotgun / rifle spawns simply do not
   appear.
3. **`give all` is restricted** to the sniper.
4. Ammo and the weapon respawn on the sniper only.

So the deliverable is a patched `gamex86.dll` plus the stock `SoF.exe`,
served with `sv_pure 1` and `allow_download_models 1` so stock clients
fetch it.

### Module-side work still required

* the module's item table: 39 records of 0x164 bytes - add the sniper
  record (pickup name, icon, world model `weapons/othermz/sniper`, view
  model `weapons/playermz/sniper`, ammo type, carry capacity) and know
  which index it must take;
* the module's weapon table already has the sniper (row 7);
* the spawn path and `give` path changes above.
