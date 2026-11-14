# The `.gpm` player-model script — SOLVED 2026-11-13

The `.gpm` file is the **player model script**: it names the Ghoul models a
player uses, binds the animation states to the model files, and lists the
bolt-on attachments.

All of the statements below were read out of the engine's own parser:

| what | where |
|---|---|
| the tokenizer factory | `SoF.exe 0x200494C0` (import slot 61) |
| the tokenizer constructor | `SoF.exe 0x20047C80` |
| the tokenizer vtable | `SoF.exe 0x20111D88` |
| the reset / open | `SoF.exe 0x20047D70` (vtable slot `+0x00`) |
| the delete | `SoF.exe 0x20047D50` (vtable slot `+0x48`) |
| the record parser | `SoF.exe 0x20047680` |
| the block parser | `SoF.exe 0x200478C0` |
| the list-1 record builder | `SoF.exe 0x20047F40` |
| the token reader | `SoF.exe 0x20047550` |
| the separator skipper | `SoF.exe 0x20047470` |
| the module's user | `gamex86.dll 0x500EEF20` |

The factory allocates a **0x3B4-byte** object and runs the constructor,
which installs the vtable `0x20111D88` and then calls the reset/open.

## 1 The tokenizer

The tokenizer is a small class with **three lists** and a handful of
string buffers.

| vtable slot | function | what |
|---|---|---|
| `+0x00` | `0x20047D70` | reset the lists, then open `Ghoul/pmodels/%s` |
| `+0x0C` | `0x20048000` | the **count of list 1** (`this+0x300`) |
| `+0x10` | `0x20048010` | the **count of list 2** (`this+0x30C`) |
| `+0x14` | `0x20048020` | the **count of list 3** (`this+0x318`) |
| `+0x18` | `0x20048030` | the string at `this+0x68` — the model path |
| `+0x1C` | `0x20048040` | the string at `this+0xCC` — the `.ghl` path |
| `+0x20` | `0x20048050` | the string at `this+0x130` |
| `+0x24` | `0x20048060` | the string at `this+0x194` |
| `+0x28` | `0x20048070` | the string at `this+0x1F8` |
| `+0x2C` | `0x20048210` | a copy of the string at `this+0x22A` |
| `+0x30` | `0x20048080` | a copy of the string at `this+0x31C` |
| `+0x34` | `0x200480A0` | a copy of the string at `this+0x34E` |
| `+0x38` | `0x200480D0` | read item *i* of **list 1** |
| `+0x3C` | `0x20048140` | read item *i* of **list 2** |
| `+0x40` | `0x200481C0` | read item *i* of **list 3** |
| `+0x44` | `0x200480C0` | the **EOF flag** (`this+0x2F2`) |
| `+0x48` | `0x20047D50` | delete the tokenizer |

The three lists are circular doubly-linked lists; the head is a pointer at
`this+0x2FC` (list 1), `this+0x308` (list 2) and `this+0x314` (list 3),
and the count sits at `+0x300`, `+0x30C` and `+0x318`.  Each node is a
12-byte link plus a pointer to the payload (`node+0x08`).

## 2 The token rules

`FUN_20047550(handle, &cursor, dest)` reads one token:

* a `{` is consumed and the token is read after it;
* a `}` is consumed and the reader returns **false** (the end of a block);
* a `"` starts a **quoted string** which runs to the next `"` (the quotes
  are not part of the value, and there are no escapes);
* otherwise the token runs until one of `{ } \f \v \t \r \n`, a space, or
  a `//` comment.

`FUN_20047470(handle, &cursor)` skips the separators (the whitespace and
the `//` comments) and returns true when there is anything left.

## 3 The file layout

The record parser `FUN_20047680` is **positional** — the kind of a block
is decided by *where* it appears, not by what is in it.

```
token 1   -> this+0x68   the model path            (e.g. "enemy/meso")
token 2   -> this+0xCC   sprintf(this+0xCC, 100,
                                 "ghoul/%s/%s.ghl", token1, token2)
token 3   -> this+0x130
token 4   -> this+0x194
token 5   -> this+0x31C
token 6   -> this+0x34E
token 7   -> this+0x1F8
```

then, in this exact order:

| block | the reader | the record | the list |
|---|---|---|---|
| **1** | three tokens at a time | a 200-byte record: the strings at `+0x00`, `+0x32`, `+0x96` | list 1 |
| **2** | four tokens at a time | a 204-byte record: a **float** at `+0x00`, the strings at `+0x04`, `+0x36`, `+0x68` | list 2 |
| **3** | two tokens at a time | a 51-byte record: the string at `+0x00`, a **byte** at `+0x32` | list 3 |

and finally one more token into `this+0x22A` (the tail).

The braces are what separate the blocks: each block ends when the token
reader meets a `}`.

### The three record kinds

**Block 1 — the animation bindings.**  Three tokens:

```
<state> <model file> <flag>
```

The record is built by `FUN_20047F40(a, b, c)`:

