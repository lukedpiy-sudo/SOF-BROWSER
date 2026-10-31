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

### The player state block (solved 2026-10-21)

The block between the `0x14` marker and the `0x15` marker is the game module's
`player_state_t`.  **It is bit packed**: a leading mask says which fields are
present, so the block's length *and* the offsets of its fields change from
frame to frame (29..42 bytes observed).  Nothing in it has a fixed offset.

The one field that can be found reliably is the **authoritative player
origin**: three shorts with the usual 1/8 scale.  It is present only in the
frames where the mask includes it, and it matches the local entity's origin
exactly (measured distance 0.00).  Because the offset moves, the block is
**searched** for the six byte pattern of a candidate position -
`web/snapshot.js` exports `findPlayerOrigin(ps, x, y, z)` for that.

That search is also the reliable way to **identify the local player**: the
dedicated server never releases a stale client, so the slot (and with it the
entity number) grows with every test client - "entity 1 = me" is wrong.  The
client now finds its own entity by looking for the one whose position appears
in the player state.

Three things that cost time:

* The block **does** change when the client moves (the origin moves with it).
  It does **not** change when the client looks around: the view angles are
  not sent back, the client predicts them locally.
* The entity's origin and the player state's origin are in the same SoF order
  (x, y, z with z up).  The renderer's Y-up conversion must not be applied
  before the two are compared, or the comparison silently fails.
* The **entity list is a delta**: only the entities that changed are sent and
  the terminator is the entity number 0.  The entities that did not change
  keep their state from the previous frame, so the parser has to carry them
  over - otherwise the entity count collapses to 0 on every frame that has no
  changes.

And one that is worth writing down because it was invisible for a long time:
the **browser's Buffer shim** (the tiny `Uint8Array` subclass in
`web/mkbundle.js` that lets the same protocol code run in Node and in the
browser) had a **broken `subarray`**.  `Symbol.species` constructs the result
with the standard `(buffer, byteOffset, length)` signature, but the shim's
constructor only accepted a single argument, so every sliced view silently
covered the **whole** underlying packet.  In Node the protocol was correct
and in the browser the player state was garbage.  The shim now implements the
full TypedArray constructor signature and overrides `subarray`/`slice` to
keep the byte offset.

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

The **button bits** (the byte at `+0x01`).  These were **wrong in an earlier
revision of this document** and were corrected on 2026-10-21 by reading the
engine's own builder (`SoF.exe 0x20005240`) and frame assembler
(`0x200060C0`) with REA:

| bit | value | meaning | set from |
|---|---|---|---|
| 0 | `0x01` | **attack** (fire) | the `+attack` key slot `0x2015EC68` (MOUSE1 / LCTRL) |
| 1 | `0x02` | **use** (pick up) | the `+use` key slot `0x2015EC98` (SPACE) |
| 2 | `0x04` | alt attack | the `+altattack` slot `0x2015EDFC` |
| 3 | `0x08` | +weaponExtra1 | the slot `0x2015ECC8` |
| 4 | `0x10` | +weaponExtra2 | the slot `0x2015ECE0` |
| 5 | `0x20` | **run** (sprint) | the `+speed` slot `0x2015EC50` - the game module **doubles** the forward/side/up move when it is set |
| 6 | `0x40` | lean | the lean state |
| 7 | `0x80` | engine internal mouse counter | never tested by the game module |

The **movement is not a bit**: it is the three i16 fields at
`+0x0A/+0x0C/+0x0E` (forward, side, up), which the builder writes from
`cl_forwardspeed` and friends.  The engine's builder ORs exactly **seven**
bits into the buttons byte; `0x20` is never written there, which is why it
was long assumed to be the attack bit - it is in fact the sprint bit.

**The weapon number is not in the usercmd at all.**  The game module reads
only `msec`, `buttons`, `flags2` (-> `edict+0x3B8`), the three view angles
and the two float extras.  Switching weapons is a **string command**
(`weaponselect N`), which the client sends to the server on the same
reliable channel the handshake uses.

The game module's server side (`gamex86.dll` `ClientEndFrame` at
`0x500F53A0`) latches the buttons:

```c
oldbuttons = buttons;
buttons     = cmd->buttons;
latched     |= (~oldbuttons) & buttons;     /* the rising edge */
if ((old ^ new) & new & 1) -> the weapon fires;   /* 0x01 */
if (latched & 2)             -> the item is picked up;  /* 0x02 */
```

so a held button fires **once** (the latch is edge triggered) and **use is
only processed when attack is not latched**.

