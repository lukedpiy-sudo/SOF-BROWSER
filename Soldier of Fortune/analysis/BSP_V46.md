# SoF wire protocol — SOLVED (2026-10-20)

Everything below is **verified live** against the SoF dedicated server
(`SoF.exe +set dedicated 1 +map dm/nycdm1`, UDP 28910).

Reference implementation: `web/sofclient.js` (Node, no native code).

---

## 1. Out-of-band handshake

UDP packets prefixed with `ff ff ff ff`.

```
C->S  "getchallenge 1\n"
S->C  "challenge 1210259646"
C->S  "connect 33 <seed> <challenge> <unixtime> 3.14 \"<userinfo>\"\n"
S->C  "client_connect"
```

* field 1 = protocol version (33)
* field 2 = **the seed** (see below)
* field 3 = the challenge (echoed)
* field 4 = a Unix timestamp (freshness check at `0x2005DBD3`)
* field 5 = pi, printed with `%4.2f` -> `3.14`
* field 6 = the userinfo, e.g.
  `\name\webclient\spectator\0\cl_violence\63\fov\95\rate\3000\team_red_blue\0`

The server answers with the client entity info:
`webclient\*The Order\*dekker\-1\0`.

### The seed

The server stores the connect's field 2 in **`cl->[0x5294]`** and requires
every in-band frame to echo it back as a u16 — so the seed **must be < 65536**
(the stock client uses `int(pi)` = 3).  Verified by reading the live server's
memory with `tools/dumpall.c`:

```
client[0] state=2  [0x5294]=3(0x3)      <- seed == connect field 2
```

---

## 2. In-band frame layout

```
  offset  size  meaning
  0       4     netchan word 1 (u32 LE) = the outgoing sequence
                                          | (fragment flag << 31)
  4       4     netchan word 2 (u32 LE) = the acknowledged peer sequence
                                          | (reliable toggle << 31)
  8       2     seed               (u16 LE)  == the connect's field 2
  10      1     type
  11      ..    payload
```

The server sends the same 8 byte header **without** the seed, so for the
server -> client direction the *service byte* is at offset 8 and the payload
starts at offset 9.  The seed is only needed client -> server (the server
stores it at `cl->[0x5294]` and checks it).

The header is written by `Netchan_Transmit` (SoF.exe `0x2004D400`):

```
2004D4D1  mov ecx,[ebx+3Ch]        ; the outgoing sequence
2004D4DB  and eax,7FFFFFFFh        ; mask the flags
2004D4E0  shl edx,1Fh               ; the fragment flag
2004D4E5  mov edx,[ebx+2Ch]        ; the acknowledged peer sequence
2004D4E8  shl esi,1Fh               ; the reliable toggle
2004D4F2  or  esi,edx               ; word 2 = toggle<<31 | ack
```

* **type 4** = string command: a NUL-terminated text.
  `new`, `configstrings <N> <V>`, `baselines <N> <V>`,
  `ghoulstrings <N> <V>`, `begin <N>`
* type 1 = keepalive, type 2 = checksummed command, type 3 = OOB.
* Dispatch table for the string commands: file RVA `0x13A390`
  (0=new, 1=configstrings, 2=baselines, 3=begin, 4=nextserver, 5=disconnect,
  6=download, 7=nextdl, 8=ghoulstrings, 9=info, 10=sv_precache).

### The three netchan rules that decide whether anything works

1. **The reliable toggle in word 2 has to alternate with every packet.**
   Every client message is a reliable message, so the sender flips the bit
   each time.  A constant toggle makes the server treat the packets as
   duplicates and it silently drops the payload.
2. **The client has to keep sending packets.**  The server keeps its
   outgoing reliable message in a queue until the client acknowledges it,
   and the acknowledgement only advances when a packet arrives.  A client
   that answers a request and then goes silent deadlocks the handshake:
   the server's message buffer stays full, it cannot write the next
   request, and the cursor never advances.  The browser client therefore
   sends a packet every 50 ms from the moment it is connected.
3. **Word 1 must carry the fragment flag** (`0x80000000`) for the client ->
   server direction: the server only reads the payload of packets that are
   marked as carrying a reliable message.

