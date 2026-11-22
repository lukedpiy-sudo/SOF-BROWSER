# AI controller class-code → controller vtable → body class/body vtable map

Target: `sof_target/gamex86.dll`, image base **0x50000000** (identity-mapped
`.text` rva/raw 0x1000, `.rdata` 0x116000, `.data` 0x12F000).
All addresses below are VAs. Evidence sources: `analysis/rea/game_disasm.txt`,
`analysis/rea/ghoul_all/functions/0x50001a30.c`, raw PE bytes, and helper
scripts `_full_chain.py` / `_bodyfactory.py` / `_scan_vtables.py` in this dir.
Nothing here is executed or guessed: every value is read from the bytes or the
Ghidra decompile. Sha256 of the DLL is unchanged from the project baseline.

## 0. The two dispatch points (the spine of the map)

| role | function | evidence |
|---|---|---|
| **AI class code → controller vtable** | **`FUN_50001a30` @ 0x50001A30** | `switch(param_1)` with 104 `case`s; default calls `(*DAT_5015CA24)("ERROR: invalid ai class code: %d\n", param_1)` at 0x5012F4BC |
| **body class code → body factory/vtable** | **`FUN_50010DC0` @ 0x50010DC0** | jump table at **0x50011164** (11 entries, `lea -3(%ecx); cmp $0xa`); default path prints `"ERROR: invalid body class code: %d\n"` at **0x5012F7E0** and falls through to body cc 3 |

`FUN_50001a30` is called only from the entity factory `FUN_50008E90` @ **0x50008E90**
(`piVar6 = FUN_50001a30(param_1)`), whose callers pass the small integer class
code as the first push, e.g. `500c6ef4: push $0x10` / `500e3cf9: push $0x22`,
then store the returned controller at **entity+0x450**
(`500e3d03: mov %eax,0x450(%edi)`).
The controller is a C++ object whose **slot 0 = the "set body" virtual method**;
its vtable is written directly by `FUN_50001a30` (`*puVar1 = &PTR_LAB_<vtable>`)
or, for cc 0x09/0x0A, by the two constructors `FUN_500EC520` / `FUN_500E9CB0`.

The controller holds the body at **+0x22C** (primary pointer written by every
set-body method) and a second body-interface pointer at **+0x230** (e.g.
`500038a7/500038ad: mov %esi,0x22c(%ebx) ; mov %esi,0x230(%ebx)`,
`500d0052: mov %ebx,0x230(%esi)`). This is the **AI controller/body** object
pair. It is unrelated to the player weapon object at client+0x34C (see §6).

## 1. The two controllers explicitly requested — FULL chain

### cc 0x0A → controller vtable 0x50129A88 → set-body 0x500E8910 → body 0x501260B0

| step | address | evidence |
|---|---|---|
| AI class code | **0x0A** | `case 0xa` in `FUN_50001a30`: `operator_new(0x2a4)` then `puVar1 = FUN_500e9cb0(puVar1)` |
| controller ctor | **0x500E9CB0** | `500e9cb3: call 0x500ec520` (base) then `500e9cbb: movl $0x50129a88,(%esi)` |
| controller vtable | **0x50129A88** | `movl $0x50129a88,(%esi)` at 0x500E9CBB; also `500e8260: movl $0x50129a88,(%ecx)`; slot0 `0x50129a88 → 0x500e8910` |
| set-body (slot 0) | **0x500E8910** | `500e8938: mov 0x22c(%esi),%eax ; test ... ; 500e8946: push $0xc0 ; 500e894b: call 0x501070b0 ; 500e8966: call 0x500148f0 ; 500e8979: mov %eax,0x22c(%esi)` |
| body factory (ctor) | **0x500148F0** | calls base `0x50013E40`, then `5001492a: movl $0x501260b0,(%esi)` |
| body vtable | **0x501260B0** | sole vtable store in 0x500148F0; size **0xC0** bytes |
| body class code (body factory) | **0x0B (11)** in `FUN_50010DC0` | case 8: `push $0xc0 ; call operator_new ; call 0x50011190 ; ... 50011083: movl $0x501260b0,(%esi)` — same vtable/size, built inline |

### cc 0x09 → controller vtable 0x50129CF8 → set-body 0x500EA820 → body 0x501261F8

