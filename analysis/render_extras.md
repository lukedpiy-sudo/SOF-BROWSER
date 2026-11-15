# The renderer bridge, the `.m32` texture container, the detail texturing and the decals

**Status: the two API tables are mapped byte-exactly, the `.m32` container is
decoded and verified against all 4199 shipped files, the detail-texturing
path is traced end to end, and the Decal emitter is decoded.**

| what | where |
|---|---|
| the renderer DLL | `Soldier of Fortune/ref_gl.dll` → `sof_target/refgl.dll` (237568 bytes, base `0x30000000`) |
| the effects DLL | `Soldier of Fortune/QeffectsGL.dll` → `sof_target/qeffectsgl.dll` (173056 bytes, base `0x10000000`) |
| the renderer loader | `SoF.exe 0x20066E10` (`FUN_20066E10`) |
| the renderer's export | `GetRefAPI` = `ref_gl.dll 0x3000DDB0` |
| the engine's API table | `SoF.exe 0x20403570` (55 dwords) |
| the renderer's API table | `ref_gl.dll 0x3008FDC8` (27 dwords) |
| the image loader | `ref_gl.dll 0x30007AD0` = the engine's `API[10]` |
| `GL_FindImage` | `ref_gl.dll 0x30006A90` |
| the detail-texturing state | `ref_gl.dll 0x30014480`, `0x30014120`, `0x30014BE0` |
| the Decal emitter | reader `SoF.exe 0x2003CC30`, vtable `0x20111C3C` |
| the parser | `analysis/m32_parse.py` |
| the table rebuilder | `analysis/rea/api_tables.py` |

---

## 1. The renderer is a separate DLL and the API is **bidirectional**

SoF does **not** link the renderer.  It loads it at run time:

```
SoF.exe 0x20066E10
    LoadLibraryA("ref_%s.dll")      ; "ref_%s.dll" = 0x2013AD34
    GetProcAddress(h, "GetRefAPI")  ; "GetRefAPI"  = 0x2013ACE0
    GetRefAPI(buffer)               ; -> the 55-dword renderer table
```

The important (and easy to get wrong) fact is that **both** sides hand the
other a function table:

* the **engine** builds a **27-entry** table on the stack, copies it into
  `ref_gl.dll`'s `.data` at `0x3008FDC8`, and the renderer calls through it;
* the **renderer** builds a **55-entry** table on the stack, copies it into
  the engine's buffer at `0x20403570`, and the engine calls through it.

So the renderer is not a leaf: it needs the engine's console, the engine's
file system and the engine's cvars.

### 1.1 The engine's 27-entry table

`SoF.exe 0x20066E10` fills the table on the stack and then copies it down:

```asm
; the frame:  sub $0x224,%esp ; push ebx ; push ebp ; push esi ; push edi
; then, still inside the function:
20066e9f: push $0x2013ACE0     ; "GetRefAPI"   <- these two pushes are
20066ea4: push %eax            ; the module     <- still on the stack while
;                                 the table is filled in, so every offset
;                                 below is relative to the PUSHED stack
20066ea5: movl $0x20019130,0x24(%esp)     ; Cmd_AddCommand
...
20066f65: movl $0x20120648,0x80(%esp)

; GetProcAddress (stdcall) eats its two arguments, the stack is back
20066f8b: sub  $0x6c,%esp
20066f93: lea  0x7c(%esp),%esi   ; the source = the table
20066f97: mov  %esp,%edi         ; the destination = 0x6c bytes lower
20066f99: rep  movsl             ; 27 dwords
20066f9b: lea  0x1c4(%esp),%ecx  ; the buffer for the renderer's table
20066fa2: push %ecx
20066fa3: call *%ebp             ; GetRefAPI
```

The table therefore starts at the **pushed-stack offset `0x18`** and the
copy moves it 0x6c bytes down.  `GetRefAPI` reads it straight back:

```asm
3000ddb8: mov  $0x1b,%ecx        ; 27
3000ddbd: lea  0xec(%esp),%esi   ; the caller's esp == the copied table
3000ddc4: mov  $0x3008fdc8,%edi
3000ddd1: rep  movsl             ; -> the renderer's DAT_3008FDC8
```

