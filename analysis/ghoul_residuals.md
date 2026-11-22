# The three Ghoul residuals — evidence (2026-11-22 revision)

The Ghoul work had three open ends. The container, block-kind and sound-path
claims below are unchanged; the `.os` section was revised after the previously
unnamed opcodes and `HandleSpawn` were decoded with REA:

| # | the residual | the answer |
|---|---|---|
| **A** | the inline-compressed model paths in the svc `0x1A` payload | the strings that are **not** in the global table are written **Huffman-compressed inline**; the code table is built at runtime from a **static frequency table** in `SoF.exe` - `analysis/ghoul_huffman.py` extracts it |
| **B** | the `.gpm` / `.gbm` block kinds | they are named: **block 1 = the animation bindings, block 2 = the bolt-ons, block 3 = the extra meshes** (`analysis/gpm_format.md` §3) |
| **C** | the `.os` event -> sound wiring | the `PlaySound` statement is **opcode `0x1E`** and it calls the engine's precache-sound + `StartSound`; the AI **voice lines** are a separate, fully decoded system |

Everything below is provenance: an address and a short excerpt.

---

# A. The inline-compressed string path

## A.1 The reader: `FUN_200BE060`

The Ghoul payload's strings are read by **`SoF.exe 0x200BE060`**, and the
reader has exactly **two** branches.  The Ghidra decompile
(`analysis/rea/sof_all/functions/0x200be060.c`) is the primary source; the
bit-level reader is `FUN_200BE390(dst, nbits)` (`ret $0x8`, so it is stdcall
with a destination and a bit count).

```
FUN_200BE060:
  FUN_200be390(&local_11,1);
  if (local_11 != '\0') {                 <-- branch 1: the global table
      FUN_200be390(&local_11,1);
      if (local_11 != '\0') {
          FUN_200be390(&local_c,2);
          FUN_200be390(&local_10,(local_c & 0xff) * 4 + 4);
      }
      pcVar6 = (&PTR_DAT_2013adf8)[local_10 & 0xffff];
      ...
  } else {                                <-- branch 2: inline, compressed
      FUN_200be390(&local_11,1);
      if (local_11 != '\0') {
          FUN_200be390(local_8,2);
          FUN_200be390(&local_10,((uint)local_8[0] & 0xff) * 2 + 2);
      }
      FUN_200be390(&DAT_204062d0,(local_10 & 0xff) << 3);
      ...
  }
```

So the wire format of one string is:

```
bit 0 = 1   -> the string is in the GLOBAL table
    bit 1 = 0   -> the empty string (index 0)
    bit 1 = 1   -> 2 bits: the class c
                    4*(c+1) bits: the index into the global table
                    (c = 0 -> 4 bits, c = 1 -> 8, c = 2 -> 12, c = 3 -> 16)

bit 0 = 0   -> the string is INLINE (Huffman-compressed)
    bit 1 = 0   -> the empty string
    bit 1 = 1   -> 2 bits: the class c
                    (2c+2) bits: the length L (in bytes)
                    L*8 bits: the header byte + the payload
```

The class is the usual "smallest class that fits": for the global index the
step is 4 bits (4, 8, 12, 16), for the byte length it is 2 bits
(2, 4, 6, 8).

## A.2 The inline payload: raw or Huffman

The reader reads `L*8` bits into the scratch buffer `DAT_204062D0`:

```
200be1a6: cmp    $0xff,%cl          ; the first byte of the buffer
200be1ad: jne    0x200be1c9         ; -> the Huffman path
200be1af: dec    %eax               ; the raw path: copy L-1 bytes
200be1b0: mov    $0x204062d1,%esi
...
200be1be: rep    movsl
```

* **raw**: the header byte is `0xFF` and the next `L-1` bytes are the string
  as they are;
* **Huffman**: the header byte `h` is the number of **padding bits** at the
  end, and the payload is `L*8 - h - 8` bits long:

