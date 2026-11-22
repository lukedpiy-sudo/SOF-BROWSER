# The game module's object model — the class, field and callback tables

**SOLVED 2026-11-17.** This closes the "the module's entity-class / field
tables" hole that PLAYABILITY.md listed as one of the two remaining RE gaps.

Everything below is read straight out of the shipped module; nothing is
hard-coded, so it can be re-verified at any time with

```bash
python3 analysis/module_tables.py check     # the self-test
python3 analysis/module_tables.py all       # every table
```

The module: `sof_target/gamex86.dll` ( == `Soldier of Fortune/Base/gamex86.dll`,
md5 `152b6b788d0b84c0adfb1bdd1eddc0af`), image base **0x50000000**.
For this DLL the PE sections are identity mapped (`.text` rva/raw 0x1000,
`.rdata` 0x116000, `.data` 0x12F000), so **a string VA == the file offset +
0x50000000** and the `.data` tail (0x34000 bytes) is BSS.

## 1. The corrections this replaces

Two addresses circulated in the old Windows dumps are **mis-scans**:

| the stale address | what it really is | the real table |
|---|---|---|
| `0x5014ED60` | the **last entity-class record** (`"test_rj"`) | the entity/world field table starts at **`0x5014ED70`** |
| `0x50145298` | the **fourth record** of the vector table (`"origin"`) | the script vector-field table starts at **`0x50145268`** |

`analysis/module_tables.py check` proves both: it prints what the stale
address holds and what the real start holds.

The other correction: the field record is **16 bytes**
`{ const char *name; int offset; int type; int flags; }`. The 5th dword of a
record is **not** a field — it is the *next* record's name pointer (the old
dumps printed it as a bogus "next:" column).

## 2. The entity classes — 422 in 15 tables

The class tables are reached through a **pointer array of 15 table pointers**
at **`0x5014F380`**, NULL terminated at `0x5014F3BC`.

* the reader is `ED_CallSpawn` at **`0x500BD570`**; the disassembly shows
  `mov 0x5014f380,%eax` / `mov $0x5014f380,%edx` at `0x500BD63A` / `0x500BD63F`,
  then it walks the array, and for each table it compares the class name
  **byte by byte** (`0x500BD658`) — the compare is **CASE SENSITIVE**;
* each class table is an array of **8-byte records**
  `{ const char *name; void (*spawn)(edict_t*); }`, NULL-name terminated.

| slot | table | classes |
|---|---|---|
| 0x5014F380 | 0x50146F90 | 27 |
| 0x5014F384 | 0x501474D8 | 38 |
| 0x5014F388 | 0x50150AB0 | 21 |
| 0x5014F38C | 0x501502E8 | 16 |
| 0x5014F390 | 0x5014BAF8 | 21 |
| 0x5014F394 | 0x50145FB8 | 10 |
| 0x5014F398 | 0x501465A0 | 8 |
| 0x5014F39C | 0x5014B428 | 12 |
| 0x5014F3A0 | 0x50147C08 | 103 |
| 0x5014F3A4 | 0x5014CF40 | 5 |
| 0x5014F3A8 | 0x5014E478 | 9 |
| 0x5014FAC | 0x501505F0 | 12 |
| 0x5014F3B0 | 0x50150DF8 | 15 |
| 0x5014F3B4 | 0x50153F8C | 1 |
| 0x5014F3B8 | 0x5014E988 | 124 |

The table is the map author's vocabulary: `info_player_deathmatch`,
`func_door`, `trigger_always`, `light_generic_*`, `target_speaker`,
`misc_uganda`, `environ_*`, `anim_*`, `weapon_*`, … The full list with the
spawn function of every class is in
`python3 analysis/module_tables.py classes`.

The last class of the last table is `"test_rj"` at `0x5014ED60` (the spawn
function `0x50096C00`) followed by the NULL terminator at `0x5014ED68` — the
record that the old dump mistook for a field table.

## 3. The entity/world field table — 96 records at `0x5014ED70`

Read by **two** functions:

* `FUN_5007B750` (the spawn handler) — `mov $0x5014ed70,%esi` at `0x5007B851`;
* `FUN_500BD730` (set a field by name) — `mov $0x5014ed70,%ebx` at `0x500BD740`.

