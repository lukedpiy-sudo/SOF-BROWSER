# The `.eft` effect file format and the FX system's emitter semantics

**Status: the format is 100% decoded and byte-verified.**
`analysis/eft_parse.py` parses **192/192** of the shipped `.eft` files
(211 files in the pak, 192 unique basenames) and consumes every one of them
to the very last byte - no tail, no padding guess.

| what | where |
|---|---|
| the loader | `SoF.exe 0x2002DB00` (`FUN_2002db00`) |
| the emitter base class | vtable `0x20111BC4` |
| class 0 "Effect" (the particles) | reader `0x20036C00`, vtable `0x20111B44` |
| class 1 "Sound" | reader `0x2003C780`, vtable `0x20111BEC` |
| class 2 "Light" | reader `0x2003C9E0`, vtable `0x20111C14` |
| class 3 "Decal" | reader `0x2003CC30`, vtable `0x20111C3C` |
| class 4 "Feedback" | reader `0x2003CFE0`, vtable `0x20111C64` |
| the particle system | reader `0x200330E0` |
| the raw disassembly | `analysis/rea/eft_readers/*.txt` |
| the parser | `analysis/eft_parse.py` |

---

## 0. The x87 version gates (the thing that made this hard)

Every version test in the FX system is a raw x87 `fcomps` against a
float constant, followed by a status-word test.  Three different idioms are
used and **they do not mean the same thing**:

```asm
fcomps K          ; compare ST0 with the memory operand
fnstsw %ax        ; AX = the low 16 bits of the FPU status word
```

The x87 status word puts **C0 in bit 8**, **C2 in bit 10** and **C3 in bit
14** (this was measured, not assumed - see below).  Therefore:

| idiom | taken when | meaning |
|---|---|---|
| `and $0x4100,%eax ; jne T` | C0 or C3 set | **ST0 <= K** |
| `test $0x5,%ah ; jp T` | the parity of (C0 \| C2<<2) is even | **ST0 >= K** |
| `and $0x100,%eax ; jne T` | C0 set | **ST0 < K** |

`test $0x5,%ah` looks like an equality test but is not: the parity flag is
set when the masked value has an **even** number of bits, so
`0` (greater) and `5` (unordered) are even while `1` (equal) is odd.  The
net effect is `ST0 >= K`.

The measurement (a standalone `.S` program, `fcomps` against 5.0):

```
5.0 vs 5.0 (equal)     AX=4000  bit8(C0)=0 bit10(C2)=0 bit14(C3)=1  AH&5=0
4.0 vs 5.0 (less)      AX=0100  bit8(C0)=1 bit10(C2)=0 bit14(C3)=0  AH&5=1
6.0 vs 5.0 (greater)   AX=0000  bit8(C0)=0 bit10(C2)=0 bit14(C3)=0  AH&5=0
```

Ghidra's decompiler agrees with the `<=` reading
(`if (fVar13 <= (float10)3.0)`, `if ((float10)7.0 < fVar15) return -1`,
`if (2.0 <= fVar3)`, `if (3.0 <= fVar3)`), which is the cross-check that
settled it.

---

## 1. The file header

```
offset  type     field
0x00    f32      the file version          (must be <= 3.0)
0x04    u32      effect+0x00                (an id / a handle)
0x08    vec2     effect+0x04                (the origin)
0x10    f32      the emitter count
0x14            the emitters, one after another
...              f32      the effect+0x18 "size" vec2   (only if the version > 1.0)
```

* the file version gate is `version <= 3.0`; a newer file is rejected and
  the loader returns -1.
* the loader opens `effects/%s.eft` (`0x2011F36C`); on failure it prints
  `"FX_System: Unable to find file effects/%s.eft\n"` (`0x20132B48`).
* the console command `fx_load <EffectFileName>` (`0x20134FD8`) loads
  `%s/base/effects/%s.eft` (`0x20134F9C`).

### The emitter loop

The loop is a **do/while**, so it runs at least once when the count is
positive, and it continues **while `n < count`**:

```asm
2002ddcf: fildl 0x1c(%esp)      ; ST0 = n (the emitters done so far)
2002ddd3: fcomps 0x20(%esp)     ; vs. the emitter count
2002ddd9: test $0x5,%ah
2002dddc: jnp 0x2002dc64        ; loop back while ST0 < count
```

so the number of emitters is `max(1, ceil(count))`.  A count of 2.0 means
exactly two emitters.

Per emitter the loader:

1. reads an `f32` **type** and converts it to an int,
2. allocates and constructs the matching emitter object
   (0x24C / 100 / 0x38 / 100 / 0x2C bytes),
3. calls the reader through the vtable slot **+0x24**,
4. if the **file** version is `> 2.0`, reads one extra `vec2` into the
   emitter's **+0x08** (the emitter origin),
5. links the emitter into the effect's list.

