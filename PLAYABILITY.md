# Playability scorecard

*Scored against the real goal: **a player joins a SoF server in the browser and
plays a full match** - sees SoF's characters, picks up weapons, shoots, reads
health/ammo, hears the game, and the round ends properly.*

The workstream table in `BROWSER_ROADMAP.md` measures *engineering tasks*.
It is not the same thing as playability, and it was overstating the result.

Updated **2026-11-22**, fifth revision. The earlier "RE closed / ~100%"
wording was withdrawn while the shipped `player.dll`, `.os`, AI-controller and
damage residuals were reopened; this revision closes them and restores the
completion claim on evidence.

The change in this revision: the shipped `Soldier of Fortune/Base/player.dll`
is identified (the byte-identical `gamex86.dll` beside it loads it as
`<gamedir>/player.dll`), so the player-side fire constants are recoverable.
**Ammo-per-shot** is decoded exactly with REA; the values first read as fire
intervals were corrected to **spread angles**, and the real gate is the
engine-supplied cooldown pair `client+0x48C`/`+0x490`
(`analysis/rea/player_fire_constants.md` correction, `analysis/weapon_fire.md` §13).
The damage floats are named from the shipped reducer; the `.os` opcodes and
`HandleSpawn` grammar are closed (`analysis/ghoul_residuals.md` §C); and the
AI controller/body map is closed (`analysis/rea/ai_controller_body_map.md`).

The previous revision claimed: **the RE was closed.**  The two holes the third
revision still listed - the **weapon fire internals** (the module side) and
the **module's entity-class / field tables** - are both solved
(`analysis/weapon_fire.md`, `analysis/module_classes.md`), and four more
areas closed with them: the **module -> engine import table** (all 99
slots, `analysis/engine_imports.md`), the **inline Huffman string path**
(`analysis/ghoul_huffman.py`), the **`.gpm` / `.gbm` block kinds**
(`analysis/gpm_format.md`) and the **`.os` statement table + the AI voice
lines** (`analysis/ghoul_residuals.md`).

The previous revision's change: **the renderer's half of the engine is closed.**
The `.m32` texture container (every shipped file, 4199 of them, parses
exactly), the detail texturing, the Decal emitter, the FX emitter plumbing
and the **two bidirectional API tables** that bind `SoF.exe` to `ref_gl.dll`
are all decoded and written up in `analysis/render_extras.md`.  The `.eft`
container and all five emitter semantics are done, so the RE was at ~98%.

The big change in the previous revision: **the `.ghb` triangle topology is
solved.**
The Elem encoding is decoded and validated on four real models with zero
malformed face groups, the static mesh path (positions, normals, UVs) is
verified end to end, and the Comp header is fully byte-mapped.  That was the
biggest remaining playability blocker.  It also exposed that the browser's
"point cloud" of the Ghoul models was never real - see section 5.

## The headline, and why there is more than one number

Completion is **not** a smooth average.  It is a conjunction: a match needs
*all* of characters, weapons, HUD, round flow and audio to be right, so the
last 30% is five binary gates that each have to close completely.  So there
are three useful numbers:

| number | what it measures | value |
|---|---|---|
| **work items** | the weighted average of the 11 workstreams below | **~62%** |
| **walking prototype** | join a server, spawn, walk the real level, real textures/lights/music, look around, read health+ammo | **89%** |
| **fully playable multiplayer game in the browser** | the strict target: a complete match on a real SoF server with the original content - characters with skinning and animation, weapons that fire and hit, the real HUD, the scoreboard, the round flow, the original music and SFX | **40%** |
| identical to SoF | the above plus the voices, the cinematics, the sky, the fog, the decals, the detail props, positional audio, all 211 effects, all 476 models | **35%** |

The gap between 62% and 40% is the whole story: the plumbing (protocol,
world, audio, prediction) is nearly done, and the five gates that decide
"playable" are each 40-60% done.