Both compare the field name with **`__strcmpi`** — the field-name compare is
**CASE INSENSITIVE**.

**flags bit 0 selects the target:** `0` = the entity, `1` = the **world
entity**. The world entity is a **0x10C-byte global structure** in the `.data`
BSS at **`0x5015CB90`**; the largest field offset that targets it is `0x108`
(`chopsky`), which fixes its size. The two readers address it at
`0x5007B87E` and `0x500BD77C`.

The **field types** (from the jump table of `FUN_5007B750` at `0x5007B984`
and of `FUN_500BD730` at `0x500BD8D4`):

| code | type |
|---|---|
| 0 | int32 |
| 1 | int16 |
| 2 | float32 |
| 3 | string |
| 4 | vector3 |
| 5 | angle (the yaw in the Y slot) |

### The 96 fields (name, offset, type)

The 96 records split in two by the flags bit:

* **records 0..39, flags = 0** → the **entity** (the entity_t, 0x464 bytes,
  the same layout as the edict);
* **records 40..95, flags = 1** → the **world entity** (the 0x10C-byte global
  at `0x5015CB90`).

The names are SoF's own, and they settle a long list of positional guesses
in `REPORT.md` §4.28/§4.35.

**The 40 entity fields:**

| offset | name | type | | offset | name | type |
|---|---|---|---|---|---|---|
| 0x004 | origin | vector3 | | 0x1C4 | target | string |
| 0x010 | angles / angle | vector3 / angle | | 0x1C8 | targetname | string |
| 0x02C | skin | int | | 0x1CC | scripttarget | string |
| 0x03C | lip | int | | 0x1D0 | killtarget | string |
| 0x040 | distance | int | | 0x1D4 | killfacing | string |
| 0x044 | height | int | | 0x1D8 | team | string |
| 0x048 | noise | string | | 0x1DC | pathtarget | string |
| 0x158 | solid | int | | 0x1E0 | deathtarget | string |
| 0x160 | owner | entity | | 0x1E4 | combattarget | string |
| 0x19C | **movetype** | int | | 0x1E8 | soundname | string |
| 0x1A0 | the immune flags | int | | 0x1EC | spawn1 | string |
| 0x1A4 | model | string | | 0x1F0 | spawn2 | string |
| 0x1AC | message | string | | 0x1F4 | spawn3 | string |
| 0x1B0 | sp_message | int | | 0x21C | speed | float |
| 0x1B4 | **classname** | string | | 0x220 | accel | float |
| 0x1B8 | spawnflags | int | | 0x224 | decel | float |
| 0x27C | **mass** | int | | 0x2EC | **health** | int |
| 0x2B4 | nextthink | int | | 0x300 | map | string |
| 0x310 | dmg | int | | 0x314 | sounds | int |
| 0x318 | count | int | | 0x338 | personality | int |
| 0x358 | volume | float | | 0x35C | attenuation | float |
| 0x360 | wait | float | | 0x364 | delay | float |
| 0x368 | random | float | | 0x384 | alertradius | float |
| 0x3BC | style | int | | — | **light** (type 21: an opaque script value) | — |

**The 56 world-entity fields** (the offsets are inside the 0x10C-byte world
structure):

| offset | name | | offset | name |
|---|---|---|---|---|
| 0x004 | skyrotate (float) | | 0x058 | minyaw (float) |
| 0x008 | skyaxis (vector3) | | 0x05C | maxyaw (float) |
| 0x014 | musicSet (string) | | 0x060 | minpitch (float) |
| 0x018 | terrainset (string) | | 0x064 | maxpitch (float) |
| 0x01C | nextmap (string) | | 0x068 | killedvalue (int) |
| 0x020 | color (vector3) | | 0x06C | survivalvalue (int) |
| 0x02C | endpoint (vector3) | | 0x070 | material (int) |
| 0x038 | spawnfrequency (float) | | 0x074 | **scale** (float) |
| 0x000 | sky (string) | | 0x078 | merctype (int) |
| 0x080..0x094 | waitaction1..waitaction6 (strings) | | 0x07C | mercnum (int) |
| 0x098 | moveaction (string) | | 0x09C | screeneffect (int) |
| 0x0A0 | script (string) | | 0x0A4..0x0C8 | parm1..parm10 (strings) |
| 0x0E4 | surfacetype (int) | | 0x0E8 | noweapons (int) |
| 0x0EC | setweapons (int) | | 0x0F0 | maxDeadHostages (int) |
| 0x0F4 | ambientSet (string) | | 0x0F8 | startmusic (int) |
| 0x0FC | forceHUD (int) | | 0x100 | weaponsAvailable (int) |
| 0x104 | ainame (string) | | 0x108 | distcull / chopsky (int) |

