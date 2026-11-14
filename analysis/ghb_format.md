# The Ghoul `.ghb` mesh format (decoded)

Reverse engineered with **REA** (Ghidra provider) from `SoF.exe`.  Every claim
below is backed by a function address in `analysis/rea/sof_all/functions/` and
is validated byte-for-byte against real `.ghb` files out of `pak0.pak`.

The decoder is `analysis/ghb/ghbparse.js`:

```
node analysis/ghb/ghbparse.js <file.ghb> [faceGroupIndex]
```

## 0. Provenance

| function | what it is |
|---|---|
| `0x200a18d0` | the `.ghb` loader: reads the container, the model stream, creates the Comp, calls the reader then the builder |
| `0x200ab600` | the Comp **reader**: the field order of the header, the subdata, the blob base |
| `0x200ab850` | the Comp **writer**: the same field order, so the format can be read off it |
| `0x200ab360` | the Comp -> runtime-mesh builder: the 10 section pointers and the 76-byte corner struct |
| `0x200ab2b0` | prints the 10 section names and their sizes |
| `0x200b09e0` | **the Ghoul renderer** - it consumes the Elem stream and proves the topology encoding |
| `0x200b3be0` | the compressor/writer for the blob sections |

## 1. The container

```
file[0x00] u32  magic 0x198237FE
file[0x04] u32  block2Offset   (absolute file offset)
file[0x08] u32  block2Size
file[0x0C]     block 1 = the model stream, [0x0C, block2Offset)
file[block2Offset] block 2 = the trailing blob, block2Size bytes
```

The model stream starts with `u32 0x033FB1A3`, `u32 0x4A` (version),
`u32 0` (thunk), then the authoring path (a u32 length + bytes), the clip
table, the mesh table, the bbox, the object sections and the skeleton.

The **blob descriptor** is the last 16 bytes of the model stream:

```
file[block2Offset-16] u32  blobSize
file[block2Offset-12] u32  blobOffset   (relative to block2Offset)
file[block2Offset-08] u32  0x05DC159F
file[block2Offset-04] u32  0
```

with the invariant `blobOffset + blobSize == block2Size`, and
`blobBase = block2Offset + blobOffset`.

## 2. The Comp header

The Comp header lives **inside the model stream** and is **not 4-byte
aligned** (it is at `0x429` in `ACC_BOX_HIP.ghb` and `0x2170` in
`FEM_ARM.ghb`), so it must be found by scanning for the `0xFFFFFFFF` marker.

The header is the Comp struct's fields serialised flat (`0x200ab850`):

| file offset | value |
|---|---|
| `H+0x00` | `0xFFFFFFFF` marker |
| `H+0x04` | `Comp+0x110` (version) |
| `H+0x08` | `Comp+0x04` |
| `H+0x0C` | `Comp+0x08` = **numMatBlocks** |
| `H+0x10` | `Comp+0x0C` = num shared positions |
| `H+0x14` | `Comp+0x10` = num shared texcoords |
| `H+0x18` | `Comp+0x14` = num shared normals |
| `H+0x1C` | `Comp+0x18` = **numFaceGroups** |
| `H+0x20` | `Comp+0x1C` = **numElements** |
| `H+0x24` | `Comp+0x20` = **numCorners** |
| `H+0x28` | `Comp+0x24` = aPos stride |
| `H+0x2C` | `Comp+0x28` |
| `H+0x30` | `Comp+0x2C` = aNorm stride |
| `H+0x34 .. H+0x5C` | `Comp+0x30 .. Comp+0x54` = the **10 blob cursors** |
| `H+0x5C`, `H+0x5D` | `Comp+0x70`, `Comp+0x71` |
| `H+0x5E` | vec3 bboxMin |
| `H+0x6A` | vec3 bboxMax |
| `H+0x76` | vec3 scale (100.8) |
| `H+0x82` | vec3 inverse scale |
| `H+0x8E` | vec3 centre |
| `H+0x9A` | vec3 (0.375) |
| `H+0xA6` | u8, the subdata-present flag |
| `H+0xA7` | the subdata blob |

## 3. The blob sections

The 10 cursors delimit the sections; the last section ends at `blobSize`.
`Comp+0xAC` is the blob base, and `FUN_200ab360` computes the 10 runtime
pointers at `Comp+0xB0 .. Comp+0xD4`.

| # | section | bytes | content |
|---|---|---|---|
| 0 | MatBlocks | `12 * N` | `u32 matIndex, u32 faceGroupStart, u32 faceGroupCount` |
| 1 | cPos | `12 * N` | `vec3 float` - shared/static positions |
| 2 | cTex | `8 * N` | `vec2 float` - shared texture coordinates |
| 3 | cNorm | `12 * N` | `vec3 float` - shared normals |
| 4 | Mesh | `6 * N` | `u16 A, u16 elemStart, u16 elemCount` - one per face group |
| 5 | Elem | `2 * N` | the topology primitive stream (below) |
| 6 | Corn | `6 * N` | `i16 posIndex, i16 normIndex, i16 texIndex` |
| 7 | aPos | | the animated positions |
| 8 | aTex | | the animated texture coordinates |
| 9 | aNorm | | the animated normals |

## 4. The topology (SOLVED)

`FUN_200b09e0` (the renderer) reads the Elem section as a sequence of
primitives.  Each primitive starts with a u16 header:

| header | primitive | count |
|---|---|---|
| `> 0` | `GL_TRIANGLE_STRIP` | `n = header` vertex indices follow |
| `== 0` | `GL_TRIANGLES` | the next u16 is `n`; `n/3` triangles |
| `< 0` | `GL_TRIANGLE_FAN` | `n = -header` vertex indices follow |