```
200be1c9: lea    0x0(,%eax,8),%ebp   ; L*8
200be1d0: and    $0xff,%ecx          ; the header byte
200be1d6: sub    %ecx,%ebp
200be1da: sub    $0x8,%ebp           ; L*8 - h - 8 bits
```

The bits are read **LSB first inside each byte** (the mask is
`1 << (bitIndex & 7)`), and a `0` bit walks to the **left** child of the
Huffman tree, a `1` bit to the **right**:

```
200be212: test   %cl,%al
200be214: je     0x200be21b          ; 0 -> the left child
200be216: mov    0x4(%edi),%edi      ; 1 -> the right child
200be21b: mov    (%edi),%edi         ; the left child
200be21d: mov    (%edi),%eax
200be220: test   %eax,%eax
200be222: jne    0x200be1e9          ; not a leaf yet
200be228: mov    0x8(%edi),%cl       ; the leaf's byte
```

The tree node is `{left@0, right@4, symbol@8}` and the tree root is the
runtime pointer `DAT_204063D4`.  The decoded bytes land in `DAT_204061C8`.

## A.3 The writer: `FUN_200BDE30` - the table is **read-only**

The writer is `SoF.exe 0x200BDE30`.  It **binary-searches** the global table
and, when the string is **not** in it, it does **not** append - it falls back
to the inline branch:

```
FUN_200bde30:
  ... binary search of DAT_2013adf0 / (&PTR_DAT_2013adf8) ...
  if ((int)DAT_2013adf0 <= (int)(uVar11 & 0xffff)) {     ; NOT FOUND
      local_c[0] = 0;
      FUN_200bdca0(local_c,1);                            ; the "bit 0 = 0" flag
      FUN_200bda00(param_1,&DAT_204058c0,~uVar5 - 1,&local_4);   ; compress
      ...
      FUN_200bdca0(pbVar6,iVar4);                         ; the length L
      FUN_200bdca0(&DAT_204058c0,uVar5 * 8);              ; the compressed bytes
      return;
  }
  param_1._0_1_ = 1;                                     ; FOUND
  FUN_200bdca0(&param_1,1);
```

**The global string table is never written at runtime.**  The only stores to
`0x2013ADF0` / `0x2013ADF8` anywhere in `SoF.exe` are the initialisation in
the file itself - a grep of `analysis/rea/sof_disasm.txt` finds only the four
**reads** (`0x200BDE60`, `0x200BDE7D`, `0x200BDEC2`, `0x200BE0E1`).