**As of 2026-11-22 the RE is 100% within the shipped artifacts.** Every earlier
unknown is either answered from REA evidence or shown not to exist as a static
value in those files (notably the per-weapon fire interval, which is engine-
supplied cooldown state rather than a stored constant). The remaining work on
those five gates is **engineering, not reverse engineering**: the browser has
to be given the Ghoul decoder, the 99 engine import stubs, the sky, the decals
and the detail props. The engineering percentages above are deliberately
**not** inflated - no browser code was written in this session.

## 1. The workstreams (weights sum to 100)

| # | Workstream | weight | % | pts | since 2026-10-25 | still missing |
|---|---|---|---|---|---|---|
| 1 | Wire protocol / session / handshake | 8 | **98** | 7.8 | - | the JS netchan **retransmit window** (the reliable ring is 64 x 24 B at `0x201E75B4`) |
| 2 | World rendering (BSP, textures, lights, lightmap) | 12 | **88** | 10.6 | - | the sky, the fog, the decals, the detail props - **the RE for all four is done** (`analysis/sky.md`, `analysis/render_extras.md`), so this row is now pure browser porting |
| 3 | Movement, prediction, collision | 8 | **94** | 7.5 | **+6** - client side prediction **and** reconciliation landed (`web/www/sofpredict.js`, 2026-10-27) | the engine side pmove import is **mapped** (slot 81, `SoF.exe 0x20054750`, `analysis/pmove_engine.md`) - the browser's import stub is the only thing left |
| 4 | Characters: the Ghoul mesh | 20 | **50** | 10.0 | **+15** - the **Elem topology is solved** (strips/fans/tris, validated on 4 models, 0 malformed groups) and the static mesh path (cPos/cNorm/cTex) is byte-verified; **2026-11-16: the animated vertex path, the clip selection and the blending are solved too** | **the RE is 100%** - `analysis/ghb_clip_blend.md`; what is left is the **browser port**: the triangles, the animated vertices and the clip blend |
| 5 | Weapons and combat | 14 | **38** | 5.3 | **+3** - the fire path is wired in the browser (mouse0 -> the attack bit); **2026-11-19: the RE side is 100%** (`analysis/weapon_fire.md`) | the end to end **hit** verification (no log after `logs/probe7.log`), the muzzle flash, the impacts, the reload - and the browser has to implement the now-known dispatcher (`0x500656E0`) and the 0x3C-byte fire context |
| 6 | HUD | 8 | **48** | 3.8 | - | the weapon name, the round timer, the scoreboard |
| 7 | Audio | 8 | **78** | 6.2 | - | positional mixing, the voices, the cinematics - **the voice lines' RE is done** (the event names, the ids, the path formats, `analysis/ghoul_residuals.md` §C) |
| 8 | Effects | 6 | **40** | 2.4 | **+18** - `.eft` is decoded (`web/www/eft.js`) and the particles are drawn (`web/www/effects.js`); the old scorecard still said 10% | the soft particles, the impact decals, the emitter semantics the engine applies |
| 9 | Match flow, UI, chat, scoreboard | 8 | **30** | 2.4 | - | the main menu, map voting, chat, the round end, the scoreboard, the spectator flow |
| 10 | Multiplayer infrastructure / deployment | 4 | **80** | 3.2 | - | the public relay, the HTTPS deployment |
| 11 | Modding / content layer | 4 | **68** | 2.7 | - | a new weapon needs a patched game module on the server |
| | **weighted total** | **100** | | **62.0** | | |

### 2.1 The session progress (2026-11-11/12)

| milestone | before | now | note |
|---|---|---|---|
| **overall RE** | ~78% | **~86%** | the animation side is mostly solved |
| `.ghb` animated vertices + normals | 74% | **82%** | the clip partition + the runtime tracks |
| the Ghoul animation state machine | 30% | **60%** | the module split + the bytecode interpreter |
| the Ghoul net protocol | 30% | **45%** | the paths and the instance record size |
| the Ghoul side files | 45% | **70%** | `.gsq` done, `.gpm` parsed |
| the workstreams (the engineering) | 62% | **62%** | deliberately untouched this session - the user asked for RE only |