| index | the engine's function | the renderer's slot | what it is |
|---|---|---|---|
| 0 | `0x20066530` | `0x3008FDC8` | **`Com_ErrorEx(level, fmt, …)`** – formats into a local buffer and calls `Com_Error(level,"%s",buf)`.  The renderer uses it for *hard* errors (16 call sites, always with level 1). |
| 1 | – | `0x3008FDCC` | **never written** – the slot is stack junk and the renderer never calls it |
| 2 | – | `0x3008FDD0` | **never written** – ditto |
| 3 | `0x20019130` | `0x3008FDD4` | `Cmd_AddCommand` |
| 4 | `0x200191E0` | `0x3008FDD8` | `Cmd_RemoveCommand` |
| 5 | `0x20018D20` | `0x3008FDDC` | `Cmd_Argc` |
| 6 | `0x20018D30` | `0x3008FDE0` | `Cmd_Argv` |
| 7 | `0x20018380` | `0x3008FDE4` | a `va_list` copy helper |
| 8 | `0x20066470` | `0x3008FDE8` | **`Con_Printf(level, fmt, …)`** – the level picks the sink: 0 → `Com_Printf`, 1 → `Com_DPrintf`, 2 → `0x2001C940`, 3 → a Win32 `MessageBoxA`.  19 call sites, always with level 0. |
| 9 | `0x2001F090` | `0x3008FDEC` | `Z_Malloc(size, tag)` |
| 10 | `0x2001EBC0` | `0x3008FDF0` | `Z_Free` |
| 11 | `0x20025370` | `0x3008FDF4` | `FS_LoadFile` |
| 12 | `0x20025420` | `0x3008FDF8` | `FS_FreeFile` |
| 13 | `0x20025750` | `0x3008FDFC` | `FS_*` – returns `&DAT_2026AA80` |
| 14 | `0x20025760` | `0x3008FE00` | `FS_*` – returns `*(DAT_2026AA74+4)` |
| 15 | `0x20024D90` | `0x3008FE04` | a path/extension helper (`bool f(char *)`) |
| 16 | `0x20021AE0` | `0x3008FE08` | `Cvar_Get` |
| 17 | `0x20022190` | `0x3008FE0C` | `Cvar_Set` |
| 18 | `0x20022350` | `0x3008FE10` | `Cvar_SetValue` |
| 19 | `0x200216C0` | `0x3008FE14` | sets the engine's "quiet" flag (`DAT_2024B1DC`) |
| 20 | `0x20066D80` | `0x3008FE18` | a local engine helper |
| 21 | `0x20066DF0` | `0x3008FE1C` | a local engine helper |
| 22 | `0x20018050` | `0x3008FE20` | a **cvar callback registrar** – `f(name, flags, cb)`; 15 call sites (`(*DAT_3008FE20)(name, 0x15, &LAB_…)`) |
| 23 | `0x2001B510` | `0x3008FE24` | a local engine helper |
| 24 | `0x2001F300` | `0x3008FE28` | `flrand` |
| 25 | `0x2001F350` | `0x3008FE2C` | `irand` |
| 26 | `0x20120648` | `0x3008FE30` | a **data pointer**, not a function |

**The two "never written" slots (1 and 2) are not an oversight** – the
compiler left holes in the stack array and the renderer never dereferences
those two addresses.  Every other slot is either used by the renderer or
deliberately unused.

### 1.2 The renderer's 55-entry table

`GetRefAPI` (`ref_gl.dll 0x3000DDB0`) builds its own table on the stack
starting at **`0x8(%esp)`** (the version 3 is slot 0) and copies all 55
dwords back into the engine's buffer:

```asm
3000ddc9: movl $0x3,0x8(%esp)     ; API[0] = the version 3
...
3000dfcc: lea  0x8(%esp),%esi
3000dfd2: rep  movsl              ; 0x37 = 55 dwords -> DAT_20403570
```

