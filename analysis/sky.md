# The sky — SOLVED 2026-11-14

Target: the whole sky subsystem — the engine's `sky` / `cloud` console
commands, the `pics/sky/<name>.txt` layer file, the engine's layer table
and sky-state machine, and the renderer's cube-sky implementation in
**`ref_gl.dll`**.

**Short answer:** the engine keeps a **sky base name** and calls the
renderer's `API[12]` with `(name, rotate, axis)`.  The renderer
(`ref_gl.dll 0x30019380`) reads `pics/sky/<name>.txt` **itself**, takes up
to **6 lines** (one per cube face), loads each line as `<line>.m32` (the
literal line `none` = an empty face), and then draws a **6-face cube** of
side **37800** units whose texture coordinates come from the **sky
clipper** (the BSP sky polygons are clipped against the cube faces and the
per-face texture extents are accumulated).

---

## 1. The renderer API table

The engine loads the renderer as a **separate DLL** (`ref_%s.dll` →
`ref_gl.dll`) and fills a **55-dword API table**:

| what | where |
|---|---|
| the load | `SoF.exe 0x20066E10` (`FUN_20066E10`) — `ref_%s.dll` = `0x2013AD34` |
| the export | `GetRefAPI` = `0x2013ACE0` |
| the table | `DAT_20403570` (55 dwords = 0x37), `API[0]` = the **version 3** |
| the DLL side | `ref_gl.dll 0x3000DDB0` = `GetRefAPI` → its own table at `0x3008FDC8` |

`GetRefAPI` copies 27 dwords from the caller's buffer into its own table,
overwrites the slots it implements, then copies all **55** dwords back
into the engine's buffer:

```asm
3000ddb8: mov $0x1b,%ecx          ; 27
3000ddbd: lea 0xec(%esp),%esi
3000ddc4: mov $0x3008fdc8,%edi
3000ddd1: rep movsl
...
3000dfc7: mov $0x37,%ecx          ; 55
3000dfcc: lea 0x8(%esp),%esi
3000dfd2: rep movsl               ; -> the engine's DAT_20403570
```

The slots that matter here:

| index | the engine's address | the renderer function | what |
|---|---|---|---|
| **12** | `0x204035A0` | `ref_gl.dll 0x30019380` | **the sky setter** |
| **13** | `0x204035A4` | `ref_gl.dll 0x30016B90` | **the cloud setter — a stub (`ret`)** |

## 2. The `sky` console command

`SoF.exe 0x200134C0` registers the commands: `sky` = `LAB_200132F0`,
`cloud` = `LAB_200133F0`, `terrain` = `LAB_200133C0`.

```
sky <basename> <rotate> [x y z]
```

* `argc < 2` → prints `"Usage: sky <basename> <rotate> <axis x y z>"`
  (`0x2011F490`) and returns.
* `rotate` = `atof(argv[2])` when `argc > 2`, else **0.0**.
* the axis: when `argc == 6` → `(atof(argv[3]), atof(argv[4]), atof(argv[5]))`,
  else the default **`(0, 0, 1)`**.

The call (the argument order is proven by the push sequence):

```asm
20013390: mov  0x0(%esp),%ecx      ; the rotate (a float in ecx)
20013394: lea  0x4(%esp),%eax      ; &axis
20013398: push %eax                ; arg3 = &axis
20013399: push %ecx                ; arg2 = the rotate
2001339c: call 0x20018d30          ; Cmd_Argv(1) -> the name in eax
200133a4: push %eax                ; arg1 = the name
200133a5: call *0x204035a0         ; API[12](name, rotate, &axis)
```

so the renderer's signature is

```c
void sky_set(const char *name, float rotate, const vec3 *axis);
```

(Inside `0x30019380` the three arguments are read at `0x4(%esp)` (the
name), `0x5c(%esp)` (the rotate) and `0x60(%esp)` (the axis pointer) — the
`strncpy` before them is a **cdecl** call whose 12 bytes are cleaned later
in one batch, which is why the offsets look shifted.)

## 3. The `cloud` console command

```
cloud <type> <density> <angle> <speed> <red> <green> <blue>
```