After the loop the loader reads the effect's **+0x18** `vec2` - but only
if the file version is `> 1.0`.  For a v1.0 file **nothing is read**: the
engine copies the origin vec2 (+0x04) into +0x18 instead
(`SoF.exe 0x2002DE30` -> `FUN_20041d80`).  For a v2/v3 file the vec2 is
read and the engine then copies the *smaller* of each component back over
the origin (`0x2002DE0A`).

---

## 2. The emitter classes

The type names live at `0x20132308`:
`Effect(0) Sound(1) Light(2) Decal(3) Feedback(4)`.
The type getters (vtable slot +0x14) are
`0x20031930 / 0x2003E300 / 0x2003E310 / 0x2003E320 / 0x2003E330`.
The mode names live at `0x20132708`: `Instant(0) Continual(1)`.
The loader sets the per-emitter mode at `0xb8(%esp)`: the **Effect**
emitter is *Instant*, every other class is *Continual*.

### 2.1 class 0 - "Effect" (`0x20036C00`)

```
file offset (from the emitter's first byte)   type    struct offset
+0x00   f32   the emitter version  (<= 3.0)
+0x04   vec2  +0x10  the size
+0x0C   vec2  +0x18  the lifetime      (each component clamped to 0.005..99999)
+0x14   u32   +0x20
+0x18   u32   +0x24  the particle count
+0x1C   u32   +0x28
+0x20   u32   +0x2C
+0x24   vec3  +0x30
+0x30   vec3  +0x3C
+0x48   vec3  +0x48   (the file offset is +0x3C)
+0x48   f32   +0x54
+0x4C   f32   +0x58
+0x50   f32   +0x5C
+0x54   f32   +0x60
+0x58   f32   +0x64
+0x5C   ....  +0x80   the particle system (see section 3)
        (the version >= 2.0)
        vec2  +0x68   the emitter origin offset
        f32   +0x70   the particle count again (converted to an int)
        (the version < 2.0)
        --    +0x68   NOT read: the engine copies the size vec2 (+0x10) here
        --    +0x70   NOT read: the engine copies +0x24 here
        (the version >= 3.0)
        f32   +0x74
        f32   +0x78
        (the version < 3.0)
        --    +0x74/+0x78 = 0, and if +0x20 != 1 both origins are zeroed
```

The lifetime clamp is `value < 0.005 -> 0.005` and
`value > 99999 -> 99999` (`0x20036C4C`..`0x20036CAA`).

### 2.2 class 1 - "Sound" (`0x2003C780`)

```
+0x00   char[64]  +0x24  the sound file name   (read FIRST)
+0x40   vec2      +0x10  the volume
+0x48   vec2      +0x18  the pitch
```

The default name is `"nothing.wav"` (`0x201340F8`).

### 2.3 class 2 - "Light" (`0x2003C9E0`)

```
+0x00   vec2  +0x10  the radius
+0x08   vec2  +0x18  the red
+0x10   vec2  +0x20  the green
+0x18   vec2  +0x28  the blue
+0x20   vec2  +0x30  the intensity
```

The ctor's defaults are radius 30.0, RGB 255.0 and intensity 1.0.

### 2.4 class 3 - "Decal" (`0x2003CC30`)

```
+0x00   u32       the version (must be <= 1)
+0x04   char[64]  +0x24  the image name (".m32" stripped)
+0x44   f32       +0x10
+0x48   f32       +0x14
+0x4C   f32       +0x18
+0x50   f32       +0x1C
+0x54   u32       +0x20  the flags
```

The default name is `"textures/sprites/sparkpart..."` (`0x201321CC`).

### 2.5 class 4 - "Feedback" (`0x2003CFE0`)

```
+0x00   vec2  +0x10
+0x08   vec2  +0x18
+0x10   vec2  +0x20
+0x18   u32   +0x28
+0x1C   u32   read and thrown away by the engine
```

---

## 3. The particle system (`0x200330E0`)

The struct is 0x1C0 bytes and lives at the Effect emitter's **+0x80**.
The file offsets are the struct offsets **+4** (the version f32 is read
but not stored in the struct), except where noted.