* `+0x00` = `a` — the animation state code (e.g. `a`, `b`, `f`, `h`);
* `+0x32` = `b` — the model file name (e.g. `a_brian`);
* `+0x96` = `c` — **only if `c` is not `"0"`**; a leading `0` means the
  field is empty.

**Block 2 — the bolt-ons.**  Four tokens:

```
<.gbm path> <bolt name> <to name> <scale>
```

The record is built by `FUN_200478C0`:

* `+0x00` = the **float** scale (`atof` of the fourth token);
* `+0x04` = the bolt name (the second token);
* `+0x36` = the `to` name (the third token);
* `+0x68` = the `.gbm` path (the first token).

**Block 3 — the extra meshes.**  Two tokens:

```
<name> <flag>
```

The record is built inline in `FUN_20047680`:

* `+0x00` = the name;
* `+0x32` = the byte `(atoi(flag) != 0)`.

## 4 The module's use of it

`gamex86.dll 0x500EEF20` is the loader.  It opens the file through the
engine's import slot 61 (`0x200494C0`), which formats the name with
`"%s.gpm"`, and then:

1. it looks the player model up in the model-name table `DAT_5015C79C` with
   `FUN_500A5C10(table, token1, token4, 0, token5, token3, 0)`.  The
   record holds four 100-byte strings at `+0x42A`, `+0x48E`, `+0x4F2` and
   `+0x556` — the four keys are token 1, token 4, token 5 and token 3;
2. if the record is not a team model (`record+0x0A` is empty) it pushes 13
   empty strings and two `gz`/`c` strings and then reads **token 7**
   (`this+0x1F8`) as the default model;
3. it walks **list 1** (the animation bindings) and pushes them with
   `FUN_500A5290`, skipping the ones that are already registered (it
   compares the first two strings of each record);
4. it walks **list 2** (the bolt-ons) and opens each `.gbm` through the
   same factory.

A `.gpm` file defines **exactly one** player model: `FUN_20047680`
always returns 0, so the loop in `FUN_20047D70` runs once.

## 5 The ground truth

`samples/gpm/Assault.gpm`:

```
enemy/meso
meso_menu1
meso_player
playerboss
"Capture, Inc"
enemy/dth/rad
f_brian_
{
a a_brian 0
b b_brian 0
f f_brian_n 0
h h_brian 0
}
{
boltons/acc_brian_beret.gbm abolt_head_t to_abolt_head_t 1.0
boltons/acc_brian_box_hip.gbm abolt_hip_r to_abolt_hip_r 1.0
boltons/acc_brian_holster.gbm abolt_chest to_abolt_chest 1.0
boltons/acc_brian_grenade.gbm abolt_back to_abolt_back 1.0
boltons/menushot.gbm wbolt_hand_r to_wbolt_hand_r 1.0
}
{
_crewhead 0
_beardhead 0
_beardface 0
_mohawk 0
_lbang 0
_rbang 0
_ponytail 0
_helmethead 0
_helmetface 0
}
""
```

which reads as

* the header: the path `enemy/meso`, the menu model `meso_menu1` (so the
  override is `ghoul/enemy/meso/meso_menu1.ghl`), the player model
  `meso_player`, the boss model `playerboss`, the team `Capture, Inc`,
  the rag-doll path `enemy/dth/rad` and the file prefix `f_brian_`;
* **block 1**: the four animation bindings `a`/`b`/`f`/`h`;
* **block 2**: the five bolt-ons, all at the scale 1.0;
* **block 3**: the nine extra meshes, all with the flag 0;
* the tail: the empty string `""`.

The browser parser is `parseGpm()` in `web/ghb.js`; it follows the engine
exactly (the positional blocks, the `"0"` rule of block 1 and the
`(atoi != 0)` rule of block 3).

## 6 The `.gbm` is the SAME format

The `.gbm` bolt-on models are **not** models: they are 90-120 byte text
files in exactly this format, and the engine reads them with the same
tokenizer (the factory `0x200494C0` is called with one argument for them
and with five for the `.gpm`; only the first argument — the path — is
used, and the reset/open prefixes it with `Ghoul/pmodels/`).

`ghoul/pmodels/boltons/acc_brian_beret.gbm` is:

```
enemy/bolt
acc_brian_beret
acc_brian_beret
acc_brian_beret
""
""
""
<blank line>
acc_brian_beret acc_brian_beret 0
```

so the header is the seven tokens and the single record is a **block 1**
record: the animation state `acc_brian_beret` is bound to the model file
`acc_brian_beret`, with no override.

All 19 of the `.gbm` files in `pak2` have this shape.

## 7 The `.gsq` is a different thing

The `.gsq` is **not** read by this tokenizer.  It has its own loader
(`SoF.exe 0x20049190`, the engine's import slot 65) which reads it line by
line, treats a line that starts with `#` as an include of another `.gsq`
and turns every other line into the side file `ghoul/<dir>/<name>.ghl`.
See `analysis/ghb_format.md` §8.5.1.
