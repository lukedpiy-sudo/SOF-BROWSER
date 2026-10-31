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

### The gamestate handshake (solved 2026-10-21, corrected 2026-10-22)

The server drives the whole handshake and the client may only answer in the
same order - every one of the requests is refused once the client has
spawned (`client->state != 2` -> "configstrings not valid -- already
spawned"):

```
S->C "cmd configstrings <tok> <cursor>"   C->S "configstrings <tok> <cursor>"
S->C "cmd ghoulstrings <tok> <cursor>"    C->S "ghoulstrings <tok> <cursor>"
C->S "baselines <tok> 0"                              <- the CLIENT asks
S->C "cmd baselines <tok> <cursor>"       C->S "baselines <tok> <cursor>"
S->C "precache <tok>"                     C->S "precache <tok>"
C->S "begin <tok>"                                  <- the CLIENT asks
```

* `argv[1]` must be the **token** (the `nextserver` cvar value, bumped on
  every connect) or the server answers "SV_Configstrings_f from different
  level".
* `argv[2]` is the **cursor**: the client echoes it verbatim.  The
  configstring handler increments it, the ghoulstring handler sends one
  record per request.
* The configstring table is complete when the server moves on to the
  ghoulstrings.
* **The last three steps are driven by the client, not by the server**
  (corrected 2026-10-22).  After the ghoulstrings the server waits for the
  client's own `baselines <tok> 0`; only then does it ask for the baselines
  and then send `precache <tok>`; and the client sends `begin <tok>` itself
  after the precache step.  A client that sends "begin" too early (the old
  browser client sent it 250 ms after the ghoulstrings) leaves the server's
  gamestate machine half finished - the baselines and the precache step are
  then refused and the server stops asking for anything.  The chain is now
  complete and reproducible: `web/pshandshake.js` logs every request and
  every answer.
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

### The player state block (solved 2026-10-22)

The block between the `0x14` marker and the `0x15` marker is the game module's
`player_state_t`.  **It is bit packed**: a leading mask says which fields are
present, so the block's length *and* the offsets of its fields change from
frame to frame.  Nothing in it has a fixed offset.

**The layout (verified byte exact, 50/50 frames consumed exactly).**  The
block starts with a **u32 little endian presence mask**, then the fields in
**the order the engine's writer emits them**, then a **u32 LE stat mask** and
then the **16 stat values as LE s16 in ascending bit order**, then five more
gated fields.  `web/playerstate.js` implements it and `web/psverify.js`
proves that the decoder consumes every byte of every frame exactly.

The fields (mask bit -> size -> meaning):

| mask | size | meaning |
|---|---|---|
| `0x10000` | u16 + u8 | the model index and the skin |
| `0x20000` | u8 | |
| `0x40000` | s16 | |
| `0x40000000` | u8 | |
| `0x10000000` | u8 | |
| `0x20000000` | u8 | |
| `0x100000` | s16 | the second model index |
| `0x1` | u8 | the view mode (0 = a player) |
| `0x2` | 3 x s16 | the **origin**, 1/8 scale |
| `0x4` | 3 x s16 | |
| `0x8` | u8 | |
| `0x10` | u8 | |
| `0x20` | s16 | |
| `0x40` | 3 x s16 | |
| `0x8000000` | u8 | |
| `0x80` | 3 x s8 | 1/4 scale |
| `0x100` | 3 x s16 | the **view angles** (binary angles, 360/65536) |
| `0x8000` | 3 x angle | |
| `0x1000` | 3 x s16 | |
| `0x2000` | u8 + u8 | |
| `0x200` | 3 x s8 | 1/4 scale |
| `0x80000` | s8 | 1/4 scale |
| `0x400` | 4 x u8 | /255 |
| `0x800` | u8 | the stealth value |
| `0x4000` | u8 | |
| - | u32 | the **stat mask** |
| - | 16 x s16 | the **stats**, in ascending bit order |
| `0x400000` | u8 | |
| `0x800000` | u8 | |
| `0x1000000` | s16 | |
| `0x2000000` | u8 + u8 | |
| `0x4000000` | u8 | |

**The stats** (the engine's own HUD reads them, `SoF.exe 0x201E7F3A` and
friends; the mask of a live player is `0x25E`):

| index | meaning | a live player |
|---|---|---|
| 1 | **health** | 100 |
| 2 | the ammunition in the magazine | 18 |
| 3 | the reserve ammunition | 132 |
| 4 | (the second ammunition counter) | 18 |
| 5 | **armour** | 0 |
| 6 | the **carried item** (1 = item_c4, 2 = item_flash, 3 = item_nightvision, 4 = item_claymore, 5 = item_medkit, 6 = item_h_grenade, 7 = item_flag) | 3 |
| 8 | the flags (bit 0 = dead) | 0 |
| 9 | the flags 2 | 0 |
| 10 | the money | 2 |
| 11 | the stealth | 0 |

So the HUD is complete: health, armour, magazine, reserve, the carried item
and the stealth all come out of the player state.

**The local player is found by its position**: the dedicated server never
releases a stale client, so the slot (and with it the entity number) grows
with every test client - "entity 1 = me" is wrong.  The client looks for the
entity whose origin appears in the player state
(`web/snapshot.js` exports `findPlayerOrigin(ps, x, y, z)`).

Three things that cost time:

* The block **does** change when the client moves (the origin moves with it)
  and it **does** contain the view angles (mask `0x100`), so the server does
  echo the look direction - the old claim that "the view angles are not sent
  back" was wrong.
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

### The service byte table (SoF.exe 0x2011E7A0)

The engine has a table of the service bytes, indexed by the service byte and
used at `0x2000EDEB`:

| byte | service | what it carries |
|---|---|---|
| 1 | `svc_temp_entity` | a temporary entity (the muzzle flashes, the blood) |
| 10 (0x0A) | `svc_sound` | a positional sound event: 3 bytes, then two vec3s of 3 i16 each (scaled x1/8), then the index.  The handler is `SoF.exe 0x2002CA20`; it calls `0x2002C8D0` = the ghoul lookup (`index x 396` -> the model-info array at `0x2015F000`; the u16 at `+0x6C` is the index the module resolves) |
| 15 (0x0F) | `svc_configstring` | the configstring records (see above) |
| 21 (0x15) | `svc_packetentities` | the entity list inside a frame |
| 23 (0x17) | `svc_frame` | the frame itself |
| 26 (0x1A) | `svc_ghoulreliable` | **the ghoul string table** - the table that names the Ghoul models and the sounds |
| 27 (0x1B) | `svc_ghoulunreliable` | the same, unreliably |

The **ghoul string table** is decoded by the **game module**
(`gamex86.dll`), never by the client: the engine hands the packet to the
module at `0x2008ED40` (the client-API vtable, `0x20403A48`: entry `0x64` =
decode, entry `0x24` = resolve index -> sound list).  The entity state's
`+0x28` is an **index into that table** - it is neither a configstring index
nor an index into the engine's global string table (measured: `cs[+0x28]` is
undefined for every entity of nycdm1 and `names[+0x28]` is garbage), so
without the ghoul table no entity can be named - neither the characters nor
the sound entities.

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

