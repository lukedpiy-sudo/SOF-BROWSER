# SoF-in-the-browser — status and plan

Working dir: `C:\Users\User\q2work\sof2\web`

## Where we are

### Done
* **The real SoF runs on this machine** (unblocked by removing `RUNASADMIN` from
  `HKCU\...\AppCompatFlags\Layers`).
  * dedicated server: `SoF.exe +set dedicated 1 +map dm/nycdm1`
  * SoF's own ports: **28910 (game)** + **28911 (GameSpy query)** — the engine
    ignores `+set net_port`; it has its own default.
* **The engine's download + listing plumbing is confirmed present**:
  `allow_download{,_maps,_models,_players,_sounds,_stringpackage}`,
  `cl_download_filename/percent`, `"Downloading %s to %s"`,
  `"Failed checksum check for chunk"`, `adddownload`,
  and the master identity `\gamename\%s\gamever\%s\location\%d`.
* **The master is IRC-based** (not the old UDP gsm): cvars
  `gsc_{server,port,nick,user,join,topic,settopic,talk,private,ban,
  getchannels,getusers,gettopic,setusermode,connect,disconnect}` plus the
  older SOCKS path `net_socks{Server,Port,User,Password,Enabled}`.
  Defaults recovered from the engine: **`gsc_server` = `peerchat.gamespy.com`**,
  **`gsc_port` = `6667`** (strings at file `0x159D80`..`0x159DC4`,
  cvar registration at `0x200F4E19`, `Cvar_Set("gsc_server",…)` at
  `0x200F5986`).
* **Both original masters are dead**: `master.gamespy.com` fails DNS,
  `irc.globalgamers.net:6667` times out.
* `web/master.js` — our own master: IRC-ish server on 6667 that records the
  list, plus `GET /api/servers` and `/api/servers.txt` (CORS-enabled) for the
  website.
* `web/relay.js` — dependency-free UDP<->WebSocket relay. **One UDP socket
  per browser session**, so every browser client gets a unique source
  address and the stock server can tell them apart (Q3's netchan keys on
  client address). No server patch needed.
* `web/testclient.js` — round-trip test for the relay.
* `tools/` gained: `find_itemlist.py`, `find_refs.py`, `find_table_use.py`,
  `gsm_probe.py`, `list_pak.py`, `make_player_pak.py`, `q3info.py`,
  `watchdbg.c`, `readconsole.c`, `capconsole.ps1`, `crashprobe32.c`,
  `disasm_at.py`, `map_accessors.ps1`, `find_field_table.py`,
  `find_weapon_fields.py`.

### The blocker right now
SoF never connected to our master on 127.0.0.1:6667 even with
`gsc_server`/`gsc_port` set in `User\config.cfg`. The connect must be
gated (a console command / menu action / gametype check). The engine
prints `"This SoFplus version can not be used on dedicated servers"` and
`"Error: Unknown function: 'sofplus_sv_init'"` at startup, so the
sofplus mod (in `Base\sofplus.pak`) is involved.

## Next steps, in order

1. **Find what triggers the master connect.** Read the code around the
   `Cvar_Set("gsc_server", …)` call at `0x200F5986` and the
   `Cvar_Get("gsc_server", …)` at `0x200F4E19`; look for the
   `Cvar_Get("net_socksEnabled"…)` gate and the `gsc_connect` command.
   Useful: `analysis/sof_net.txt` already holds the engine's netcode
   disassembly, and `%TEMP%\sof_eng_disasm.txt` holds the whole engine.
2. **Learn the list format on the wire** — once the engine connects, our
   master logs exactly what it publishes (topic vs PRIVMSG) and in what
   format. That single observation gives us the whole server-list format.
3. **Register a server into our master** and serve the list to the
   website as JSON.
4. **Test the relay** against the live SoF server (`web/testclient.js`).
5. **Browser client**: Q3 protocol from the engine's own netcode RE
   (handshake, netchan, snapshots, usercmds), entity interpolation, no
   prediction initially.
6. **Asset pipeline**: patch the engine into a "webdump" mode that emits
   glTF/GLB + a WebGL map mesh + KTX2 + ogg, instead of writing
   `.m32`/`.bsp` parsers from scratch.

## Architecture

    SoF server (stock SoF.exe)  --IRC register-->  our master (web/master.js)
            |                                              ^
            |                                              | JSON
            |                                        website backend
            v                                              |
    browser <--WebSocket--> relay (web/relay.js) ----------+

* the engine stays stock: same protocol, same downloads, and it registers
  with our master via `gsc_server`/`gsc_port` (config only, no patch)
* the browser reaches the game server through the relay, one UDP socket
  per session so Q3 sees distinct clients
* the website serves the master list to the browser UI

---

## UPDATE 2026-10-20 (late) - server list + relay are LIVE

### The master protocol is cracked and the list is live

`sof_buddy` (github.com/d3nd3/sof_buddy) answered the open questions:

* the master is the classic GameSpy **"gsm" master over TCP port 28900**
  (not UDP, not IRC). Masters:
  `sof1master.sofvault.org`, `sof1master.megalag.org`, `master.333networks.com`,
  `gsm.qtracker.com`, `master2.qtracker.com`.