| step | address | evidence |
|---|---|---|
| AI class code | **0x09** | `case 9`: `operator_new(0x2a4)` then `puVar1 = FUN_500ec520(puVar1)` |
| controller ctor | **0x500EC520** | `500ec527: call 0x50004710` (base) then `500ec52f: movl $0x50129cf8,(%esi)` |
| controller vtable | **0x50129CF8** | `movl $0x50129cf8,(%esi)` at 0x500EC52F (also 0x500EC5C9); slot0 `0x50129cf8 → 0x500ea820` |
| set-body (slot 0) | **0x500EA820** | `500ea848: mov 0x22c(%esi),%eax ; ... ; 500ea856: push $0xac ; 500ea85b: call 0x501070b0 ; 500ea876: call 0x50013e40 ; 500ea889: mov %eax,0x22c(%esi)` |
| body factory (ctor) | **0x50013E40** | `50013e65: movl $0x50126470,(%esi)` then final `50013ed4: movl $0x501261f8,(%esi)` |
| body vtable | **0x501261F8** | final vtable store wins; size **0xAC** bytes |
| body class code (body factory) | **0x0A (10)** in `FUN_50010DC0` | case 7: `push $0xac ; ... 50010faa: movl $0x50126470,(%eax) ; 50011019: movl $0x501261f8,(%eax)` — same final vtable/size |

Note both set-body functions pass their argument (the body class code, `edi`)
into the body ctor (`500e8963: push %edi ; ... call 0x500148f0`;
`500ea873: push %edi ; ... call 0x50013e40`), and the ctors' inline equivalents
in `FUN_50010DC0` assign the same body vtables — this is how the two dispatchers
cross-reference each other.

Neighbouring data: `0x50129A80` and `0x50129CF0` (8 bytes *before* each
controller vtable) are stored into globals `0x5018B1F8` / `0x5018B1FC`
(`500e81c0`, `500ea0e0`) and are the base-class vtable anchors.

## 2. Full AI class-code → controller vtable table (`FUN_50001A30`)

Controller object size is 0x2A4 for cc 0x09/0x0A, 0x2A0 for cc 0x08,
0x278 for cc 0x0D, 0x270 for all others. Base constructor groups:
`50004710` (cc 0x06,0x08,0x0B–0x0E), `50009530` (cc 0x0F–0x4E,0x5C,0x5D),
`50003760` (cc 0x4F–0x5B,0x5E–0x63), `50003780` (cc 0x64–0x6E).

| cc | controller vtable | set-body (slot0) | body ctor | body vtable |
|---|---|---|---|---|
| 0x06 | 0x50124418 | 0x500CC2A0 | 0x50015520 | 0x50126618 |
| 0x08 | 0x501241C8 | 0x500D01D0 | 0x50012870 | **0x50126338** (0x50126470 overridden at 50012918) |
| **0x09** | **0x50129CF8** | **0x500EA820** | 0x50013E40 | **0x501261F8** |
| **0x0A** | **0x50129A88** | **0x500E8910** | 0x500148F0 | **0x501260B0** |
| 0x0B | 0x50123FA0 | 0x500CBC30 | 0x5001B120 | 0x50126B60 |
| 0x0C | 0x50123D78 | 0x500CBD60 | 0x5001B2E0 | 0x50126CF0 |
| 0x0D | 0x50123B30 | 0x50004660 (bare `ret $0x4`, **no body**) | — | — |
| 0x0E | 0x501238F0 | 0x500CAAA0 (indirect: `call *0x11c(%edx)` → `0x50010DC0`) | via body factory | see §4 |
| 0x0F–0x1E | 0x501236B0, 0x50123470, 0x50123230, 0x50122FF0, 0x50122DB0, 0x50122B70, 0x50122930, 0x501226F0, 0x501224B0, 0x50122270, 0x50122030, 0x50121DF0, 0x50121BB0, 0x50121970, 0x50121730, 0x501214F0 | 0x500C4A40 | 0x50031840 | 0x501272F8 (size 0x1EC) |
| 0x1F–0x27 | 0x501212B0, 0x50121070, 0x50120E30, 0x50120BF0, 0x501209B0, 0x50120770, 0x50120530, 0x501202F0, 0x501200B0 | 0x500CA980 | 0x50033550 | 0x50127510 (size 0x1EC) |
| 0x28 | 0x5011FE70 | 0x500DAD80 | 0x50016D80 | 0x501267A8 (size 0x1F4) |
| 0x29 | 0x5011FC30 | 0x500DB0A0 | 0x50016D80 | 0x501267A8 (size 0x1F4) |
| 0x2A–0x63 | 0x5011F9F0 … 0x501179B0 (contiguous -0x240 stride; 58 vtables, incl. 0x5011DA70/0x5011D830 at cc 0x5C/0x5D) | 0x500CA980 | 0x50033550 | 0x50127510 |
| 0x64–0x6E | 0x50117770, 0x50117530, 0x501172F0, 0x501170B0, 0x50116E70, 0x50116C30, 0x501169F0, 0x501167B0, 0x50116570, 0x50116330, 0x501160F0 | 0x500C7D90 | 0x50037080 | 0x50127718 (size 0x1EC) |