The view angles are carried in **binary angle units** (65536 = one full turn),
so `cmd.view0 = degrees * 65536 / 360` and the wire carries the top 12 bits
(`v >> 4`).  The old "1/16 degree" reading was wrong: the engine's constant
at `0x201114A0` is `182.0444f` (= 65536/360) and the game module divides the
value back with `0.005493164` (= 360/65536).  With the wrong scale the
client could not turn at all - the player walked but never looked.

The three movement fields are **biased by 510** (`+0x1FE`) so that the signed
range -200..+200 fits into the 10 bit field; the engine's own writer clamps
the command to **forward/up +/-200 and side +/-160** before it writes them
(`SoF.exe 0x20005D70`), and the server's decoder clamps them the same way.
The client therefore clamps to the same limits and uses 200 for a normal run.

A JS port that is **byte exact** against the engine lives in `web/cmdenc.js`
(`encodeCmd`); `web/cmdfit.js` diffs it against `tools/cmdwrite2.exe` (which
calls the engine's own writer through `LoadLibraryA`, no GUI) - 12/12 vectors
match.

**The server reads THREE commands out of every movement message.**
`SV_ReadClientMessage` (`SoF.exe 0x200636C0`) calls the bit reader
(`0x20005AA0`) three times with the baseline chain

```
cmd1 <- zero baseline,  cmd2 <- cmd1,  cmd3 <- cmd2
```

and the three commands are **one continuous bit stream** - the bit reader
runs over the whole payload, so the commands must not be byte aligned in
between (`web/cmdenc.js` `encodeCmds(pairs)` writes all three into one
`BitWriter`).  The stock client writes the three most recent commands, the
oldest against a zero baseline.  A client that sends only one command makes
every "unchanged" field of the following two resolve against zero, and the
view angle is lost - this is why the player could not turn even with the
correct angle scale.

**The msec byte** is the number of milliseconds since the previous command.
The game module uses `msec/10` as the number of 10 ms frames it simulates for
that command (and one frame if `msec < 34`), so the three commands of one
message have to add up to the real time between two messages: with a 50 ms
message interval that is **16 ms per command** (a 60 Hz client).  A cumulative
counter overdraws the engine's per-client msec budget (`cl+0x220`, the
"commandMsec underflow" check in `SV_ExecuteClientMessage`, `0x200635F0`).

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

**The movement scale (measured 2026-10-21, corrected 2026-10-22).**  The
three i16 movement fields are in the engine's own scale, but the server
**clamps them** to forward/up +/-200 and side +/-160, so the client uses 200
for a normal run (the `0x20` sprint bit doubles it server side).  With the
old value 12000 every command was clamped to 200 anyway, which is why the
measured speed never matched.

---

## 4c. The game module's console commands (2026-10-22)

The engine dispatches a string command to the game module when **no engine
command matched** and the server state is 2 (`DAT_203a1f20`); the state is 2
automatically on a `.bsp` level, so on `dm/nycdm1` the module is reachable.

| command | what it needs |
|---|---|
| `gimme "<display name>"` | the item's **display name** (`9mm Pistol`, `12 Gauge Shotgun`, `C4`, `MedKit`, ...), quoted when it has a space - the module's handler (`gamex86.dll 0x50089D50`) looks the item up by that name, not by the class name |
| `bestweap` (a **userinfo** key, not a command) | the weapon to give the player; the value is a name of the module's `w_*` family (`w_pistol1`, `w_pistol2`, `w_machinepistol`, ...).  The module parses it in `ClientUserinfoChanged` (`0x500F4730`) into `gclient+0x2E0` and applies it to the player object |
| `players` | an **engine** command; it answers with the scoreboard line ` 0 <name> <ip:port>` and the player count |

The module's weapon indices are 1 = knife, 2 = .44 pistol, 3 = 9mm pistol, ...
and the item ids are 18 = pistol2, 19 = pistol1.

---

## 4d. OPEN: the server stops sending the player state (2026-10-22)

**Symptom.**  The handshake completes, the client spawns, the module
simulates the player (the authoritative origin follows the commands) and the
player state block arrives - and then, a few seconds later, the server sends
an **empty** player state (the presence mask becomes 0, the stats become 0)
and **no entities at all** (the frame shrinks from ~410 to 35 bytes).  The
client is still in the server's player list (`players` still shows it), the
server keeps sending frames, and no OOB message explains it.

**Measured facts (every test against a fresh dedicated server):**