* `argc < 4` → prints `"Usage: cloud <type> <density> <angle> <speed> <red> <green> "`
  (`0x2011F4E8`) + `"<blue>"` (`0x2011F524`).
* `argv[1..7]` are parsed with `atof` into 7 floats and pushed in reverse;
  the call is `call *0x204035A4` = **API[13]**.

**API[13] = `ref_gl.dll 0x30016B90`, and that address is a single `ret`.**
So in the GL renderer the cloud command is a **no-op** — the Quake-1 style
cloud volumes were dropped. (A separate, unreferenced function at
`0x30016BA0` still contains cloud-like code and loads
`textures/uganda/cloud` (`0x3002FA28`), but it is not the API[13] entry.)

## 4. The engine's sky layer file

`pics/sky/<basename>.txt` (`0x2011F33C`) — a **text** file with up to
**6 lines**, one per cube face.

The engine parses it with `SoF.exe 0x2000FE00` (`FUN_2000FE00`):

```c
  /* param_2 = the layer table: 6 entries of 0x40 bytes */
  while (line_no < 6) {
      if (__strcmpi(line, "none") == 0) {
          *(byte *)slot = 0;                       /* an empty layer */
      } else {
          Com_sprintf(slot, 0x40, "%s.m32", line);  /* 0x2011F224 */
      }
      slot += 0x40;
  }
```

* the comparison with `"none"` (`0x2011F22C`) is **case-insensitive**
  (`__strcmpi`).
* the engine's layer table = `DAT_202250C0`, **6 × 0x40 bytes**.
* `DAT_2022524C` = the number of the layers loaded,
  `DAT_20225240` = the sky **state** (see below).

The textures themselves are precached by `SoF.exe 0x2000FC70`
(`FUN_2000FC70`): it refuses a downloadable path, checks the file
existence, then registers the texture.

## 5. The engine's sky state machine

`SoF.exe 0x200106D0` (`FUN_200106D0`) is the sky loader. It is driven by
`DAT_20225240`, a **state index** with a huge switch:

```
0xC, 0xD, 0xE, 0x122, 0x286, 0x386, 0x486, 0x5A6, 0x5B6, 0xDE3, 0xDE9,
0xDEA (all the layers loaded), 0x11D1
```

Each state sets the sky base name (`DAT_201E954C`) and the layer index.
The "all layers" state (`0xDEA`) does:

```c
if (cvar_value != 0.0 && DAT_201e954c != 0) {
    Com_sprintf(path, 0x80, "pics/sky/%s.txt", DAT_201e954c);
    if (DAT_2022524c == 0) { DAT_2022524c = 1; if (!FUN_2000fc70(path)) return; }
    if (DAT_2022524c == 1) { DAT_2022524c = 2; FUN_2000fe00(path, &DAT_202250c0); }
    while (DAT_20225240 < 0xdea) {
        i = (DAT_20225240 - 0xde4) * 0x40;      /* the 0x40-byte layer slot */
        DAT_20225240++;
        if (DAT_202250c0[i] != 0 && !FUN_2000fc70(&DAT_202250c0[i])) return;
    }
}
DAT_20225240 = 0xdea;
```

The cvar tested at `*(float *)(DAT_203FEC74 + 0x18)` is the "draw the sky"
switch (`+0x18` is the float value of a `cvar_t`).

The map's own sky is set at `SoF.exe 0x20016C3F`:

```asm
20016c21: push $0x2011f7f4      ; "%f %f %f"
20016c26: push $0x201e958c      ; the rotate/axis string
20016c2b: call 0x200fb019       ; sscanf
20016c38: push %edx             ; &axis
20016c39: push %eax             ; the rotate
20016c3a: push $0x201e954c      ; the sky base name
20016c3f: call *0x204035a0      ; API[12]
```

## 6. The renderer's sky setter — `ref_gl.dll 0x30019380`

The full algorithm:

