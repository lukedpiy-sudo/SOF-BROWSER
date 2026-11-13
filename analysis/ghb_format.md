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

**the string table** — a run of `[encoded-u16 index][length-prefixed string]`
pairs, terminated by an index of 0 (the error `"StringTable underflowed"`,
`0x20156CB8`).  The strings are at most 250 bytes (`"Huge Ghoul String"`,
`0x2015805E`).  The writer is `FUN_2006A370`; the reader is `FUN_2006A560`,
and the table is an array of `char*` at `table+0x14` with its end at
`table+0x18`.  `FUN_2006A240(table, index)` is the lookup.

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

The writer emits **one leading field** before the groups — the `u16` at
`obj+0x04` — and that is the field the client's section-1 loop consumes as
the entity index (it negates it before the BST lookup).  The leading field
doubles as the cursor into the global string table in `FUN_2006A370`, which
is the one detail of the record that is still not fully reconciled.

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