The renderer then indexes the runtime corner array with
`corner = *(int *)(comp+0x10c) + (short)index * 0x4c`, so the indices are
**signed**.

### Validation

| model | face groups | triangles | malformed groups | corner index range |
|---|---|---|---|---|
| `FEM_ARM.ghb` | 27 | 719 | **0** | 0..554 (numCorners 555) |
| `FEMALE.ghb` | 80 | 1132 | **0** | 0..988 (989) |
| `ACC_BOX_HIP.ghb` | 1 | 20 | **0** | 0..31 (32) |
| `EXPLODE20.ghb` | 1 | 20 | **0** | 0..21 (22) |

Every triangle index is in range and every face group consumes exactly its
declared element count.

## 5. The corners

`FUN_200ab360` allocates `numCorners * 0x4C` bytes and fills a 76-byte
struct per corner:

| offset | field |
|---|---|
| `+0x00` | u32 flags |
| `+0x04` | i32 position index |
| `+0x08` | vec3 position |
| `+0x14` | i32 normal index |
| `+0x18` | vec3 normal |
| `+0x24` | i32 texcoord index |
| `+0x28` | vec2 uv |

A **negative** index selects the shared array: `shared[-v - 1]`.  A
**positive** index selects the animated array.  The shared values are copied
into the struct; the animated ones are filled in later by the skinning code.

The static path is verified end to end on `ACC_BOX_HIP.ghb` (12 shared
positions, 19 shared UVs, 12 shared normals, 32 corners, 20 triangles - a
2 x 3.5 x 4.3 box whose winding matches the bbox).

## 6. Still open

* The **bone weights** and the **clip blending**.
* The **per-face material binding** (`A` in the Mesh record, the MatBlocks
  map and the textures).
* The **runtime unit** of the clip `f32` (see 8.3).

## 8. The animation side (SOLVED 2026-11-11)

### 8.1 Where the code lives

The Ghoul is split over **two binaries**:

| piece | binary | what |
|---|---|---|
| the renderer, the model loader, the geometry/animation decoders | `SoF.exe` | `0x2009xxxx`-`0x200bxxxx` |
| the game logic: the sequences, the AI, the netcode | **`gamex86.dll`** (= `ghoulmod.dll`, byte identical) | `0x5009xxxx`-`0x500bxxxx` |

`gamex86.dll` exports exactly **one** symbol, `GetGameAPI` (RVA
`0xad9b0`).  It returns a 0x120-byte export struct at `0x5015C8D0`:

```
+0x00  i32   3                the API version
+0x04  ..    24 function pointers
+0x64  i32   0x464            the size of one Ghoul instance record
```

and it copies the 0x63-dword **engine import table** it is handed into
`0x5015C9F0`.

### 8.2 The model stream loader (`SoF.exe 0x200A18D0`)

The model object (the thing `0x200A18D0` fills) is:

| offset | contents |
|---|---|
| `+0x24` | the Comp (the geometry) |
| `+0x110` | `int[]` - one pointer per **clip** |
| `+0x120` | `int[]` - the clip **first frame** |
| `+0x130` | `int[]` - the clip **frame count** |
| `+0x13c` | `i32` - the total frame count |

Each clip object is `0x30` bytes and is read in this order:

```
vec3  pos            clip+0x10   (FUN_20068f80, three f32)
f32   duration       clip+0x1c   (FUN_20068e30, one f32)
str   name           clip+0x00   (FUN_20068ff0 + std::string assign)
i32   eventCount
event[eventCount]    clip+0x24   (a vector of 0x28-byte event records)
i32   firstFrame     -> pushed into the +0x120 array
i32   frameCount     -> pushed into the +0x130 array
```

So the clip's two trailing ints are **not** stored inside the clip object -
they live in two parallel arrays.

**Proved:** the clips **partition the whole frame space** exactly and every
clip starts on an animation-record boundary.  `FEM_ARM`: 23 clips, 49
records, 317 frames; clip 0 `CCH_XCROUCH_UP_MRS_2` = `[0,8)` = record 0;
clip 4 `STD_ISHIFT_N_A_N` = `[38,44)` spans records 6-11.

### 8.3 The clip `f32` — SOLVED 2026-11-13: it is the FRAME PERIOD in ms

The `.ghb` value is 50, 66.6667, 100 or 200.  **It is the time of ONE
animation frame, in milliseconds** - the clip plays at `1000 / f32` frames a
second (50 → 20 fps, 66.67 → 15 fps, 100 → 10 fps, 200 → 5 fps) and the
whole clip lasts `f32 * frameCount` milliseconds.

The proof is the engine's own duration computation, in the Ghoul **entity
vtable slot `+0x6C`** (`SoF.exe 0x2007D200`, a Ghidra gap, so read from
`analysis/rea/sof_disasm.txt`; REA's `inspect-native-instruction` shows its
only incoming reference is the DATA ref from `0x20112264` = the vtable base
`0x201121F8` + `0x6C`):

```c
/* 0x2007D200:  float vtbl_6C(u16 stateCode, int mode, float *out) */
model  = ent + 0x1C4;                       /* the Ghoul model object   */
clip  = model->clips[model->seq[stateCode].clipIndex];
ent->frameCount = model->frameCounts[model->seq[stateCode].clipIndex];  /* +0x134 */

duration = clip->f32            /* 0x1C  the FRAME PERIOD in ms */
          * 0.001f              /* 0x20111B00 */
          * speedTable[ent->speedIndex]   /* 0x20156FCC, ent + 0x98 */
          * 1.0f                /* 0x20157000, the global speed   */
          * span;               /* mode 0: frameCount
                                   mode 1: frameCount - 1
                                   mode 2: 2*frameCount - 1       */
```