> **This kills the old claim** in `analysis/ghb_format.md` §9.5 ("the server
> appends the model paths at runtime when it loads a model, so their indices
> depend on the load order").  The model paths are **not** in the table, so
> they are written **inline, Huffman-compressed** - their indices do not
> exist and do not depend on any load order.

## A.4 The Huffman code table - extracted from the file

The tree is built at runtime, so `DAT_204063D4` is not in the file (it sits
in the zero-initialised tail of `.data`).  But the tree is built from a
**static table of 256 float frequencies** that *is* in the file:

```
SoF.exe 0x200BD9F0:  push   $0x20157C60
SoF.exe 0x200BD9F5:  call   0x200BD8C0        ; build the tree
```

`FUN_200BD8C0` is a textbook two-smallest Huffman builder over the 256
frequencies, and `FUN_200BD870` walks the tree to produce the code table:

```
FUN_200bd870(node, depth, code):
  while (node.left != 0) {
      depth = depth + 1;
      FUN_200bd870(node.left, depth, code * 2);      ; the left subtree
      node = node.right;
      code = code * 2 | 1;                            ; the right subtree
  }
  (&DAT_204059cc)[sym * 2] = depth;                  ; the length
  *(uint *)(&DAT_204059c8 + sym * 8) = code;         ; the code
```

so at runtime

| address | what |
|---|---|
| `DAT_204059C8 + sym*8` | the u32 **code** (the MSB is the first bit) |
| `DAT_204059CC + sym*8` | the u32 **length** in bits |

**`analysis/ghoul_huffman.py`** reproduces the builder (including its
tie-breaking), extracts the table and self-tests it:

```bash
python3 analysis/ghoul_huffman.py
python3 analysis/ghoul_huffman.py --json web/www/ghoulhuff.json
```

```
the frequency table: 0x20157C60
  256 symbols, the lengths run 3..17
  the Kraft sum = 1.000000000 (1.0 = a complete prefix code)
  the round-trip self-test passes (4 samples)
```

The Kraft sum being exactly 1.0 is the proof that the replicated builder
produces a complete prefix code, i.e. the same tree the engine builds.

The frequency table is a **probability distribution** over the byte values
(the sum is 1.0021): the upper case letters dominate (`E` 0.083, `L` 0.070,
`O` 0.060 ...), `'_'` is 0.094, `'\\'` is 0.055, and everything else (the
lower case letters, the digits, the punctuation) has the floor value
`1e-5`.  That is the character distribution of the Ghoul strings themselves
(the `GHOUL/.../*.GHL` paths and the bolt-on model names are upper case).

**The browser should embed the extracted table**, not rebuild the tree at
run time: then any tie-breaking difference can only affect the extraction,
never the runtime.

The extracted table is already generated as **`web/www/ghoulhuff.json`** (the
same pattern as `web/www/ghoulstrings.json`), and it is self-describing:

```json
{ "count": 256,
  "source": "SoF.exe 0x20157C60 (the static float frequency table)",
  "bitorder": "lsb-first inside each byte; the code's MSB is the first bit",
  "tree": "the node is {left@0, right@4, symbol@8}; 0 = left, 1 = right",
  "table": [[code, length], ...] }
```

(`"A"` = `[1, 5]`, `"."` = `[15, 6]`, the Kraft sum of the shipped file =
1.0.)

## A.5 The decoder, for the browser

```
readString(reader):
    if (readBits(1)):                       # the global table
        if (readBits(1)):                   # the index is non-zero
            c = readBits(2)
            idx = readBits(4 * (c + 1))
            return globalStrings[idx]
        return ""
    # inline
    if (readBits(1)):                       # not empty
        c = readBits(2)
        L = readBits(2 * c + 2)             # the byte length
        buf = readBits(L * 8)               # the header + the payload
        if (buf[0] == 0xFF):
            return buf[1:]                  # the raw form
        bits = L * 8 - buf[0] - 8           # the Huffman bits
        return huffmanDecode(buf[1:], bits)
    return ""
```

`huffmanDecode` walks the code table (the MSB of the code is the first bit)
and reads the bits **LSB first inside each byte**.

---

# B. The `.gpm` / `.gbm` block kinds - named

This one was already answered in `analysis/gpm_format.md` §3; the record
parser `FUN_20047680` is **positional** - the kind of a block is decided by
*where* it appears:

| block | the reader | the record | the kind |
|---|---|---|---|
| **1** | three tokens at a time | a 200-byte record: the strings at `+0x00`, `+0x32`, `+0x96` | **the animation bindings** - `<state> <model file> <flag>` |
| **2** | four tokens at a time | a 204-byte record: a **float** at `+0x00`, the strings at `+0x04`, `+0x36`, `+0x68` | **the bolt-ons** - `<.gbm path> <bolt name> <to name> <scale>` |
| **3** | two tokens at a time | a 51-byte record: the string at `+0x00`, a **byte** at `+0x32` | **the extra meshes** - `<name> <flag>` |

The ground truth is `samples/gpm/Assault.gpm`:

```
enemy/meso
meso_menu1
meso_player
playerboss
"Capture, Inc"
enemy/dth/rad
f_brian_
{
a a_brian 0          <- block 1: the animation bindings
b b_brian 0
f f_brian_n 0
h h_brian 0
}
{
boltons/acc_brian_beret.gbm abolt_head_t to_abolt_head_t 1.0   <- block 2: the bolt-ons
...
}
```

and the `.gbm` files are the **same format** (they are 90-120 byte text
files), so the same parser reads them.

---

# C. The `.os` event -> sound wiring

## C.1 The statement table

The `.os` compiler is `gamex86.dll 0x500818D0` and it dispatches on one
opcode byte through a **0x36 entry jump table** at **`0x50081F74`**.  The
statement names are recoverable from the **25** error strings
`"Invalid stack for <statement>"` at `0x50145774`-`0x50145E18`.

| opcode | the handler | the statement (name evidence) |
|---|---|---|
| `0x00`-`0x05` | `FUN_5007B2E0` | read a named record/operand; the kind byte picks the value class (0-4) |
| `0x06` | `FUN_5007B5F0` | define a field record: reads a name, a kind byte and a field index |
| `0x07` | inline in `FUN_500818D0` | **Add**, in-place form: pop two values, call lhs vtable `+0x44`; error string `"Invalid stack for Add"` |
| `0x08` | inline | **Add**, expression form: call `+0x34` and push the result |
| `0x09`-`0x0B` | inline | **Subtract**, **Multiply**, **Divide** (pop two, call `+0x38`/`+0x3C`/`+0x40`, push) |
| `0x0C`-`0x0F` | inline | **AddAssignment**, **SubtractAssignment**, **MultiplyAssignment**, **DivideAssignment** (pop two, compute, call `+0x44`) |
| `0x10` | `FUN_5007B260` | **Jump**: read a 4-byte cursor and store it at script `+0x114` |
| `0x11` | `FUN_5007BF20` | **Push**: read a kind byte, then `FUN_5007B9A0` constructs the value object and pushes it |
| `0x12` | `FUN_5007B590` | **Pop**: remove one value from the stack |
| `0x13` | `FUN_5007C5A0` | **If** |
| `0x14` | inline | **terminate**: `movl $0x1,0x108(%esi)` |
| `0x15`, `0x2E` | inline | the shared terminate tail (`param_1 = 1`) |
| `0x16` | `FUN_5007C4A0` | **Time** |
| `0x17` | `FUN_5007C350` (with 1) | **HandleWait** |
| `0x18` | `FUN_5007C350` (with 0) | **HandleWait** |
| `0x19` | `FUN_5007D430` | **MoveEntity** (`"Moving Entity %d"`, `"From"`, `"To"`) |
| `0x1A` | `FUN_5007C210` | **debug dump / debug flags**: prints `"Script %s"`, `"DEBUG at %d"`, `"Parameters"`, `"Global Variables"`, `"Local Variables"`; a non-zero byte sets/clears bits at `+0x124` |
| `0x1B` | inline + `FUN_5007E1F0` | the Ghoul animation command gate |
| `0x1C` | `FUN_5007D860` | **RotateEntity** (`"Rotating Entity %d"`) |
| `0x1D` | `FUN_5007CA10` | **Print** |
| **`0x1E`** | **`FUN_5007CCB0`** | **PlaySound** |
| `0x1F`, `0x20` | `FUN_5007D1A0` | the unload op (with 1 / with 0) |
| `0x21` | `FUN_5007EC40` | **the Ghoul VM** (the animation bytecode interpreter) |
| `0x22` | `FUN_5007B2B0` + `"%s"` | the **string push** (a NUL terminated string) |
| `0x23` | `FUN_5007D290` | **HandleChacheSound** (the engine's spelling) |
| `0x24` | `FUN_50080E20` | **HandleCopyPlayerAttributes** |
| `0x25` | `FUN_50080F10` | **HandleSetViewAngles** |
| `0x26` | `FUN_50081060` | **HandleSetCacheSize** |
| `0x27` | `FUN_5007E290` | pop an entity value and call `FUN_500C3880` (entity removal/notification) |
| `0x28` | `FUN_5007E300` | entity transform op (flags select entity, position, rotation, stop) |
| `0x29` | `FUN_5007DC90` | **MoveRotatingEntity** — reads a `.ROF` file (`"Bad ... in .ROF file"`) |
| `0x2A` | `FUN_50080B00` | **HandleGetCvar** (the sibling of `0x2B`) |
| `0x2B` | `FUN_50080B90` | **HandleSetCvar** |
| `0x2C` | `FUN_5007D0A0` | **HandleUnloadSound** |
| `0x2D` | `FUN_5007E870` | entity animation/transform op (flags-driven, sibling of `0x28`) |
| `0x2F` | `FUN_5007D3B0` | **HandleCacheROFF** |
| `0x30` | `FUN_5007D330` | **HandleCacheStringPackage** |
| `0x31` | `FUN_50080CA0` | **HandleConsoleCommand** |
| `0x32` | `FUN_5007D120` | **HandleUnloadROFF** |
| `0x33` | `FUN_5007C780` | **ON** (it pushes an entry onto the list at `+0x180` and bumps the counter at `+0x184`) |
| `0x34` | `FUN_5007C9D0` | **Resume** (`"Resume command executed outside of ..."`) |
| `0x35` | `FUN_50080A50` | **HandleResetAI** |

## C.2 `PlaySound` - opcode `0x1E`

The handler is `gamex86.dll 0x5007CCB0`.  It reads a **flags byte** out of
the script stream and that byte decides which optional arguments are on the
stack:

```
5007cd70: mov    %ecx,0x20(%esp)
5007cd74: ...
bVar1 = *(byte *)(*(int *)(param_1 + 0x114) + *(int *)(param_1 + 0x104));
*(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
```

(the flags byte is at **cursor + data**, the script object's `+0x114` and
`+0x104`).

| the flag bit | the argument | the default |
|---|---|---|
| `0x01` | the **entity** (the value vtable `+0x10`) | none |
| `0x02` | the **volume** (a float, the vtable `+0x08`) | `1.0` |
| `0x04` | the **pitch** (a float) | `1.0` |
| `0x08` | the **channel** (an int, the vtable `+0x04`) | `2` |
| `0x10` | the **delay** (a float) | `0.0` |

The sound path itself is always on the stack (the value vtable `+0x14`).

The two engine calls at the end are the whole wiring:

```c
/* gamex86.dll 0x5007CCB0 (FUN_5007ccb0) */
uVar5 = (*DAT_5015c9f4)(local_4, local_10, local_14, local_18, 0);
(*DAT_5015ca48)(local_8, local_c, uVar5);
```

* `DAT_5015c9f4` = **import slot 1** = the engine's **precache sound**
  (`SoF.exe 0x2005D550`): `(path, volume, pitch, delay, 0)` -> the handle;
* `DAT_5015ca48` = **import slot 22** = the engine's **`StartSound` wrapper**
  (`SoF.exe 0x2005CD30`), which forwards to slot 23 (`0x20061F50`,
  `StartSound`): `StartSound(0, entity, channel, handle, volume, pitch,
  delay, 0)`.

The sound is only played when the global sound cvar is not zero **and**
`DAT_5015D8D5` is clear:

```
5007cfe9: mov    0x5015c97c,%eax
5007cfee: flds   0x18(%eax)
5007cff1: fcomps 0x5012505c
5007cffe: mov    0x5015d8d5,%al
```

(the import table itself is decoded in `analysis/engine_imports.md`).

**So the `.os` scripts carry the sound paths as ordinary string pushes**
(the `kind 4` operands, e.g. `"cin/sib3/choke1.adp"`, `"zig_zag.rof"`,
`"impact/door/kickdoor.wav"`), and `PlaySound` is what turns them into an
engine sound.  There is no separate "event -> sound" table in the `.os`
files: the mapping is the script itself.

## C.3 The AI voice lines - a separate system

The voice lines are **not** driven by the `.os` scripts.  They are the AI's
own events, and the module turns an event **name** into a **file path**.

The dispatcher is `gamex86.dll 0x5001CDC0`, which sits at the AI vtable
**`+0x1A8`** (10 vtables: `0x50126770`, `0x50126900`, `0x50126B28`, ...).

The **voice event** is the vtable **`+0x1E8`** and the **wake** is **`+0x1EC`**,
in 5 AI vtables:

| the vtable | `+0x1E8` (the voice event) | `+0x1EC` (the wake) |
|---|---|---|
| 1 | `0x501267B0` -> `FUN_5001E050` | `0x501267B4` -> `FUN_5001E290` |
| 2 | `0x50127038` | `0x5012703C` |
| 3 | `0x50127300` | `0x50127304` |
| 4 | `0x50127518` | `0x5012751C` |
| 5 | `0x50127720` | `0x50127724` |

### The event names

`FUN_5001E050` compares the event name with `__strcmpi` (`0x50112880`) and
maps it to an id:

| the name | the string | the id |
|---|---|---|
| `backup` | `0x50133508` | 1 |
| `throw` | `0x50133500` | 2 |
| `duck` | `0x501334F8` | 3 |
| `retreat` | `0x501334F0` | 4 |
| `help` | `0x501334E8` | 5 |
| `react` | `0x501334E0` | 6 |

```
5001e0fb: push   $0x50133508   ; 'backup'
5001e100: push   %edi
5001e103: call   0x50112880    ; __strcmpi
5001e10f: mov    $0x1,%esi
```

(the **same** order in the source: `backup`, `throw`, `duck`, `retreat`,
`help`, `react`).  A seventh name, **`choke`** (`0x50133584`), is used by the
general voice path (`FUN_5001E5A0`).

### The paths

The AI class prefix comes from `FUN_50001090`, which copies one of the
**level names** out of the table at `0x5012F3B4`-`0x5012F4A4`
(`arm1`-`arm3`, `ger1`-`ger4`, `irq1a`-`irq3b`, `jpn1`-`jpn3`, `sud1`-`sud3`,
`nyc1`-`nyc3`, `sib1`-`sib3`, `kos1`-`kos3`, `trn1`, `TSR1`, `TSR2`, and the
default `tut1`).

| the format string | the address | the meaning |
|---|---|---|
| `"%s%d/%s/%s%d.wav"` | `0x501334BC` | the voice line: (the enemy group, the group number, the AI class, the event name, the variant) |
| `"%s%d/%s/%s.wav"` | `0x501334D0` | the voice line without a variant |
| `"%s%d/%s/Wake%d.wav"` | `0x50133520` | the wake sound |
| `"%s%d/%s/Greet%d.adp"` | `0x50133548` | the greet sound |
| `"%s/%s%d.wav"` | `0x50133578` | the general voice (the directory comes from the caller) |
| `"sound/%s%d/%s/Wake%d.wav"` | `0x501335A0` | the wake, with the `sound/` prefix (it probes the file with `FS_FileExists`, import slot 97) |
| `"sound/%s%d/%s/Greet%d.adp"` | `0x501335BC` | the greet, with the `sound/` prefix |

and the log lines `"voice sound: %s"`, `"wake sound: %s"`,
`"greet sound: %s"`, `"general voice sound: %s"`, `"voice cache: %s"`.

The **ground truth** is in `analysis/rea/pak0.list`:

```
sound/enemy/npc1/irq1a/Greet1.adp
sound/enemy/cln1/sib3/Wake1.wav
sound/Enemy/Ra1/Ger1/help.wav
```

which matches the formats exactly (`enemy/npc` + `1` + `/irq1a/` +
`Greet1.adp`).

### The two voice helpers

| the function | what it does |
|---|---|
| `FUN_5001E050` | the **voice event**: it maps the name to the id, picks a random variant (`FUN_50007520`), builds the path and precaches the sound (import slot 1) into the AI at `+0x68` (the handle), `+0x6C` (the entity) and `+0x70` (the volume `0.4`) |
| `FUN_5001E290` | the **wake**: it probes `Wake1.wav`, `Wake2.wav`, ... with `FS_FileExists` and plays the first one it finds |
| `FUN_5001E420` | the **greet**: it builds `"%s%d/%s/Greet%d.adp"` with a counter at `+0x194` and precaches it |
| `FUN_5001E5A0` | the **general voice**: `"%s/%s%d.wav"` with the directory from the caller and `irand(1)` (import slot 77) for the variant |

## C.4 What this closes

* the `.os` `PlaySound` statement is **opcode `0x1E`** and its two engine
  calls are the **precache sound** (import slot 1) and the **`StartSound`
  wrapper** (import slot 22) - so the browser can play a mission-script
  sound the same way the engine does;
* the statement table (all 54 opcodes) is now known, so the `.os` compiler
  can be re-implemented in the browser if that is wanted;
* the AI voice lines are a **separate** system: the event name, the id, the
  path formats and the level prefixes are all known, and the file names
  exist in `pak0.list`;
* the `.os` scripts carry the **sound paths**, not the **voice event names**
  - the voice events live in the AI's own data.

## C.5 The three former open items, resolved

### C.5.1 The unnamed opcodes

Every opcode in the `0x00`-`0x35` switch is now named in C.1 above. The names
come from three independent sources: the error strings at
`0x50145774`-`0x50145E18`, the handler behaviour in the REA decompiles, and
the debug strings at `0x50145AD4`-`0x50145CEC`. The previous "unnamed" list was
a consequence of reading only the string table, not the switch body.

### C.5.2 `HandleSpawn` is a value kind, not a statement opcode

`HandleSpawn` is **`FUN_5007B750`**. It is reached only from
`FUN_5007B9A0` case **5** (`4007bd??` in the raw stream), which itself is
called by statement opcode **`0x11` (Push)** with a leading kind byte **7**.
So the wire form is:

```
0x11                 # Push
0x07                 # value kind 7 (HandleSpawn family)
0x05                 # sub-opcode 5 -> FUN_5007B750
<N:u8>               # number of (classname, key/value) pairs
repeat N:
    <classname string>  # value object +0x14
    <value object>      # popped from the stack
```

`FUN_5007B750` pops the two values per pair, looks the classname up in the
`0x5014ED70` `s_classname` table and writes the payload into the spawn record:
type 0 = int, 2 = float, 3 = string, 4 = vector, 5 = a two-float/int pair.
It then calls `FUN_500BD570(record)` to spawn the entity and returns a value
object carrying the entity pointer (`+0x11 = 3`, `+0x13 = entity`). The
`"Invalid stack for HandleSpawn()"` error string at `0x50145774` is the proof
of the name; the old guess `0x1A` is definitively the debug dump.

### C.5.3 The general-voice caller

The general voice path `FUN_5001E5A0` (`"%s/%s%d.wav"`) is called from the AI
body damage handler `FUN_5002B8E0` at **`0x5002BA68`**:

```
5002ba59: push 0x3f4ccccd        ; volume 0.8
5002ba5e: push 0x3               ; variant count / id
5002ba60: push %esi              ; the damaged entity
5002ba61: push 0x50133ac8        ; "hit"
5002ba66: mov  %edi,%ecx         ; the AI controller/body
5002ba68: call 0x5001e5a0
```

This branch is taken when damage flag bit `0x20` is set
(`5002ba54: test ah,0x20`), i.e. the hit/gore voice path. The event name is
read from controller virtual `+0x174`; the directory is the literal `"hit"`,
so the resulting path is `"hit/<event><variant>.wav"`.