| variable | result |
|---|---|
| the command content (all zero / angles only / movement only / full) | no effect - the state always dies |
| the msec byte (0, 4, 8, 16, 20, 33) | no effect |
| the reliable toggle (set / clear) | no effect |
| the message layout (`[2][ck][seq]`, `[2][seq]`, `[2][len]`, ...) | no effect |
| the userinfo (with/without `spectator`, minimal, refreshed every 3 s) | no effect |
| **the sequence the command carries** | **decisive**: the command must carry the sequence of the **message it is sent in**; one too high and the state dies after 6 s, the right value gives 50 s+ |
| **the view angles** | **decisive**: the 12 bit angle field is **signed**, so the angle has to be normalised to -180..+180 degrees; an unsigned angle above 180 degrees is read back as a completely different angle and the module stops writing the state after 6 s |
| the movement (any value, 40 or 200) | no effect |
| the user command rate | 5 Hz -> 16.7 s, 10 Hz -> 9.6 s, 15 Hz -> 7.3 s, 20 Hz -> 5.8 s (with the sequence bug) |
| `respawn` after the state died | does not bring it back |
| `disconnect` + a new connection | the new connection never spawns (the server keeps the slot) |

**The two bugs that were found (both fixed 2026-10-22):**

1. **The sequence in the user command.**  The engine's "fakelag" check
   (`SV_UserMove`) compares the sequence the command carries with the
   sequence of the message:
   `cl->netchan->outgoing_sequence - cl->lastcmd.netchan.outgoing_sequence > 2`.
   The command must carry the sequence of the message it is sent in.  With
   the sequence one too high the difference underflows into a huge unsigned
   value, the check is always true, the server stores the command **without
   executing it** and the game module stops writing the player state - the
   world froze about six seconds after every spawn.  The client now writes
   the message's own sequence (`web/sofproto.js`, `seqMode`).
2. **The 12 bit view angle is signed.**  The engine's writer shifts the 16
   bit angle right by 4 and the reader sign extends bit 11, so the 16 bit
   value has to be a **signed** binary angle (-32768..32767 = -180..+180
   degrees).  With the old unsigned encoding an angle of 270 degrees was
   read back as -90 degrees, and the module - which derives the view angles
   and traces along them - misbehaved so badly that it stopped writing the
   player state after about six seconds.  `toBinaryAngle()` now normalises
   the angle to (-180, +180].

With both fixed the player state survives **50+ seconds** instead of six,
and the death that is left is a separate, much slower trigger (see below).

**The most likely remaining suspect** is a second, much slower trigger: with
both bugs fixed the player state still stops after ~50 seconds (measured:
47 s with a turning view, 49 s while walking, 54 s standing still).  The next
probes are (1) the engine's per-client counters that reach a limit around
50 s, (2) the module code that writes the player state and the condition
that skips it, and (3) the `SV_UserMove` "fakelag" second condition
(`cl->lastcmd.msec + 200 < sv.time`), which compares the **client's** msec
with the server's time and could be the slow trigger.

---

## 4a. The audio (solved 2026-10-21)

The game's **sound effects** are **plain 16 bit mono PCM WAV at 22050 Hz** and
they live in `Base\pak0.pak` (824 `.wav` files).  No decoding is needed: the
browser plays them as they are.  The **music, the speech and the
cinematics** are in the 390 `.adp` files and those *are* compressed - see
section 4b.

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

## 4b. The sound formats (`.adp`, `.dms`, `.os`, `.ams`) - solved 2026-10-21

Four formats, all in `Base\pak0.pak`:

| format | count | what it is |
|---|---|---|
| `.wav` | 824 | the sound effects: 16 bit mono PCM at 22050 Hz (already played) |
| `.adp` | 390 | the **compressed** audio: music, speech, cinematics, impacts |
| `.dms` | 30 | the **music set** of a level: which tracks it has |
| `.ams` | 1 | `sound/sound.ams`: the **ambient sound set** of the game |
| `.os` | 727 | the **compiled level script** of the game module (`ds/<map>/*.os`) |

### 4b.1 `.adp` = IMA/DVI ADPCM

The file is a **u32 little endian sample rate** (22050) followed by **one
continuous 4 bit ADPCM nibble stream**, high nibble first, **without any block
headers**.  The predictor and the step index run continuously over the whole
file, so the file is one giant ADPCM block.

The proof is the game's own decoder, in the **sound driver DLL** (not in
`SoF.exe`):

* `A3Dsnd.dll` / `Defsnd.dll` / `EAXSnd.dll` - `FUN_60001000` (the nibble
  decoder), with the step table at `Defsnd.dll` file offset **65696** and the
  index table at **65632** (both `int32`, 89 and 16 entries, the classic IMA
  tables: 7, 8, 9, 10, ... 32767 and -1,-1,-1,-1,2,4,6,8,...).
* `A3Dsnd.dll` `FUN_60005490` (**0x60005490**) - the loader.  It compares the
  **last four characters** of the name with the string `".adp"` at
  `0x600158dc` (`_strncmp(name + len - 4, ".adp", 4)`), reads the rate from
  the first dword, sets the sound's format to **3** (ADPCM), the channels to
  **1**, the **sample count to `2 * fileLength - 46`** and copies the payload
  from `fileBuffer + 4` (the rate header is *not* audio).
* `Defsnd.dll` `FUN_60004250` - the mixer.  It calls the decoder with the
  current **sample position** as a bit offset, which is what makes the stream
  continuous (`(pos >> 1)` = the byte, `pos & 1` = the nibble).

So the decoder is: start with `predictor = 0` and `index = 0`, and for every
sample take the next nibble, add `indexTable[nibble]` to the index (clamped to
0..88), compute `diff = step[index] / 8` with the classic IMA bit weights
(`+4: +step`, `+2: +step/2`, `+1: +step/4`, `+8: negate`), add it to the
predictor (clamped to -32768..32767) and store the predictor.

`web/audiodec.js` implements exactly this (`decodeAdp`).  The proof that the
result is real audio: the decoded `sound/music/dm2/lDM2.adp` has the same
character as the game's own `.wav` effects (the mean step between two
samples is 0.46 of the mean amplitude - a smooth, band limited signal, while
white noise would be about 1.4), it reaches the full scale, and the left and
the right channel of the stereo music correlate at 0.95.