So `ent + 0x12C` is the clip duration **in seconds**, and it is the *frame
period* that is stored in the `.ghb`, multiplied by the frame count to get
the whole clip.

**The clip events** carry an **absolute time in milliseconds** inside the
clip.  The event record is `0x28` bytes (`FUN_200A1890`):

```
+0x00  f32   the time in ms
+0x04  f32   a second float (0xffffffff = NaN in every shipped model)
+0x08  str   the event name  ("jump", "inair", "thud", "fire", "sound", ...)
+0x18  str   the event parameter (a sound path, ...)
```

**Verified against the ground truth**: of the 327 events in the 292 clips of
the 16 sampled models, **325 (99.4 %) land exactly on a frame boundary**
(`time / f32` is an integer) and 325 are inside the clip.  The only two
exceptions are the same authoring quirk in two models
(`STD_JSTRAITUP_LAND_A_A`, a "thud" at `-766.67 ms`, i.e. a negative time).
`analysis/ghb_clip_timing.py` runs the check.

The clip playback follows from this:

* the normalised clip time is `(now - ent->start) / ent->duration`
  (`FUN_2007D090`, `ent + 0x12C` is the divisor, `ent + 0x9C` the start);
* the frame inside the clip is `(int)(frameCount * normalisedTime)`
  (`FUN_2007CFA0`), the global frame is `clip.firstFrame + that`;
* the loop restart test is `ent->duration <= now - ent->clipStart`
  (`SoF.exe 0x2007F3B0`, `+0x130` and `+0x190`).

The internal animation clock is quantised to **1/120 s** (`FUN_200786B0`:
`ent->time = base + ticks * 0.008333334f`), and every frame period in the
shipped models is an exact multiple of 1/120 s (50 ms = 6 ticks, 66.67 ms =
8, 100 ms = 12, 200 ms = 24).

A **`.ghl`** side file (`ghoul/<dir>/<name>.ghl`) overrides the field - the
`.ghl` parser (`SoF.exe 0x200A2DF0`) reads two times and does

```c
*(float *)(clip + 0x1c) = (float)((endTime - startTime) * 1000.0);
```

with a default of `100.0f` when only one time is present, and then
normalises every event time by `1 / duration`.  (No `.ghl` ships with SoF,
so the `.ghb` value is what the game actually uses.)

### 8.3.1 The Ghoul entity layout (the animated object)

The entity's vtable is at **`0x201121F8`** (`SoF.exe`, the constructor
`FUN_20079100` does `*in_ECX = &PTR_LAB_201121f8`).