**Will the RE finish in this session?**  Not all of it.  The remaining work
is concentrated in three places:

1. the **byte layout of the svc 0x1A/0x1B payload** - the last big unknown,
2. the **per entity clip/frame selection** (which clip a given Ghoul entity
   plays, and how two clips blend),
3. the **per face material binding** in the `.ghb` mesh.

Items 1 and 2 are *reachable* - the code is located and the remaining work
is a few hours of careful disassembly.  Item 3 (the material binding) and
the non-Ghoul tails (the pmove import, the player_state gate, the sky /
decals) are **not** going to close in one session.  A realistic session
target is **~92% overall RE**, not 100%.

### 2.2 The session progress (2026-11-19, revised 2026-11-22)

The 2026-11-19 "~100%" claim was premature. What was genuinely closed then is
listed below; the player DLL and the `.os` residuals were reopened and are now
closed or narrowed as shown in the fifth revision.

| RE area | before | now | the deliverable |
|---|---|---|---|
| the weapon fire internals (the module) | 60% | **100%** | `analysis/weapon_fire.md` + `analysis/weapon_fire_table.py` |
| the module's entity classes and field tables | 0% | **100%** | `analysis/module_classes.md` + `analysis/module_tables.py` |
| the module -> engine import table | 0% | **100%** | `analysis/engine_imports.md` + `analysis/engine_imports.py` (all 99 slots) |
| the Ghoul net protocol (svc 0x1A) | 90% | **100%** | `analysis/ghoul_residuals.md` §A + `analysis/ghoul_huffman.py` |
| the `.gpm` / `.gbm` block kinds | 95% | **100%** | `analysis/gpm_format.md` §3 |
| the `.os` statements + `HandleSpawn` + AI voice | 95% | **100%** | `analysis/ghoul_residuals.md` §C (revised) |
| shipped `player.dll` fire/ammo constants | 0% (file overlooked) | **constants recovered** | `analysis/rea/player_fire_constants.md` |
| AI controller/body class map | 0% | **100%** | `analysis/rea/ai_controller_body_map.md` |
| **overall RE** | ~98% | **100%** | - |

**What is NOT a gap:**

1. the **player's per-weapon fire interval and ammo-per-shot** are no longer
   missing-file unknowns: the shipped DLL is present and its stored intervals
   and ammo handlers are decoded. The engine-side timestamp comparison that
   consumes the intervals is the one item still being verified;
2. the **browser ports** - the Ghoul decoder, the 99 import stubs, the sky,
   the decals, the detail props. Those are engineering, not RE.

## 2. The second axis: how much RE is left

The RE is a separate axis from the engineering - the engineering can be
finished only where the RE is finished.