```c
void sky_set(const char *name, float rotate, const vec3 *axis)
{
    strncpy(DAT_300a4158, name, 63);            /* the sky name buffer */
    DAT_300a410c = rotate;                      /* the sky rotation (degrees) */
    DAT_300a4100 = axis[0];                     /* the sky axis */
    DAT_300a4104 = axis[1];
    DAT_300a4108 = axis[2];

    for (i = 0; i < 6; i++)                     /* clear the 6 layer textures */
        DAT_300a4110[i] = DAT_3008fc64;         /* the null texture */

    Com_sprintf(path, 0x40, "pics/sky/%s.txt", DAT_300a4158);
    FS_LoadFile(path, &filebuf, 0);             /* the file is read into the
                                                   caller's arg1 stack slot */

    for (i = 0; i < 6; i++) {                   /* the 6 lines */
        strip the CR/LF;
        if (__strcmpi(line, "none") == 0)        /* 0x30030008 */
            continue;                            /* the layer stays empty */
        tex = FUN_30007380(line, 4, 0, 1);       /* the renderer loads
                                                     "<line>.m32" */
        DAT_300a4110[i] = tex ? tex : DAT_3008fc64;

        /* the texture-coordinate clamp range */
        if (gl_showtris->value != 0.0 || skyrotate != 0.0) {
            gl_picmip->value += 1.0;   /* ... and later -= 1.0: a no-op */
            DAT_300a41cc = 1/256;  DAT_300a41c8 = 127/128;
        } else {
            DAT_300a41cc = 1/128;  DAT_300a41c8 = 255/256;
        }
    }
}
```

Notes:

* the renderer reads the **same** `.txt` as the engine but uses the **raw
  line** as the texture name (the `.m32` suffix is added by the renderer's
  image loader `0x30006A90` via the format `"%s.m32"` at `0x3002EB7C`).
* `FUN_30007380` is the renderer's `R_LoadImage`/`GL_FindImage` wrapper
  (it calls `0x30006A90`).
* the `gl_picmip` cvar is incremented and then decremented — a **no-op**;
  the only real effect is the clamp range.
* the clamp range constants: `0x3B000000` = 1/128 = 0.0078125,
  `0x3F7F8000` = 255/256 = 0.99609375, `0x3B800000` = 1/256 = 0.00390625,
  `0x3F7F0000` = 127/128 = 0.9921875.  They are the classic **texture
  border clamps** that keep a mipmapped sky off the edge texels.

## 7. The layer → face mapping

`DAT_3002FFA0` (6 ints) is the **face → layer** table:

```
face:   0  1  2  3  4  5
layer:  0  2  1  3  4  5
```

so the `.txt`'s line 1 is the **+X** face's texture, line 2 is the **+Y**
face's and line 3 the **-X** face's.

## 8. The cube geometry — the per-face permutation table

`DAT_3002FF10` = 6 × 3 ints.  The source vector is

```
V = (min * 37800, max * 37800, 37800)
```

and each table entry picks a component: a **positive** `n` means `V[n-1]`,
a **negative** `-n` means `-V[n-1]`.

| face | the table | the vertex |
|---|---|---|
| 0 | `(3, -1, 2)` | `(37800, -min, max)` |
| 1 | `(-3, 1, 2)` | `(-37800, min, max)` |
| 2 | `(1, 3, 2)` | `(min, 37800, max)` |
| 3 | `(-1, -3, 2)` | `(-min, -37800, max)` |
| 4 | `(-2, -1, 3)` | `(-max, -min, 37800)` |
| 5 | `(2, -1, -3)` | `(max, -min, -37800)` |

(the values above are in the 37800-scaled space) — the classic id-Tech
cube-sky: one axis is pinned to ±37800 on each face.

The scale constant is `0x3002C510` = **37800.0**.

## 9. The sky clipper — `ref_gl.dll 0x30018C10`

`ClipSkyPolygon` is the id-Tech sky clipper with **6 faces**.  Its fast
path (`param_3 == 6`) finds the **dominant axis** of the polygon (0..5),
then for every vertex computes `1 / v[axis]` and multiplies it by the two
components selected by the per-face index tables:

* `DAT_3002FF60` — the dominant-axis component per face
  `(1, 2, 3, -1, 1, 3)`
* `DAT_3002FF58` — the first component per face `(-2, 3, 1, 2, 3, -1)`
* `DAT_3002FF5C` — the second component per face `(3, 1, 2, 3, -1, 1)`