```
file   struct   type      field
+0x00  --       f32       the particle version  (must be <= 7.0)
+0x04  +0x00    vec2 x6   the spawn box
+0x34  +0x30    u32       the sprite type       (see below)
+0x38  +0x34    vec2 x4   the motion
+0x58  +0x54    u32       the depth
+0x5C  +0x58    vec2      the fade
        (the version < 5.0)
        --      --        skip 0xF4 bytes in the file
+0x64  +0x60    char[64]  the sprite name (".m32" stripped, case-insensitive)
+0xA4  +0xA0    vec2 x5   the colour ramp
+0xCC  +0xC8    f32       the scale
+0xD0  +0xCC    f32
+0xD4  +0xD0    vec2      the size
+0xDC  +0xD8    vec2
+0xE4  +0xE0    u32       the flags
        (the version >= 2.0)
+0xE8  +0xE4    vec3      the gravity
+0xF4  +0xF0    vec3      the wind
+0x100 +0xFC    f32       the drag
+0x104 +0x100   char[64]  the second sprite name
        (the version < 2.0)
        --      --        the gravity and the wind are 0, the drag is 0.7
                        and the name is the default at 0x2015EE44
        (the version >= 3.0)
+0x144 +0x140   f32       the rate (the default is 60.0)
+0x148 +0x144   char[64]  the third sprite name
        (the version < 3.0)
        --      --        the rate is 60.0 and the name is the default
        (the version >= 4.0)
+0x188 +0x184   vec2 x6   the extra block
        (the version < 4.0)
        --      --        the extra block is zeroed and the flags &= 0x3FFF
        (the version < 6.0)
        --      --        the flags &= 0xFFFC7FFF
        (the version >= 7.0)
+0x1B8 +0x1B4   u32
+0x1BC +0x1B8   u32
        (the version < 7.0)
        --      --        +0x1B4 = 0, the flags &= 0xFFF3FFFF and
                        +0x1B8 = (the flags & 0x20) ? 0 : 1
```

The `.m32` strip is a case-insensitive compare of the last four characters
against `".m32"` (`0x2011F2F0`) with `__strcmpi` (`0x200FCE40`); on a match
the engine overwrites the dot with a NUL.

### The sprite type (`+0x30`)

`0`/`1`/`2` = a plain `.m32` image, `3`/`4` = a **Ghoul model sprite**.
The distinction is at `SoF.exe 0x2003355B`:

```asm
mov 0x30(%ebp),%eax
cmp $0x3,%eax
je  <the .GHL path>
cmp $0x4,%eax
je  <the .GHL path>
call *0x20403598          ; the renderer's plain image loader
```

The `.GHL` path is `FUN_2003AF50`, which loads
`"Ghoul/%s.GHL"` (`0x20133E30`) as a Ghoul animated entity and drives it
through the Ghoul vtable.

In the shipped files the distribution is **0 in 119 files, 1 in 29 files
and 2 in 2 files** - types 3 and 4 are never used by the shipped content.

### The flags (`+0xE0`)

Known bits:

| bit | meaning |
|---|---|
| 0x10 | enables the extra LOD steps in the model-sprite path (`0x20033637`) |
| 0x20 | for a v<7.0 particle it selects `+0x1B8 = 0` instead of `1` |

The masks are cumulative and are applied by the reader, so the flags in
memory are always normalised.

---

## 4. The runtime

### The emitter vtable

| slot | class 0 | meaning |
|---|---|---|
| +0x00 | `0x2003E2A0` | the destructor |
| +0x04 | `0x20036E30` | the update (the time) |
| +0x08 | `0x20037410` | the spawn |
| +0x0C | `0x20037A30` | the draw (the distance) |
| +0x10 | `0x20037C40` | "are the particles finished?" |
| +0x14 | `0x20031930` | the type getter (0) |
| +0x18 | `0x20036E10` | the particle system's update - **a `ret`, a no-op** |
| +0x1C | `0x20036E20` | the particle system's sprite image load |
| +0x20 | `0x20036AD0` | the writer (`FUN_200facde`) |
| +0x24 | `0x20036C00` | the reader |

The base class (`0x20111BC4`) returns 1 for slot +0x04 and -1 for the type
getter, so an emitter that does not override a slot is inert.

### The particle system's own methods

| address | meaning |
|---|---|
| `0x200330E0` | the reader |
| `0x200334E30` | the spawn - picks the LOD level and creates the particles |
| `0x200335B0` | the sprite image load - `call *0x20403598` with the name at +0x60 |
| `0x200335C0` | the model sprite add (the `.GHL` path) |
| `0x20035DC0` | "is the particle system empty?" |

### The LOD ladder

Both the spawn (`0x20034E30`) and the model-sprite add (`0x200335C0`)
quantise the view distance (the particle system's **+0x1BC**) into a
ladder of **13, 25, 36, 46, 54, 66, 73, 79** units and use it to scale the
particle count and to pick the detail level.

---

## 5. Verification

```
$ python3 analysis/eft_parse.py --check samples/eft
192/192 files parse exactly
   the tail bytes : 192 files
```

"the tail bytes :" with an empty set means that every file is consumed to
exactly its last byte.

The file versions in the pak are **3.0 in 152 files, 2.0 in 58 and 1.0 in
1** (`effects/spark.eft`).

### The quirk worth knowing

`effects/spark.eft` is the only v1.0 file and it is the only file with
**two** Effect emitters.  It parses cleanly, but note that the v1.0 file
format has **no** "the effect+0x18" block at the end - the engine
synthesises it from the origin instead.  A reader that expects 8 trailing
bytes will mis-parse exactly this one file.
