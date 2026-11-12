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

### 8.3 The clip `f32`

The `.ghb` value is 50, 100 or 200.  A **`.ghl`** side file
(`ghoul/<dir>/<name>.ghl`) overrides it - the `.ghl` parser
(`SoF.exe 0x200A2DF0`) does

```c
*(float *)(clip + 0x1c) = (float)((endTime - startTime) * 1000.0);
```

and then normalises every event time by `1 / duration`.  So the field is a
**duration in milliseconds**.  (No `.ghl` ships with SoF, so the `.ghb`
value is what the game actually uses.)  The runtime check that restarts a
looping clip is in `SoF.exe 0x2007F3B0`:

```c
*(float *)(ent + 0x130) <= now - *(float *)(ent + 0x190)
```

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

Three plain-text side files live next to the models (all CRLF, one record
per line):

| extension | count in `pak0` | what |
|---|---|---|
| `.gsq` | 308 | the **sequence list**: the animation names a model supports |
| `.gpm` | 50 | the **player model script** (`ghoul/pmodels/*.gpm`) |
| `.gbm` | 33 | a bolt-on model |
| `.ghl` | 0 | the event/duration side file - **not shipped** |

`.gsq` is simply the lowercased clip names, one per line
(`ghoul/comskin/commoves.gsq` = the 219 moves every character shares,
`playmoves.gsq`, `npcmoves.gsq`, `riflemoves.gsq`, ...).  The `.ghb` clips
are stored **uppercase** (`STD_I_N_A_A`), so the engine lowercases the clip
name when it builds the sequence list and matches it against the `.gsq`
entries.  A model only implements the moves it needs: of `FEM_ARM`'s 23
clips, 9 are in `commoves.gsq`; of `FEMALE`'s 153 clips, 58 are.

The `.gpm` player-model script is a line-oriented text format:

```
enemy/meso                 <- the model
meso_menu1
meso_player
playerboss
"Capture, Inc"             <- a quoted comment
enemy/dth/rad_f_brian
{
  a a_brian 0              <- the bone/attach points
  b b_brian 0
  f f_brian_n 0
  h h_brian 0
}
{
  boltons/acc_brian_beret.gbm abolt_head_t to_abolt_head_t 1.0
  boltons/acc_brian_box_hip.gbm abolt_hip_r to_abolt_hip_r 1.0
}
```

### 8.6 The animation state machine (game module)

`gamex86.dll 0x5007EC40` is a **bytecode interpreter** over the Ghoul
script (the cursor is at `+0x114`, the code at `+0x104`).  Its opcodes
select the sequence: the module holds the sequence names as lowercased
strings, e.g. `s_std_jupto_n_a_a_50135e58` = `"std_jupto_n_a_a"`, and a
giant switch maps a state code to a sequence name plus a blend time and a
duration.

So the animation is **scripted server side**, not derived from the entity
state - which is why the entity state only carries the Ghoul *model* index
(`+0x28`, an index into the Ghoul string table).

## 9. The Ghoul network protocol

`SoF.exe` has two service bytes for the Ghoul:

| byte | name | what |
|---|---|---|
| `0x1A` | `svc_ghoulreliable` | the Ghoul instance state, reliably |
| `0x1B` | `svc_ghoulunreliable` | the same, unreliably |

The engine never decodes them: it hands the payload to the **game module**
(`SoF.exe 0x2008ECD0` -> the module export at `+0x60`,
`gamex86.dll 0x500AE340`) and the module applies it to the client-side Ghoul
objects.  The server side is the mirror image (`SoF.exe 0x2008EAC0`, the
`"Ghoul reliable overflow"` / `"Ghoul unreliable overflow"` checks).

The **Ghoul instance record is `0x464` (1124) bytes** - the module exports
that size at `+0x64` and keeps its instances in an array with that stride
(`0x5015CCA0`, stride `0x464`, the count at `0x5015D8C8`).

## 7. Dead hypotheses (do not repeat them)

* The "**43-byte vertex record**" layout (`PROTOCOL.md` 5, the old
  `web/ghb.js` `parseGeometry`).  The browser was reinterpreting the Comp
  blob as vertex records: 49 junk vertices for `FEM_ARM`, **zero** for
  `ACC_BOX_HIP`.
* The "**32-byte face record**" layout.  That is the *GHL/text* mesh loader
  (`0x200aa250`), a different format.  The Ghoul face record is **6 bytes**.
* "The index table is a valence histogram."  There is no such table.