### 4b.2 `.dms` = the music set

The engine builds the path `sound/music/%s.dms` (`SoF.exe` **0x2011f388**) and
reads it in `SoF.exe` `FUN_2000ff70` (**0x2000ff70**):

```
+0x00  u8    the version (11)
+0x01  u8    the number of tracks
+0x02       7 header bytes the engine does not use
+0x09       the tracks, each of them
              char leftPath[]   NUL terminated
              char rightPath[]  NUL terminated
              byte params[12]
```

The music is **stereo with two separate mono files**: `sound/music/DM2/lDM2.adp`
is the left channel and `sound/music/DM2/rDM2.adp` the right one.

The 12 parameter bytes carry the state of the track and its volume (the fourth
byte: 70 for DM2, 160 for the GER1 "tension" track, 210 for the "action"
one).

**Which music a level gets** is decided by the **worldspawn** of its `.bsp`:

```
{ "classname" "worldspawn" ... "startmusic" "1" "musicset" "dm2" }
```

`dm/nycdm1` has `"musicset" "dm2"`, so it plays `sound/music/DM2.dms`.
(`web/mkmusic.js` reads that key out of every `.bsp` of the paks and writes
`web/www/map_music.json`.)

### 4b.3 `.ams` = the ambient sound set

`sound/sound.ams` (17505 bytes) holds the **337 ambient loops** and the
**169 named ambiences** the maps place into the world:

```
+0x00  u8    the version (11)
+0x01  u32   the number of ambient sounds (the paths)
+0x05  u32   the number of entries of the first named table   (72)
+0x09  u32   the number of entries of the second named table  (70)
+0x0D  u32   the number of entries of the third named table  (27)
+0x11        the sound paths, NUL terminated, relative to "sound/"
then the three named tables.  Every entry is
              char name[]  NUL terminated   (the "soundName" of the map
                                              entities)
              u8   1
              u8   3
              f32  the minimum distance
              f32  the maximum distance
              u16  the path index of the sound (0xffff = none)
              u16  the number of the extra path indices
              u16  the extra path indices
              byte 6 bytes the engine does not use
```

The engine reads the paths in `SoF.exe` `FUN_2000feb0` (**0x2000feb0**) and
prefixes them with `sound/`; the named tables are the engine's named
ambiences.  The maps put them into the world with `func_ambientset` and
`environ_soundgen` entities that carry a **"soundName"**:

```
{ "classname" "func_ambientset" "soundName" "RoomToneGeneric1"
  "origin" "136 -196 8" "targetname" "t7" }
```

`RoomToneGeneric1` resolves to `sound/Ambient/Locs/RmTone/Gen1.wav` with the
distance range 1..2; `ComputerMonitorTerminal` to the five computer sounds
with 5..8.  (The tables parse the file exactly, to the last byte.)

### 4b.4 `.os` = the compiled level script