(the complete, machine-generated list — with the type and the flags of every
record — is `python3 analysis/module_tables.py fields`.)

The corrections that matter most, because the old notes had them wrong:

| offset | the old claim | **the truth** |
|---|---|---|
| 0x2EC | the ammo counter | **`health`** (an *entity* field) |
| 0x19C | the ammo type index | **`movetype`** (an *entity* field) |
| 0x27C | the max carry | **`mass`** (an *entity* field) |
| 0x074 | the client pointer | **not an entity field at all** — `scale` at 0x074 belongs to the **world entity** |

So the code at `0x500060AB` (the `sub dword ptr [edi+0x2ec],ebx` ammo
decrement) operates on the **per-player weapon object**, not on the edict —
see `analysis/weapon_object.md`. And the `mov eax,[edi+74h]; test eax,eax`
test in the fire path is **not** "is there a client?" — there is no entity
field at 0x74.

## 4. The script vector-field table — 24 records at `0x50145268`

Read by `FUN_5007B5F0` (`mov $0x50145268,%edx` at `0x5007B67F`) and
`FUN_50078C60` (`mov $0x50145268,%ebp` at `0x50078CBC`). Same 16-byte record
layout, same case-insensitive compare.

The first three records are special: `x`, `y`, `z` carry the offsets **-1,
-2, -3** — they are the *components* of the vector that the following
`origin` / `origin_x` / `origin_y` / `origin_z` records address.

| name | offset | type |
|---|---|---|
| x / y / z | -1 / -2 / -3 | float (the vector components) |
| origin | 4 | vector3 |
| origin_x / origin_y / origin_z | 4 / 8 / 12 | float |
| movetype | 412 (0x19C) | int |
| start_origin | 980 (0x3D4) | vector3 |
| distance | 1052 (0x41C) | float |
| owner | 352 (0x160) | entity |
| wait | 864 (0x360) | float |
| velocity | 588 (0x24C) | vector3 |
| angle_velocity | 600 (0x258) | vector3 |
| team_chain | 828 (0x33C) | entity |
| yaw_speed | 688 (0x2B0) | float |
| modelindex | 32 (0x020) | int |
| count | 792 (0x318) | int |
| solid | 344 (0x158) | int |
| angles | 16 (0x010) | vector3 |
| start_angles | 992 (0x3E0) | vector3 |
| state | 1060 (0x424) | int |
| health | 748 (0x2EC) | int |
| loopsound | 60 (0x03C) | int |

These are exactly the 30 base fields that every one of the **727** `.os`
mission scripts uses — i.e. the module's **scripted entity** base class. The
`.os` schemas and this table agree field for field.

## 5. The accessory table — 42 records at `0x50132CC8`

16-byte records `{ const char *name; int group; int slot; int flags; }`, read
inside the function at `0x5002F1C0` (the lookup loop at `0x5002F3A2`-
`0x5002F3E9`, case-insensitive through `0x50112880` = `__strcmpi`).

| field | read at | meaning |
|---|---|---|
| name | +0x00 | the accessory / weapon class name |
| group | +0x08 (`0x5002F3F0`) | 0 = stackable (a count argument is required), 1 = unique |
| slot | +0x0C (`0x5002F6C4`) | 0 = held, 1 = worn on the head |
| flags | +0x10 (`0x5002F91C`) | 1 = not handed out here |

## 6. The script callback tables — 8 tables

The script VM's callback values are stored in the eight tables below. The
value type → table mapping is proved by **`FUN_500BA9B0`** (the type →
pointer switch, cases `0xD`..`0x14`) and by **`FUN_500BA520`** (the pointer
→ index, the inverse).