| offset | contents |
|---|---|
| `+0x00` | the vtable pointer |
| `+0x4C` | the clip pointer array (the model fills it) |
| `+0x8C` | an int scale |
| `+0x90` | a float scale |
| `+0x94` | a u16 (the "sub state") |
| `+0x96` | a byte (the entity is animated) |
| `+0x98` | an int: the index into the **playback speed table** `0x20156FCC` (0.5, 0.625, 0.75, ... 2.0 in steps of 0.125 - 13 entries) |
| `+0x9C` | a float: the animation start time (seconds) |
| `+0xA0` | a float: a fixed animation time |
| `+0xA8` | a byte: use the fixed time |
| `+0xA9` | a byte: the play direction (1 = backwards) |
| `+0xAE` | a u16: the **animation state code** (the index into the model's sequence table) |
| `+0xB0` | an int: the playback mode (0 = loop, 1 = once, 2 = ping-pong) |
| `+0x120` | a float: the current time |
| `+0x12C` | a float: the **clip duration in seconds** |
| `+0x134` | an int: the **frame count of the current clip** |
| `+0x190` | a float: the clip start time |
| `+0x1C4` | the Ghoul **model** object (the one with the clip arrays) |

The vtable slots that matter:

| slot | function | what |
|---|---|---|
| `+0x18` | `0x20080BD0` | set the playback speed index (`ent+0x98`) |
| `+0x1C` | `0x20080BE0` | get the playback speed index |
| `+0x44` | `0x2007B430` | set the animation state (the state code, the mode, the blend) |
| `+0x6C` | `0x2007D200` | resolve the clip: returns the **duration in seconds** and fills `ent+0x130` |

### 8.4 The runtime animation state

The Ghoul object drawn by `SoF.exe 0x200A7090` carries the Comp at `+0xE0`
and the **animation state at `+0x58`**:

```
+0x58  track A:  +0x00 clip index, +0x04 ?, +0x08 THE FRAME, +0x0c ?
+0x68  track B:  the same
```

`FUN_200B8210` (the decoder) reads the frame from **byte offset +8** of the
track:

```c
piVar1 = in_ECX[9] + in_ECX[5][ *(int *)(param_1 + 8) ] * 0x38;  /* the record */
*param_2 = pfVar17 + (frame - record.first) * 3;                  /* the slot  */
```

(`param_1` is declared `int` in Ghidra, so `param_1 + 8` is **+8 bytes**.)

### 8.5 The sequence side-files

Four plain-text side files live next to the models (all CRLF):

| extension | count in the paks | what |
|---|---|---|
| `.gsq` | 308 | the **sequence list**: the animation names a model supports |
| `.gpm` | 50 | the **player model script** (`ghoul/pmodels/*.gpm`) |
| `.gbm` | 33 | a **bolt-on model** (`ghoul/pmodels/boltons/*.gbm`) |
| `.ghl` | 0 | the event/duration side file - **not shipped** |

#### 8.5.1 The `.gsq` — SOLVED 2026-11-14

The loader is `SoF.exe 0x20049190` (the engine's import slot 65).  The path
is built as

```
"ghoul/<dir>/<name>.gsq"        and, if that does not exist,
"ghoul/comskin/<name>.gsq"
```

The file is read **line by line** (split on `\n`, the `\r` is dropped):

* a line that starts with `#` is an **INCLUDE** — the rest of the line is
  the name of another `.gsq` in the same directory, and it is read
  recursively;
* any other non-empty line is a **clip name**.

For every name the engine hands the path `ghoul/<dir>/<name>.ghl` to a
callback (or `ghoul/<name>.ghl` when the directory is empty).  No `.ghl`
ships with SoF, so the `.ghb`'s own clip data is what is actually used —
the `.gsq` is the list of the clips a model implements.

The names are **lower case** in the `.gsq` and **upper case** in the
`.ghb` (`std_i_n_a_a` vs `STD_I_N_A_A`), so the lookup is
case-insensitive.

`ghoul/comskin/commoves.gsq` is the 219 moves every character shares;
`playmoves.gsq`, `npcmoves.gsq`, `riflemoves.gsq`, ... are the rest.  A
model only implements the moves it needs: of `FEM_ARM`'s 23 clips, 9 are
in `commoves.gsq`; of `FEMALE`'s 153 clips, 58 are.

#### 8.5.2 The `.gpm` and the `.gbm` — SOLVED 2026-11-13

The `.gpm` player-model script and the `.gbm` bolt-on model are **the same
format**, read by the same engine tokenizer (the vtable at
`SoF.exe 0x20111D88`, the factory `0x200494C0` = the engine's import slot
61).  The full write-up is in **`analysis/gpm_format.md`**; in short:

* a header of **seven** tokens (the model path, the menu model, the player
  model, the boss model, the team, the rag-doll path, the file prefix);
  the second token is joined into the side-file override
  `ghoul/<path>/<name>.ghl`;
* **block 1**: three tokens a time, the animation state bindings, where a
  third field of `0` means the field is empty;
* **block 2**: four tokens a time, the bolt-ons, with a float scale;
* **block 3**: two tokens a time, the extra meshes, with an `(atoi != 0)`
  flag;
* one trailing token.

The blocks are **positional** — the kind of a block is decided by where it
appears, not by what is in it.

The `.gbm` files are tiny (90-120 bytes) and are **not** models: they are
the same text format, with one animation binding each:

```
enemy/bolt
acc_brian_beret
acc_brian_beret
acc_brian_beret
""
""
""
<blank>
acc_brian_beret acc_brian_beret 0
```

### 8.6 The animation state machine (game module) — SOLVED 2026-11-14

`gamex86.dll 0x5007EC40` is a **bytecode interpreter** over the Ghoul
script (the cursor is at `+0x114`, the code at `+0x104`).  Its opcodes
select the sequence: the module holds the sequence names as lowercased
strings, e.g. `s_std_jupto_n_a_a_50135e58` = `"std_jupto_n_a_a"`, and a
giant switch maps a state code to a sequence name plus a blend time and a
duration.

**The instruction is four bytes:**

| byte | meaning |
|---|---|
| 0 | the **flags** (all eight bits are used) |
| 1 | the flags, bit 1 |
| 2, 3 | the operands |

The flags of byte 0 pop values off the interpreter's stack:

| flag | what it pops |
|---|---|
| `0x01` | the repeat count (the instruction is executed that many times) |
| `0x02` | a value into the "origin" block |
| `0x04` | a value into the "look" block |
| `0x08` | an object |
| `0x10` | an object |
| `0x20` | the "has value" flag |
| `0x40` | a **float** (the blend time) |
| `0x80` | a value |

The **opcode** itself is not in the instruction: the interpreter pops a
*state object* off the stack and asks it for its state code
(`vtable+0x04`), and that code is the value of the switch.

**The switch is the animation state table** — 341 cases, each giving the
triple

```
(the state code, the blend float, the clip name)
```

which is handed to `FUN_50080D30` (the "play this animation state" call).
The state codes are 0, 1, 2, 3, 4, 5, 6 and 8; the blend floats are 5, 10,
50, 100 and 150 ms; 336 of the 341 cases name a clip.  The table is
extracted by **`analysis/ghoul_vm_opcodes.py`** into
`analysis/ghoul_states.json`.

**Validated against the ground truth:**

| set | the clips | in the module's table |
|---|---|---|
| `FEMALE.ghb` | 153 | 71 |
| `FEM_ARM.ghb` | 23 | 17 |
| `commoves.gsq` | 219 | 171 |
| `npcmoves.gsq` | 21 | 18 |
| `playmoves.gsq` | 195 | 61 |

(The inview weapons and the bolt-ons have no character clips, and the
player-only moves are not in the shared table, so they do not match.)

So the animation is **scripted server side**, not derived from the entity
state - which is why the entity state only carries the Ghoul *model* index
(`+0x28`, an index into the Ghoul string table).

### 8.7 The mission script format (`.os`) — SOLVED 2026-11-14

The Ghoul characters are driven by **compiled mission scripts** that ship
in the paks as `ds/<level>/<name>.os`:

| pak | the `.os` files |
|---|---|
| `pak0` | **727** |
| `pak1`, `basicpack2015v2` | 0 |
| `pak2` | **3** — `ds/kos3/jhendh.os`, `ds/kos3/midgame.os`, `ds/nyc3/standoff.os`, each an **updated** copy that supersedes the `pak0` one |

So there are **730 distinct scripts** (727 + the 3 `pak2` revisions).

**The loader chain** (all in `gamex86.dll`):

| what | where |
|---|---|
| the script owner | `FUN_50076600` — builds the path `"ds/%s.os"` (the format string at `0x501455a8`) |
| the compiler object | `FUN_50079D60` — 0x4B4 bytes: the name at `+0x00` (0x104 bytes), the **file data pointer at `+0x104`**, the loaded flag at `+0x108`, the **length at `+0x110`**, the **cursor at `+0x114`**, two strings at `+0x11C`/`+0x120`, the flags at `+0x124`, the symbol table `+0x188[100]` and the field table `+0x318[100]` |
| the file load | `FUN_5007ADC0` — calls the engine's `FS_LoadFile` (import slot 93, `SoF.exe 0x20025370`), stores the data at `+0x104`, the length at `+0x110`, and **checks that the first u32 is 3** — the format version |
| the compiler | `FUN_500818D0` — walks the byte stream from `+0x104 + +0x114` and dispatches on one opcode byte at a time (the jump table at `gamex86.dll 0x50081F74`, 0x36 entries, `cmp $0x35`) |

#### The file

```
u32   version (3)
...   the definitions, then the body
```

The **definitions** are records, each

```
u8    the tag
char  the name, NUL terminated
u8    the kind (the value type)
u32   the code (the index for a symbol, the bytecode offset for a function)
```

| tag | what | the handler |
|---|---|---|
| `0x00` | a **symbol**, interned into the name table at `+0x188` | `FUN_500818D0` case 0 |
| `0x01` | the same, but the kind's operand is read first | case 1 |
| `0x02` | a **script function** | `FUN_50082050` (case 2) |
| `0x03` | the same, with the operand read first | case 3 |
| `0x04` | a **statement** | `FUN_50082120` (case 4) |
| `0x05` | the same, with the operand read first | case 5 |
| `0x06` | an **entity FIELD** — the u32 is the field's index (0..99), stored at `+0x318 + index*4` | `FUN_5007B5F0` (case 6) |

The record reader is `FUN_5007B2E0`: it reads the name, then **5 bytes** —
the kind byte and the u32 — and hands the u32 back to the caller
(`*param_1`).  The field reader `FUN_5007B5F0` has the same shape.

**The kinds** (the operand format — the record vtable's `+0x18` slot does
the reading; the kind byte is already in the record, so for the tags
`0x01`/`0x03`/`0x05` the operand follows the record directly):

| kind | the operand | the reader |
|---|---|---|
| 0 | a u32 (an integer) | `FUN_50076D50` |
| 1 | a u32 (a **float**) | `FUN_50076D50` |
| 2 | three u32s (a **vector**) | `FUN_50077530` → `+0x4C`/`+0x50`/`+0x54` |
| 3 | a u32 (an **entity index**, −1 = none) | `FUN_50077E30` |
| 4 | a NUL terminated **string** | `FUN_500780D0` |
| 5 | a u32 (a symbol index) | `FUN_500781F0` |
| 6 | two u32s (two symbol indices) | `FUN_500783A0` |
| 7 | a sub opcode byte (0..9) — the "computed" values; sub 5 reads one more byte | `FUN_5007B9A0` / `FUN_5007B750` |

The shipped scripts use the kinds **0, 1, 2 and 3** only (7 256 / 7 322 /
5 879 / 5 927 times); the string kind (4) appears in the *pushes*.

#### The body — a stack machine

| opcode | what | the bytes it consumes |
|---|---|---|
| `0x07` | the stack "call" | 0 |
| `0x08`–`0x0F` | the arithmetic (+ − × ÷ and the assigning forms) | 0 |
| `0x10` | a **jump** — a u32 target | 4 |
| `0x11` | a **push** — the kind byte and the operand | variable |
| `0x12` | a pop | 0 |
| `0x13` | an **if** — a byte and a u32 target | 5 |
| `0x14` | the **end of the script** (`movl $0x1,0x108(%esi)`) | 0 |
| `0x15` | stop (the same exit, without the flag) | 0 |
| `0x16` | `FUN_5007C4A0` | 0 |
| `0x17` / `0x18` | `FUN_5007C350(this,1/0)` | 1 |
| `0x19` | `FUN_5007D430` | 1 |
| `0x1A` | `FUN_5007C210` | 1 |
| `0x1B` | `FUN_5007E1F0` | 0 |
| `0x1C` | `FUN_5007D860` | 1 |
| `0x1D` | `FUN_5007CA10` | 1 |
| `0x1E` | `FUN_5007CCB0` | 1 |
| `0x1F` / `0x20` | `FUN_5007D1A0(this,1/0)` | 1 |
| `0x21` | the **Ghoul VM** — a four byte inner instruction, read from the same stream by `FUN_5007EC40` | 4 |
| `0x22` | `FUN_5007B2B0` (a debug print) | 0 |
| `0x23` | `FUN_5007D290` | 0 |
| `0x24`–`0x26` | `FUN_50080E20` / `FUN_50080F10` / `FUN_50081060` | 0 |
| `0x27` | `FUN_5007E290` | 0 |
| `0x28` | `FUN_5007E300` | 1 |
| `0x29` | `FUN_5007DC90` | 1 |
| `0x2A` | `FUN_50080B00` | 0 |
| `0x2B` | `FUN_50080B90` | 0 |
| `0x2C` | `FUN_5007D0A0` | 0 |
| `0x2D` | `FUN_5007E870` | 1 |
| `0x2E` | stop | 0 |
| `0x2F` | `FUN_5007D3B0` | 0 |
| `0x30` | `FUN_5007D330` | 0 |
| `0x31` | `FUN_50080CA0` | 0 |
| `0x32` | `FUN_5007D120` | 0 |
| `0x33` | the **ON statement** (`FUN_5007C780`): two pushes, each preceded by the `0x11` opcode byte, then 5 raw bytes | variable |
| `0x34` | `FUN_5007C9D0` | 0 |
| `0x35` | `FUN_50080A50` | 0 |

The compiler's loop is at `0x50081E2E`: it compares the cursor with the
length, and the flag at `0x34(%esp)` stops it.

#### The 30 entity fields

in the index order: `x`, `y`, `z`, `origin`, `origin_x`, `origin_y`,
`origin_z`, `movetype`, `start_origin`, `start_angles`, `state`,
`distance`, `owner`, `wait`, `velocity`, `angle_velocity`, `team_chain`,
`yaw_speed`, `modelindex`, `count`, `solid`, `angles`, `delta_angles`,
`skinnum`, `c_mode`, `ideal_yaw`, `p_origin`, `takedamage`, `health`.

Every script declares all 30 (the field table at `+0x318` is filled by
the tag `0x06` records).

#### The parser

**`analysis/ghoul_os.py`** — it parses **730 of 730** scripts, each
**exactly** (every byte consumed, not one left over).

```
python3 analysis/ghoul_os.py samples/os/ds_arm_bleep.os
python3 analysis/ghoul_os.py --all samples/os/*
```

The corpus is extracted from the paks with

```bash
python3 tools/list_pak.py "Soldier of Fortune/Base/pak0.pak" | grep '\.os '
node web/pakget.js "Soldier of Fortune/Base/pak0.pak" ds/arm/bleep.os samples/os/ds_arm_bleep.os
```

(the `samples/` tree is git-ignored — it is the extracted payload, not
source).

## 9. The Ghoul network protocol

`SoF.exe` has two service bytes for the Ghoul:

| byte | name | what |
|---|---|---|
| `0x1A` | `svc_ghoulreliable` | the Ghoul instance state, reliably |
| `0x1B` | `svc_ghoulunreliable` | the same, unreliably |

### 9.1 The wire framing (SOLVED 2026-11-12)

The service byte is followed by a **little endian `u16` length** and then the
payload:

```
[svc 0x1A][u16 LE length][payload]
```

* the server writes the length with `MSG_WriteShort` (`SoF.exe 0x2001E740`),
* the client reads it with `MSG_ReadShort` (`SoF.exe 0x2001E290`, which
  computes `(ushort)b[1] * 0x100 + b[0]`, i.e. little endian).

The client dispatch is at `SoF.exe 0x2000F3A0` (reliable -> `FUN_2008ECD0`)
and `0x2000F42F` (unreliable); the error strings are `"Bad Ghoul reliable
packet"` (`0x2011F05C`, xref `0x2000F3C0`) and `"Bad Ghoul unreliable
packet"` (`0x2011F040`, xref `0x2000F44F`).

The service byte names live in the table at `0x2011E7D0` (descending order):
`svc_ghoulreliable` at `0x2011E808`, `svc_ghoulunreliable` at `0x2011E80C`.

### 9.2 The engine's Ghoul API vtable

The engine owns the Ghoul serialiser.  The API object is selected by
`FUN_20069630(isClient, isShared)`:

| call | the object |
|---|---|
| `FUN_20069630(0,0)` (server) | `0x204036A0` |
| `FUN_20069630(1,0)` (client) | `0x20403A48` |
| `FUN_20069630(0,1)` (shared) | `0x20403878` |

`*(the object)` is the vtable pointer.  The **real** vtable is at
**`0x20112048`** (49 engine functions, slots `+0x00`..`+0xC3`, a NULL at
`+0xC4` and then the stubs `0x200FC6EA`).  `0x20112110` is only a *stub*
table, written during construction by `FUN_2006FD90`, which installs the real
one at the end with `*in_ECX = &PTR_FUN_20112048`.

The slots that matter for the Ghoul:

| slot | function | what |
|---|---|---|
| `+0x00` | `0x2006AF10` | |
| `+0x08` | `0x2006CD10` | |
| `+0x10` / `+0x14` | `0x2008A990` | |
| `+0x18` | `0x2006CCB0` | |
| `+0x1C` | `0x2006D120` | |
| `+0x40` | `0x2006BD80` | **write** the Ghoul state of an entity |
| `+0x54` | `0x2006BC30` | |
| `+0x5C` | `0x2006BEB0` | **drain** the pending Ghoul queue |
| `+0x60` | `0x2006BF70` | **queue** / **decode** one Ghoul record |
| `+0x88` | `0x2006CEF0` | |
| `+0x98` | `0x20070D40` | the detail level (called by `GetGameAPI`) |

The engine -> module import table (99 dwords) is in
`analysis/rea/sof_import_table.txt`; it is built on the stack by
`SoF.exe 0x2005CDD1`..`0x2005D1AB` and copied into the module's
`0x5015C9F0` by `GetGameAPI` (`gamex86.dll 0x500AD9B0`).

### 9.3 The two handlers

**The server** (`SoF.exe 0x2008EAC0`): it calls the server API's slot `+0x40`
(`0x2006BD80`), which returns the payload in a heap block, and then copies it
into the caller's buffer.  The byte count is returned in `*param_2`; if the
payload does not fit, `Sys_Error("Ghoul ...", "Ghoul reliable overflow")`.

**The client** (`SoF.exe 0x2008ECD0`): it builds a reader over the payload
(`FUN_200BE300`) and calls the client API's slot `+0x60` (`0x2006BF70`).

`0x2006BF70` has two faces, selected by the flag at `this+0x38`:

* `+0x38 == 0` - **append** the payload to the pending queue.  The queue
  lives in the manager object: the vector header at `this+0x138` (begin at
  `+0x13C`, end at `+0x140`) and the storage at `this+0x13C`.  A record is
  stored as **`[u32 length][payload]`**.
* `+0x38 != 0` - the **decode** path (the drain is running).  It resets the
  state object at `this+0x88` (`FUN_2006A560`) and then reads the record.

The drain (`0x2006BEB0`, slot `+0x5C`) sets `this+0x37` and `this+0x38` to
1, walks the queue as a stream of `[u32 length][payload]` records and calls
slot `+0x60` once per record.

### 9.4 The payload is a BIT stream (SOLVED 2026-11-13)

The earlier "tag / count / block" reading was wrong: the payload is not a
byte/word stream at all, it is a **bit stream**.

* the writer is `FUN_200BDCA0(writer, src, nbits)` — it appends the low
  `nbits` bits of `src`, **LSB first**, to the writer's byte buffer
  (`writer+0x0C` = the buffer, `writer+0x18` = the bit position);
* the reader is `FUN_200BE390(reader, dst, nbits)` — the mirror image
  (`reader+0x04` = the buffer, `reader+0x10` = the bit position,
  `reader+0x14` = the overrun flag).

Every 16-bit quantity in the payload is written with one primitive, the
**encoded-u16**:

```
[1 bit  : non-zero flag]              0 => the value is 0, nothing else follows
[2 bits : class c]                    c = 0..3
[4*(c+1) bits : the value]            the low (c+1) nibbles, LSB first
```

`c` is the smallest class that fits the value (`c=0` → 4 bits, `c=1` → 8,
`c=2` → 12, `c=3` → 16), so a value of 0 costs **1 bit**, 15 costs 5 bits,
16 costs 8, 255 costs 10, 4095 costs 14 and 65535 costs 19.

* writer: `FUN_200BDCA0(&flag,1)`, `FUN_200BDCA0(&class,2)`,
  `FUN_200BDCA0(&value,4+class*4)`;
* reader: `FUN_200BE390(&flag,1)`, `FUN_200BE390(&class,2)`,
  `FUN_200BE390(&value,4+class*4)` — the helper `FUN_2008E450(dst)` does the
  whole thing in one call.

**The "index 0 ends the section" mystery is solved**: the section terminator
is simply an encoded-u16 whose value is 0 (a single 0 bit).  The client
negates every index it reads before using it as a BST key, so the index is
stored on the wire as `-index`.

### 9.5 The payload's sections (SOLVED 2026-11-13)

The body of a svc `0x1A` payload is:

```
string table        read by FUN_2006A560 (SoF.exe 0x2006C0FB)
section 1           the entity states   (0x2006C10A)
section 2           the spawn/create list (0x2006C1AB)
section 3           the extra list       (0x2006C22F)
```

**the string table** — a run of `[encoded-u16 index][encoded-u16 global
index]` pairs, terminated by an index of 0 (the error `"StringTable
underflowed"`, `0x20156CB8`).  The strings are at most 250 bytes (`"Huge
Ghoul String"`, `0x2015805E`).  The writer is `FUN_2006A370`; the reader is
`FUN_2006A560`, and the table is an array of `char*` at `table+0x14` with
its end at `table+0x18`.  `FUN_2006A240(table, index)` is the lookup.

**the payload never carries raw strings.**  The second `encoded-u16` of each
pair is an index into a **global string table** baked into `SoF.exe`:

```
count   u32    at 0x2013ADF0    (3713 in the shipped SoF.exe)
table   char*[] at 0x2013ADF8
```

`FUN_200BDE30` (the writer) binary-searches that table, appends the string
if it is not there and writes the index with the encoded-u16 primitive;
`FUN_200BE060` (the reader) looks the index up and copies the bytes out.
The static table holds the 1730 `GHOUL/.../*.GHL` bolt-on paths, the 1979
plain names (the bolt-on model names, `ABOLT_HEAD`, ...) and the animation
event names in upper case (`FIRE` 478, `INAIR` 2934, `JUMP` 2943, `SOUND`
3204, `THUD` 3242).  The `.ghb` model paths are **not** in it - the server
appends them at runtime when it loads a model, so their indices depend on
the load order.

`analysis/ghb_global_strings.py` dumps the table to
`web/www/ghoulstrings.json` (the browser loads it with
`sofmodel.loadGhoulStrings()`).

**section 1** (the entity states) —

```
repeat:
    v = encoded-u16
    if v == 0: break                     ; the terminator
    index = -v
    node = lookup(BST at manager+0x3C, index)
    if node != sentinel(manager+0x40):
        obj = FUN_2006AF30(manager, index)
        FUN_2008B4D0(obj, reader)         ; apply the record
    else:
        vtable[0x6C](node->0x10)          ; create the object
```

**section 2** — the same shape, but it only calls `vtable[0x6C]` on the
objects it finds (the BST at `manager+0x3C`).

**section 3** — the same shape, but against the BST at `manager+0x124`, and
it calls `vtable[0xD4]`.

### 9.6 The per-entity record (SOLVED 2026-11-13)

The client applier is `FUN_2008B4D0(obj, reader)` and the server writer is
`FUN_2008ACC0(writer)`.  They are the same group structure; the record is a
run of groups, each group being

```
[encoded-u16 count]
[count × encoded-u16 delta]
```

The list values are **delta encoded**: `v_i = raw_i - (raw_{i-1} + 1)`, so the
absolute values are strictly increasing with a gap of at least 1.  The
absolute value is an index into the global string table.

| group | client (reader) | server (writer) |
|---|---|---|
| 1 | the count sizes the `u16` vector at `obj+0x1C` **and** the 8-byte vector at `obj+0x58`; the elements are resolved to strings and handed to `FUN_20087FE0` (which appends to the `u16` vector, bumps `obj+0x0C` and appends an `{index, id}` pair to the 8-byte vector) | the count at `obj+0x0C`, the elements from the `u16*` at `obj+0x1C` |
| 2 | the count sizes the `0x18`-byte vector at `obj+0x7C`; the elements go to `FUN_20088F10` | the count at `obj+0x0E`, the elements from the `0x18`-byte records at `obj+0x80` (the `u16` at the head of each record) |
| 3 | the count is stored back at `obj+0x10`; the elements are resolved to strings and passed to `vtable[0x2C]` | the count at `obj+0x10`, the elements from the `u16*` at `obj+0xE0` |
| 4 | the count sizes the `0x14`-byte vector at `obj+0xA0`; the elements go to `FUN_200897F0` | the count at `obj+0x12`, the elements from the `0x14`-byte records at `obj+0xA0` |
| 5 | a count plus a per-element `{1-bit optional flag, optional encoded-u16, encoded-u16 delta}` → `FUN_20089D90` | the count at `obj+0x14`, the elements from the linked list at `obj+0xC0` |

The record ends by allocating a `0xE8`-byte object into `obj+0x130`
(`FUN_20077040(obj+0x0E)`), then `FUN_200786B0`, then `vtable[0x08]`.

**The leading field — SOLVED 2026-11-14.**  It is the **entity index**,
nothing else.  The client's section-1 loop reads it at `SoF.exe
0x2006C10A`:

```
1 bit    "the value is present"
2 bits   n
(n+1)*4  the value, LSB first      <- n+1 NIBBLES
```

which is exactly the **encoded-u16** primitive of §9.4, so a value of 0
costs 1 bit and 65535 costs 19.  The index is **negated** on the wire and
the zero terminates the section.  The earlier reading of it as "the cursor
into the global string table" was a misattribution: the string-table
writer `FUN_2006A370` keeps its own payload-local counter in a local
variable, not in `obj+0x04`.

#### 9.6.1 The Ghoul state group (`FUN_200786B0`) — SOLVED 2026-11-14

The `0xE8`-byte object is the **per-entity animation state**, a separate
object from the Ghoul entity (which has the vtable at `0x201121F8`).  It
is allocated into `obj+0x130` and filled by `FUN_200786B0(state, reader,
&flags)`.

The four **counters** come from `FUN_2008BCE0`, which returns the bit
widths of four `u16` counts on the manager (`+0x0C`, `+0x0E`, `+0x12`,
`+0x14`); the width is the number of bits needed for the values
`0 .. count-1`.

The fields, in the order they are read:

| the state object | the wire | what |
|---|---|---|
| `+0x92` | 1 bit | a byte flag |
| `+0x94` | 1 bit + 4 bytes | a 32-bit field, only when the bit is set |
| `+0xA4` | 1 bit | a byte flag |
| `+0xA5` | 1 bit | a byte flag |
| `+0x90` | 1 bit + a bounded value | the value is bounded by the counter 1 (the model count) |
| `+0xAA` | 1 bit + a bounded value | the value is bounded by the counter 0 (the state count); setting it also sets the "changed" flag |
| `+0xAC` | 1 bit + 2 bytes | only when the bit is set; also sets the "changed" flag |
| `+0x9C` | 1 bit + a signed tick count | the **animation start time**: `ticks * (1/120) + base` |
| `+0x98` | 1 bit + a signed tick count | the **fixed time**: `ticks * (1/120) + the start time` |
| `+0xA0` | 1 bit | the fixed time again: either a 32-bit float or the constant `0x7149F2CA` |
| `+0xA6` | 1 bit + 1 byte | |
| `+0xA7` | 1 bit + 1 byte | |
| `+0xA8` | 1 bit + 1 byte | |
| `+0xA9` | 1 bit + 1 byte | |
| the origin block | 1 bit | a quaternion, a scale and three 11-bit angles (`value * 0.0625 - 64.0`) |

The tick counts are the **120 Hz** clock: the value is read as a sign bit
plus a nibble count plus the nibbles, and scaled by the constant
`0x201121D8` = `0.008333333767950535` = 1/120 s.

Do not confuse this object with the Ghoul **entity**: the entity has
`+0x98` = the playback-speed **index** (an int), `+0x9C` = the start time
and `+0xA0` = the fixed time, while this state object has `+0x98` = the
fixed time and `+0x9C` = the start time.  The overlap is a coincidence of
the two layouts.

### 9.7 The module side

The module keeps its instances in an array at `0x5015CCA0` with the stride
**`0x464` (1124)** (exported at `+0x64`, the count at `0x5015D8C8`).  The
module's client decoder (`gamex86.dll 0x500AE340`, the export at `+0x5C`)
walks that array and skips an instance whose `+0x93C` or `+0x3E4` is null.

## 7. Dead hypotheses (do not repeat them)

* The "**43-byte vertex record**" layout (`PROTOCOL.md` 5, the old
  `web/ghb.js` `parseGeometry`).  The browser was reinterpreting the Comp
  blob as vertex records: 49 junk vertices for `FEM_ARM`, **zero** for
  `ACC_BOX_HIP`.
* The "**32-byte face record**" layout.  That is the *GHL/text* mesh loader
  (`0x200aa250`), a different format.  The Ghoul face record is **6 bytes**.
* "The index table is a valence histogram."  There is no such table.