The 727 `.os` files are **not** sound scripts: they are the **compiled form of
the level's trigger script** and they live in `ds/<map>/`.  The game module
loads them: `gamex86.dll` `FUN_50076600` (0x50076600) builds `ds/%s.os`
(0x501455a8) and `FUN_50079d60` (0x50079d60) reads them, and `FUN_5007adc0`
(**0x5007adc0**) checks that the first dword is the **version 3** ("LoadScripts():
Expecting version %d, found version %d").

The file is

```
+0x00  u32   the version (3)
then the symbol tables, every entry being
         u8    the kind (6 = an entity field, 2 = a script variable)
         char  name[]  NUL terminated
         u8    the value type
         u32   the index of the value
then the code.
```

The first table is always the **29 entity fields** of the game (`x`, `y`,
`z`, `origin`, `origin_x`, ..., `health`) - the same list for every file.

The code pushes its operands; a pushed string (the opcode `0x11` with the
type `4`) is a file name.  **All 727 files parse** (version 3, exactly 29
fields) and they name **1591 sounds**, of which **1590 resolve to a real file
in the paks** (the one that does not, `cin/sud3/c49d8.adp`, is really
missing).  `web/audiodec.js` exposes this as `parseOs()` and `osSounds()`.

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

### The BSP v46 lump table (complete, from the engine's own table)

The engine keeps the authoritative table: **22 descriptors of 44 bytes at VA
`0x2011f938`** (file `0x11f938`), and the `LUMP_*` name strings sit right
after it at `0x2011fd14` **in reverse order** - that reversal is what gives
the index -> name mapping.  A descriptor is: `+0` the data pointer, `+8` the
count, `+0c` the minimum, `+10` the maximum, `+14` the base, `+18` the name
pointer, `+1c` the on-disk element size, `+20` the in-memory element size,
`+28` the loaded flag, `+29` the checksum byte.  The header is 184 bytes
(`8 + 22*8`): `"IBSP"`, version 46, then `lumps[22][2] = {fileofs, filelen}`.

| lump | element | NYCDM1 | NYCDM2 |
|---|---|---|---|
| 0 ENTITIES | text | 44022 B / 413 entities | 39970 B / 397 |
| 1 PLANES | 20 B (3f normal, 1f dist, 1i type) | 2140 | 1966 |
| 2 VERTEXES | 12 B (3f) | 7801 | 5307 |
| 3 VISIBILITY | 1 B (compressed) | 175407 | 75408 |
| 4 NODES | 28 B | 3097 | 1945 |
| 5 TEXINFO | 76 B | 2072 | 1445 |
| 6 FACES | 44 B | 6070 | 4272 |
| 7 LIGHTING | 1 B (raw RGB luxels) | 726630 | 489264 |
| 8 LEAFS | 32 B | 3100 | 1947 |
| 9 LEAFFACES | 2 B | 7098 | 5230 |
| 10 LEAFBRUSHES | 2 B | 3708 | 3058 |
| 11 EDGES | 4 B | 15704 | 10211 |
| 12 SURFEDGES | 4 B | 28291 | 19306 |
| 13 MODELS | 48 B | 2 | 1 |
| 14 BRUSHES | 12 B (firstside, numsides, contents) | 1764 | 1534 |
| 15 BRUSHSIDES | 4 B | 11541 | 10355 |
| 16 POP | 1 B | 256 (all zero) | 256 |
| 17 AREAS | 8 B | 2 | 2 |
| 18 AREAPORTALS | 8 B | 1 | 1 |
| 19 REGIONFACES | 8 B | 0 | 0 |
| 20 LIGHTS | 36 B | 1230 | 457 |
| 21 REGIONS | 76 B | 0 | 0 |

The **texinfo** is 76 B: `+0` `float s[4]`, `+16` `float t[4]`, `+32` the
flags, `+36` the value, `+40` `char name[32]`, `+72` the next texinfo.  The UV
is `s[0]*x + s[1]*y + s[2]*z + s[3]` (the axes are already in texel units)
and the renderer divides by 64.

The **face** is 44 B: `+0` the plane, `+2` the side, `+4` the first edge,
`+8` the edge count, `+10` the texinfo, `+28` the lightmap offset (a byte
offset into the lighting lump), `+32`/`+33` the lightmap size in luxels,
`+34`/`+35` the two light styles, `+36`/`+38` the lightmap minimum and
`+40`/`+42` the extents (in texture units).

The **lightmap** is **plain RGB888**, 3 bytes per luxel, `w*h` luxels per
face, back to back in face order, with no header and no palette (the 5807
face rectangles tile the lighting lump exactly).  The luxel size is **not** a
constant 16: it is `ext/(n-1)` per face, so the vertex luxel coordinate is
`u = (s - mins_s)*(w-1)/ext_s + 0.5` (the same for `v`).  The proof is
geometric: every luxel was placed in the world and the brightness across
shared edges of coplanar faces was compared - RMS 26.9 for this mapping
against 29.6 for a fixed 16 and 44.8 for the flipped row order.

**The lightmap holds the sun and the ambient only** - the correlation with
the 295 light entities is 0.0013 and the brightness does not trend with the
distance to the nearest light.  The entity lights are dynamic in the engine
and are added on top of the lightmap, exactly as the module does.

The **styles** are 0/1/2 (the 263 faces without a lightmap are the sky
faces, texinfo flags 0x04/0x05).  The engine's style table is 256 RGB
entries at `0x2023e2d0` (16 B per entry), written by `FUN_20016770` (the
range check 0..256, the error "Bad light style %i") and fed by the server
with `svc_lightstyle`.  nycdm1 has no animated style (the entity lump has no
style key).

**The fog is not map data**: the engine's fog is the cvar set
`gl_fogmode` / `gl_fogcolor` / `gl_fogstart` / `gl_fogend` / `gl_fogdensity` /
`gl_fogtime` / `gl_fogdensityrange`.  The **water** lives in the brushes
(lump 14, `+8` the contents); SoF uses contents bits that Quake II does not
have (`0x01000000` .. `0x80000000`), so the exact water bit is still open.

Twelve of the map's "materials with no image" turned out to be **RGB565**
(2 bytes per texel) and not RGBA; the mip-0 offset at `+648` in the `.m32`
record tells the format.

### The lights (the entity lump and the LIGHTS lump)

The **entity lump (lump 0)** is a text blob of `{ "key" "value" ... }`
blocks.  For `dm/nycdm1` it holds 413 entities, 300 of which are lights
(295 `light` + 5 `light_generic_alley_wall`).  They are the classic Quake
II lights:

```
"origin"   "-1744 -232 48"       the position (Z up)
"light"    "80"                  the intensity (also "_light")
"_color"   "1.000000 0.615686 0.235294"   the colour, 0..1 ("color" too)
"radius"   "300"                 the light's radius (not used by nycdm1)
"style"    "32"                  0 = constant, 1..31 = a linear flicker,
                                 32..255 = a random flicker
"wait"     ".8"                  the flicker period in seconds
"_cone"    "90"  "_focus" "9"  "_mangle" "180 -90"   a spot light
```

The **LIGHTS lump (lump 20)** is the engine's own light table: **36 bytes
per light**.

```
+0    3 floats  the origin
+12   3 floats  the colour
+24   float     the intensity
+28   int       the type: 1 = a point light, 2 = a spot light,
                       3 = the sun's light grid (854 cells in nycdm1)
+32   float     unused (0)
```

The proof that the layout is right: **299 of the 300 lights of `dm/nycdm1`
match the entity lump exactly** (the origin, the colour and the intensity),
and the type field is 2 for exactly the 80 lights that carry a cone.  The
other entries of the lump (854 for `dm/nycdm1`) are the grid of the level's
sun light.

`web/bsp2light.js` extracts the entity lights into
`web/www/map_lights.json` and cross checks them against that table.

### The sun of the worldspawn

The worldspawn carries the level's key light:

```
"_sun_color"  "1.000000 0.694118 0.356863"   the colour
"_sun_light"  "180"                          the intensity
"_sun_ambient" "25 25 25"                   the ambient colour (0..255)
"_sun"        "t9"                           the name of the entity that
                                               marks the sun's position
```

For `dm/nycdm1` `t9` is an `info_null` at `-1300 -788 324`, so the sun is a
directional light from that point towards the middle of the map.

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

### The Ghoul geometry (the block 1 tail)

The geometry of a `.ghb` is **not** in the model stream: the meshes
there only hold placeholders.  The real geometry is in the **block 1
tail**, between the end of the model stream and block 2:

```
+0x00  u32  the size of the model's vertex buffer
+0x04  u32  the size of the model's animation data (the frames x 256)
+0x08  u32  0
+0x0C  u32  0
+0x10  u32  0
+0x14  u32  0
+0x18  u32  0
+0x1C  u32  0
+0x20  u32  the index table: the vertex indices shifted left by 8 bits,
             each one repeated once per face that uses it (the list is
             sorted, so it is a valence histogram and NOT a triangle list)
...    21 bytes: five u32 of sub mesh data
...    the vertex records, 43 bytes each:
             +0x00  3 floats  the UV coordinates (0..1)
             +0x0C  3 floats  the position
             +0x18  19 bytes  the packed attributes: the three bone
                            indices, the valence and the offsets
```

**The proof of the layout**: the highest index in the index table is
exactly the number of vertex records (522 for `MESO_IRQ3B`, 337 for
`FEMALE`, 25 for the sniper rifle) and every record's UV and position
are in range.  The second header value is the frame count times 256
(checked on four models).  The records are **not** 4 byte aligned in the
file (the stride is 43), so every field has to be read at its own
offset.

**Still open**: the *triangle* topology.  The index table is a valence
histogram, so the faces are either in the 19 packed bytes of each
vertex or in the compressed high entropy region of block 2.  Until that
is decoded the model can only be drawn as its vertices.

Two traps for the browser: a `TypedArray`'s `toString()` ignores its
arguments (the strings have to be decoded by hand) and the pak's names
are lower case while the engine's string table is upper case.

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

---

## 4e. THE MOVEMENT BUG - the player never moves (2026-10-22, the #1 blocker)

**Symptom.**  The client connects, spawns, receives the entity snapshots and the
player state, and the server DOES simulate the player - but the player never
moves: the forward, the side and the up fields are all ignored, and the
player's z sinks slowly and constantly (26 -> 16 over a minute) as if it were in
free fall with no floor.

**Everything that was measured (all against a fresh dedicated server):**

| experiment | result |
|---|---|
| the command content (all zero / angles only / movement only / full) | no effect |
| the msec byte (0, 4, 8, 16, 20, 33, 50, 100) | no effect on the movement |
| the message layout (`[2][ck][seq]`, `[2][seq]`, `[2][len]`, ...) | no effect |
| the reliable toggle (set / clear) | no effect |
| the userinfo (with / without `spectator`, minimal, refreshed every 3 s) | no effect |
| the user command rate (5 Hz -> 20 Hz) | no effect (it changed the lifetime of the player state, not the movement) |
| **a byte sweep of the whole 24 byte command** (0x04..0x13, one byte = 0x7FFF/0xFF per phase, 2.5 s each) | **no byte moves the player** - the x and the y stay at 0.0..0.1 per phase, the z sinks ~1.2 per phase whatever the byte |
| the engine's own writer (SoF.exe 0x20005D70) | the movement is at cmd+0x0A/+0x0C/+0x0E, clamped to +/-200 (forward/up) and +/-160 (side), and written as **10 bits of (value + 510)** |
| the engine's own reader (SoF.exe 0x20005AA0) | the 10 bit field is stored as (value - 510) at the same offsets |
| the view angles | they DO arrive (the server's view angles follow our yaw) |
| the msec | it DOES arrive (the module's frame simulation follows it) |

**So the command reaches the game module, and the module applies the msec and
the angles, but not the movement.**  The msec/angle/button fields are read by
`gamex86.dll` `ClientThink` (0x500F53A0); the movement is not.

**The next probe (the only one that matters):** read the game module's
`ClientThink` (gamex86.dll 0x500F53A0) and find
  * which field of the command it reads the movement from, and
  * the gate that skips the movement.  The known structure of that function:
    the button latching and the view angles live in the branch
    `if (gclient+0x538 == 0)` (no interaction target); the movement may live in
    the other branch, or behind another flag.
  Also check whether SoF's usercmd_t is really the engine's layout - the
  engine's writer fills 24 bytes (msec, buttons, flags2, flags3, 3 u16 angles,
  3 i16 moves, 2 f32 extras); if the module's own struct has a different
  layout, the movement would be read from the wrong offset (and a byte sweep
  of the command would find nothing, exactly as measured).

### 4e.2 - more evidence on the movement bug (2026-10-22, later)

* The spawn point is **not** inside any brush: with the brush model published in
  web/www/map_bsp.json (1764 brushes, the planes inline in each brush) the point
  (-2304, -1920, 26) is inside **0** brushes, so the "the player is embedded in
  the world and every move is clipped to zero" theory is out.
* The map's entity lump contains **no spawn entities at all** (only the
  worldspawn), so the game module must pick the spawn point itself (a random
  point, traced down to the floor).  The player appears at (-2304, -1920, 26) -
  near the map's minimum corner - and there is no floor under it in the brush
  model.  The module's own spawn logic (ClientSpawn, gamex86.dll 0x500F38A0)
  has to be read: which point does it choose, and does it trace?
* Restoring the `spectator` key in the userinfo does not change anything (the
  movement is still ignored), so the module's "no spectator key = a spectator"
  theory is out as well.
* The z of the player sinks steadily and accelerates (26 -> 16 in a minute) -
  that is the module's gravity running with no floor under the player, i.e. the
  server really is simulating a player that is in free fall.
* The player state carries the view angles and the msec, so the command
  reaches the module; the movement is the only field the module ignores.

**The two probes that remain, both in gamex86.dll:**
  1. `ClientSpawn` (0x500F38A0) - how the spawn point is chosen (and traced),
     so the server stops dropping the player into the void.
  2. `ClientThink` (0x500F53A0) - which field of the command the movement is
     read from, and the gate that skips it (the button latching and the angles
     are in the `gclient+0x538 == 0` branch, so the movement is either in the
     other branch or behind another flag).

### 4e.4 - ClientThink mapped end to end (2026-10-23)

`ClientThink` (`gamex86.dll` 0x500F53A0) re-read from the saved Ghidra
decompile (`analysis/gamex86_all.txt`, FUNC 500f53a0).  This settles
several open questions:

1. **The wire layout is ours.**  The module copies the 24-byte command
   verbatim (6 dwords) and reads: msec `+0x00` (`msec/10` simulation
   frames, the remainder kept back in `*param_2`), buttons `+0x01` with
   the latching `latched |= (~old) & new`, the three **signed binary**
   view shorts at `+0x04/+0x06/+0x08` (converted with `* 0.005493164`
   = 360/65536), the movement shorts applied as **short x 0.125** (the
   1/8 unit scale) and two float extras at `+0x10/+0x14` copied to
   `gclient+0x48C/0x490` when non-zero.
2. **THE GATE.**  `ClientThink` opens with
   `if (*(int *)(gclient + 0x538) == 0) { <the whole simulation> } else
   { <angles + buttons ONLY> }`.  When `+0x538` is non-zero the module
   **never applies movement** - the msec and the angles still arrive.
   That is exactly the observed symptom of 4e.
3. **What sets `+0x538`: the USE button (0x02).**  At the tail of ClientThink
   the **rising edge** of USE (`latched & 2`) calls `FUN_500885e0`
   (0x500885e0) when `+0x538` is 0, which walks the client record array
   (`DAT_5015cca0`, stride **0x464**, alive test at record+0x74+0x320 == 0)
   and stores the **next live client record** in `gclient+0x538`
   (flag `+0x53c` = 1); `FUN_50088550` advances the target when one is
   already set.  A USE press on a multiplayer server therefore puts the
   client into the module's **interact/follow mode** - an observer
   simulates no movement and writes an empty player state.  The mode is
   cleared when the record walk returns to the owner.
4. **Consequence for testing:** `psbuttons.js`, `psfire2.js`, `psspeed.js`,
   `bot.js` press USE on purpose - after the first USE press those probe
   runs were already in interact mode, which likely explains BOTH
   "sometimes the player does not move at all" and the slow ~50 s state
   death of 4d.  **Probe rule: never send button bit 0x02 unless
   deliberately testing interact mode.**
5. Sprint bit confirmed: `buttons & 0x20` **doubles** the three movement
   shorts inside ClientThink (`gclient+0x550` marks the sprint state).

Still open: whether anything OTHER than USE sets `+0x538` (the next REA
pass), and the `ClientSpawn` point choice vs the free-fall sink.

### 4e.5 - fixes that made movement work; death still open (2026-10-24)

Measured against a real dedicated `SoF.exe` server (trap: `SoFTest.exe`
started as dedicated never finishes the handshake - it re-requests
`configstrings 42 0` in a loop forever).

1. **Server packets:** word1 bit31 is NOT a fragmentation marker for the
   server->client direction - SoF keeps whole messages in one datagram; the
   bit marks the packet that carries a reliable message.  Process every
   packet; a seq-keyed reassembly buffer swallows every request.
2. **Client packets:** the reliable toggle is the client's **own** state
   (`myToggle`), flipped on every *reliable* send (string commands, userinfo);
   unreliable usercmds replay the current value.  Echoing the server's toggle
   made the request cursor stall / rewind (configstrings 518 <-> 652 churn).
3. **Movement.**  With the word1 bit31 flag set on every send the module
   ignored movement entirely; clearing the flag on **unreliable** usercmd
   packets makes the origin move.  Rule 3 of section 2 ("word 1 must carry
   the fragment flag") is true only for the reliable messages.
4. Unrelated but needed: `unrelHdr` ORs `srvReliableToggle << 31` into a
   JS int32 - writeUInt32LE throws RangeError; mask with `>>> 0`.
5. Confirmed spawn data: spawns land exactly at `info_player_deathmatch`
   points + 10 z; playerState mask `0x1a8628a2`: origin present, velocity
   and viewAngles **absent from the wire** in these frames.
6. Death of the client stream ~5 s after spawn is unchanged by all of the
   above (svc tally: 50 frames then silence, no OOB message); the 4d
   rate-table (5 Hz -> 16 s, 20 Hz -> 6 s) still holds.
   **Overtaken 2026-10-25 by 4e.6:** the stream now survives 80 s at 10 Hz.
   The trigger was our own failing checksum (head seq vs. key mismatch) and the
   too-fast cadence, not a server rule.

### 4e.6 - the wire order is confirmed and the client really moves (2026-10-25)

**Retraction first.**  The "movement works" line of 2026-10-23/24 rested on the
origin moving by `short x 0.125` on all three axes.  That was not proof that
the module accepted our commands - the game module scales the command by 0.125
in `ClientThink` and the client-side prediction produced the same numbers, so
the observation could not tell the two apart.  It is now genuinely verified, by
the direction test below.

**1. The command record, confirmed against the decoder.**  The message is
`[type byte 0x02][checksum u8][u32 seq][bit-packed delta chain]`, and the
decoder (`SoF.exe` 0x20005AA0, called three times per movement message by
`SV_ReadClientMessage` case 2 at 0x200636C0) lays out each command as:

| record | field | wire field |
|---|---|---|
| +0x00 | msec | 8 bits, unconditional (there is **no** "changed" bit for msec) |
| +0x01 | buttons | 8 bits |
| +0x02 | flags2 | 5 bits, `<< 3` |
| +0x03 | flags3 | 1 bit (`0` or `1 -> 0xff`) |
| +0x04 | pitch | 12 bits (binary angle `>> 4`) |
| +0x06 | yaw | 12 bits |
| +0x08 | roll | 12 bits |
| +0x0A | forwardmove | 10 bits, `value + 0x1fe`, clamped +-200 |
| +0x0C | sidemove | 10 bits, clamped +-160 |
| +0x0E | upmove | 10 bits, clamped +-200 |
| +0x10 / +0x14 | two 32 bit extras | unconditional |

Bits are packed **LSB first inside each byte** (reader 0x200BE390: `byte >> bitInByte`,
last byte masked with `0xff >> (8 - lastBits)`).  The old encoder had the angles
and the movement swapped (12 bit fields read from 0x0A and 10 bit from 4) plus a
spurious msec "changed" bit - that misalignment is why nothing ever reached the
module.

**2. The checksum key.**  The key is the message's **own outgoing sequence**
(`param_1[0x14a6]` = netchan base + 0x3c), the same value the header writes.
Head seq, inner u32 and key must all be the same number - the old code
incremented `seq` before writing the head, so the head said S+1 while the key
was S, and every usercmd failed.  On a mismatch the server prints
`"Failed command checksum for %s"` in developer mode and **silently drops the
message** (no disconnect).  Algorithm `FUN_2001f1b0`: `k = key % 0xbb4`, payload
copied into 64 bytes plus the four key bytes
`[KEY[k]^lowbyte(key), KEY[k+1], KEY[k+2]^((key>>8)&0xff), KEY[k+3]]`, then MD4
(`FUN_2004d150`), fold the four words, `& 0xff`.  KEY table = 3000 bytes at file
offset 0x120648.  Four live vectors in `web/sofmd4.js` confirm it.

**3. Cadence.**  One message per server frame (msec 33 x 3 commands = 99 ms at
sv_fps 10).  Sending faster underflows the per-client msec budget
(`SV_ExecuteClientMessage` 0x200635F0) and the commands are dropped.  **The 4d
"the server stops the player state" result was our own fault:** with the
checksum fixed and the cadence at 10 Hz the stream survived the whole 80 s
probe.  The 5 Hz -> 16 s / 20 Hz -> 6 s table is overtaken; it measured the
consequence of bad commands, not a server rule.

**4. Verified live** (`web/moveprobe4.js` -> `logs/probe6.log`, server
`SoF.exe +set dedicated 1`, dm/nycdm1): handshake completes, spawn at
(-2303.875, -1919.875, 23.5), forwardmove +200 moves the player ~13 units per
frame along **-Y** with velocity 1600, button bit 0x20 doubles it to 2400 (the
doubling ClientThink does at line 138154 for the shorts at +0x0A/+0x0C/+0x0E -
that is the proof that those offsets are the movement fields), sidemove +160
moves along **-X**.

**5. The angle convention, verified by the direction test**
(`web/moveprobe5.js` -> `logs/probe7.log`; forwardmove kept at 200, only the
yaw changed):

| yaw on the wire | direction of travel |
|---|---|
| 0 | -Y |
| 90 | +X |
| 180 | +Y |
| 270 | -X |

so `forward = (sin yaw, -cos yaw, ...)`, i.e. the world direction is `yaw - 90`
degrees - exactly what 4e.3 said from the spawn angle.  Sidemove + at yaw 0 is
-X.  The module's angle function is `FUN_500fdd70` (gamex86.dll): with the roll
0 it gives `param_2 = (cp*cy, cp*sy, -sp)` and `param_3 = (sy, -cy, 0)`, and the
movement uses **param_3 for forwardmove and -param_2 for sidemove**; positive
pitch means looking DOWN.  `web/www/sofpredict.js` was still using Q2's
convention, so it moved the local prediction at right angles to the server; it
now uses SoF's.  `web/www/app.js` publishes `state.view` because the server
never sends our own viewAngles on the wire (the mask bit never appears), so the
prediction has to use the angles we send.

---

### 4e.3 - the movement bug, the spawn, and two environment traps (2026-10-22, end of day)

**The spawn (new).**  nycdm1 has 16 `info_player_deathmatch` spawn points in
its entity lump, e.g. (-2304, -1920, 16) with the angle 180, (-1344, -1448,
24), (-1824, -2144, 88), (-1128, 56, 152), ...  The game module spawns the
player at one of them, about **10 units above** it, and the player then lands
on the floor at exactly the spawn's z (z 26 -> 16.1).  So:
  * the collision works and the player really is inside the map;
  * the "the camera is inside a brick wall" look is simply the spawn facing a
    wall (the angle 180) - the reference screenshots are the corridors, and
    from the spawn you look straight into one;
  * the world direction of the view yaw A is (A - 90) degrees, and the player
    spawns with the yaw -90, i.e. exactly the spawn's angle 180.
**The movement.**  With NO input the player stands on the floor.  With input
the behaviour is inconsistent between runs: sometimes the player sinks
proportionally to the movement value (a movement of 5 -> no sink, 20 -> -0.1,
50 -> -0.5, 100 -> -1.5, 200 -> -2.4 units in 5 s - i.e. the value we write
into cmd+0x0A behaves like a VERTICAL push and the player is pushed through
the floor), sometimes it does not move at all.  The engine's writer puts the
movement at cmd+0x0A/+0x0C/+0x0E (clamped to +/-200 and +/-160, written as
10 bits of value+510) and the engine's reader stores it at the same offsets, so
either the module's own usercmd_t has a different layout, or the module
applies the value with a scale that does not match ours.  The next probe is
still gamex86.dll's ClientThink (0x500F53A0) - the field it reads and the
gate that skips it - plus the module's PM_Move.

**Trap 1: the server's port lives in User/config.cfg and the server rewrites
that file when it exits.**  When the "set port 29000" line went missing the
server fell back to a random port (28910) and every client that connected to
29000 got a dead socket - which looks exactly like a broken client.  The line
has been restored; **if the clients suddenly stop connecting, check
User/config.cfg and the port the server actually listens on**
(Get-NetUDPEndpoint).
**Trap 2: the master server is a node process.**  Killing the node processes
(for a browser test) kills the master, and then the stock SoF client shows an
empty server list.  The master is restarted with
    node web/gsmaster.js --udp 27900 --tcp 28900 --http 8090
and the stock client is pointed at it by a PATCHED COPY of the client,
C:\Users\User\Soldier of Fortune\SoFClient.exe (the two hard coded
"master.gamespy.com" strings replaced with 127.0.0.1; the original SoF.exe is
left untouched).  The hosts file cannot be edited without administrator
rights.  The master answers the stock protocol: a TCP query on 28900 returns
the \secure\ challenge and then the \final\ list.