The reliable-message bookkeeping is in `Netchan_Process`
(SoF.exe `0x2004D640`): the incoming sequence is stored at `netchan+0x2C`,
the incoming reliable sequence at `netchan+0x34` and the toggle at
`netchan+0x38`; a gap in the incoming sequence is a hard error ("lost
packet"), so the client's sequence numbers must be consecutive.

### The trap that cost us days

The **seed u16 is little endian**, while the 4-byte netchan/reliable headers
are *sequences and flags* (u32 LE each) — not big-endian dwords.  An earlier
attempt sent `[u32 seq][u32 ack][u16 seed]` big-endian and every frame was
silently dropped by the netchan layer.

Symptom of the wrong layout: the server answers the OOB handshake and sends
the userinfo, but `netchan->incomingSequence` (`cl->[0x5298]`) never advances.

---

## 3. The session

```
C->S "new"
S->C userinfo + map name + "cmd configstrings 42 0"
C->S "configstrings 42 0"
S->C the configstring table (735 bytes) + "cmd configstrings 42 397"
C->S "configstrings 42 397"          <- the cursor; the server loops until
                                        it has sent every configstring
C->S "baselines 42 0"
C->S "ghoulstrings 42 0"
C->S "begin 42"
S->C entity snapshots (225 bytes each, ~20/s)
```

The token (`42` above) is the server's `nextserver` cvar value; the server
prints it in its request and the client must echo it back verbatim.

Verified in the server console (with `developer` = 1):

```
New() from webclient
Configstrings() from webclient
Baselines() from webclient
Ghoulstrings() from webclient
Begin() from webclient
```

### Server -> client payload records

Every server datagram starts with the 8 byte netchan header and the **service
byte at offset 8**; the payload follows at offset 9:

```
[seq u16 LE][0x8000][ack u16 LE][flags u16 LE][service u8][payload]
```

(The 4th word is the netchan flags: `0x8000` reliable, `0x0000` unreliable.
The *service* byte is what identifies the message: `0x0F` configstrings,
`0x17` svc_frame, `0x0D` a string command, `0x05` the userinfo block.)

| service | meaning |
|---|---|
| `0x05` + `ffff` + text | the client entity userinfo (right after `new`) |
| `0x0D` + text | a command for the client (`cmd configstrings 42 0`) |
| `0x0F` | a **stream of configstring records** (see below) |
| `0x17` | a snapshot frame |

The first packet after `new` is:

```
01 00 00 80 | 01 00 00 80 | 0f 87 | 05 | ff ff "webclient\*The Order\*dekker\-1\0"
             0e 21 | 00 00 00 2a | 00 00 00 01 | 00 00 "NYCDM1\0"
             0d "cmd configstrings 42 0" 0a 00
```

`0x0e 0x21` = 33 (the protocol version), `00 00 00 2a` = 42 (the token),
`00 00 00 01` = 1, then the map name.

### Configstrings (solved 2026-10-20, late)

The configstring message is a **record stream** that starts with the service
byte `0x0F`; every record is:

```
[0x0F][u16 index LE][u16 value LE][data]
```

* `value == 0xFFFF` -> `data` is a **NUL terminated string** that follows
  immediately.
* any other `value` -> the configstring holds a **number**: the index into
  the engine's **global string table** (`SoF.exe` `0x201217B0`, 1927
  entries, extracted to `web/sofstringtable.json`).  SoF never transmits the
  model or sound names, only their table index, and the client resolves the
  name locally.  Example from a live `dm/nycdm1` session:

```
cs[36]  = 1657  ->  "maps/dm/nycdm1.bsp"
cs[648] = 1887  ->  "weapons/world/claymore"
cs[650] = 1585  ->  "environ/onfireburst"
cs[662] = 1612  ->  "gore/stumpblood"
```

  The models live in the game's `Base\*.pak` files (4210 `.m32` files in
  `pak0.pak`) and the effect/model names above map to `*.eft` and
  `ghoul/pmodels/*.gpm` entries.

Live capture of `dm/nycdm1` (735 byte packet, 120 records):

```
0f 0000 ffff "NYCDM1\0"          <- index 0  = the map name (a string)
0f 0100 00ea                     <- index 1  = the number 234
0f 0200 069b                     <- index 2  = the number 1691
0f 0600 ffff "47969D6DC1B19C18B3B991C788CDE47C1C8B52B7D4B7\0"
0f 0161 ffff "enemy/dth/rad/Burn1.wav\0"
```

`web/sofproto.js` implements the parser (`parseConfigStrings`); the browser
HUD shows the map name and the number of received configstrings.