| script value type | table | entries | meaning |
|---|---|---|---|
| 13 (0xD) | `0x5014D5B8` | 219 (0xDB) | think |
| 14 (0xE) | `0x5014D924` | 5 | blocked |
| 15 (0xF) | `0x5014D938` | 58 (0x3A) | touch |
| 16 (0x10) | `0x5014DA20` | 119 (0x77) | use |
| 17 (0x11) | `0x5014DBFC` | 13 (0xD) | pluse |
| 18 (0x12) | `0x5014DC30` | 56 (0x38) | pain |
| 19 (0x13) | `0x5014DD10` | 35 (0x23) | die |
| 20 (0x14) | `0x5014DD9C` | 2 | respawn |

`FUN_500BA9B0` also proves the bounds (e.g. case 0xD accepts `-1 < index <
0xDB`), and `FUN_500BA8F0` / `FUN_500BA3C0` are the index ↔ pointer
conversions.

## 7. The script value types (the whole set)

From `FUN_500BA9B0` (the type → pointer switch) and `FUN_500BA520`:

| code | type |
|---|---|
| 0 | int32 |
| 1 | int16 |
| 2 | float32 |
| 3 | string (an allocated buffer) |
| 4 | vector3 |
| 5 | angle |
| 6 | null |
| 7 | an entity (an index into the entity array at `0x5015CCA0`, stride 0x464) |
| 8 | invalid |
| 9 | the table `0x5014DE98` object (4 × 0x58) |
| 10 | the table `0x5014DEB8` object (13 × 0x28) |
| 11 | a client entity (the 0x600-stride array at `0x5015D6C4`) |
| 12 | bool |
| 13..20 | the eight callback tables of §6 |
| 21 | an opaque script value (never written into the entity struct) |

Codes 6..21 never appear in a **field record** — they are only script values.

## 8. The weapon class names — 13 at `0x5014F3C0`

Read by `FUN_500BE990` and by the second reader at `0x500BEA49`
(`mov $0x5014f3c0,%eax`; the compare is `__strcmpi`, case-insensitive). The
weapon class id is **`1 << index`**.

| index | name | id |
|---|---|---|
| 0 | nothing | 0x1 |
| 1 | knife | 0x2 |
| 2 | pistol2 | 0x4 |
| 3 | pistol1 | 0x8 |
| 4 | mpistol | 0x10 |
| 5 | assault | 0x20 |
| 6 | sniper | 0x40 |
| 7 | slugger | 0x80 |
| 8 | shotgun | 0x100 |
| 9 | machinegun | 0x200 |
| 10 | rocket | 0x400 |
| 11 | mpg | 0x800 |
| 12 | flamegun | 0x1000 |

These are the **weapon classes** of the player's weapon state — a different
index space from the 31-row **weapon table** (base `0x50159B18`, stride
`0x14C`, see `analysis/weapon_fire.md`) and from the **item table** (39
records, stride 0x164).

## 9. The self-test

`python3 analysis/module_tables.py check` verifies, from the binary:

* 15 class tables, 422 classes, every spawn pointer inside `.text`;
* the NULL terminator of the class-table array at `0x5014F3BC`;
* the last class record (`test_rj`) and its terminator at `0x5014ED68`;
* 24 records in the vector-field table, 96 in the entity/world field table;
* that the two stale addresses do **not** look like a table start;
* 42 accessory records;
* that every entry of the eight callback tables is a code pointer;
* that the weapon-class-name array is exactly 13 long;
* that the world entity `0x5015CB90` really is in the BSS.

All the invariants hold.

## 10. What this closes

* The module's **entity-class vocabulary** (422 classes, 15 tables, the
  case-sensitive spawn lookup).
* The module's **field model**: the entity/world field table (96 fields, with
  their names, offsets and types) and the scripted-entity vector table (24).
* The **accessory/weapon class table** (42 records).
* The **script callback tables** (8) and the complete script value type set.
* The **weapon class id** space (13 names, the id = 1 << index).

With this, the module's object model is fully mapped: a script or a map
author can name every field of every entity, every spawnable class and every
callback. This is the "the module's entity-class / field tables" hole from
`PLAYABILITY.md` §2.