The 0x2A–0x63 vtables in order (cc : vtable):
0x2A:5011F9F0 0x2B:5011F7B0 0x2C:5011F570 0x2D:5011F330 0x2E:5011F0F0
0x2F:5011EEB0 0x30:5011EC70 0x31:5011EA30 0x32:5011E7F0 0x33:5011E5B0
0x34:5011E370 0x35:5011E130 0x36:5011DEF0 0x37:5011DCB0 0x38:5011D5F0
0x39:5011D3B0 0x3A:5011D170 0x3B:5011CF30 0x3C:5011CCF0 0x3D:5011CAB0
0x3E:5011C870 0x3F:5011C630 0x40:5011C3F0 0x41:5011C1B0 0x42:5011BF70
0x43:5011BD30 0x44:5011BAF0 0x45:5011B8B0
0x46:5011B670 0x47:5011B430 0x48:5011B1F0 0x49:5011AFB0 0x4A:5011AD70
0x4B:5011AB30 0x4C:5011A8F0 0x4D:5011A6B0 0x4E:5011A470 0x4F:5011A230
0x50:50119FF0 0x51:50119DB0 0x52:50119B70 0x53:50119930 0x54:501196F0
0x55:50118970 0x56:501194B0 0x57:50119270 0x58:50119030 0x59:50118DF0
0x5A:50118BB0 0x5B:50118730 0x5C:5011DA70 0x5D:5011D830 0x5E:501184F0
0x5F:501182B0 0x60:50118070 0x61:50117E30 0x62:50117BF0 0x63:501179B0.

(The cc→vtable pairs and set-body associations above are reproduced verbatim by
`python3 analysis/rea/_full_chain.py`.)

## 3. How the controller vtable → body association was derived

Each controller vtable's **slot 0** is a dword in `.rdata` read from the raw PE;
all eleven distinct set-body functions allocate with `operator_new(0x501070B0)`
and write the result to `controller+0x22C`:

```
0x500C4A40 size 0x1EC → ctor 0x50031840 → body vtable 0x501272F8
0x500C7D90 size 0x1EC → ctor 0x50037080 → body vtable 0x50127718
0x500CA980 size 0x1EC → ctor 0x50033550 → body vtable 0x50127510
0x500CBC30 size 0x090 → ctor 0x5001B120 → body vtable 0x50126B60
0x500CBD60 size 0x090 → ctor 0x5001B2E0 → body vtable 0x50126CF0
0x500CC2A0 size 0x094 → ctor 0x50015520 → body vtable 0x50126618
0x500D01D0 size 0x1B8 → ctor 0x50012870 → body vtable 0x50126338
0x500DAD80 size 0x1F4 → ctor 0x50016D80 → body vtable 0x501267A8
0x500DB0A0 size 0x1F4 → ctor 0x50016D80 → body vtable 0x501267A8
0x500E8910 size 0x0C0 → ctor 0x500148F0 → body vtable 0x501260B0
0x500EA820 size 0x0AC → ctor 0x50013E40 → body vtable 0x501261F8
+ 0x50004660 (no-op), 0x500CAAA0 (delegates to 0x50010DC0)
```

Body vtable vtables 0x50126xxx/0x50127xxx all appear in `vtable_map_09c.txt`
with `+0x09c → 0x50014620`, confirming they are the same "body" class family.

## 4. Body class code → body vtable (`FUN_50010DC0`, jump table 0x50011164)