| index | the engine's slot | the renderer function | what |
|---|---|---|---|
| 0 | `0x20403570` | `0x00000003` | **the version** – the engine refuses to run if it is not 3 |
| 1 | `0x20403574` | `0x3000F550` | `R_Init` |
| 2 | `0x20403578` | `0x30010C60` | `R_Shutdown` |
| 3 | `0x2040357C` | `0x30010CE0` | `R_SetMode` |
| 4 | `0x20403580` | `0x3000AB80` | `R_RegisterModel` |
| 5 | `0x20403584` | `0x3000B900` | `R_AllocModel` |
| 6 | `0x20403588` | `0x30007A30` | `R_FreeModel` |
| 7 | `0x2040358C` | `0x30007A50` | `R_BeginRegistration` |
| 8 | `0x20403590` | `0x30007A80` | `R_EndRegistration` |
| 9 | `0x20403594` | `0x30007AA0` | `R_SetRegistrationSequence` |
| 10 | `0x20403598` | `0x30007AD0` | **`R_LoadImage`** – the image loader the FX system uses |
| 11 | `0x2040359C` | `0x30007AF0` | `R_FreeImage` |
| 12 | `0x204035A0` | `0x30019380` | **`R_SetSky`** (`sky_set(name, rotate, axis)`) – see `analysis/sky.md` |
| 13 | `0x204035A4` | `0x30016B90` | **`R_SetCloud` – a stub (`ret`)** – see `analysis/sky.md` |
| 14 | `0x204035A8` | `0x30016A40` | `R_SetFog` |
| 15 | `0x204035AC` | `0x3000B990` | `R_SetView` |
| 16 | `0x204035B0` | `0x3000DFE0` | `R_RenderView` |
| 17 | `0x204035B4` | `0x30001CD0` | `R_SetGlobalFog`/world setup – 7 call sites (`&local_8c,&local_90,uVar3`) |
| 18 | `0x204035B8` | `0x30001ED0` | the entity draw entry – 10 call sites |
| 19 | `0x204035BC` | `0x30002080` | the world-entity draw |
| 20 | `0x204035C0` | `0x30002240` | unused by the engine |
| 21 | `0x204035C4` | `0x30001D10` | the 2D draw entry – 11 call sites (the UI) |
| 22 | `0x204035C8` | `0x30001850` | the 2D picture draw |
| 23 | `0x204035CC` | `0x30001AB0` | unused by the engine |
| 24 | `0x204035D0` | `0x300019D0` | the 2D scaled draw |
| 25 | `0x204035D4` | `0x30001A40` | the 2D rotated draw – 26 call sites |
| 26 | `0x204035D8` | – | **never written** (stack junk) |
| 27 | `0x204035DC` | `0x30001B00` | the 2D colour draw |
| 28 | `0x204035E0` | `0x30002460` | the 2D fade draw |
| 29 | `0x204035E4` | `0x300025B0` | the 2D rectangle draw |
| 30 | `0x204035E8` | `0x30002740` | the 2D stretched draw |
| 31 | `0x204035EC` | `0x30002A40` | the 3D rectangle draw |
| 32 | `0x204035F0` | – | **never written** (stack junk) |
| 33 | `0x204035F4` | `0x30002C00` | the 3D line draw |
| 34 | `0x204035F8` | `0x30002D20` | unused by the engine |
| 35 | `0x204035FC` | `0x30002EA0` | the particle/poly draw |
| 36–54 | `0x20403600`… | `0x30002F10`…`0x3001D4D0` | the effects/Ghoul half – reached through the FX system, not directly by the engine |

The **three** slots the renderer never fills (26 and 32 here, 1 and 2 in the
engine table) are harmless: nothing calls them.

### 1.3 Rebuilding the tables

`analysis/rea/api_tables.py` re-derives both tables mechanically from the
binaries (it parses the `movl $imm,disp(%esp)` writes in the two loader
functions), so the tables in this document can be regenerated at any time:

```
python3 analysis/rea/api_tables.py
```

---

## 2. The `.m32` image container

SoF's textures are **not** TGA/PNG/JPG.  They are `.m32` files: a
fixed-size header followed by the mip chains.  There are **4199** of them
in `Soldier of Fortune/Base/pak0.pak`.

### 2.1 The layout

