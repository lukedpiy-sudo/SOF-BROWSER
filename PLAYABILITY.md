# Playability scorecard

*Scored against the real goal: **a player joins a SoF server in the browser and
plays a full match** - sees SoF's characters, picks up weapons, shoots, reads
health/ammo, hears the game, and the round ends properly.*

The workstream table in `BROWSER_ROADMAP.md` measures *engineering tasks*.
It is not the same thing as playability, and it was overstating the result.

Updated **2026-11-09**, second revision the same day (the previous revision
was 2026-10-25 and it was already stale: it still listed the client side
prediction and the `.eft` particle system as missing, and both were done on
2026-10-22 / 2026-10-27).

The big change in this revision: **the `.ghb` triangle topology is solved.**
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

## 1. The workstreams (weights sum to 100)

| # | Workstream | weight | % | pts | since 2026-10-25 | still missing |
|---|---|---|---|---|---|---|
| 1 | Wire protocol / session / handshake | 8 | **98** | 7.8 | - | the JS netchan **retransmit window** (the reliable ring is 64 x 24 B at `0x201E75B4`) |
| 2 | World rendering (BSP, textures, lights, lightmap) | 12 | **88** | 10.6 | - | the sky, the fog, the decals, the detail props |
| 3 | Movement, prediction, collision | 8 | **94** | 7.5 | **+6** - client side prediction **and** reconciliation landed (`web/www/sofpredict.js`, 2026-10-27) | the engine side pmove import slot (`DAT_5015cb34`) is still unmapped |
| 4 | Characters: the Ghoul mesh | 20 | **50** | 10.0 | **+15** - the **Elem topology is solved** (strips/fans/tris, validated on 4 models, 0 malformed groups) and the static mesh path (cPos/cNorm/cTex) is byte-verified | the **animated** vertex path, the skinning, the animation blending, and the browser port |
| 5 | Weapons and combat | 14 | **38** | 5.3 | **+3** - the fire path is wired in the browser (mouse0 -> the attack bit) | the end to end **hit** verification (no log after `logs/probe7.log`), the muzzle flash, the impacts, the reload |
| 6 | HUD | 8 | **48** | 3.8 | - | the weapon name, the round timer, the scoreboard |
| 7 | Audio | 8 | **78** | 6.2 | - | positional mixing, the voice lines, the cinematics |
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
| `.adp` / `.dms` / `.ams` / `.os` | **92%** | the formats are done; the level script events are not wired to the voice lines |
| `.eft` effects | **85%** | the format is done; the engine side emitter semantics are not |
| `.ghb` container + the model stream | **97%** | the clips, the events, the bones, the bolts.  Left: the per entity clip/frame selection |
| **`.ghb` mesh (the topology + the static geometry)** | **90%** | **solved**: the Elem encoding, the 10 sections, the shared-array corner resolution.  Left: the per-face material binding |
| **`.ghb` animated vertices + normals** | **82%** | **solved 2026-11-11**: the bit packed position stream (both the absolute and the delta path), the 43 byte record table and the 256 entry normal palette at `0x20404C90`.  The **clip partition** and the **runtime track layout** are now solved too.  Left: the per entity clip/frame selection and the per face material binding |
| **the Ghoul animation state machine** | **60%** | **solved 2026-11-11**: the module split (`gamex86.dll` = `ghoulmod.dll`), the clip object layout, the clip `f32` = a duration in ms, the runtime track at `+0x58`/`+0x68` with the frame at `+0x08`, and the sequence bytecode interpreter at `gamex86.dll 0x5007EC40`.  Left: the full opcode semantics and the blend weights |
| **the Ghoul net protocol (svc 0x1A/0x1B)** | **45%** | the service bytes, the client path (`SoF.exe 0x2008ECD0` -> `gamex86.dll 0x500AE340`), the server path (`SoF.exe 0x2008EAC0`) and the **0x464 byte instance record** are known.  Left: the byte layout inside the payload |
| **the Ghoul side files** (`.gsq`/`.gpm`/`.gbm`) | **70%** | `.gsq` is fully decoded (the lowercased clip names).  `.gpm` is parsed but the exact meaning of each block kind is not settled |
| the weapon fire internals (the module) | **60%** | the table, the delays and the heat model are known |
| the engine side pmove import (`DAT_5015cb34`) | **35%** | the `PM_*` function block is located, the entry is not |
| the player_state gate (`analysis/ps_mask.md`) | **20%** | the writer is found, the gate is not |
| the sky / the decals / the detail props | **55%** | the sky lump is extracted, nothing renders it |
| **overall RE** | **~86%** | up from ~78%: the clip partition, the clip duration, the runtime animation tracks, the sequence state machine and the Ghoul net path closed the last big Ghoul gaps.  The two biggest remaining holes are the **Ghoul payload byte layout** and the **per entity clip/frame selection** |

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
   the reload.  Unlocks "shooting works".
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
| the weapon fire path | 2 passes | the module side is 60% known |
| the round flow + the HUD + the chat | 1-2 passes | mostly engineering, almost no RE |
| the sky / fog / decals / props | 1-2 passes | the sky lump is already extracted |
| the voices + the cinematics | 1 pass | the `.adp` decoder is done; it is the event wiring |
| the JS netchan retransmit | 0.5 pass | pure engineering |
| the public relay + the deployment | 0.5 pass | pure engineering |

That is **~10-13 passes** of RE plus engineering to go from 40% to a
genuinely complete, original-content multiplayer match in the browser.