and accumulates the per-face extents:

| array | meaning | the reset value |
|---|---|---|
| `DAT_300A4198[face]` | the **min u** | `+9999.0` |
| `DAT_300A41B0[face]` | the **min v** | `+9999.0` |
| `DAT_300A4128[face]` | the **max u** | `-9999.0` |
| `DAT_300A4140[face]` | the **max v** | `-9999.0` |

and it flags the faces that were actually touched:

```c
(&DAT_300a41d4)[face] = 1;   /* the per-face "in use" flag */
DAT_300a41d0 = 1;            /* "the sky is valid" */
```

The reset is `ref_gl.dll 0x300190A0` (`FUN_300190A0`):

```asm
300190a2: mov $0x461c3c00,%edx   ; 9999.0
300190a7: mov %eax,0x300a41d4    ; the flags = 0
300190ac: mov $0xc61c3c00,%ecx   ; -9999.0
300190b1: mov %ax,0x300a41d8
300190b7: mov %edx,0x300a41b0(%eax)
300190bd: mov %edx,0x300a4198(%eax)
300190c3: mov %ecx,0x300a4140(%eax)
300190c9: mov %ecx,0x300a4128(%eax)
```

(0x18 = 6 floats, so each array holds one float per face.)

## 10. `R_DrawSky` — `ref_gl.dll 0x300190E0`

```c
void R_DrawSky(void)
{
    if (!DAT_300a41d0) return;                   /* the sky is not valid */
    (*DAT_300a4624)();                           /* glClear / glDisable */
    (*DAT_300a4698)(DAT_3008fecc, DAT_3008fed0, DAT_3008fed4);  /* glClearColor */

    (*DAT_300a43b8)(skyrotate * DAT_3008fd38,    /* glRotatef */
                    DAT_300a4100, DAT_300a4104, DAT_300a4108);

    for (face = 0; face < 6; face++) {
        tex = DAT_300a4110[ DAT_3002ffa0[face] ];
        if (tex == DAT_3008fc64) continue;       /* an empty layer */
        if (!DAT_300a41d4[face]) continue;        /* the face is not used */

        if (skyrotate != 0.0 || DAT_3008fcfc < 90.0) {
            DAT_300a4198[face] = -1.0;  DAT_300a41b0[face] = -1.0;
            DAT_300a4128[face] =  1.0;  DAT_300a4140[face] =  1.0;
        }
        FUN_30006400(tex);                       /* GL_Bind */
        FUN_3001b650();                          /* the texture setup */
        (*DAT_300a4710)(7);                      /* glBegin(GL_QUADS) */
        FUN_30019260(min_u, min_v, face);
        FUN_30019260(min_u, max_v, face);
        FUN_30019260(max_u, max_v, face);
        FUN_30019260(max_u, min_v, face);
        (*DAT_300a45f4)();                       /* glEnd */
    }
    (*DAT_300a47f0)();
}
```

* `DAT_300A43B8` = **glRotatef** — proven by `0x3000E410`:
  `(*DAT_300a43b8)(0xc2b40000,0x3f800000,0,0)` = `glRotatef(-90,1,0,0)`.
* `DAT_3008FD38` = **0.0174533** (the degrees → radians factor).
* `DAT_300A4710` = **glBegin**, `DAT_300A4520` = **glVertex3fv**,
  `DAT_300A42F4` = **glTexCoord2f**, `DAT_300A4698` = **glClearColor**.

## 11. One cube corner — `ref_gl.dll 0x30019260`

`FUN_30019260(min, max, face)` emits **one** vertex + its texture
coordinate:

```c
V[0] = min * 37800.0;
V[1] = max * 37800.0;
V[2] = 37800.0;
/* the permutation of §8 */
vertex = the 3 permuted components;

/* the texture coordinate: the value is clamped to [DAT_300a41cc, DAT_300a41c8] */
s = clamp((max + 1.0) * K, lo, hi);
t = clamp((max + 1.0) * K, lo, hi) - 0.0;    /* 0x3002C2D8 = 0.0 */
glTexCoord2f(s, t);
glVertex3fv(vertex);
```