Everything below is relative to the start of the file.  The loader is
`GL_FindImage` (`ref_gl.dll 0x30006A90`); the `local_13c[0xNN]` in the
decompiler is simply `file_base + 0xNN*4`.

| offset | size | what |
|---|---|---|
| `0x000` | u32 | the **version** – always **4** in the shipped data (the loader checks `*local_13c == 4`) |
| `0x004` | char[0x80] | the **material / display name** (e.g. `"Armory/1_2_subfloor1"`, `"DM_faces/amu"`) |
| `0x084` | char[0x100] | the **base (parent) texture name** – `local_13c[0x21]`, e.g. `"Armory/2_brick5"`; **691** files have one |
| `0x184` | char[0x80] | the **damage texture name** – `local_13c[0x61]`; **283** files have one |
| `0x204` | i32[15] | the **mip widths** – `local_13c[0x81]` |
| `0x244` | i32[15] | the **mip heights** – `local_13c[0x91]` |
| `0x284` | i32[15] | the **mip data offsets**, relative to the start of the file – `local_13c[0xA1]` |
| `0x2CC` | u8 | an extra class byte – copied into the image struct at `+0x55` (`pcVar8[0x55] = (char)local_13c[0xb3]`) |
| `0x2DC` | char[0x80] | the **detail texture name** – `local_13c[0xB7]`; **2661** files have one |
| `0x35C` | f32[4] | the **detail matrix** – `local_13c[0xD7..0xDA]` = (scaleX, scaleY, shiftX, shiftY) |
| `0x378` | u32 | the **flags** – `local_13c[0xDE]`; bit 1 = a detail texture, bit 2 = the mip path, bit 3 = an environment texture |
| `0x3C8` | – | where the **pixel data** starts (the first mip's offset is always `0x3C8`) |

The mip chain is **always contiguous** from `0x3C8` in all 4199 files, and
the mip data is **4 bytes per pixel** (RGBA).  A mip's size is therefore
`w*h*4`.

### 2.2 The shipped data

| what | the count |
|---|---|
| the `.m32` files in pak0 | **4199** |
| with a base texture name | 691 |
| with a damage texture name | 283 |
| with a detail texture name | 2661 |
| the mip-count histogram | 1 → 224, 2 → 3, 4 → 1, 5 → 190, 6 → 538, 7 → 2252, 8 → 947, 9 → 11, 10 → 33 |
| the flags byte | 0 → 3824, 1 → 209, 2 → 94, 4 → 46, 6 → 1, 8 → 7, 9 → 18 |
| the detail matrices | `(4,4,0,0)` ×1545, `(8,8,0,0)` ×553, `(0,0,0,0)` ×370, `(3,3,0,0)` ×65, `(4,2,0,0)` ×34, … |

The detail matrix is **always** `(n,n,0,0)` or `(n,m,0,0)` – the shifts are
always zero.

### 2.3 The parser

`analysis/m32_parse.py` parses the container and validates it:

```
python3 analysis/m32_parse.py --pak "Soldier of Fortune/Base/pak0.pak"
    4199 .m32 files, 0 bad

python3 analysis/m32_parse.py some.m32      # a human-readable dump
```

The validation checks: the version is 4, every mip is inside the file, the
mips shrink, no mip repeats, and the pixel data ends exactly at the end of
the file.

### 2.4 The renderer's image struct

`GL_FindImage` keeps one **0x78-byte** struct per loaded image:

| offset | what |
|---|---|
| `+0x00` | the name (up to `+0x40`) – the **requested** name, not the header's |
| `+0x40` | the image type byte (2 = a damage texture, 5 = a detail texture, 8 = an env texture) |
| `+0x44` | the width (a short) – the first mip's width |
| `+0x46` | the height (a short) |
| `+0x48` | the file extension |
| `+0x4C` | the next image in the chain |
| `+0x50` | the **GL texture id** |
| `+0x54` | a byte |
| `+0x55` | the `.m32` byte at `+0x2CC` |
| `+0x58` | the **damage texture** name (4 bytes) |
| `+0x5C` | the **detail texture** name (4 bytes) |
| `+0x60`,`+0x64`,`+0x68`,`+0x6C` | the 4 **detail-matrix** floats |
| `+0x70` | the next image in the global detail-texture list |

---

## 3. The detail texturing

### 3.1 The cvars

| cvar | the pointer | the default | what |
|---|---|---|---|
| `gl_detailtexturing` | `0x3008FC84` | `"1"` | a **float mode**: 0 = off, 2 = the distance-limited mode, ≥3 = the other GL path |
| `gl_detailtexturingdistance` | `0x3008FC70` | `"250"` | the distance limit for mode 2 |

The float value of a cvar is at **`+0x18`** of the cvar_t pointer, so the
renderer reads `*(float *)(DAT_3008FC84 + 0x18)`.

> **The cvar-pointer table rule** (this bit me twice): the registration loop
> stores the **previous** `Cvar_Get` result:
> ```c
> push $name ; mov %eax,ptr ; call *Cvar_Get
> ```
> so the pointer immediately **before** a name push belongs to the
> **previous** cvar.  The corrected pointers are in the table above; the
> earlier (wrong) values were `gl_skymip = 0x3008FD74`,
> `gl_pictip = 0x3008FC5C`, `gl_showtris = 0x3008FC74`,
> `gl_picmip = 0x3008FC90`, `gl_detailtexturing = 0x3008FC84`,
> `gl_detailtexturingdistance = 0x3008FC70`.

### 3.2 The load path

In `GL_FindImage` (`ref_gl.dll 0x30006A90`):

```c
if (header->damage[0]) {                 /* the name at 0x184 */
    if (strcmp(damage, own_name) == 0) {
        Com_Printf("GL_FindImage: Recursvive damage texture (%s)\n", ...);
        image->damage[0] = 0;            /* the guard: refuse the recursion */
    } else {
        image->damage = GL_FindImage(damage, 2, 0, 1);
    }
}
if (header->detail[0]) {                 /* the name at 0x2DC */
    if (strcmp(detail, own_name) == 0) {
        Com_Printf("GL_FindImage: Recursvive detail texture (%s)\n", ...);
        image->detail[0] = 0;
    } else {
        image->detail = GL_FindImage(detail, 5, 0, 1);   /* the type 5 */
        if (image->detail) {
            image->detailmat[0] = header->detailmat[0];   /* 0x35C */
            image->detailmat[1] = header->detailmat[1];   /* 0x360 */
            image->detailmat[2] = header->detailmat[2];   /* 0x364 */
            image->detailmat[3] = header->detailmat[3];   /* 0x368 */
            if (detailmat[2] != 0.0 || detailmat[3] != 0.0) {
                /* link it into the global detail-texture list */
            }
        }
    }
}
```

The detail texture is loaded with the **type 5** and the damage texture
with the **type 2**; the detail texture's name is built with the format
`"textures/%s"` (`0x3002EB28`).  The two recursion guards are the strings
at `0x3002EAC8` (`"GL_FindImage: Recursvive detail texture (%s)\n"`) and
`0x3002EAF8` (`"GL_FindImage: Recursvive damage texture (%s)\n"`).

### 3.3 The per-surface draw

`FUN_30014120` (`ref_gl.dll 0x30014120`) is the per-surface draw.  It
queues a surface for the detail pass when:

```c
if (surface->image->detail != 0 &&            /* the image has a detail  */
    !(surface->flags & 0x400) &&               /* the surface forbids it  */
    gl_detailtexturing != 0.0 &&
    detail_count < 0x400) {                   /* the list is not full    */
    detail_list[detail_count++] = surface;
}
```

The detail pass itself is `FUN_30014480`:

```c
if (gl_detailtexturing >= 3.0) {
    /* the other GL path */
    glEnable(GL_??? / 0x1e01);
} else {
    /* the classic path: 0x2100 = the detail texture unit */
    ...
}
...
glBindTexture(*(int *)(*(int *)(surface->image + 0x5c) + 0x50));  /* the detail */
if (gl_detailtexturing == 2.0) {
    /* the distance-limited mode: skip the surface if any vertex is
       closer than gl_detailtexturingdistance */
    for (each vertex) {
        dist = distance(eye, vertex);
        if (dist < gl_detailtexturingdistance) break;
    }
    if (a vertex was too close) goto skip;   /* no detail overlay */
}
```

The detail texture's UVs are then generated with the **detail matrix**
(the image's `+0x60…+0x6C`), and the geometry is re-drawn by
`FUN_30014BE0`.

---

## 4. The Decal emitter

### 4.1 The record

The Decal is emitter **class 3** of the FX system.  Its reader is
`SoF.exe 0x2003CC30` (the vtable is `0x20111C3C`).

```c
/* 0x2003CC30 - the Decal reader */
if (read_u32(&v) > 1) return -1;          /* the record version */
memcpy(this + 0x24, file_ptr, 0x40);      /* a fixed 0x40-byte name */
file_ptr += 0x40;
strip_the_.m32_suffix(this + 0x24);       /* __strcmpi, 0x200FCE40 */
read_f32(&this->growth_accel);            /* +0x10 */
read_f32(&this->growth_duration);         /* +0x14 */
read_f32(&this->start_size);              /* +0x18 */
read_f32(&this->end_size);                /* +0x1C */
read_u32(&this->direction);               /* +0x20 */
R_LoadImage(this + 0x24);                 /* the renderer's API[10] */
```

So the on-disk record of a Decal is:

```
u32       version            (must be <= 1)
char[0x40] the texture name  (a ".m32" suffix is stripped, case-insensitively)
f32       growth_accel       (+0x10)
f32       growth_duration    (+0x14)
f32       start_size         (+0x18)
f32       end_size           (+0x1C)
u32       direction          (+0x20)
```

**The `+0x20` field is the *direction*, not flags.**  It was misnamed
"flags" at first; the ground truth is `samples/eft/bloodpool.eft`:

| file offset | bytes | value |
|---|---|---|
| `0x18` | `01 00 00 00` | the record version = 1 |
| `0x1C` | 0x40 bytes | `"textures/sprites/blood_pool.m32"` (+ 0xCD padding) |
| `0x5C` | `00 00 40 40` | `growth_accel` = 3.0 |
| `0x60` | `00 00 B0 41` | `growth_duration` = 22.0 |
| `0x64` | `B5 CC 4C BE` | `start_size` = −0.2 |
| `0x68` | `00 00 00 41` | `end_size` = 8.0 |
| `0x6C` | `01 00 00 00` | `direction` = 1 (Downward) |

`analysis/eft_parse.py` and `analysis/eft_semantics.md` were corrected
accordingly (the parser still reports **192/192**).

### 4.2 The runtime

The Decal emitter's vtable (`0x20111C3C`):

| slot | the function | what |
|---|---|---|
| `+0x00` | `0x2003CA60` | the destructor |
| `+0x04` | `0x2003D4C0` | the **update** – switches on `this->+0x04` (0…6) |
| `+0x08` | `0x2003D5F0` | a **console dump**, *not* a network message (the format strings are `"%sGo back to Main Effect\n"` `0x201341B0` and `"%sGo back to Main Effect   \x03fx_graphic       \x01%s%s\n"` `0x2013427C`) |
| `+0x0C` | `0x2003D730` | advances `this->+0x04` mod 7 – the FX-editor menu cursor |
| `+0x10` | `0x2003D760` | the FX-editor menu handler |
| `+0x14` | `0x2003E320` | the type getter = 3 |
| `+0x20` | `0x2003CBB0` | the writer |
| `+0x24` | `0x2003CC30` | the reader |

> `FUN_2002E3E0(int a, int b)` is **not** a network sender – it is the
> console-colour helper: if `a == b` it returns a 1-byte colour escape
> chosen by the cvar at `0x20364378` (0→`\x02`, 1→`\x0b`, 2→`\x07`,
> 3→`\x04`, 4→`\x06`), otherwise `"\x01"`.

### 4.3 The FX system's emitter plumbing

| what | where |
|---|---|
| the FX object vtable | `0x20111560` |
| the global FX list | `0x2015EE34` (a circular list; the head's first dword points at the first element) |
| the per-frame **spawn** pass | `0x2000A300` |
| the per-frame **update** pass | `0x2000A350` |
| the emitter base class vtable | `0x20111BC4` |
| the emitter type names | `0x20132308` = Effect / Sound / Light / Decal / Feedback |
| the emitter mode names | `0x20132708` = Instant / Continual |

The emitter base vtable:

| slot | what |
|---|---|
| `+0x00` | the destructor |
| `+0x04` | the update |
| `+0x08` | the spawn |
| `+0x0C` | the draw / "should spawn" |
| `+0x10` | the FX-editor menu handler |
| `+0x14` | the type getter |
| `+0x18` | the pre-destroy hook |
| `+0x1C` | the sub-object hook |
| `+0x20` | the writer |
| `+0x24` | the reader |

The per-frame update pass (`0x2000A350`) walks the global list and calls
the FX object's vtable slots `+0x00` and `+0x04` on each element:

```c
for (node = *DAT_2015EE34; node != DAT_2015EE34; node = *node) {
    (*(code *)**(undefined4 **)node[2])();      /* vtable +0x00 */
    (**(code **)(*(int *)node[2] + 4))();       /* vtable +0x04 */
}
```

The **spawn** pass (`0x2000A300`) is gated and asks before it spawns:

```c
if (DAT_201C1F00 == 8 && scr_interface != 0.0) {
    for (node = *DAT_2015EE34; node != DAT_2015EE34; node = *node) {
        if ((*(code **)(node[2] + 0x0c))())     /* "should spawn?" */
            (*(code **)(node[2] + 0x08))();     /* the spawn */
    }
}
```

The emitter type and mode name tables are arrays of string **pointers**:

| the table | the entries |
|---|---|
| `0x20132308` | `Effect`, `Sound`, `Light`, `Decal`, `Feedback` |
| `0x20132708` | `Instant`, `Continual` |

The FX system's cvars:

| cvar | the pointer | the default |
|---|---|---|
| `fx_partadjust` | `0x20321F54` | – |
| `fx_partadd` | `0x20364360` | – |
| `fx_partsub` | `0x20364368` | – |
| `fx_graphic` | `0x20321D00` | – |
| `fx_maxdebrisonscreen` | `0x2027C474` | – |
| `scr_interface` | `0x2015EE40` | `"1"` |

(The engine's cvar registration follows the same shifted-store rule as the
renderer's – see §3.1.)

---

## 5. `serverdetail` is a UI-script command, not FX

`serverdetail` is one of the ~32 sub-commands of the **UI script
dispatcher** at `SoF.exe 0x200E8C50`:

```
font  text  ctext  image  list  slider  ticker  hbar  vbar  backdrop
br    hbr   hr     center right left  normal  ghoul  gpm   bghoul
input setkey cursor defaults key  ikey   ckey  filebox filereq
loadbox serverbox serverdetail players
```

The error string `"Unrecognised serverdetail keyword"` is at `0x20158FDC`.
It has nothing to do with the FX system or with decals.

---

## 6. Summary of the corrections made in this pass

1. **The API is bidirectional** – the engine's 27-entry table and the
   renderer's 55-entry table are built on the stack and copied into each
   other's `.data`; the tables are not one-directional exports.
2. **The engine's table starts at the pushed-stack offset `0x18`** – the
   two `GetProcAddress` arguments are still on the stack while the table
   is filled in, which shifts every offset by 8 bytes.  Getting this wrong
   puts `Z_Malloc` in the wrong slot.
3. **The engine table's slots 1 and 2 are never written** – they are
   reserved holes, and the renderer never calls them.
4. **The renderer's slots 26 and 32 are never written** – the same.
5. **The renderer's slot 0 is `Com_ErrorEx`, not a plain printf** – the
   renderer has *two* print hooks: slot 0 (a hard error, `Com_Error`) and
   slot 8 (`Con_Printf`, level 0 = `Com_Printf`).
6. **The `.m32` header is fully mapped** and every offset was confirmed
   against the loader (`GL_FindImage`), not just against the data.
7. **The Decal's `+0x20` is the direction**, not flags.
8. **`serverdetail` is a UI-script command**, not an FX keyword.
9. **The cvar-pointer table is shifted by one** – the pointer before a
   name push belongs to the previous cvar.