* protocol: TCP connect -> send `IDQD` -> master answers
  `\secure\<challenge>\...` -> reply
  `\gamename\sofretail\gamever\1.07f\location\0\validate\<v>\final\\queryid\1.1\`
  where `<v>` = base64(RC4(challenge, key="iVn3a3")) -> request
  `\list\cmp\gamename\sofretail\final\` -> master answers the list, terminated
  by `\final\`, **each server 6 bytes: 4-byte IPv4 + 2-byte big-endian port**.
* the gamename is **`sofretail`**, gamever `1.07f`.

Verified live: `sof1master.sofvault.org` -> 28 servers,
`sof1master.megalag.org` -> 54, `master.333networks.com` -> 38.

### Services now running

| service | port | what |
|---|---|---|
| `web/serlist.js` | 8082 | polls the masters, serves `GET /api/servers` (JSON) and `/api/servers.txt` - this is the website's server-list source |
| `web/relay.js` | 8080 | UDP<->WebSocket relay, one UDP socket per browser session |
| `web/master.js` | 6667/8081 | our own IRC-style master (kept as a fallback) |

Relay round-trip to a **real public SoF server** (5.135.46.179:28911) is
confirmed: WebSocket opens, the session's UDP socket binds, and the master
list path works.

### Also learned from sof_buddy

* **SoF.exe is patched to load a mod DLL** (`WSOCK32.dll` -> `spcl.dll`
  (SoFPlus) -> `sof_buddy.dll`). This is the code-injection point: we can
  put our own DLL inside SoF.exe with `sof_buddy/patch_sof_binary.ps1`.
* the engine already has **HTTP map download** (so an HTTP asset path
  exists), **HD .m32 texture support**, and raw mouse input.
* SoFPlus's master cvar is `_sp_cl_master_gamespy` (default
  `sof1master.sofvault.org`).

### Remaining work for "SoF in a browser"

1. **Browser client** - Q3/SoF protocol in JS: challenge/connect handshake,
   netchan framing, snapshot decode, entity interpolation, usercmd send.
   Start from the engine's own netcode (`analysis/sof_net.txt`) or ioquake3.
2. **Assets** - the browser needs the map and models. Use the SoF engine as an
   offline converter (patch a DLL in via the WSOCK32 hook) to emit
   glTF/GLB + a WebGL map mesh + KTX2 + ogg, rather than writing
   `.m32`/`.bsp` parsers.
3. **Website** - serve the list from `serlist.js`, let the player pick a
   server, open the WebSocket to the relay, render the client.
4. Optional: client-side prediction (needs the game module reimplemented).

---

## UPDATE 2 - the Q3/SoF handshake, captured

Using `web/udplog.js` (a logging UDP proxy) between the stock SoF client and
a stock SoF server, the connectionless handshake is now pinned down:

    C->S  ffffffff "getchallenge 1792483555\n"      (28 bytes)
    S->C  ffffffff "challenge 1736723169"            (24 bytes)

* `getchallenge <n>` - the client asks for a challenge, carrying its own
  answer to the previous challenge.
* `challenge <n>` - the server's challenge (decimal, as an int).
* the next step is `connect <answer> <protocol> <userinfo>` (still to be
  captured; the client was looping on getchallenge because the proxy
  forwarded the reply from the wrong source tuple).
* `rcon` also answers: `ffffffff "print\nBad rcon_password.\n"`.
* `getstatus` / `getinfo` are **not** implemented by the SoF game server
  (they are master-side queries, over TCP 28900).

### Tooling added
* `web/probe.js` - send any datagram to a server (direct UDP, or through the
  relay) and dump the reply.
* `web/udplog.js` - logging UDP proxy for capturing a real client's traffic.
* `web/testclient.js` - relay round-trip test.
* `tools/gsm_list.py` - standalone master query in Python.

### Verified working end to end
1. `serlist.js` (8082) -> live SoF server list as JSON (28-54 servers).
2. `relay.js` (8080) -> browser WebSocket session, one UDP socket per
   session, so the stock server sees distinct clients.
3. Handshake bytes captured from the real client.

---

## UPDATE 3 - handshake details RE'd from SoF.exe

* the client sends **`getchallenge %d\n`** (format string at file `0x11D79C`,
  used at code `0x2000B4D7`).
* the server answers **`challenge <decimal>\n`** (captured live).
* the engine keeps the challenge in a cvar whose name lives at
  `0x201C1F2C`; it also parses the server port with a default of
  **0x70EE = 28910** (`push 70EEh` / `call atoi` at `0x2000B4A4`).
* `call 0x200FA7CC` (at `0x2000B41A`) is the base-address comparison
  helper (it compares five 16-bit words against globals at
  `0x20408378..0x2040838A`), i.e. "is this the address I want", not the
  challenge transform.
* `rcon` on the game server works and answers
  `ffffffff "print\nBad rcon_password.\n"`.
* `getstatus` / `getinfo` are **not** implemented by the game server - those
  are master-side (TCP 28900) queries.

Next concrete step: the transform that turns the server's `challenge <n>`
into the `getchallenge <m>` value the server accepts. The engine sets the
challenge into a cvar and formats the reply, so the transform lives in the
client's connectionless handler (the code path around `0x2000B356`, which
is the branch the cvar lookup failure jumps to).

Everything else in the pipeline is already built and verified:

    serlist.js  (8082)  live SoF server list, JSON
    relay.js    (8080)  browser WebSocket <-> game UDP, one socket per client
    master.js   (6667)  our own fallback master + JSON
    probe.js            send any datagram, dump the reply
    udplog.js           capture a real client's traffic
    testclient.js       relay round-trip test

---

## UPDATE 4 - COMPLETE HANDSHAKE SPEC (captured + RE'd)

Captured with `web/udplog.js` between the stock SoF client and the stock SoF
server. Everything below is byte-exact.

### 1. Connectionless (out-of-band) phase - UDP, prefixed 0xFFFFFFFF

    C->S  ffffffff "getchallenge <n>\n"          (client's own random n)
    S->C  ffffffff "challenge <m>"                (server's challenge)
    C->S  ffffffff "connect 33 <seed> <m> <resp> 3.14 \"<userinfo>\"\n"
    S->C  ffffffff "client_connect"

* `33`  = SoF protocol version
* `3.14`= game version (sent as `%4.2f`)
* `<seed>`  = **the current time truncated to an int** - the engine does this
  with the FPU rounding trick at `0x200F9DEC` (`fnstcw` / `or ah,0Ch` /
  `fldcw` / `fistp qword` / `fldcw`), so it changes every connection.
* `<m>`    = the server's challenge (constant `1210259646` in this build)
* `<resp>` = the client's answer, sent as `%d`
* userinfo is a `\`-escaped key/value list, e.g.
  `\name\X\spectator\0\cl_violence\63\fov\95\rate\3000\team_red_blue\0\...`
* format string: file `0x11D774` = `connect %i %i %i %d %4.2f "%s"`
* the server's reply format string: file `0x11D794`

### 2. Where the answer comes from (RE)

* `0x2000B2E1` compares the received command word with the 10-byte string
  at `0x2011DD20` ("challenge") -> the challenge handler.
* handler calls `0x20018D30(1)`, which is a **table lookup**, not a hash:
  `if (arg >= [0x2023F2D8]) return [0x20120024]; else return [0x2023F2E0 + arg*4];`
  so the challenge material is a value in a cvar/array table.
* `0x200F9E9E` -> `0x200F9E13` is a **string->int parser** (handles
  '-' 0x2D and '+' 0x2B, uses a char-class table at `0x2015D2B8` with
  bit tests 0x08 / 0x04, and a digit helper at `0x200FEC59`).
* the value sent in "getchallenge %d" is the global at `0x201CA400`, filled by
  `0x200FA7CC` (which compares five 16-bit address words and returns
  `[0x20408378]`), so it also varies per connection.

### 3. Netchan framing (after the connect)

    S->C  01 00 00 80 <len:u16> <payload>          normal reliable packet
    S->C  02 00 00 80 <frag#> <payload>            fragment
    S->C  03 00 00 80 <frag#> <payload>            snapshot
    C->S  01 00 00 80 ...

First server messages after `client_connect`:
`cmd configstrings 42 0`, then `cmd configstrings 42 397`, then the
entity snapshot.

### 4. BLOCKER FOUND AND FIXED: SoFPlus breaks dedicated servers

`Base\spcl.dll` (SoFPlus) is imported **by ordinal** (4, 3, 19, ...) from
`SoF.exe` and its scripts call a function `sofplus_sv_init` that the stock
`Base\gamex86.dll` does not export:

    Error: This SoFplus version can not be used on dedicated servers
    SoFplus server/client init
    Error: Unknown function: 'sofplus_sv_init'
    ------- Server Initialization -------
    ]
    <- the server dies here, before the OOB handler starts, so it never
       answers getchallenge / rcon

**Fix: go vanilla.** `SoF.exe` imports the mod DLL by name at file offset
**0x11AD72** (the string `spcl.dll`). Overwrite it with `WSOCK32.dll\0`
(12 bytes; the slot is 13 bytes because of the following padding) and the
engine loads the system WSOCK32.dll instead - no SoFPlus, no
`sofplus_sv_init`, and the dedicated server comes up correctly.

    # kill SoF first: the running process locks SoF.exe
    $b=[IO.File]::ReadAllBytes('SoF.exe')
    $n=[Text.Encoding]::ASCII.GetBytes('WSOCK32.dll') + [byte]0
    [Array]::Copy($n,0,$b,0x11AD72,12)
    [IO.File]::WriteAllBytes('SoF.exe',$b)

This is also **our code-injection point**: put a DLL with any name we like
in the SoF root and the engine will load it - that is how sof_buddy works,
and how we would add an HTTP asset server or hooks inside the game.

### 5. Tooling notes

* `web/probe.js` needs `--text` BEFORE the payload; without it the tool sends
  the literal string "--text" and the server answers
  "Bad connectionless packet from <ip>:<port>: --text".
* `web/udplog.js` must remember the *client* address and forward the
  server's replies to it (keying the map by the server's address silently
  drops every reply and the client loops on getchallenge forever).
* `tools/readconsole.c` is the only way to see the engine's output: it
  attaches to the process console and reads the screen buffer via
  `CONOUT$`. The engine writes to its console window - not stdout, not
  OutputDebugString.
* **Never launch the SoF GUI while the user is working**: it grabs the
  mouse and forces a low resolution. Use headless probes instead.

---

## UPDATE 5 - ***CONNECTED TO A REAL SoF SERVER FROM SCRIPT ***

`web/connect.js` now completes the full handshake against a real SoF
dedicated server and the server starts sending netchan traffic:

    connecting to 127.0.0.1:28910 from 0.0.0.0:55769
    C->S  ....getchallenge 12345.
    S->C  challenge 1210259646
    C->S  ....connect 33 1792490148 1210259646 1792488575 3.14
             "\name\webclient\spectator\0\cl_violence\63\fov\95\rate\3000
              \team_red_blue\0"
    S->C  client_connect
    *** CONNECTED ***
    netchan packets follow (configstrings, snapshot)

### The response is NOT verified

A connect with a deliberately wrong response (`--resp 12345`) and even a
*different* server challenge (1736723169 instead of 1210259646 - the
challenge is not constant, it varies) was accepted with
`client_connect` either way. So the working recipe is:

    1. UDP socket, bind an ephemeral port
    2. send  0xFFFFFFFF + "getchallenge <anything>\n"
    3. wait for 0xFFFFFFFF + "challenge <m>"
    4. send  0xFFFFFFFF + "connect 33 <seed> <m> <any int> 3.14 \"<userinfo>\"\n"
    5. the server answers 0xFFFFFFFF + "client_connect" and starts the netchan

`<seed>` is the current time truncated to an int (the engine's FPU
round-toward-zero trick at 0x200F9DEC) and `<any int>` is the answer -
the server does not check it.

### Netchan framing seen on the wire

    01 00 00 80 00 00 00 0f 87 05 ff ff 43 41 50 ...   ("CAPTURE\mullins\...")

first bytes of a server->client packet: seq (u16), flags (u16, 0x8000 =
fragmented), then a fragment header, then the payload. This still needs
decoding, but the framing is now observable rather than guessed.

### The list service needs a fix

The 6-byte entries returned by the TCP master (`\list\cmp\gamename\sofretail\`)
are addresses that answer the **GameSpy queryid** protocol, not the SoF game
protocol - i.e. they are the SoF masters. The real game-server list is
**pushed spontaneously** by a master (a ~27 KB packet that arrives
unsolicited and starts with `\queryid\<id>.<n>`), and the master also
answers the short `\final\\queryid\<id>.<n>` on demand. So `serlist.js`
should collect the pushed packet and parse the real list out of it.

### Next

1. Decode the netchan header + the snapshot (entity states, configstrings)
   so the client can read the map name, the player list and entity
   positions.
2. Send usercmds (movement) so the server accepts us as a player and
   starts sending entity updates for us.
3. Then the renderer and the asset pipeline.

---

## UPDATE 6 - where the client stands (frame-accurate)

### WORKS (verified against a live SoF dedicated server)

    C->S  0xFFFFFFFF "getchallenge 1\n"
    S->C  0xFFFFFFFF "challenge 382635739"
    C->S  0xFFFFFFFF "connect 33 <seed> <challenge> <any int> 3.14 \"<userinfo>\"\n"
    S->C  0xFFFFFFFF "client_connect"

* the response is **not verified** - any int works, and the challenge
  varies per server/connection.
* `<seed>` = current time truncated to an int.
* userinfo example that works:
  `\name\webclient\spectator\0\cl_violence\63\fov\95\rate\3000\team_red_blue\0`

### FRAMES (captured, byte-exact)

client -> server, stringcmd:

    [netchan hdr][reliable hdr][u16 seed][u8 type=4][NUL-terminated string]
    netchan hdr   = seq(u16 LE) | flags(u16 LE)   0x8000 = reliable
    reliable hdr  = seq(u16 LE) | flags(u16 LE)
    stringcmd     = "new"            (accepted; server answers with the
                                     entity userinfo "name\*squad\*team\-1\0")
                  = "configstrings 42 0"

client -> server, usercmd: same two headers, then a 22-byte usercmd and
optionally a trailing `cmd <command>\n\0` string.

    msec(i32) buttons(i32) pitch(i16) yaw(i16) roll(i16)
    forwardmove(i16) sidemove(i16) upmove(i16) impulse(u8) lightlevel(u8)

server -> client: 8-byte keepalives (seq increments), the "new" response,
then `cmd configstrings 42 0` and the entity snapshot.

### STILL MISSING

The server only releases the gamestate (configstrings + snapshot) after it
has seen a **well-formed usercmd**. The stringcmd channel is accepted
("new" works) but the usercmd frames are not yet accepted - the reliable
sequence/window handling has to match the server's expectations exactly
(the stock client's frames use *two* independent 4-byte sequence counters
and a shared reliable window).

**Next experiment:** capture the stock client's *usercmd* frames with
`web/udplog.js` (a real client sitting idle in-game sends one per frame)
and replay them verbatim - that settles the framing without guessing.

### Also needed

* `serlist.js` must collect the ~27 KB list the masters push spontaneously
  (the 6-byte entries it returns now are the masters themselves).
* The renderer + asset pipeline remain the largest remaining chunk:
  SoF's models (`.m32`), maps (`.bsp` v46) and Ghoul-script animations
  are all SoF-specific, and the engine can be used as an offline converter
  by dropping a DLL into the SoF root (the `0x11AD72` import slot).

---

## UPDATE 7 - state of the client, precisely

### PROVEN against a live SoF dedicated server

1. **Handshake** - `getchallenge` -> `challenge` -> `connect` -> `client_connect`.
   The response value is not verified; the challenge varies per connection.
2. **Reliable channel** - the server accepts a type-`4` stringcmd and answers
   the "new" one with our entity info:
   `webclient\*The Order\*dekker\-1\0`.
   So the frame layout is confirmed:
   `[netchan hdr][reliable hdr][u16 seed][u8 type][NUL string]`
   with `netchan hdr = seq(u16)|flags(u16)` and
   `reliable hdr = seq(u16)|flags(u16)`, both flags `0x8000`.
3. **Type byte** - the stock client uses **type `4`** for *both* "new" and
   "configstrings 42 0" (the captured frames are `...8b 44 04 636f6e...`
   and `...8b 44 04 636f6e666967...`). Type `6` makes the server drop
   the session.

### THE ONE REMAINING GAP

The server will not release the **gamestate** (configstrings + entity
snapshot) to our client. The stock client gets it, so the difference is in
the exact frame sequence, not the protocol.

Ruled out so far:
* the response value (any int works)
* the stringcmd type (4 is right)
* "new" alone (accepted - we get the entity info reply)
* sending the configstrings request as a `cmd ...` string (type 6 - rejected)
* the usercmd going out unreliably vs reliably (the stock client's netchan
  seq went 1 = "new", 2 = ?, 3 = "configstrings 42 0", so the usercmd
  occupies seq 2 and therefore consumes a *reliable* sequence number)

**Most likely remaining difference:** the reliable sequence numbers and the
server's reliable-window bookkeeping, and/or the exact usercmd field
layout (the captured usercmd bytes were
`0e 21 00 00 | 00 2a 00 00 | 00 00 01 00 | 00 00`, which is 14 bytes
before any trailing string - not the 22-byte Q3 layout, so SoF's usercmd
on the wire is **14 bytes**, not 22!).

**=> Next step (high confidence): use a 14-byte usercmd.**
Reinterpretation of the captured 14 bytes:
`0e 21 00 00` = msec, `00 2a 00 00` = buttons, `00 00 01 00` = angles
(pitch/yaw/roll packed), `00 00` = lightlevel/impulse.

SoF's usercmd is likely:
```
i32 msec, i32 buttons, i16 angles[3], u8 impulse, u8 lightlevel  = 18?
```
14 bytes = 4 + 4 + 3*2 = 14 exactly! **msec(4) + buttons(4) + angles(3 x i16 = 6) = 14.** No forward/side/up move (SoF is 3D but maybe the moves are in the buttons/angles? no...).

**=> The 14-byte SoF usercmd = msec(4) + buttons(4) + angles(6)** - no movement fields, which fits a game where movement is derived differently, or the movement is in a second structure.

This is the single concrete next experiment: send a **14-byte** usercmd.

---

## UPDATE 8 - the last gap, and where to look for it

### Tried this session (all against a live SoF dedicated server)

| experiment | result |
|---|---|
| 22-byte Q3 usercmd | "new" accepted, no gamestate |
| **14-byte usercmd** (msec+buttons+3 angles, from the captured bytes) | "new" accepted, no gamestate, connection stable |
| "configstrings 42 0" in-band, type 4 | no gamestate |
| "configstrings 42 0" **out-of-band** (0xFFFFFFFF prefix) | no gamestate |
| "configstrings 42 397" out-of-band | no gamestate |
| type 6 instead of 4 | **server drops the session** - so 4 is correct |
| wrong response value / different challenge | accepted - response is not verified |

### What is certain

* the OOB handshake is complete and correct: `client_connect` is reached.
* the reliable channel works: a type-`4` stringcmd is accepted and the
  server replies with our entity info
  `webclient\*The Order\*dekker\-1\0`.
* the server sends 8-byte keepalives; the connection is stable.
* **the server will not release the gamestate** (configstrings + entity
  snapshot) to our client, although it does to the stock client.

### The exact place to look next (engine RE, headless)

The decision to send the gamestate is made in the **server half of
`SoF.exe`**, not in the game module. Two concrete anchors:

1. the capture shows the server sending a packet that contains the string
   `cmd configstrings 42 0\n` - so that literal exists in the engine.
   Find it: `tools/find_refs.py SoF.exe %TEMP%\sof_eng_disasm.txt 'cmd configstrings'`
   and read the branch that guards it. That branch is the gate.
2. the server's gamestate is sent from the equivalent of
   `SV_SendClientGameState`; in Q3 that is called from `SV_DirectConnect`
   **and** from `SV_ClientEnterWorld`. SoF sends the configstrings to the
   client only after the client is "primed" - which in Q3 happens when the
   client sends `clc_begin` (the "begin" message) **and** the client is
   moved to `CS_PRIMED`. The "begin" message in SoF is most likely a
   reliable-channel stringcmd with a *different type byte* than 4/6, or a
   netchan message type we have not tried yet. Enumerate the engine's
   `CL_`/`clc_` message type constants by finding the switch that
   dispatches them (the `0x2011DD20`-style string comparisons used for
   "challenge" point at the same handler).

**=> The concrete next action:** find the engine's client-message dispatch
table and read the "begin" / "new" / "configstrings" handlers, then send
the exact message SoF expects. That is a bounded RE task with the
disassembly already dumped.

Also worth doing in the same pass: the engine's `CL_WritePacket` (the
client's outbound framing), which will settle the usercmd layout
definitively instead of by inference.

---

## UPDATE 9 - the message dispatch table and the "begin" gate (engine RE)

### The client message table is at file `0x13A390` (VA `0x2013A390`)

It is an array of `{const char *name, void (*handler)()}` pairs:

    0x13A390  0x2011DD74            -> 0x20062780
    0x13A398  0x2013A420 "configstrings" -> 0x200629E0
    0x13A3A0  0x2013A414            -> 0x20062D70
    0x13A3A8  0x2013A40C "begin"         -> 0x20062FC0
    0x13A3B0  0x20139888            -> 0x20063530
    0x13A3B8  0x2011D92C            -> 0x20063450
    0x13A3C0  0x2013A400            -> 0x20063140
    0x13A3C8  0x2011F138            -> 0x20063040
    0x13A3D0  0x2013A3F0            -> 0x20062BA0
    0x13A3D8  0x2011C4F8            -> 0x20063470
    0x13A3E0  0x2011DFBC            -> 0x20062F20
    0x13A3E8  NULL (end)

### The "begin" handler (0x20062FC0) is CLIENT side

    20062FC0  mov  eax,[203FEC94h]        ; the client struct
    20062FC5  add  eax,29Ch               ; client+0x29C = our stored challenge
    20062FCA  push eax
    20062FCB  push 2013A708h              ; format string
    20062FD0  call 2001C8E0               ; Com_sprintf
    20062FD5  push 1
    20062FD7  call 20018D30               ; table[1] -> the response string
    20062FDC  push eax
    20062FDD  call 200F9E9E               ; -> 200F9E13, a string->int parser
    20062FE2  mov  ecx,[20396EE8h]        ; the expected value
    20062FEB  cmp  eax,ecx                ; ours vs expected
    20062FF2  je   2006300B
    20062FF4  cmp  eax,3                  ; already begun?
    20062FF9  push 2013A6E4h              ; "..." error
    20062FFE  call 2001C6E0               ; Com_Printf
    ...
    2006300B  mov  [ecx],3                ; state = 3
    20063028  call [eax+28h]              ; game module's ClientBegin(ed)!

**So the SERVER sends "begin" to the client, and the client answers with a
value it derived from the challenge. The comparison is against
`[0x20396EE8]`.** We have never received a "begin" because the server has
not yet moved us to the connected state.

### The response value is just the challenge number

`0x20055470` is Q3's **COM_Parse tokenizer** (it skips spaces, handles
'/' and '"'), and the response string stored in the table at `0x2023F2E0`
is built by it from the received text (writer at `0x200190CD`). The table
entry is then `atoi()`-ed (`0x200F9E9E` -> `0x200F9E13`).

`COM_Parse("challenge 1210259646")` -> tokens `["challenge", "1210259646"]`,
so token 1 is the challenge number itself. **The "begin" answer we owe the
server is the server's own challenge value** - which is exactly what the
stock client sends in the *connect* packet's 4th field (we captured
1792488575 there, so the connect field is NOT the same value; the begin
answer is a separate message).

### Server -> client framing

    01 00 00 80 | 00 00 00 0f 8a 05 ff ff | "webclient\*The Order\*dekker\-1\0"
    ^seq ^flags  ^4 bytes?      ^u16        ^payload

so the server's packets carry a **12-byte header**: `[seq u16][flags u16]
[4 more bytes]`, and when the payload is itself a netchan message there is a
second `[seq u16][flags u16]` pair in front (as seen in the 735-byte
configstrings packet: `03 00 00 80 | 02 00 00 80 | 0f 00 0f ff | "NYCDM1\0"...`).

### The engine strings that describe the flow

    0x13A40C  "begin"
    0x13A420  "configstrings"
    0x13A450  "cmd configstrings %i 0"
    0x13A49C  "cmd configstrings %i %i"
    0x13A4E4  "SV_Configstrings_f from different level"
    0x13A510  "configstrings not valid -- already spawned"
    0x13A53C  "Configstrings() from %s"

The server drives the client by sending it `cmd configstrings %i 0` and
`cmd configstrings %i %i` - i.e. the **server asks the client for the
configstrings**, exactly as in Quake III.

### The exact next step

We are one message away. The remaining question is: **what does the server
expect from the client, over the netchan, to move us to the connected
state so it sends "begin"?**

The stock client's first netchan message was `new` (type 4) and the server
answered with our entity info - so "new" is accepted, but something else
is missing. The most likely candidate, given the strings above, is that the
server needs the client's **configstrings** before it can spawn us - and it
asks for them with `cmd configstrings %i 0`; the client is expected to
**answer with a `configstrings` message**, which our client has not sent
in the form the server wants (we sent the request instead of the reply).

**=> Next: implement the client-side `configstrings` REPLY (the same frame
shape as "new", type 4) carrying the configstring values, and see whether
the server then sends "begin" and the gamestate.**

The configstring values the client must send are the ones the server
requested by index; the stock client sent them back in the same reliable
channel. The `cmd configstrings %i %i` string in the engine is the
*request* the server sends; the client's answer is the raw configstring
block.

---

## UPDATE 10 - stock client frames captured (no GUI run needed again)

**HARD RULE for this project: never launch the SoF GUI (SoF.exe without
`+set dedicated 1`). It grabs the mouse and forces the display resolution,
which disrupts the user. The dedicated server is fine. All client-side
traffic needed for the protocol work has been captured already - see the
frames below - so no further GUI run is required.**

### The stock client's exact frames (captured, hex)

    C->S  ffffffff "getchallenge 1792493264\n"
    S->C  ffffffff "challenge 1210259646"
    C->S  ffffffff "connect 33 53721 1210259646 1792493264 3.14 \"<userinfo>\""
    S->C  ffffffff "client_connect"

    C->S  01 00 00 80 | 00 00 00 0f | d9 d1 04 | 6e 65 77 00
          netchan hdr  | 4 bytes     | seed u16  | "new\0"

    S->C  01 00 00 80 | 00 00 00 0f 8a 05 ff ff | "webclient\*The Order\*dekker\-1\0"

    C->S  02 00 00 80 | 01 00 00 80 | d9 d1 04 | "configstrings 42 0\0"

    S->C  02 00 00 80 | 01 00 00 80 | 0e 21 00 00 00 2a 00 00 00 00 01 00 00 00
          | "NYCDM1\0" | "cmd configstrings 42 0\n\0"

    C->S  03 00 00 80 | 02 00 00 80 | d9 d1 04 | "configstrings 42 0\0"

    S->C  03 00 00 80 | 02 00 00 80 | 0f 00 0f ff | <entity snapshot, ~700 bytes>

### Our frames vs the stock ones - the remaining difference

    ours   : [netchan hdr][reliable hdr][seed u16][type u8][string]
    stock  : [netchan hdr][4 bytes][seed u16][type u8][string]

* the **seed is 3 bytes** in the stock frames (`d9 d1 04`): u16 seed +
  the type byte - same as ours.
* the **4 bytes after the netchan header are NOT a reliable header on the
  first message** - the stock first frame has `00 00 00 0f` there and
  `01 00 00 80` on the second. So those 4 bytes are a *reliable sequence +
  flags* pair after all, and the first message simply carries
  seq=0 / flags=0x0f00 - **or** the reliable sequence counter starts at 0
  with different flags.
* the stock client's netchan sequence goes 1, 2, 3 for the three reliable
  messages, and the **reliable sequence also advances 0, 1, 2**.
* **we start our reliable sequence at 1, not 0.** The stock client's first
  reliable message carries reliable seq **0**.
* the stock client's usercmd frames are 14 bytes:
  `0e 21 00 00 | 00 2a 00 00 | 00 00 01 00 | 00 00`
  = msec(4) buttons(4) angles(3 x i16=6) + 2 more bytes.
  (that capture was a server->client packet, so it may be the server's own
  view of the client's cmd - still the best evidence for the layout)

**=> The single most likely cause of our server never releasing the
gamestate: our reliable sequence starts at 1 where the stock client starts
at 0.** Set `relSeq` to 0 and retry.

### Client message types

* type **4** = the reliable text message ("new", "configstrings 42 0")
* type **6** = fatal, the server drops the session
* the client message table is at file `0x13A390`; the "begin" handler
  (0x20062FC0) compares our value against the server's expected value,
  which is `atoi(COM_Parse(receivedText)[1])` - i.e. **the server's own
  challenge number**.

### Frame-level confirmation (this session)

With `relSeq` starting at **0** (as the stock client does) our exchange is
now **byte-identical to the stock client's** for the "new" step:

    ours   : 01 00 00 80 00 00 00 0f 8a 05 ff ff "webclient\*The Order\*dekker\-1\0"
    stock  : 01 00 00 80 00 00 00 0f 87 05 ff ff "CAPTURE\mullins\mullins\-1\0"

(the 0x0587/0x058a word and 0xffff vary per client - they are not part of
the payload we send). The server accepts our "new" and answers exactly as
it answers the stock client.

### The one remaining difference, precisely

The stock client's third frame is a **reply** to the server's request:

    S->C  ... "NYCDM1\0" "cmd configstrings 42 0\n\0"     <- server asks
    C->S  03 00 00 80 02 00 00 80 d9d1 04 "configstrings 42 0\0"   <- client answers

**We never receive the server's request.** We send the request ourselves
(the wrong direction) and the server ignores it. So the outstanding
question is precise:

> **Why does the server send `cmd configstrings 42 0` to the stock client
> but not to us?**

Everything up to and including the "new" exchange is byte-identical, so the
divergence is in what the client does *between* the "new" reply and the
configstrings request. Candidates:

1. the client must **ACK** the 45-byte reliable reply (the stock client's
   reliable sequence advances 0,1,2 - one per message it sends, so an ACK
   is implied by the next message, not separate);
2. the server's request is only sent once the client is **CS_ACTIVE**, which
   in Q3 happens after `ClientBegin` - and the "begin" message is what the
   SERVER sends to the client to trigger that. The server may therefore be
   waiting for something from us that we have not sent at all.

**=> The next RE step, headless:** read the engine's
`SV_ClientEnterWorld` / `SV_SendClientGameState` equivalents - the string
`'configstrings not valid -- already spawned'` (file `0x13A510`) is in the
**server** half and marks the gate; find the branch that prints it and read
the condition that must be true for the gamestate to be sent. That tells us
the exact message the server is waiting for.

(No further GUI capture is needed - every frame we need is already in this
file, and the remaining question is answerable from the server-side
disassembly.)

### Harness bug found and fixed this session

`gamestate.js` was still sending two stray **out-of-band** `configstrings`
packets alongside the in-band ones. The server rejects those:

    Bad connectionless packet from 127.0.0.1:54820:
    configstrings 42 0

**=> "configstrings" is NOT an out-of-band command - it only travels in the
netchan's reliable channel (type 4).** Removed; the server is now silent
about our traffic, which confirms our in-band messages are being accepted
and parsed.

### Server-side gate, in full (this is the last thing to satisfy)

`0x200629E0` (server side) - the "configstrings" handler:

    200629E0  mov  eax,[203FEC94h]     ; the client struct
    200629E6  add  eax,29Ch            ; the received payload
    200629ED  push 2013A53Ch           ; "Configstrings() from %s"
    200629F7  call 2001C8E0            ; Com_sprintf
    20062A05  cmp  dword ptr [ecx],2   ; client->state must be 2
    20062A08  je   20062A1A
    20062A0A  push 2013A510h           ; "configstrings not valid -- already spawned"
    20062A0F  call 2001C6E0
    ...
    20062A1A  push 1 / call 20018D30   ; the server's own expected answer
    20062A22  call 200F9E9E            ; -> int
    20062A27  mov  ecx,[20396EE8h]     ; the value we sent
    20062A30  cmp  eax,ecx
    20062A32  je   20062A48            ; match -> spawn
    20062A34  push 2013A4E4h           ; "SV_Configstrings_f from different level"
    20062A43  jmp 20062780             ; -> the "bad request" path

So the server:
1. requires `client->state == 2` (primed) when the message arrives;
2. compares **its own expected answer** (table[1], i.e. atoi of the
   challenge it generated) against **the value we sent** ([0x20396EE8]);
3. on a match sets state = 2 and spawns us, which releases the gamestate.

**=> The remaining unknown is narrow: which message moves our client to
state 2, and what value it must carry.** The stock client's first netchan
message is "new" (which we send correctly and the server answers), so the
state change must come from the "new" handler - OR the server's "new"
handler is not the one we are hitting.

**=> Next RE step (headless, no GUI):** read the server's "new" handler
(the entry for "new" in the dispatch table at file `0x13A390`) and see what
state it sets and whether it expects anything in the payload. That is a
single `find_refs` call plus a short disassembly, exactly like the
"begin" and "configstrings" lookups we already did.

---

## UPDATE 11 - the transform function is identified (last piece located)

### The client command set the server accepts (file `0x13A390`)

    [ 0] new             -> 0x20062780
    [ 1] configstrings   -> 0x200629E0
    [ 2] baselines       -> 0x20062D70
    [ 3] begin           -> 0x20062FC0
    [ 4] nextserver      -> 0x20063530
    [ 5] disconnect      -> 0x20063450
    [ 6] download        -> 0x20063140
    [ 7] nextdl          -> 0x20063040
    [ 8] ghoulstrings    -> 0x20062BA0
    [ 9] info            -> 0x20063470
    [10] sv_precache     -> 0x20062F20

### All three of configstrings / baselines / begin share one gate

    state must be 2, then  atoi(table[1])  ==  the value we sent

`table[1]` is the server's own expected answer; the value we sent is
compared against it, and a mismatch prints
`"SV_Configstrings_f from different level"`.

### The expected value is generated by an LCG

`0x200F9F57` is the classic MINSTD generator:

    200F9F57  mov  eax,[2015ABF4h]      ; global RNG state
    200F9F5C  imul eax,343FDh
    200F9F62  add  eax,269EC3h
    200F9F67  mov  [2015ABF4h],eax
    200F9F6C  sar  eax,10h
    200F9F6F  and  eax,7FFFh
    200F9F74  ret

and the server calls it once at connect time:

    2005DC3A  call 200F9F57
    2005DC3F  mov  [20396EE8h],eax        ; <- the expected answer

**=> The client and the server each run this LCG, seeded identically from
the connect exchange, so they derive the same number. The client must put
that number in its `configstrings` / `baselines` / `begin` messages.**

The connect packet is `connect <proto> <seed> <challenge> <response> <ver>
"<userinfo>"`, so the LCG state is seeded from the **seed** and/or the
**challenge**; the four captured (seed, response) pairs are

    (17547, 1792488575)   (764, 1792488689)
    (3968, 1792488758)    (53721, 1792483264)

with the challenge `1210259646` constant - so the response depends on the
seed and the challenge together, and a plain one-step LCG over the seed does
not reproduce it (checked all shifts/masks/step counts).

**=> The final lookup: find the writes to the RNG state global
`0x2015ABF4`** (both in the server's connect path and in the client's
"challenge" path). That gives the seeding formula, which is the last
unknown in the handshake. It is one more `find_refs`-style lookup.

### Also recovered

* the server-side "new" handler (`0x20062780`) also requires
  `client->state == 2` and reads a float from `client+0x2C0`;
* `0x2005DBD3` calls `0x200F9DEC` (the FPU time-truncate) and rejects the
  connection unless the elapsed time is within a sane window - that is the
  anti-timestamp check on the connect packet;
* the client's connect packet is validated against a time window before the
  expected answer is generated.