The switch index is `arg - 3` (`lea -3(%ecx); cmp $0xa`); the valid body class
codes are 3..13:

| body cc | case target | allocation | ctor | final body vtable |
|---|---|---|---|---|
| 3 | 0x5001111D | 0x1EC | 0x50033550 | 0x50127510 |
| 4 | 0x50010DEE | 0x1EC | 0x50031840 | 0x501272F8 |
| 5 | 0x50010E29 | 0x090 | 0x5001B120 | 0x50126B60 |
| 6 | 0x50010E64 | 0x090 | 0x5001B2E0 | 0x50126CF0 |
| 7 | 0x5001110E | (error msg, falls through to cc 3) | 0x50033550 | 0x50127510 |
| 8 | 0x50010E9F | 0x1EC | 0x50037080 | 0x50127718 |
| 9 | 0x50010EDA | 0x1B8 | inline (0x50010F77) | 0x50126338 |
| 10 | 0x50010F8E | 0x0AC | inline (0x50011019) | 0x501261F8 |
| 11 | 0x50011030 | 0x0C0 | 0x50011190 + inline | 0x501260B0 |
| 12 | 0x5001109C | 0x094 | 0x50015520 | 0x50126618 |
| 13 | 0x500110D7 | 0x1F4 | 0x50016D80 | 0x501267A8 |

## 5. Unresolved / special entries

* The valid AI class-code range is **0x06..0x6E** with a single hole at
  **0x07** (104 cases total); 0x07 and anything outside the range hit the
  `"invalid ai class code"` default (which still allocates a 0x270 base
  controller via `FUN_50004710` but assigns no derived vtable).
* **cc 0x0D** (vtable 0x50123B30): slot 0 = `0x50004660`, a bare `ret $0x4`.
  This controller never builds a body — no body ctor/vtable exists for it.
* **cc 0x0E** (vtable 0x501238F0): slot 0 = `0x500CAAA0`, which does not
  allocate directly; it calls `call *0x11c(%eax)` to obtain a body class code
  from the entity/model and passes it to `FUN_50010DC0` (§4). Its body type is
  therefore dynamic (one of the §4 rows).
* **cc 0x08** body ctor `0x50012870` and **cc 0x09** body ctor `0x50013E40`
  (and `FUN_50010DC0` cases 9/10) write `0x50126470` first, then overwrite with
  `0x50126338` / `0x501261F8`. The **final** value is the effective body vtable;
  `0x50126470` is the intermediate/base assignment.
* `0x50010DC0` case 7 (body cc 7) is an error path ("invalid body class code")
  which still falls through into the body-cc-3 constructor.
* `0x501160F0`-`0x50124640` vtables are shared by multiple AI class codes
  (same set-body function); the map is many-to-one at the body level by design.
* No data table of {classcode, vtable} records exists — all associations live in
  the two code switches; raw-byte scans for the vtable/ctor pointers outside
  `.rdata` vtables returned zero hits.

## 6. Keep separate: the player weapon object at client+0x34C

This is **not** the AI controller/body pair above. The player's client pointer
is `entity+0x74`; the weapon object hangs off `client+0x34C` and is called through
the weapon vtable (`call *0x5c(%edx)`, `call *0x11c(...)` etc.):

```
50012cdf: mov 0x74(%eax),%eax        ; client
50012ce6: mov 0x34c(%eax),%ecx        ; weapon object
50012cf0: mov (%ecx),%edx            ; weapon vtable
50012cf2: call *0x5c(%edx)
```
```
50065a37: mov 0x74(%ebx),%eax        ; client
50065a3a: mov 0x34c(%eax),%ecx       ; weapon object (weapon_fire.md)
```
It has no `+0x22C`/`+0x230` body fields and is never produced by
`FUN_50001A30`/`FUN_50010DC0`.

## 7. Reproduction

```bash
cd "/home/luked/Desktop/GITHUB/SOF BROWSER"
python3 analysis/rea/_full_chain.py      # class-code -> vtable -> set-body -> body
python3 analysis/rea/_bodyfactory.py     # body class code jump table (0x50011164)
python3 analysis/rea/_scan_vtables.py    # locate set-body fns as .rdata vtable entries
```
Helper scripts are untracked analysis scratch files in `analysis/rea/`; no
tracked file was modified.