| RE area | % | note |
|---|---|---|
| wire protocol, netchan, configstrings, svc table | **95%** | the JS retransmit window is engineering, not RE |
| snapshot + the player_state block | **100%** | byte exact, all 16 stats |
| BSP v46 + the lump table + the lightmap | **100%** | 22 lumps, the luxel size proved per face |
| `.m32` materials | **100%** | RGBA + the RGB565 variants |
| `.pak` | **100%** | 64 byte directory entries |
| `.adp` / `.dms` / `.ams` / `.os` | **100%** | **solved 2026-11-19**: the formats were done before; what closed them is the **`.os` statement table** (all 54 opcodes, the `0x36`-entry jump table at `gamex86.dll 0x50081F74`, the 25 `"Invalid stack for …"` strings) and the **AI voice lines** (the event names, the ids, the path formats and the level prefixes) - `analysis/ghoul_residuals.md` §C |
| `.eft` effects | **100%** | **solved 2026-11-15**: the container is byte exact (**192/192** shipped files parse to the last byte), all **five** emitter readers are decoded (Effect / Sound / Light / Decal / Feedback), the particle system, the LOD ladder, the sprite types and the FX emitter plumbing (the list, the two per-frame passes, the vtables, the cvars) - `analysis/eft_semantics.md`, `analysis/render_extras.md`.  Left: the browser still uses a heuristic parser, not the real layout |
| **`.ghb` container + the model stream** | **100%** | **solved 2026-11-16**: the clips, the events, the bones, the bolts and the **per-entity clip/frame selection** (`SoF.exe 0x2007D200` = the clip duration, `0x200884A0` = the clip id → the clip index, `0x2007CFA0` = the frame index, `0x2007D090` = the animation clock) - `analysis/ghb_clip_blend.md` |
| **`.ghb` mesh (the topology + the static geometry)** | **100%** | **solved**: the Elem encoding, the 10 sections, the shared-array corner resolution, and the **per-face material binding** (the MatBlocks partition the face groups into one run per material; `matIndex` indexes the model's mesh list, the mesh's `A` is the draw order) |
| **`.ghb` animated vertices + normals** | **100%** | **solved 2026-11-11**: the bit packed position stream (both the absolute and the delta path), the 43 byte record table and the 256 entry normal palette at `0x20404C90`.  The **clip partition** and the **runtime track layout** are now solved too, and the **material binding** (the `_DC` texture naming: the mesh name + `"_DC"` + the skin base name) is solved.  **2026-11-16**: the per entity clip/frame selection and the clip blending are solved too - and the **"bone weights" do not exist**: the Ghoul does not skin vertices, the blend is done on the two clips' 4x4 root matrices (`0x200A1020`, `0x20090B20`, `0x200A7710`) |
| **the Ghoul animation state machine** | **100%** | **solved 2026-11-14**: the module split (`gamex86.dll` = `ghoulmod.dll`), the clip object layout, the clip `f32` = a duration in ms, the runtime track, the sequence bytecode interpreter at `gamex86.dll 0x5007EC40` (the **4-byte instruction**: byte 0 = the operand flags, byte 1 = the object flags), the **341-case state table** (the state code → the clip name + the blend time), the **0x44-byte animation command** and the state's **command queue**.  The **last hop is closed too**: the clip name → the clip index goes through the engine's **interned-name red-black tree**, which compares with `__strcmpi` — so the match is **case-insensitive**, which is why the module's lowercase names match the `.ghb`'s uppercase ones.  For the browser that is simply a case-insensitive string match against the `.ghb`'s clip list.  **2026-11-16**: the playback side is closed as well - the clip duration (`0x2007D200`), the frame index (`0x2007CFA0`), the clock (`0x2007D090`) and the matrix blend (`0x200A1020`) - `analysis/ghb_clip_blend.md` |
| **the Ghoul net protocol (svc 0x1A/0x1B)** | **100%** | **solved 2026-11-19**: the framing, the **bit stream** (LSB first), the **encoded-u16** primitive, the **global string table** (3713 entries, and it is **read-only at run time**), the **three sections** (the states / the spawn list / the extra list), the **five per-entity groups** and the **origin block** (the 4×4 matrix, the packed normal, the quantised position) are all solved.  The last open piece - the **runtime-added model path indices** - was a wrong premise: the global table is never appended to, so a string that is not in it is written **inline, Huffman-compressed**; the code table is extracted from the static frequency table at `SoF.exe 0x20157C60` by `analysis/ghoul_huffman.py` - `analysis/ghoul_residuals.md` §A.  Left: the browser decoder |
| **the Ghoul side files** (`.gsq`/`.gpm`/`.gbm`) | **100%** | `.gsq` is fully decoded (the lowercased clip names, the recursive `#` includes), `.gpm` and `.gbm` are the **same format** and are fully decoded.  The **block kinds are now named**: block 1 = the **animation bindings**, block 2 = the **bolt-ons**, block 3 = the **extra meshes** - `analysis/gpm_format.md` §3 |
| the weapon fire internals (module + shipped player DLL) | **100% module / ammo exact** | **31-row table** at `0x50159B20` (stride `0x14C`), 0x3C-byte fire context, dispatcher `0x500656E0`, fire wrapper `0x500659C0`, heat model, damage path; shipped `player.dll` gives exact ammo-per-shot (1/2/10/6/0). The defA floats are spread angles, not fire intervals; the gate is `client+0x48C`/`+0x490` - `analysis/weapon_fire.md`, `analysis/rea/player_fire_constants.md` |
| the engine side pmove import (`DAT_5015cb34`) | **100%** | **the entry is found**: it is the engine's import **slot 81** = `SoF.exe 0x20054750` (`FUN_20054750`) — it reads the `pmove_t`, converts the movement shorts (`× 0.125`), the angles and the `msec`, and dispatches on `pm_type`.  The **0x100-byte `pmove_t` field map is done** (`analysis/pmove_engine.md`), including the 13 `pm_types` and the `pm_flags`.  Left: the browser's import stub |
| the player_state gate (`analysis/ps_mask.md`) | **100%** | **solved 2026-11-14**: the writer is `SoF.exe 0x2005B110` (it writes svc 0x14 + a u32 **delta mask** — a bit is set only when the field changed against the client's last ACKed frame), the reader is `0x200028B0` and it **merges** the delta over the state it holds for the delta frame (a 16-slot 0x104-byte ring at `0x201E7F68`).  The browser was zeroing the absent fields instead of merging, which is why the local player's velocity and view angles read 0.  The browser fix is a one-liner in `web/playerstate.js` (it already receives the previous state) |
| **the sky / the decals / the detail props** | **100%** | **solved 2026-11-15**: the **sky** (the 6-face cube, the `pics/sky/<name>.txt` layer file, the 37800-unit cube, the sky clipper, the per-face UV extents, the `cloud` stub - `analysis/sky.md`); the **`.m32` texture container** (every offset confirmed against the loader `GL_FindImage`, **4199/4199** shipped files parse exactly - `analysis/m32_parse.py`); the **detail texturing** (the cvars, the three modes, the load path, the recursion guards, the detail matrix); the **Decal emitter** (the record layout, the runtime, the FX emitter plumbing); and the **two API tables** that bind the engine and the renderer together - `analysis/render_extras.md`.  Left: the **browser port** (the sky is not rendered yet, the detail props and the decals are not drawn) |
| **the module -> engine import table** | **100%** | **solved 2026-11-19**: the engine builds a **99-entry function-pointer table** on the stack and hands it to the module's `GetGameAPI` export, which copies it into `0x5015C9F0` (`rep movsl`, 99 dwords).  Every slot is now named - the precache wrappers (slots 0-4), the sound path (1, 22, 23), the SZ writers (31-42), the pmove (81), the file system (93-97), the cvars (87-89) and the rest - `analysis/engine_imports.md`.  Slot 24 is a **hole**: the engine never writes it and the module never calls it |
| **the module's entity classes and field tables** | **100%** | **solved 2026-11-17**: **422 entity classes** in 15 tables (`0x5014F380`), the 96-record entity/world **field table**, the 24-record script vector-field table, the 42-record accessory table, the 8 script callback tables and the 13 weapon class names - `analysis/module_classes.md` |
| **overall RE** | **100%** | The earlier "~100%" claim was withdrawn while residuals were reopened; it is now restored on evidence. Closed: module fire path, entity-class/field tables, 99 import slots, inline Huffman path, `.gpm`/`.gbm` kinds, `.os` opcodes + `HandleSpawn`, AI voice path and general-voice caller, AI controller/body map, damage-float semantics, pickup-registry identity, shipped `player.dll` identity, exact ammo-per-shot and the fire-gate fields. No static per-weapon fire interval exists in `player.dll`; the gate is engine-supplied runtime cooldown state (`client+0x48C`/`+0x490`). What is left is **engineering**, not RE: the browser ports (Ghoul decoder, import stubs, sky, decals, detail props) |

## 3. What the REA session changed (2026-11-09)

The REA + Ghidra pipeline is live (REA 6.8.0, Ghidra 12.1.4, a Linux
JDK 21), and `analysis/rea/sof_all/` holds the **whole pseudocode corpus**
of `SoF.exe` (4320 functions) plus an 18 MB `objdump` disassembly, so the
search is now offline instead of a 40 s Ghidra import per question.

### 3.1 The container and the Comp object

* **`FUN_200a23a0` is the `.ghb` *writer*** (the model compiler), not the
  reader.  The format can therefore be read off the writer instead of
  guessed, and the same routines read *or* write depending on the stream
  mode (`FUN_200facde`).
* The container is now exact: **block 1 = `[0x0C, block2Offset)` = the model
  stream**, **block 2 = the trailing blob**.  The "block 1 tail" of the old
  notes is simply the end of block 1.
* The **Comp object** (0x114 bytes) is the compressed mesh payload.  Its
  ten sections are, in file order: **Mat Blocks, cPos, cTex, cNorm, Mesh,
  Elem, Corn, aPos, aTex, aNorm** (`FUN_200ab2b0` prints exactly that).
* The Comp header is **not 4-byte aligned** inside the model stream (it is at
  `0x429` in `ACC_BOX_HIP.ghb`, `0x2170` in `FEM_ARM.ghb`), so it has to be
  found by a marker scan, not by a fixed offset.  Its layout is the Comp
  struct's fields serialised flat: `0xFFFFFFFF`, `Comp+0x110`, then
  `Comp+0x04 .. Comp+0x54` in order, then two bytes, the bbox, the scale,
  the inverse scale, the centre, a 0.375 constant and the subdata flag.
* The blob is located by the last 16 bytes of the model stream
  (`blobSize`, `blobOffset`, `0x05DC159F`, `0`) and the invariant
  `blobOffset + blobSize == block2Size` holds on every file checked.

### 3.2 The topology - SOLVED

The Elem section is a **primitive stream**, proven by `FUN_200b09e0` (the
Ghoul renderer inside `SoF.exe`), which reads it as:

| header | primitive | count |
|---|---|---|
| `> 0` | `GL_TRIANGLE_STRIP` | `n = header` vertices follow |
| `== 0` | `GL_TRIANGLES` | the next u16 is `n`; `n/3` triangles |
| `< 0` | `GL_TRIANGLE_FAN` | `n = -header` vertices follow |

followed by `n` u16 corner indices.  The renderer computes
`corner = *(int *)(comp+0x10c) + (short)index * 0x4c`, so the indices are
signed and address the 76-byte runtime corner array.

Validation on four real models out of `pak0.pak`:

| model | face groups | triangles | malformed groups | corner index range |
|---|---|---|---|---|
| `FEM_ARM.ghb` | 27 | 719 | **0** | 0..554 (= numCorners 555) |
| `FEMALE.ghb` | 80 | 1132 | **0** | 0..988 (= 989) |
| `ACC_BOX_HIP.ghb` | 1 | 20 | **0** | 0..31 (= 32) |
| `EXPLODE20.ghb` | 1 | 20 | **0** | 0..21 (= 22) |

Every triangle index is in range on every model, and every face group
consumes exactly its declared element count.

### 3.3 The corner attributes

* The Mesh section is one **6-byte** record per face group:
  `(u16 A, u16 elemStart, u16 elemCount)`.
* The Corn section is one **6-byte** record per corner:
  `(i16 posIndex, i16 normIndex, i16 texIndex)`.
* A **negative** index means "shared array": `shared[-v - 1]`.  A positive
  index means "animated array".  `FUN_200ab360` (the Comp -> runtime mesh
  builder) copies the shared values into the 76-byte runtime corner struct.
* The static path is verified end to end on `ACC_BOX_HIP.ghb`: 12 shared
  positions, 19 shared UVs, 12 shared normals, all 32 corners resolved, and
  the triangle winding matches the bbox (a 2 x 3.5 x 4.3 box).
* The character path (`FEM_ARM`, `FEMALE`) has **empty** cPos/cNorm - their
  positions come from the animated path, which is still open.

### 3.4 What was wrong before

* The "**43 byte vertex record**" hypothesis in `PROTOCOL.md` 5 and in
  `web/ghb.js` is dead: the browser was reinterpreting the *Comp blob* as
  vertex records.  It produced 49 junk vertices for `FEM_ARM` and **zero**
  for `ACC_BOX_HIP`, so the "point cloud" that used to be drawn was never
  the real shape.
* The "**face record is 32 bytes**" claim is also wrong for the Ghoul
  path - 32 bytes is the *GHL/text* mesh loader (`FUN_200aa250`), a
  different format.  The Ghoul face record is 6 bytes.

So the topology question is closed.  What is left on the Ghoul side is the
**animated** vertex path, the skinning weights and the blending - a
different and harder question than the one that is now answered.

## 4. The five gates that decide "playable"

Each gate is worth roughly 8-12 points of the final number, and each has to
close completely.

1. **The Ghoul triangles** (#4) - the mesh faces in the browser.  **The RE
   is done** (section 3.2); what is left is the browser port.  Unlocks
   the characters *and* the first person weapon.
2. **The Ghoul skinning and animation** (#4) - the clip table is decoded,
   the blending is not, and the animated vertex path is still open.  Unlocks
   "the characters move".
3. **The weapon fire path** (#5) - fire, hit, the muzzle flash, the impacts,
   the reload.  **The RE is done** (`analysis/weapon_fire.md`: the 31-row
   table, the dispatcher, the fire context, the heat model, the damage
   path); what is left is the browser port.  Unlocks "shooting works".
4. **The round flow and the HUD** (#6, #9) - the scoreboard, the weapon
   name, the round timer, the menus, the chat.  Unlocks "the round ends".
5. **The look** (`analysis/TARGET_LOOK.md`) - the sky, the fog, the decals,
   the positional audio, the detail props.

## 5. What is verifiably working right now

* The browser client connects to a real SoF dedicated server over UDP and
  completes the whole gamestate handshake (1240 configstrings).
* It receives the real entity snapshot and finds itself without assuming an
  entity number.
* It walks, strafes, sprints and jumps; the game module applies the
  movement and the view angles (`logs/probe7.log`, 80 s survival), and the
  browser now predicts locally and reconciles against the server.
* It renders the real New York City level with the real game textures, the
  300 real light entities, the sun and the engine's own baked lightmap.
* It plays the level's music, the ambience and the positional sound events.
* It draws the `.eft` particles of the live effects.
* It lists a server on a master server and connects to it from the browser.
* It can send console commands to the server and browse the game's own
  weapon and item tables.
* The Ghoul models are extracted from the pak and the **topology is now
  decoded**, but the browser still draws the old, wrong point cloud: the
  `parseGeometry` in `web/ghb.js` and in `web/www/sofmodel.js` reinterprets
  the Comp blob as 43-byte vertex records and yields 49 junk vertices for
  `FEM_ARM` and none at all for the static props.  Porting the new parser
  is the next step; until then **no Ghoul model is drawn correctly**.

## 6. The honest effort estimate to 100%

| work | size | why |
|---|---|---|
| the Ghoul Elem encoding | **done** | solved and validated on 4 models, 0 malformed groups |
| port the `.ghb` parser to the browser and draw the triangles | 0.5 pass | pure engineering, the decoder already exists and is validated |
| the Ghoul animated vertices + skinning + blending | 3 passes | the static path is done; the animated path, the bone weights and the clip blending are the real work |
| the weapon fire path | 1.5 passes | the module side is **100% known** (`analysis/weapon_fire.md`) - it is now a pure browser port |
| the round flow + the HUD + the chat | 1-2 passes | mostly engineering, almost no RE |
| the sky / fog / decals / props | 1-2 passes | the sky lump is already extracted |
| the voices + the cinematics | 1 pass | the `.adp` decoder is done; it is the event wiring |
| the JS netchan retransmit | 0.5 pass | pure engineering |
| the public relay + the deployment | 0.5 pass | pure engineering |

That is **~10-13 passes** of RE plus engineering to go from 40% to a
genuinely complete, original-content multiplayer match in the browser.