**The anomaly:** the multiplier `K` is the float at **`0x3002C360`**, and
in this DLL that constant is **0.0** (the `0.5` lives at `0x3002C2B0`).
The instruction is literally

```asm
300192d1: dc 0d 60 c3 02 30     fmull  0x3002c360     ; *= 0.0
300192e5: dc 0d 60 c3 02 30     fmull  0x3002c360     ; *= 0.0
```

so in this build the sky cube's texture coordinate collapses to the clamp
lower bound and the cube renders as a flat colour.  Two readings:

* the cube sky is **vestigial** in SoF — the shipped maps use the **BSP
  sky** (the sky surfaces with the texinfo flags 0x04/0x05, which is what
  `web/bspsky.js` already extracts), and the cube path is only reachable
  through the `sky` console command;
* or this particular `ref_gl.dll` (the "SoF Community Edition" build,
  PE timestamp `0x3B28D14D`) was patched to neuter it.

The **geometry** (the 37800 scale, the permutation table, the per-face
extents from the clipper) is unaffected — only the texture coordinate is.

## 12. `gl_skymip` and the detail texturing

`gl_skymip` is registered in `ref_gl.dll` (the name is pushed at
`0x30010026`) and its **cvar pointer is `0x3008FD74`**.  It is read in
two places, both inside the sky code:

| site | what it does |
|---|---|
| `0x3001945C` | `gl_skymip != 0` → the sky is not "static"; the sky rotate (`0x300A410C`) decides whether the cube is re-rendered |
| `0x300194B4` | `gl_skymip` picks the sky texture path |

> **The cvar pointer table in `ref_gl.dll` is shifted by one.**  The
> registration loop stores the *previous* `Cvar_Get` result:
>
> ```asm
> push $name          ; the name of the cvar being created
> mov %eax,ptr        ; the result of the PREVIOUS Cvar_Get
> call *0x3008FE08    ; Cvar_Get(name, default, flags, 0)
> ```
>
> So the pointer that sits immediately **before** the name push belongs to
> the cvar created by the **previous** call.  Reading the table the naive
> way swaps `gl_skymip` with `gl_pictip` and `gl_showtris` with
> `gl_skymip`.  The corrected table is:
>
> | cvar | the cvar pointer | the default |
> |---|---|---|
> | `gl_skymip` | `0x3008FD74` | `0` |
> | `gl_pictip` | `0x3008FC5C` | `0` |
> | `gl_showtris` | `0x3008FC74` | `0` |
> | `gl_picmip` | `0x3008FC90` | `0` |
> | `gl_detailtexturing` | `0x3008FC84` | `1` |
> | `gl_detailtexturingdistance` | `0x3008FC70` | `250` |

The `gl_pictip` sites (`0x300068F1`, `0x30006D1C`, `0x3000ED94`) are the
general texture path: `gl_pictip != 0` → the texture level gets
`+ entity->0x2D8` added (the **mip bias**), a different texture-sampling
path is taken, and the minification filter becomes `0x1000000` instead of
`0x400000` (the **mipmap** filter).

The detail texturing cvars are in the same table: `gl_detailtexturing`
(`0x3002F274`) and `gl_detailtexturingdistance` (`0x3002F254`) - see
`analysis/render_extras.md`.

## 13. The consequence for the browser

* The browser's `web/bspsky.js` extracts the **BSP** sky faces.  That is the
  right thing for the shipped maps — the **cube** sky is a different,
  much rarer path.
* If a map ever needs the cube sky, the browser needs:
  1. `pics/sky/<name>.txt` → up to 6 lines → the 6 face textures
     (`<line>.m32`, `none` = an empty face),
  2. the face → layer table `{0,2,1,3,4,5}`,
  3. the per-face extents from the **sky clipper** (the BSP sky polygons
     clipped against the 6 cube faces) — this is the part that needs the
     BSP's sky polygons and their winding,
  4. the 37800 cube with the permutation table of §8,
  5. `glRotatef(skyrotate * π/180, axis)` for the rotation.
* The **rotation** and the **axis** come from the map's sky key, not from
  the console command, in normal play.