**The movement scale (measured 2026-10-21).**  The three i16 movement fields
are in the engine's own scale, which is much larger than the classic Quake II
400.  Measured against the authoritative position: 400 gives about 2.4 units/s,
4000 about 144 units/s and 12000 about **298 units/s** - the stock running
speed (Quake II's is 320).  The client therefore uses 12000 and the `0x20`
sprint bit doubles it server side.

---

## 4a. The audio (solved 2026-10-21)

The game's audio is **plain 16 bit mono PCM WAV at 22050 Hz** and it lives in
`Base\pak0.pak` (824 `.wav` files, plus 390 `.adp` and 727 `.os` for the
scripts).  No decoding is needed: the browser plays them as they are.

`Base\pak0.pak` is 705 MB, so the assets are **served straight out of the pak**
instead of being extracted.  The relay grew a route:

```
GET /pak/<path in the pak>      -> the file, verbatim
```

The pak layout: `"PACK"` + u32 the directory offset + u32 the directory length
+ u32 the data start (0x20000); the directory is at `fileSize - dirLen` and
its entries are **64 bytes**: a 56 byte NUL padded name, a u32 offset and a
u32 length.  There are 9728 entries.

The sounds the client uses: the footsteps
(`sound/player/foot/<grass|gravel|metal|sand|snow|stone|water|wood>/<Kind>1..4.wav`),
`sound/player/Jump.wav`, `sound/player/land/<kind>.wav`, the weapon sounds
(`sound/weapons/<weapon>/Fire.wav`) and `sound/misc/hlthstation/Health.wav`.

The same route also serves the models (`ghoul/**/*.ghb`), the skins (`.tga`),
the Ghoul scripts (`.gpm`, `.gsq`) and the effects (`.eft`).

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

### The GameSpy master (the engine's own server list)

The stock engine registers with a master and the client queries it.  The
protocol was recovered from the engine's own code (`SoF.exe` `0x200f4bf0` ..
`0x200f9xxx`, decompiled with REA):

* The master address is **hard coded**: `master.gamespy.com`
  * **UDP 27900** - the server registers with
    `\heartbeat\<game port>\gamename\sofretail\statechanged\`
    (sent when the player count changes or every 150 s - `0x2005f720`)
  * **TCP 28900** - the client reads a greeting containing `\secure\<6 bytes>`
    and answers
    `\gamename\sofretail\gamever\1.6\location\0\validate\<b64>\final\\queryid\1.1\`
    where the validation is `base64(RC4("iVn3a3", challenge))`
    (`0x200f92d0` = RC4, `0x200f9200` = base64), then asks
    `\list\cmp\gamename\sofretail\final\`
  * the client then probes every listed server directly with `\basic\`,
    `\info\`, `\rules\`, `\players\`, `\status\`, `\packets\` and expects
    `\final\` at the end of the answer.

`web/gsmaster.js` implements that master (the heartbeat channel, the list
channel and an HTTP API), and `web/mkmasterpatch.js` writes a copy of the
server (`SoFTest.exe`) whose two hard coded `master.gamespy.com` strings are
redirected to `127.0.0.1` - the original `SoF.exe` is left untouched.

**But a dedicated server never registers by itself**: the master client is
created in `Sys_Main` (`0x2001f390`, the *client's* main), so the server
process has no master object (`DAT_204076d0` stays NULL) and the heartbeat
gate (`0x2005f720`) does nothing.  The server side of the list is therefore
filled by the **browser client**, which publishes the server it is talking
to (`POST /api/servers`) and reads the list back (`GET /api/servers`, CORS
enabled) - the HUD shows the known servers.

Practical notes for running the test server:
* the `developer` cvar opens a "Developer Mode" window; starting the server
  with `-WindowStyle Hidden` then blocks the engine **before** it binds its
  socket, so use the visible window (or no developer mode) when it is
  started hidden.
* the game port comes from the `port` cvar and the config is read **before**
  the network is initialised, so `set port "29000"` in `User/config.cfg`
  works (the command line `+set` does *not*, it is too late).
* the engine also reads `net_socks*` and `gsc_*`; a `net_socksEnabled 1`
  with a dead proxy makes the startup hang.



### The `.m32` material format (the map's textures)

The map's textures are the game's `.m32` material files (in `Base\pak0.pak`,
`textures/<name>.m32`).  The format is a plain header plus uncompressed
pixels:

```
+0     u32        version (4)
+4     char       name[128]        e.g. "Iraq/brickstuctopdirt"
+132   char       name2[384]       e.g. "Iraq/brickstuctop"
+516   int        mipSizes[7]      64, 32, 16, 8, 4, 2, 1
+580   int        mipSizes2[7]
+644   int        the offset of the pixel data (968)
+648   int        the offsets of the mip levels
       the pixels: w*h texels of (R, G, B, 0xFF)