### The gamestate handshake (solved 2026-10-21)

The server drives the whole handshake and the client may only answer in the
same order - every one of the requests is refused once the client has
spawned (`client->state != 2` -> "configstrings not valid -- already
spawned"):

```
S->C "cmd configstrings <tok> <cursor>"   C->S "configstrings <tok> <cursor>"
S->C "cmd ghoulstrings <tok> <cursor>"    C->S "ghoulstrings <tok> <cursor>"
S->C "cmd baselines <tok> <cursor>"       C->S "baselines <tok> <cursor>"
S->C "precache <tok>"                     C->S "precache <tok>"
S->C "cmd begin <tok>"                    C->S "begin <tok>"   (state -> 3)
```

* `argv[1]` must be the **token** (the `nextserver` cvar value, bumped on
  every connect) or the server answers "SV_Configstrings_f from different
  level".
* `argv[2]` is the **cursor**: the client echoes it verbatim.  The
  configstring handler increments it, the ghoulstring handler sends one
  record per request.
* The configstring table is complete when the server moves on to the
  ghoulstrings.  The stock client then precaches the models and waits for
  "cmd begin"; the browser client does not precache and simply answers
  "begin <tok>" (the server accepts it at any time).
* With the netchan rules above the client receives **1240 configstrings**
  (340 strings + 900 table indices) instead of the 121 that the broken
  framing produced.

### Snapshot packets

The frame (svc `0x17` = svc_frame, `CL_ParseFrame` at `0x20002E90`):

```
u32  frameNumber          little endian
u32  deltaFrom            -1 = a full frame
f32  time                 the server/level time
u8   len                  the length of the command string
..   command string
u8   0x14                 the "playerinfo" marker
..   player state         (the game module's player_state_t)
u8   0x15                 the "packetentities" marker
..   entity list
```

The entity list (`CL_ParsePacketEntities`, `0x200025A0`):

```
bits = readByte()
if ((char)bits < 0)         bits |= readByte() << 8
if ((char)(bits >> 8) < 0)  bits |= readByte() << 16
if (bits & 0x800000)        bits |= readByte() << 24
number = (bits & 0x1000000) ? readShort() : readByte()
if (number == 0)            -> the end of the list
if (bits & 0x800)           -> the entity is removed
```

The entity state is **116 bytes** (`0x74`); it starts as a copy of the
baseline and the fields selected by `bits` are overwritten
(`CL_ParseEntityFields`, `0x20002120`).  The read order matters:

```
+0x04  0x0001  origin x     i16 * 1/8   -> stored as a float
+0x08  0x0002  origin y     i16 * 1/8   -> stored as a float
+0x0C  0x0020  origin z     i16 * 1/8   -> stored as a float
+0x10  0x0010  angle        u8  * scale
+0x14  0x0004  angle        u8  * scale
+0x1C  0x4000000 angle      u8  * scale
+0x18  0x0008  angle        u8  * scale
+0x3C  0x200000 (u8, +0x100 if 0x400000) and +0x40 (u8)
+0x44  0x40 (u8), +0x50 (u8), and when +0x44 is negative: +0x48, +0x54
+0x38  0x40000              i32
+0x5C.. 0x2000 -> 12 shorts selected by mask bits 0..11
```

**The origin is three floats at +0x04/+0x08/+0x0C** (in the decoded state)
in SoF's Z up order.  This was confirmed by matching the live entity
origins against the map's entity list (`web/originscan.js`): the offset 0x04,
the axis order x/y/z and no further scaling are the only combination that
produces exact matches.  Reading them as `i16 * 1/8` (the earlier guess)
gives garbage - the decoded state already holds floats.

The origin scale is **1/8** (the engine constant at `0x201113A8`): the wire
carries the position multiplied by 8.

The client keeps a **16 frame delta ring** (`0x201E7F68`, 0x104 bytes per
frame); the maximum delta age is **897 ms** (`0x381`).

### The player state block (partially solved)

The block between the `0x14` marker and the `0x15` marker is 29..32 bytes
(the length varies between frames, so the `0x15` marker has to be found
heuristically).  A live capture from `dm/nycdm1`:

```
14 f2 29 86 | 1a 12 84 00 | 02 01 d6 c1 | d2 c1 00 04 | 20 03 00 00 00 c0 00
```

* `+0x00` u32 - a millisecond counter (the low byte changes every frame).
* `+0x04..+0x09` three shorts - constant while the client is idle.
* `+0x0A..+0x0F` three shorts - change when the client is at another spawn
  point.

**Open issue:** the block does **not** change when the client looks around or
walks, so either the usercmds are not applied to this client, or the view
angles are not part of this block.  The entity list contains the client
entities, but the local entity number is **dynamic**: the dedicated server
never releases a stale client, so the slot (and with it the entity number)
grows with every test client.  A browser client therefore cannot assume
"entity 1 = me".

---

## 4. Usercmds (the movement channel)

```
[u8 0x02][u8 checksum][u32 seq][the bit packed usercmd]
```

* the checksum covers the bytes **after** the checksum byte (the u32 + the
  usercmd), and its **key sequence is the outgoing netchan sequence** (the
  first u16 of the frame's netchan header).
* The usercmd is 24 bytes and is bit packed and delta encoded against the
  previous command (the stock client's writer, `SoF.exe 0x20005D70`):

```
u8  msec      u8  buttons    u8 flags2   u8 flags3
u16 view0     u16 view1      u16 view2
i16 move0     i16 move1      i16 move2
f32 extra0    f32 extra1
```

**`move0/1/2` are the movement (forward, side, up), not angle deltas.**
They were mistaken for angle deltas until a sweep of every field
(`web/cmdsweep.js`) showed that writing 100/200/400 into `+0x0A` makes the
local player walk - and the same value in `+0x0C` strafes.  The engine's
speed scale is 400 for a run and 100 for a walk.

On the wire (all fields little endian, LSB first):

| field | unchanged | changed |
|---|---|---|
| view0/1/2 (u16) | one 0 bit | 1 bit + 12 bits of `(v >> 4)` |
| move0/1/2 (i16) | one 0 bit | 1 bit + 10 bits of `(v + 0x1FE)` |
| buttons (u8) | one 0 bit | 1 bit + 8 bits |
| flags3 (u8) | `0` -> one 0 bit | `>0` -> `1,0`; `<0` -> `1,1` |
| flags2 (u8) | `(v>>3)` unchanged -> 0 | 1 bit + 5 bits of `(v>>3)` |
| msec (u8) | always 8 bits | |
| extra0/1 (f32) | one 0 bit | 1 bit + 32 bits |

The view angles are carried in **1/16 degree units**, so `cmd.view0 = pitch * 16`.

A JS port that is **byte exact** against the engine lives in `web/cmdenc.js`
(`encodeCmd`); `web/cmdfit.js` diffs it against `tools/cmdwrite2.exe` (which
calls the engine's own writer through `LoadLibraryA`, no GUI) - 12/12 vectors
match.

The button bits: `0x01` forward, `0x02` speed, `0x04` back, `0x08` strafe,
`0x10` up/down, `0x20` klook/run, `0x40` lean, `0x80` lean key.

With valid usercmds the server moves the client from state 2 to state 3 and
starts streaming the world.

---

## 5. The assets (solved 2026-10-21)

### The `.bsp` v46 lump table

The header is `IBSP` + the version (46) + **22 lumps** of (offset, length) -
there is no `numlumps` field, the header is exactly 184 bytes and the file
ends exactly at the last lump.  The lumps are **not** in the Quake III order.

The engine prints the whole table when the `developer` cvar is on
(`CM_LoadLump: LUMP_<name> <n> entries (<bytes> in, <bytes> out)`), which is
the authoritative list.  For `dm/nycdm1`:

| file lump | engine name | entries | bytes | record |
|---|---|---|---|---|
| 0 | ENTITIES | - | 44022 | a text blob |
| 1 | PLANES | 2140 | 42800 | 20 B: 3 floats (the normal), a float (the distance), an int (the type) |
| 2 | VERTEXES | 7801 | 93612 | 12 B: 3 floats |
| 3 | VISIBILITY | - | 175407 | bytes |
| 4 | NODES | 3097 | 86716 | 28 B |
| 5 | **TEXINFO** | 2072 | 157472 | **76 B**: 8 floats (the S and T axes, the 4th = the offset), an int (the flags), an int, a 32 byte name, an int |
| 6 | FACES | 6070 | 267080 | **44 B**: u16 planenum, u16 side, i32 firstedge, i16 numedges, u16 texinfo, u16 flags, ... |
| 7 | LIGHTING | - | 726630 | bytes |
| 8 | LEAFS | 3100 | 99200 | 32 B |
| 9 | LEAFFACES | 7098 | 14196 | 2 B |
| 10 | LEAFBRUSHES | 3708 | 7416 | 2 B |
| 11 | EDGES | 15704 | 62816 | 4 B: 2 x u16 vertex indices |
| 12 | SURFEDGES | 28291 | 113164 | 4 B: an int - the 0 based edge index, the sign is the direction |
| 13 | MODELS | 2 | 96 | 48 B |
| 14 | BRUSHES | 1764 | 21168 | 12 B |
| 15 | BRUSHSIDES | 11541 | 46164 | 4 B |
| 16 | POP | 256 | 256 | |
| 17 | AREAS | 2 | 16 | 8 B |
| 18 | AREAPORTALS | 1 | 8 | 8 B |
| 19 | REGIONFACES | 0 | 0 | |
| 20 | LIGHTS | 1230 | 44280 | 36 B |

**The face layout and the surfedge rule were found by brute forcing the
record layout against the live data** (`web/bspface.js`, `web/bspfit.js`): the
first edge is at +4 and the edge count at +8, and the surfedge value is the
**0 based** edge index (not `index + 1` as in Quake II).  The proof that the
layout is right: **every face of every map is exactly coplanar with its
plane** (0 off plane, worst error 0.0000).

The face's `texinfo` field (+0x0A) indexes the TEXINFO table (lump 5); each
texinfo carries the texture name and the two UV axes, e.g. `subway/clip`.

`web/bspgeo.js` reads the geometry, `web/bsp2json.js` converts a map into
`web/www/map_<name>.json` (vertices, faces with their normals, the entity
list) for the browser renderer.

**SoF's world is Z up** (the maps' z range is the height), the WebGL
renderer is Y up, so the loader converts `(x, y, z) -> (x, z, y)`.

### The game data (`.pak`)

The models, the maps and the textures live in `Base\*.pak`.  A Quake II pak
is `PACK` + the directory offset + the directory length, and the directory
entries are **64 bytes**: a 56 byte name, an int file offset and an int
length (the classic 64 byte name field does not apply to the SoF paks).
`pak0.pak` holds 9728 files, 4210 of them `.m32` models, plus
`ghoul/pmodels/*.gpm` (the player model definitions), 476 `.ghb` (the Ghoul
meshes and animations, 196 MB), 390 `.adp` (the audio), 308 `.gsq`
(the sequences), 252 `.ifl`, 211 `.eft` (the effects) and 1112 `.tga`
(the skins).

`web/pakget.js` extracts a single file from a pak.

The **model names are not transmitted**: the numeric configstring values are
indices into the engine's global string table (`SoF.exe` `0x201217B0`, 1927
entries, extracted to `web/sofstringtable.json`), so the client resolves
`cs[648] = 1887 -> "weapons/world/claymore"` locally.  Those names map onto
the pak: `weapons/world/claymore` -> `effects/weapons/world/claymore.eft` (87
of the model configstrings resolve this way).

In the BSP, **lump 5 is the material table**: 64 byte entries with the name
at +40 (2460 entries), which is where `subway/clip` and friends live.

---

## 6. Live oracle tooling (built this session)

| Tool | What it does |
|---|---|
| `tools/dumpall.c` | reads the live server's `client_t` out of process memory (state, netchan fields, the seed token, the port, `cl->[0x52C0]`) |
| `tools/dumpcl.c` | deep dump of one client slot (netchan bytes, the outgoing message buffer) |
| `tools/setdev.c` | flips the server's `developer` cvar in memory => **`Com_DPrintf` becomes visible in the server console** (the console is the engine's only reliable diagnostic) |
| `tools/dbgbreak.c` | hardware-breakpoint debugger (attach or launch mode) |
| `tools/patchmem.c` | write bytes into the running server (to bisect a check) |
| `tools/readconsole.exe` | dumps another process's console text |

Notes:
* the server prints to the console window it allocates, **never** to stdout —
  so a redirected stdout is useless; use `readconsole.exe`.
* `Com_DPrintf` is muted unless the `developer` cvar is set and odd.
* the dedicated server allows ~8 clients and never releases stale clients
  (our in-band disconnect is never dispatched) => **restart the server
  between test batches** or the runs die with `rejected_full`.