```

The mip level offsets follow exactly: the base level is `w*w*4` bytes, then
`w/2`, `w/4`, ...  The textures are **64x64** with 6 mip levels.

`web/bsp2json.js` extracts the materials the map uses out of the pak and
embeds them (base64 RGBA) in `web/www/map_<name>.json`; the browser builds one
WebGL texture per material and the map is drawn with the texinfo's UV axes.
With the mip levels and `generateMipmap` the result is the real SoF level
with the real game textures.



### The Ghoul model format (`.ghb`) - mostly decoded 2026-10-21

The player and weapon models are Ghoul binaries.  The reader is `web/ghb.js`.

**The container** (12 bytes):

```
+0x00 u32  magic 0x198237FE
+0x04 u32  the absolute file offset of block 2
+0x08 u32  the size of block 2
```

**The model stream** (file offset 0x0C):

```
+0x0C u32  model magic 0x033FB1A3
+0x10 u32  the format version (0x4A)
+0x14 u32  the thunk flag (must be 0)
+0x18 str  the authoring path, e.g. "C:\SOF\!GPREP!\ENEMY\MESO\MESO_IRQ3B.GFL"
+0x44 u32  the number of animation frames (3393 for the human model)
+0x48 u32  the number of animation clips (202), then the clips
          u32  the number of meshes (6), then the meshes
          a 26 byte bounding box
          u32  counter ; u32 count ; count x 0xE8 objects   (the bolts)
          u32  counter ; u32 count ; count x 0xEC objects
          u32  counter ; u32 count ; count x 0x108 objects  (the bones)
          the skeleton
```

A **clip** is a vec3 position, an f32 length in frames, the name, the event
count and the events (an i32 frame, an i32 index, a name and a parameter).
The events are the game's own triggers, for example
`("fire", "")`, `("sound", "/weapons/sniper/reload")`,
`("effect", "weapons/playermz/sniper flash")` and `("dropweapon", "")`.
The human model has 202 clips (`CCH_A_FWD_MS_2`, `STD_A_DWN_L_2`,
`LB_PCRAWL_BCK_P_N`, ...).

A **mesh** is a name, two bools, two i32, then **two submeshes** (a name, a
second name, four bools, a vertex blob, a 0x44 byte face array and a bool) and
then two arrays of 0x0C byte elements and four arrays of 4 byte elements.  In
the shipped files **every one of those arrays is a placeholder**, so the real
geometry is not in the model stream.

**The geometry is in the block 1 tail** (after the skeleton) and in block 2:

* the tail starts with two u32 sizes, then an index table, then per submesh a
  header of three u32 and the **vertex records**;
* a vertex record is **44 bytes**: three floats (the UVs) at +0x00, three
  floats (the position) at +0x0C and 20 further bytes (the normal, the bone
  weights);
* the positions are in the model's own units and fall inside the model's
  bounding box, which is how the record layout was confirmed;
* the 45 "bolt" objects (ABOLT_HEAD_T, SBOLT_MOUTH, QUAKE_ORIGIN, ...) each
  carry a u32 offset into block 2 and a track of `frames` 8 byte records
  (4 x int16) - the bolt's position and rotation for every animation frame.
  The offsets form an exact arithmetic progression of `frames * 8`.

What is **not** decoded yet: the exact meaning of the four int16 fields in a
bolt track, the index table's semantics, the 20 remaining bytes of a vertex
record and the block 2 tail (6.5 MB of high entropy data in the human model).

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

### The game's data tables (the modding layer)

Two tables were recovered from the game module (`gamex86.dll`) and are now
served to the browser as JSON:

| source | script | output | contents |
|---|---|---|---|
| `analysis/weapontable.txt` | `web/mkweapons.js` | `www/weapons.json` | 31 weapon registrations: the model path, the fire/altfire function addresses, the row's unnamed float fields (a5/a6/a13/a15) and the two fire delays |
| `analysis/itemtable.md` | `web/mkitems.js` | `www/items.json` | all 39 item records: the class name, the display name, the category (0 ammo, 1 weapon, 2 armor, 3 equipment, 5 health), the type index, the mass, the amount, the maximum and the icon/message ids |

`www/content.html` renders both and hosts the **client mods** (the movement
speed, the look sensitivity, the field of view, the draw distance, the master
address) in `localStorage`, exportable as JSON.  The movement speed and the
look sensitivity are real game changes: they are what the user commands carry,
so the server executes them.

The Ghoul model files are **not** decoded yet: `ghoul/*.ghb` is a Ghoul
engine binary (a 7.8 MB `MESO_IRQ3B.ghb` starts with `FE 37 82 19 00 00 51
01 00 00 26 EA 75 00`, then the authoring path
`C:\SOF\!GPREP!\ENEMY\MESO\MESO_IRQ3B.GFLA` and the frame names).  The `.gpm`
files next to them are plain text model scripts (the model paths, the bolt-on
parts and their bones).

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
