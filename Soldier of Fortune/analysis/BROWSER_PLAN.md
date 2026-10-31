# Unfinished steps before SoF runs in a browser

Everything below is a real, identified gap. Ordered so each item unblocks the
next. The protocol work is closest to done; the asset pipeline is the bulk.

## A. Network protocol (client side) - closest to done

1. **Resolve the one unknown value the server checks.** `configstrings`,
   `baselines` and `begin` all require `client->state == 2` and compare
   `atoi(table[1])` against the value we send (`0x20396EE8`). The value is
   produced by the MINSTD LCG at `0x200F9F57`
   (`state = state*0x343FD + 0x269EC3`, output `(state>>16)&0x7FFF`) whose
   state global is `0x2015ABF4`. The captured client values (1792488575,
   1792488093, ...) are Unix timestamps, and the server's "challenge" is
   also a timestamp, so the rule is probably "our current time must be
   within a window of the server's". **Confirm this by reading the write
   that seeds `0x2015ABF4` on the server's connect path and the client's
   "challenge" path.**
2. **Get the gamestate released.** Once the value is right, the server
   spawns us and sends the configstrings + entity snapshot.
3. **Netchan in the browser**: sequence numbers, reliable window,
   retransmits, fragmentation (12-byte server header + 8-byte reliable
   header + payload).
4. **Snapshot decode**: entity_state layout, the configstring block,
   player_state, delta encoding.
5. **Send usercmds** (14 bytes on the wire: msec, buttons, 3x int16
   angles) so the server treats us as a player and streams our entity.
6. **Answer the server's `cmd configstrings %i %i` request** with our
   configstring values (this is the request/response we have inverted so
   far).
7. **Handle `download` / `nextdl`** (pure-server file fetch) and
   **`ghoulstrings`** (SoF-specific string tables).

## B. Assets and rendering - the bulk of the work

8. **Asset pipeline.** Use the SoF engine as an *offline converter* rather
   than writing parsers: drop a DLL into the SoF root (the engine imports
   its mod DLL by name at file offset `0x11AD72`) and have it emit
   glTF/GLB, a WebGL map mesh, KTX2/PNG and ogg. That requires decoding:
   - `.m32` model format (SoF's animated models)
   - `.bsp` v46 map format
   - `.ghb` / `.GHL` Ghoul script format (drives the first-person weapon
     animations - without it the view model cannot be animated)
   - `.adp` audio format
9. **Browser renderer**: WebGL/three.js scene, camera driven by the
   snapshot, player + weapon view models with Ghoul animation, HUD,
   positional audio.
10. **Prediction** (optional, later): needs the game module reimplemented
    in JS/WASM. Without it the client is server-authoritative only.

## C. Website and hosting

11. **Fix the server list.** `serlist.js` currently returns the *masters*
    (the 6-byte entries from the TCP 28900 list). The real game-server list
    arrives as a ~27 KB packet that the master pushes spontaneously.
12. **Our own master**, so a modified server can be listed: the GameSpy
    "gsm" protocol on TCP 28900 is already implemented client-side in
    `serlist.js`; the server-registration packet is still needed.
13. **Website**: list servers -> pick one -> open the WebSocket to the
    relay -> run the client.
14. **Relay**: written (`web/relay.js`), needs a public deployment and
    verification against a public server.
15. **Asset delivery to browsers**: either implement the pure-server
    download protocol client-side, or serve the converted assets from our
    own CDN (simpler, and the stock clients still get the raw files from
    the game server).

## D. SoF gameplay RE (the "modify the game" goal)

16. Re-base the port's field offsets onto the **weapon object** - the
    entity offsets 0x2EC/0x19C/0x27C are `health`/`movetype`/`mass`
    (REPORT 4.35).
17. Implement the recovered fire-delay gate (weapon `+0x118`/`+0x11C`) and
    the heat model in the port.
18. The reload path (weapon vtable `+0xF0`) and the dry-fire sounds at
    `0x600`/`0x60E`.
19. SoF movement constants, bot AI, gamemodes/objectives, HUD layout.

## E. Housekeeping

20. The Quake II port is off-target for browser play. Keep it as a
    "SoF mechanics reference" or park it - it currently gets none of the
    browser work.
21. The client message order is `new` -> `configstrings` -> `baselines` ->
    `begin`; every step needs `client->state == 2` on the server, so the
    order is not negotiable.
22. Never launch the SoF GUI: it grabs the mouse and forces the display
    resolution. The dedicated server is fine.

## Current state

* master protocol, live server list source, relay, and the full OOB
  handshake are working and captured byte-exactly
  (`analysis/` + `web/STATUS.md`, 888 lines).
* The gap is item A1: one formula, in one global, in one function.

## Update: what the LCG search ruled out

`tools/beginprobe.js` tries every LCG-derived candidate for the value the
server compares against (the challenge itself, the current timestamp, and
`LCG^k(challenge)` in raw / `>>16` / `&0x7FFF` forms, k = 0..11) by
connecting and watching for the gamestate. **None of them is accepted.**

The LCG state global `0x2015ABF4` is read and written **only** inside
`0x200F9F57`, so the state is seeded from `.data` and merely advances -
the client and server cannot be sharing it by seeding.

Also established: the connect packet's 4th field is a **Unix timestamp**
(the captured values 1792488575 / 1792488093 / 1792488758 are seconds apart
in 2026), and the server's "challenge" is likewise a timestamp of its own
- the check at `0x2005DBD3` truncates the client's float timestamp
(`client+0x18`) to an int and compares it against the server's clock, so
that field is a freshness check, **not** the handshake answer.

**=> The value compared at `0x20396EE8` is neither the challenge nor a
timestamp nor an LCG output of the challenge. The next lookup is the
*other* writer of `0x20396EE8`: `0x2005D7EC` and `0x200634A9` / `0x20063561`
also write it, and those are the paths that handle the in-band
`configstrings`/`baselines`/`begin` messages - i.e. the value is taken
from what the client sent, and the comparison is against the server's own
copy of it. Reading `0x200634A9` (the `configstrings` handler's tail) and
`0x2005D7EC` will show exactly which field of the received payload is
used.**

## Update: the handshake is a ONE-TIME TOKEN

`0x20396EE8` is not a hash - it is a **server-side one-time token**:

    2005DC3A  call 200F9F57            ; server generates it (MINSTD LCG)
    2005DC3F  mov  [20396EE8h], eax     ; <- initial token

    2005D7DE  mov  edx,[20396EE8h]
    2005D7E5  inc  edx
    2005D7EC  mov  [20396EE8h], edx     ; token++ on the connect path

    2006349D  mov  ecx,[20396EE8h]      ; same increment in the
    200634A8  inc  ecx                  ; configstrings / baselines
    200634A9  mov  [20396EE8h], ecx     ; mismatch paths

and the three in-band handlers all compare it against what we sent:

    atoi(table[1])  ==  [20396EE8h]

`table[1]` is the server's copy, built by `COM_Parse` (0x20055470) from
text the client sent; `[0x20396EE8]` is the client's value. On a match
the server increments the token, so **a token is good exactly once**.

**=> The two candidate channels for the token are now the only question:**
1. the `challenge <m>` message the **server** sends to us, or
2. the value **we** put in our own `getchallenge <n>` - the server parses
   that message into `table[1]`, so `n` becomes the token.

(2) is the elegant one and makes the handshake symmetric: the client picks
`n`, sends `getchallenge n`, and must then echo `n` in its
`configstrings` / `baselines` / `begin` messages. A first attempt at this
was inconclusive because the probe had degraded (it failed to read the
challenge), so it needs one clean retest:

    node web/beginprobe.js <host> <port>

**=> The concrete next action is therefore a clean retest of (2):** pick a
token `n`, send `getchallenge n`, then `configstrings n` / `baselines n` /
`begin n`, and watch for the gamestate.

## Update: the message layer is now decoded (2026-10-20)

### Corrected dispatch table (file 0x13A390, RVA 0x13A390, base 0x2013A390)

    [ 0] 'new'           -> 0x20062780
    [ 1] 'configstrings' -> 0x200629E0
    [ 2] 'baselines'     -> 0x20062D70
    [ 3] 'begin'         -> 0x20062FC0
    [ 4] 'nextserver'    -> 0x20063530
    [ 5] 'disconnect'    -> 0x20063450
    [ 6] 'download'      -> 0x20063140
    [ 7] 'nextdl'        -> 0x20063040
    [ 8] 'ghoulstrings'  -> 0x20062BA0
    [ 9] 'info'          -> 0x20063470
    [10] 'sv_precache'   -> 0x20062F20

### Decoded helpers

* `0x20018D30(n)` = **argv[n]** of the current command (1-based).
* `0x200F9E9E(s)` = **atoi(s)**.
* `0x200635F0(cl, buf)` = the per-reliable-message processor. It
  * subtracts `buf[0]` from `cl+0x220` and drops the message if the
    result goes negative - the console string is
    `'commandMsec underflow from %s\n'` (0x2013A77C), so **`buf[0]` is a
    time/command-Msec value, not a sequence number**;
  * tests `buf[1] & 0x40` to decide whether the payload is a command.
  * It is called up to 3x per packet, chosen by the message count
    (`cl+0x5274`): 1 msg -> `[esp+48h]`, 2 msgs -> `[esp+30h]` then
    `[esp+48h]`, >=3 -> `cl+0x208` (n-2 times) then those two.

### The token is the `nextserver` cvar

`0x20396EE8` **is** the `nextserver` cvar (the literal 'nextserver' sits
at 0x20139888, right where the cvar is updated). The configstrings
handler does:

    20062A1A  push 1 / call 20018D30 / call 200F9E9E   ; atoi(argv[1])
    20062A30  cmp  eax,[20396EE8h]                    ; must match nextserver
    20062A32  je   20062A48
    20062A34  push 2013A4E4h / call 2001C6E0          ; 'SV_Configstrings_f
                                                        ;  from different level'
    20062A43  jmp 20062780
    20062A48  push 2 / call 20018D30 / call 200F9E9E   ; atoi(argv[2])

`nextserver` is set from the MINSTD LCG at spawn (0x2005DC3A) and
incremented (not randomised) at 0x2005D7EC / 0x200634A9 / 0x20063561.
**=> The client must echo the server's current `nextserver` value.**

### The stock client's frame proves the type byte

Captured frame: `8b 44 04 "configstrings 42 0"`:

    buf[0] = 0x8b  (command-Msec / timestamp low byte)
    buf[1] = 0x44  (0x40 flag | type 4)   <- we were sending 0x04
    buf[2] = 0x04
    buf[3..] = the NUL-terminated command text

**=> Our messages were typed wrong: the type byte must have 0x40 set.**

### What the server actually asks for

The server pushes **`cmd configstrings <N> <V>`** to the client (the
stock capture showed `cmd configstrings 42 0` then
`cmd configstrings 42 397`) and the client must answer with
`configstrings <N> <V>`. The `42` is the server's `nextserver` value at
that moment, so the answer is an **echo of the server's own request** -
the client never has to guess the token.

**=> But the server only sends `cmd configstrings` after the client has
sent a well-formed USERCMD** (that is what the earlier capture analysis
concluded: "the server only releases the gamestate after it has seen a
well-formed usercmd").

### => THE ONE REMAINING GATE: send a usercmd

Next action: after `new`, send a usercmd message
`[buf[0]=msec][buf[1]=0x40|type][22-byte usercmd]`
(usercmd = msec i32, buttons i32, pitch/yaw/roll i16, forward/side/up
i16, impulse u8, lightlevel u8) and then answer the server's
`cmd configstrings <N> <V>` with `configstrings <N> <V>`.
The usercmd type byte is probably `0x40|3` (Q3's `clc_move`); the
stringcmd type is `0x40|4` = 0x44, which is what the stock client used.

## Update: the CONNECT is the problem, not the in-band messages (2026-10-20)

### Proven by experiment (`web/dispatchtest.js`)

    S->C OOB: client_connect
    S->C PKT 39 @107ms  ...one\*The Order\*dekker\-1.     <- arrives BEFORE we
    C->S [2] new                                             send anything
    --- phase 1 done (connect only) ---

* The 39-byte userinfo echo is produced by the **connect path**, not by our
  `new` message.
* The stock capture's first server message after `client_connect` was
  **`cmd configstrings 42 0`** - we never get that.
* `disconnect` also does not free the client slot, so **none of our
  in-band messages are dispatched at all**.
  => The session is degraded at the connect stage.

### Therefore: the connect packet is malformed

Stock client's connect (from the capture):

    connect 33 53721 1210259646 1792483264 3.14 "<userinfo>"

    field 1 = 33          protocol version
    field 2 = 53721       the SEED
    field 3 = 1210259646  the CHALLENGE (the same value the OOB
                          `challenge <m>` reply carries)
    field 4 = 1792483264  a Unix timestamp (freshness check at 0x2005DBD3)

Ours:

    connect 33 1 <challenge> <token> 3.14 "<userinfo>"
             ^^ SEED = 1  <-- WRONG

**The seed is produced by the engine's float->int helper at `0x200F9DEC`**
(`fldcw` round-toward-zero, `fistp qword`, returns eax:edx - a 64-bit
int from a float). The stock client sent 53721. The server most likely
**seeds its MINSTD LCG with that value** and the LCG output becomes the
`nextserver` token the client must echo, which is why the client has to
send a seed at all: it lets the client reproduce the same token locally.

Note: a brute force over MINSTD variants (mul 0x343FD/0x41C64E6D/...,
add 0x269EC3/0/0x3039, 8 output forms, 64 steps, seeds 53721 / the
timestamp / the challenge) produced **no** output equal to the stock
token 42 - so the exact seeding/call-count relation is still open.

### Next actions (in order)

1. Reproduce the stock connect exactly:
   `connect 33 <seed> <challenge> <unix-ts> 3.14 "<userinfo>"`
   with **field 2 = the FPU-trick seed** (see 1b) and field 4 = the
   current Unix time.
2. Read the caller of `0x200F9DEC` to get the exact float that is
   truncated (that is the seed formula).
3. If the server then answers with `cmd configstrings <N> <V>`, the client
   must reply `configstrings <N> <V>` - and the value of `N` is what the
   handler compares against the global counter at `0x20396EE8`.
4. Remember: the in-band type byte is `0x40 | type` (stock: `0x44` for a
   string command), and the payload is `[msec:u16][type:u8][text\0]`.
5. The server only allows ~8 concurrent clients and stale clients are
   never released (our `disconnect` is not dispatched), so **restart the
   dedicated server between test batches** or the runs die with
   `rejected_full`.

## Update: the protocol spec is now complete (2026-10-20, session 2)

### The engine''s own format strings (SoF.exe .rdata)

    2011D774  'connect %i %i %i %d %4.2f "%s"\n'   client -> server
    2011D79C  'getchallenge %d\n'
    2011D79F  'challenge %d\n'                     server -> client
    2013990C  'challenge %i'                       client parses it
    2013A450  'cmd configstrings %i 0\n'           server -> client
    2013A49C  'cmd configstrings %i %i\n'
    2013A4B8  'cmd ghoulstrings %i 0\n'
    2013A4D0  'cmd baselines %i 0\n'
    2013A454  'configstrings %i 0\n'               client -> server
    2013A4A0  'configstrings %i %i\n'
    2013A4D4  'baselines %i 0\n'
    2013A670  'begin %i \n'

### The token is echoed, not guessed

The server''s `new` handler (0x20062780) ends with

    200629AF  mov  ecx,[20396EE8h]      ; the token
    200629B5  push ecx
    200629B6  push 2013A450h            ; 'cmd configstrings %i 0\n'
    200629BB  call Com_sprintf
    200629CE  call SV_SendClientCommand

and the `configstrings` handler checks `atoi(argv[1]) == [0x20396EE8]`.
**=> The client answers the server''s own request: `configstrings <N> <V>`.**
The same happens for `baselines` and `ghoulstrings`.

### The connect, exactly as the client builds it (0x2000B3DA / 0x2000C348)

    connect 33 <int(pi)=3> <[0x201CA3FC] = cl_challenge>
                 <[0x201CA400] = time(NULL)> 3.141592653 "<userinfo>"

* field 2 = `int(pi)` via the FPU helper 0x200F9DEC (`fldcw` truncate +
  `fistp qword`) - the stock client sent 53721 from a different path.
* field 3 = the challenge from the `challenge %d` reply.
* field 4 = `time(NULL)` (0x200FA7CC(0)).
* field 5 = pi, printed with `%4.2f` = `3.14`.

### The client -> server packet starts with a TYPE BYTE

`0x2001E260` reads **one byte** from the packet stream; the receive loop
dispatches on it through the jump table at 0x20063A64:

    20063724  cmp  eax,-1        ; no data
    2006372D  dec  eax
    2006372E  cmp  eax,3
    20063737  jmp  [eax*4+20063A64h]

* type 1 -> 0x2006373E: reads <= 0x1FF bytes, calls 0x2005F7D0 (OOB).
* type 3 -> 0x20063767: the netchan case (needs [esp+13h] == 0).
* 0x20063880: `mov eax,[ebp]; cmp eax,3; je ...` confirms type 3.

**All our packets so far began with the netchan sequence, so the server
read the sequence's low byte as the type and dropped everything.** The
old stock capture missed this byte because it went through the TCP
bridge (which reframed UDP<->TCP).

### Decoded helpers

    0x20018D30 = Cmd_Argv(n)        0x200F9E9E = atoi
    0x2001C6E0 = Com_Printf          0x2001C8E0 = Com_DPrintf
    0x200BE300 = read a msg_t        0x20005AA0 = copy a message

**=> `New() from %s` and `commandMsec underflow` are Com_DPrintf, i.e.
debug-only: they are INVISIBLE in a release server. The console is not a
reliable oracle for the in-band path.**

### Server facts

* maxclients is effectively 8; stale clients are never released (our
  `disconnect` is never dispatched) -> **restart the dedicated server
  between test batches** or every run dies with `rejected_full`.
* `new` requires `cl->state == 2` and prints `New not valid -- already
  spawned` otherwise (that one IS a Com_Printf, so it would be visible).

### SoF Buddy (MIT) - what it actually is

A **DLL hook layer for the original `SoF.exe`** (Detours + MinGW), not a
portable port - it cannot be the browser game by itself. But it ships
`rsrc/funcmaps/*.json`: **2611 engine function RVAs for SoF.exe** (a
complete function index for the RE) plus maps for gamex86.dll, ref_gl.dll,
spcl.dll and player.dll. `src/core/ref_gl_defaults.cpp` also documents
the stock renderer state.

### Next actions (ordered)

1. Dump the jump table at 0x20063A64 and label all 4 packet types; then
   read the type-3 handler (0x20063767 onward) end to end and write down
   the exact client->server frame: type byte, sequence, flags, reliable
   sequence/flags, and whether a length field is required.
2. Confirm the type byte value (0x03 is the candidate) by re-running
   `web/trynew.js <mode>` with `TXT=info` - the `info` handler replies
   with the server info, so it is a clean "is the channel alive" probe.
3. Decode the 39-byte packet the server sends right after the connect
   (it carries the userinfo with the defaults filled in:
   `one\*The Order\*dekker-1`).
4. Only after the in-band channel works: `new` -> `cmd configstrings N 0`
   -> answer -> `baselines` -> `ghoulstrings` -> `begin` -> the snapshot.

## Update: packet framing - where the last byte-level unknown is (session 2 end)

### The client -> server packet is read as a BYTE STREAM

The server keeps a stream struct at 0x20367EBC:

    +0x00  a byte flag
    +0x04  data pointer   (0x20367EC0)
    +0x0C  size           (0x20367EC8)
    +0x10  read offset    (0x20367ECC)

`0x2001E260(&stream)` reads **one byte** from it (returns -1 when
exhausted). The receive loop at 0x20063704 switches on that first byte:

    20063724  cmp  eax,-1        ; stream empty
    2006372D  dec  eax
    2006372E  cmp  eax,3
    20063731  ja  20063A32       ; <-- the OOB path (first byte 0xFF)
    20063737  jmp  [eax*4+20063A64h]

Jump table at 0x20063A64:

    type 1 -> 0x20063704   (loop head)
    type 2 -> 0x20063767   (netchan: sequence handling, needs [esp+13h]==0)
    type 3 -> 0x2006373E   (reads <= 0x1FF bytes -> 0x2005F7D0)
    type 4 -> 0x20063949   (the per-client command dispatch loop)

**=> The very first byte of a client->server datagram selects the
handler.** Our packets so far started with the netchan sequence, so the
server read the sequence's low byte as the type and silently discarded
the packet. Sweeping type bytes 1/2/3/4 with every plausible payload
layout (35 variants in `web/trynew.js`) still produced no dispatch,
so the *rest* of the frame for types 2 and 4 is still unknown.

### What IS now confirmed working

* The OOB channel: `getchallenge %d` -> `challenge %d`, and
  `connect %i %i %i %d %4.2f "%s"` -> `client_connect`.
* The client IS fully registered: the server answers the connect with a
  39-byte netchan packet carrying the client userinfo with the server
  defaults filled in (`one\*The Order\*dekker-1` = name / skin / model).
* SoF does **not** answer `info` / `getstatus` / `getinfo` on the game
  port (28910) - server queries go to the **GameSpy query port 28911**.
  Useful for the server-list work: the master list is built from 28911.

### The single remaining unknown

The exact client->server netchan frame: the type byte value plus the
header after it. Next RE steps:

1. Read `0x20063A32` (the fallback / OOB branch) to see how the engine
   decides "this is connectionless" and to see the sibling of the type
   switch - if 0xFF is the OOB marker then the other branches must be
   real type codes and the stock client's frames must carry one.
2. Read the function that FILLS the stream (the packet receiver, which
   sets 0x20367EC0/EC8/ECC) - it may strip or prepend a byte.
3. Read `0x20063949` (the type-4 dispatch) from its start: it takes the
   command straight out of a client structure, so the type-4 frame is
   probably the simplest of all and worth trying next.
4. Then, with the channel alive, run the real sequence:
   `new` -> server sends `cmd configstrings <TOKEN> 0`
   -> answer `configstrings <TOKEN> 0` -> `baselines` -> `ghoulstrings`
   -> `begin` -> the entity snapshot.

### Two routes to a browser-playable SoF (decision point)

**A. Native browser client (the path we have been on).** The protocol is
~95% known; what remains is the frame format, then the asset pipeline
(.bsp v46, .m32, .ghb/.GHL) and a WebGL renderer. Heavy but gives a real
client that can join any SoF server and appear on the master list.

**B. Stream the real game (SoF + SoF Buddy) into the browser.** Run
`SoF.exe` with the SoF Buddy DLL on a **separate Windows desktop**
(`CreateDesktop`, so it never touches the user's display or mouse),
capture the framebuffer, stream it to the browser over WebSocket and
inject input. This is "SoF Buddy in the browser" in the literal sense
and is far less work than a renderer. Needs: a capture/inject DLL
(droppable at SoF.exe's `0x11AD72` import slot, the same trick used for
the SoFPlus workaround) and a browser front end.

Route B gives a playable browser game soonest and satisfies the
"have SoF Buddy as the browser game" goal; route A is the real deal and
is needed anyway for the "servers on the SoF master list" goal.

## Update: the command frame and its checksum are SOLVED (session 2 end)

### The client -> server command frame (type 2)

    [u8  command char = 2]
    [u8  checksum]
    [u32 sequence, little endian]
    [text bytes]  (the command, NUL terminated)

* `0x2001E260` reads the command char; the jump table at `0x20063A64` maps
  1=keepalive, 2=this netchan path, 3=game-module command, 4=raw command.
* `0x20063783` reads the checksum byte, `0x2006378F` reads the u32 sequence.
* The text is length-limited to 60 bytes (`cmp ebx,3Ch`).

### The checksum (verified byte-exact against the engine)

    checksum = engine_hash( text || keybytes ) & 0xFF

    k          = sequence % 3000
    keybytes[0]= TABLE[k+0] ^ (sequence & 0xFF)
    keybytes[1]= TABLE[k+1]
    keybytes[2]= TABLE[k+2] ^ ((sequence >> 8) & 0xFF)
    keybytes[3]= TABLE[k+3]

    TABLE = 3000 bytes at SoF.exe VA 0x20120648 (file offset 0x120648,
            static .data - identical in every copy, so the client can
            reproduce it; extracted to web/sofkey.bin)

**This was verified with the engine itself as the oracle** (`web/cksum2.c`):
`ck("new",3,0) == 0xc111e38c` and `eng("new"||keybytes) == 0xc111e38c` -
the FULL 32-bit value matches, for every (text, sequence) tried.

### The hash function (0x2004D150)

* 128-bit Merkle-Damgard with the init words
  `0x67452301, 0xEFCDAB89, 0x98BADCFE, 0x10325476` (MD5's iv).
* Context layout: `A,B,C,D` at +0..+0x0C, the 64-bit **bit** count at
  +0x10/+0x14, a 64-byte buffer at +0x18.
* The block transform (`0x2004CAD0`) reads the block as **little-endian
  32-bit words** (MD4/MD5 style).
* Standard MD5 padding (0x80, zeros, 64-bit big-endian bit length).
* **It is NOT stock MD5** - the digest differs, so the round constants /
  shift amounts are custom. The transform still needs to be ported.

### MSVC 2022 Build Tools ARE installed (the "no compiler" note was wrong)

    C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\
        VC\Auxiliary\Build\vcvarsall.bat x86
        VC\Auxiliary\Build\vcvars64.bat

Consequences:
* We can build helper tools (`web/cksum2.c`, `web/engdump.c`, ...).
* **We can call the engine's own code directly**: `LoadLibraryA("SoF.exe")`
  maps the image at 0x20000000 and its functions are callable WITHOUT
  running the game. `web/sha1chk.c` does exactly that. This gives a
  perfect oracle to validate any port of the hash to JavaScript.
* SoF Buddy (MinGW/make) still cannot be built, but a **MSVC** helper DLL
  can be: it can be injected at SoF.exe's import slot 0x11AD72.

### Next steps

1. Read the transform `0x2004CAD0` fully, extract its round constants
   and shifts, and port it to JS.
2. Validate the JS port against the engine oracle (`web/sha1chk.c` prints
   reference vectors) until it matches bit for bit.
3. Then send a real type-2 command (`new`) and continue with the
   `cmd configstrings <TOKEN> 0` exchange.
4. Note: the checksum's sequence argument is `cl->[0x5298]`, which is
   **never written** in .text - it is a zero-initialised per-client
   constant, so it is 0 for a fresh client (confirmed by the oracle:
   variant B with the XORs applied matches for sequence 0,1,7,3).

## Update: the hash is MD4-family (session 2 end, final)

`0x2004D150` is a 128-bit Merkle-Damgard with:

* init `0x67452301, 0xEFCDAB89, 0x98BADCFE, 0x10325476` (MD4/MD5 iv),
* a 64-byte buffer, a 64-bit **bit** count, little-endian block words,
* the transform `0x2004CAD0` is **fully unrolled (632 instructions)** and
  uses **no K constants** (which is why the binary contains no MD5 K
  table),
* the rotation schedule extracted from it is MD4's:
  `3,7,11,19 / 3,5,9,13 / 3,9,11,15`.

A stock-MD4 in Python does NOT reproduce the engine's output, but the
round-1 F function in the disassembly is

    ecx = (~C & D) | (B & C)        ; = F(C,B,D) with F(x,y,z)=(x&y)|(~x&z)

so the **argument order of the round functions differs** from stock MD4.
That (plus a possible difference in the message-word permutation or the
length endianness) is what is left to pin down.

### The decisive tool that makes this trivial

`web/cksum2.c` and `web/sha1chk.c` (MSVC x86) **call the engine's own
functions** - `LoadLibraryA("SoF.exe")` maps the image at 0x20000000 and
the code is callable without ever running the game. So:

1. port the transform to C/JS,
2. compare against the oracle output for a dozen (text, sequence) pairs,
3. iterate until it matches bit for bit.

Reference vectors (from the engine itself):

    text="new"                seq=0 -> 0xc111e38c
    text="info"               seq=1 -> 0xfb0a3588
    text="configstrings 42 0" seq=7 -> 0x16fafbd9
    text="begin 0"            seq=3 -> 0x18054340

and the key bytes come from `web/sofkey.bin` (3000 bytes, SoF.exe file
offset 0x120648) as

    kb[0]=KEY[k]^seq&0xFF  kb[1]=KEY[k+1]
    kb[2]=KEY[k+2]^(seq>>8) kb[3]=KEY[k+3]      k = seq % 3000

### Toolchain (corrected)

MSVC 2022 Build Tools are present:

    "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\
        VC\Auxiliary\Build\vcvarsall.bat" x86     (32-bit, required)
        VC\Auxiliary\Build\vcvars64.bat

So a helper **DLL** can also be built and injected at SoF.exe's import
slot `0x11AD72` (the same slot used for the SoFPlus workaround), which
opens the door to a frame-capture/input-inject DLL later.

## Update: the hash is MD4 with one deviation (session 3 end)

### Established

* The engine's `0x2004D150` is an MD4-family 128-bit hash: the same IVs
  as MD4/MD5, a 64-byte buffer, a 64-bit **bit** count, little-endian
  block words, and the **MD4 shift schedule** (3,7,11,19 / 3,5,9,13 /
  3,9,11,15). It has **no K constants** (which is why the binary has no
  MD5 K table).
* Round 1 of the engine is **byte-for-byte MD4's round 1**
  (`A = ROL(A + F(B,C,D) + X[0], 3)`, `F(x,y,z) = (x&y)|(~x&z)`,
  re-read from `0x2004CB3C..0x2004CB70` with the correct register map
  eax=A, edi=B, edx=C, ebp=D).
* Stock MD4 does **not** reproduce it: Windows CNG's BCrypt MD4
  (`web/md4ref.c`) gives a different digest for the same input, and
  neither length endianness nor the identity/standard message-word
  orders reconcile it. **=> the deviation is in rounds 2/3: the F/G/H
  argument order, the word permutation, or the shift set.**

### Tooling that makes this a short job

* `web/md4ref.c` - BCrypt MD4 reference vs the engine, side by side.
* `web/cksum2.c` - calls the engine's `ck()` and its inner `eng()` and
  shows they agree exactly, i.e. the checksum really is
  `eng(text||keybytes) & 0xFF`.
* `web/sofkey.bin` - the 3000-byte key table (SoF.exe file offset
  0x120648), already used by the JS client `web/sofcmd.js`.
* Reference vectors (from the engine itself):
  `new`/0 = 0xc111e38c, `info`/1 = 0xfb0a3588,
  `configstrings 42 0`/7 = 0x16fafbd9, `begin 0`/3 = 0x18054340.

### Next step (short)

1. Implement MD4 in C, validate it against BCrypt's MD4 byte for byte.
2. Diff the engine's transform against that MD4 by re-reading
   `0x2004CAD0` rounds 2 and 3 (the word indices come from the stack
   slots `[esp+14h+k*4]`, and the F/G/H argument order from the
   `not/and/or` pattern) - the deviation is one of a handful of lines.
3. Port the result to JS, validate against `web/md4ref.c`'s vectors, and
   ship it in the browser client (`web/sofcmd.js` already has the
   framing and the key derivation).
4. Then: send a real type-2 `new` -> receive `cmd configstrings <N> 0`
   -> echo it -> `baselines` -> `ghoulstrings` -> `begin` -> the
   gamestate.

## Update: the CHECKSUM IS SOLVED AND VERIFIED (session 3 end)

### The hash is standard MD4 (RFC 1320) and the engine XOR-folds it

The engine''s `0x2004D150` is **MD4** - the missing detail was that MD4
uses the constants `5A827999` (round 2) and `6ED9EBA1` (round 3) (RFC
1320 section 3.4). The 32-bit value it returns is the **XOR of the four
state words**, and the command channel uses the **low byte** of that:

    checksum = ( MD4(text || keybytes)[A] ^ [B] ^ [C] ^ [D] ) & 0xFF

Verified against the engine on every vector:

    "new"                seq=0 -> 0xc111e38c  cksum 0x8c
    "info"               seq=1 -> 0xfb0a3588  cksum 0x88
    "configstrings 42 0" seq=7 -> 0x16fafbd9  cksum 0xd9
    "begin 0"            seq=3 -> 0x18054340  cksum 0x40

`web/sofmd4.js` is a verified JS port (prints "ALL VECTORS MATCH THE
ENGINE" when run). MD4 is not in WebCrypto, but this is a 40-line port.

### The key derivation (also verified)

    k          = sequence % 3000
    keybytes[0]= KEY[k+0] ^ (sequence & 0xFF)
    keybytes[1]= KEY[k+1]
    keybytes[2]= KEY[k+2] ^ ((sequence >> 8) & 0xFF)
    keybytes[3]= KEY[k+3]
    KEY        = 3000 static bytes at SoF.exe file offset 0x120648
                 (web/sofkey.bin)

**=> The protocol is now fully specified except for the exact byte
layout of the client->server frame.**

### What is still unknown: the frame prefix

Known from the server side (`0x200636C0` = SV_ReadClientMessage):

* the packet is read as a byte stream (struct at 0x20367EBC: data +0x04,
  size +0x0C, offset +0x10);
* `0x2001E260` reads the first byte of the stream = the **command char**
  (1..4), dispatched through the table at 0x20063A64
  (1 = keepalive, 2 = netchan path, 3 = game-module command,
  4 = raw command dispatch);
* for type 2 it then reads a **checksum byte** (`0x20063783`) and a
  **u32 sequence** (`0x2006378F`), and the rest is the command text,
  which is what the checksum covers;
* the checksum's key-derivation sequence is `cl->[0x5298]`, which is
  **never written** in .text, so it is 0 for a fresh client;
* the stock client's captured frame was `8b 44 04 "configstrings 42 0"`,
  which suggests **two bytes are stripped before the command char**
  (a u16 "seed", 0x448b in that capture).

**=> The receiver therefore strips an unknown number of leading bytes
(0, 2, 4, 8 or 10) before the stream.** 64 combinations of
{stripped prefix, command char, NUL-terminated text, checksum sequence}
have been swept with the now-correct checksum and none was accepted.

**=> NEXT ACTION (one command):** `web/framesweep.js` has been updated to
sweep the stripped-prefix length (0/2/4/8/10) x command char (2/4) x
NUL-terminated text x checksum sequence (0/actual):

    node web/framesweep.js 127.0.0.1 28910

**=> If that still fails, read the packet receiver** - the code that
writes the stream (data/size/offset at 0x20367EBC+4/+0x0C/+0x10) - to
see exactly how many bytes it strips. Grep for `push 20367EBCh` and
look at the callee that initialises the struct; my earlier grep for
direct writes missed it because the writes go through a pointer.

## Update: the receive path is mapped; one offset left (session 4 end)

### How a client packet reaches the command handlers

    0x2005F211  lea  eax,[ebx+0000526Ch]   ; ebx = cl
    0x2005F217  push 20367EBCh             ; the stream struct
    0x2005F21C  push eax                   ; cl+0x526C
    0x2005F21D  call 2004D640              ; <-- builds the stream
    0x2005F229  cmp  dword ptr [ebx],1     ; cl->state == 1 ? -> skip
    0x2005F235  mov  [ebx+00005264h],ecx
    0x2005F23B  call 200636C0              ; SV_ReadClientMessage(cl)

`0x2004D640` (the stream builder) does:

    2004D64C  call 2001E220                ; init the stream
    2004D652  call 2001E310                ; read a dword  \
    2004D65A  call 2001E310                ; read a dword  / 8 bytes consumed
    2004D668  cmp  dword ptr [ebx+4],1     ; a flag in the packet

**=> The stream is built over the client's message buffer at cl+0x526C
and the first 8 bytes of it are consumed before the "command char" is
read.**  `cl->[0x5264]` is a POINTER to that buffer (0x2005EC54:
`mov [ebx+0x5264h], ecx` where ecx = &cl[0x526C]).

So the raw client->server datagram is:

    [ netchan header ... ][ 8 bytes ][ command char ][ ... ]

where the netchan header is stripped earlier by the netchan layer and
the 8 bytes are the two dwords read by 0x2004D640.  The stock capture
`... 8b 44 04 "configstrings 42 0"` fits this: the visible `8b 44 04`
are the last bytes of that 8-byte block plus the command char.

**=> The one remaining unknown is the exact number and content of the
bytes that precede the command char in the raw datagram.**

### Next action (concrete)

Read the netchan extraction that fills `cl+0x526C` and sets its length:

    0x2005A45E  mov  dword ptr [eax+00005264h],edx    ; the length
    0x2005A5AC  mov  esi,dword ptr [ebx+00005264h]
    0x2005EC13  lea  ecx,[ebx+0000526Ch]              ; the buffer
    0x2005EC54  mov  dword ptr [ebx+00005264h],ecx

Dump 0x2005A400-0x2005A5C0: it will show how the raw datagram is
split into the netchan header and the message that lands in cl+0x526C.
From that, the client frame is:

    [u16 seq][u16 flags][u16 relseq][u16 relflags]   (or a subset)
    [ 8 bytes read by 0x2004D640 ]
    [u8 command char = 2][u8 checksum][u32 seq][text]

and `web/framesweep.js` can then sweep the exact prefix/flag values
with the now-verified checksum.

### Everything that is already working

* OOB: `getchallenge %d` -> `challenge %d`, `connect %i %i %i %d %4.2f
  "%s"` -> `client_connect` (verified live against the dedicated
  server).
* The command checksum: `web/sofmd4.js`, verified against the engine.
* The key table: `web/sofkey.bin`.
* The command dispatch table and the `cmd configstrings <N> 0` echo
  protocol.
* `web/sofclient.js` - a client that connects and sends checksummed
  type-2 commands (needs the prefix fix above).

## Update: the CLIENT-side frame builder is located (session 5 end)

The engine''s **client** half builds the command frame at
`0x2006028E`, and it calls the hash directly:

    20060286  push  esi
    20060287  push  edi
    20060288  mov  edi,dword ptr [esp+18h]     ; the message text
    2006028C  push  eax                      ; the length
    2006028D  push edi
    2006028E  call 2004D150                   ; the hash -> eax
    200602A3  mov  dword ptr [esp+20h],eax    ; the hash goes into the header
    200602A7  call 200FACDE                   ; write 4 bytes
    200602BD  call 200FACDE                   ; write 4 bytes
    200602D4  call 200FACDE                   ; write 4 bytes
    200602EA  call 200FACDE                   ; write the text
    20060303  call 200FACDE                   ; write 4 bytes

**=> The frame is written as a sequence of 4-byte pieces: three/four
header dwords and then the message text.** The server side reads the
first two dwords (8 bytes) and then the "command char" byte - so the
**command char is the first byte of the third dword (offset 8)**.

`0x200FACDE(buf, count, size, handle)` is the writer; `edi`/`eax` are
the text and its length, and the hash is stored in the header - which
also proves the client hashes the text with the **same** MD4 the server
verifies.

**=> NEXT ACTION (one dump):** read `0x20060200-0x20060420` end to end
and record, for each `call 200FACDE`, WHICH 4-byte value goes into the
header and in what order. That gives the exact frame:

    [dword0][dword1 = the MD4 hash][dword2 (command char first)][dword3][text]

and then `web/sofclient.js` can be finished.

The other two client-side hash callers are `0x20018004` and
`0x200606B2` (probably the userinfo / snapshot hashing).

**=> The remaining unknowns are now down to the values of the header
dwords** (the netchan sequence, the flags, the reliable sequence, the
reliable flags) - all of which the server validates before the command
is dispatched, which is why every frame we tried was silently dropped
(the error strings `SV_ReadClientMessage: unknown command char` and
`Failed command checksum for %s` are Com_DPrintf, i.e. invisible in a
release server).

## Update: the client frame builder has the MAGIC (session 5 end)

The client builds the frame at `0x20060230`:

    20060230  sub  esp,8
    20060233  mov  eax,dword ptr [esp+0Ch]
    20060237  mov  dword ptr [esp+4],1234ABCDh    <-- the MAGIC
    2006023F  push  eax
    20060240  call 20055390                        ; -> the "seed" value
    20060249  mov  dword ptr ds:[203FECD4h],eax
    20060254  push 20139F88h                       ; a format string
    20060260  call 2001C940                        ; Com_sprintf(...)
    20060286  push  esi
    20060287  push  edi
    20060288  mov  edi,dword ptr [esp+18h]         ; the message text
    2006028C  push  eax                            ; the length
    2006028D  push edi
    2006028E  call 2004D150                        ; the MD4 hash
    200602A3  mov  dword ptr [esp+20h],eax         ; the hash -> header slot
    200602A7  call 200FACDE                        ; write 4 bytes
    200602BD  call 200FACDE                        ; write 4 bytes
    200602D4  call 200FACDE                        ; write 4 bytes
    200602EA  call 200FACDE                        ; write the text
    20060303  call 200FACDE                        ; write 4 bytes

`0x200FACDE(buf, count, size, handle)` writes a chunk; the frame is
therefore a run of 4-byte pieces plus the text. The server reads the
first two dwords (8 bytes) and then the "command char", so:

    [dword0][dword1][dword2 (char first)][dword3][text]

**=> `0x1234ABCD` is the magic written into one of those slots, and the
server's `cmp dword ptr [ebx+4],1` says the slot at offset 4 must be 1.**

72 combinations of {magic, dword1, dword2, char, checksum sequence}
were swept with the verified MD4 checksum and none was accepted, so the
exact assignment of the four header dwords still has to come straight
out of the builder.

### Next action (one dump + two strings)

1. Read `0x20060230-0x20060330` carefully, tracking the stack offsets,
   and note for every `call 200FACDE` WHICH 4 bytes it writes and in
   which order. That is the frame, verbatim.
2. Read the two format strings `0x20139F88` and `0x20139EC8` - they
   name the fields (the "seed"/"cmd" strings) and will make the frame
   self-explanatory.
3. `0x20055390` is the function that produces the seed value - check
   whether it is a random number, a timestamp or a constant.

### Task list status (8 tasks)

1. netchan frame format - **in progress** (checksum DONE and verified;
   the 4 header dwords remain)
2. gamestate (new -> configstrings -> baselines -> ghoulstrings ->
   begin -> snapshot) - not started
3. netchan in JS - not started
4. snapshot decode - not started
5. usercmds - not started
6. asset pipeline (.bsp/.m32/.ghb) - not started
7. WebGL renderer - not started
8. website + relay + master - not started

## Update: the client send path confirms the frame shape (session 6 end)

**Correction to the previous note:** `0x20060230` is NOT the netchan
frame builder - the string at `0x20139F88` is
`''Attempting write of chunk %s length %d\n''`, so it is a generic
**chunk writer** (used by the savegame code), and the `0x1234ABCD` magic
is a chunk marker, not a netchan field.  `0x20055390` is an indirect
`jmp [20390B0Ch]` - a **game-module callback**, not a seed generator.

### The real client send path is at `0x20006330`

    20006374  mov  edx,dword ptr [esp+18h]      ; the packet length
    20006378  mov  ecx,dword ptr ds:[201C23F4h]  ; the outgoing sequence
    2000637E  mov  eax,dword ptr [esp+10h]      ; the data
    20006382  sub  edx,ebp                      ; len - ebp
    20006384  push ecx                          ; the sequence
    20006385  dec  edx                          ; len - ebp - 1
    20006386  lea  ecx,[eax+ebp+1]              ; data + ebp + 1
    2000638A  push edx                          ; the length
    2000638C  call 2001F1B0                     ; the checksum

**=> This is byte-for-byte the same expression as the server side
(`0x20063893`: `sub eax,esi; dec eax; lea edx,[ecx+esi+1]`,
`0x200638AE: call 2001F1B0`).**

**=> Therefore the frame is confirmed:**

    [ header : ebp bytes ][ u8 command char ][ text ]
    and the checksum covers exactly the text:
        MD4-fold( text || keybytes ) & 0xFF

With the server's 8-byte netchan header (consumed by `0x2004D640`) the
full type-2 frame is:

    [ 8 header bytes ][ 0x02 ][ checksum ][ u32 seq ][ text ]

which is exactly the shape `web/sofclient.js` already builds - so the
remaining unknown is **the content of those 8 header bytes** and the
**sequence used for the checksum's key derivation**.

### The header is built just above (0x200062A6-0x20006330)

    200062B1  mov  ecx,dword ptr ds:[201C23F4h]   ; the outgoing sequence
    200062C6  lea  eax,[ecx-2]
    200062CE  and  eax,3Fh                        ; (seq-2) & 0x3F
    200062D1  lea  edx,[eax+eax*2]
    200062D8  lea  esi,[edx*8+201E75B4h]           ; the reliable ring
    200062DF  lea  eax,[esp+20h]                   ; a local buffer
    200062E3  push esi

**=> The client keeps a 64-entry reliable-message ring at 0x201E75B4
(indexed by (seq-2)&0x3F, 24 bytes per entry) - a standard Q3-style
reliable buffer.**  Reading 0x200062E3-0x20006330 shows the header
being written (sequence, flags, reliable sequence, reliable flags) and
where `ebp` (the header size) comes from.

### Next action (one dump)

Read `0x200062E3-0x20006330` and write down the bytes that make up
the 8-byte header (and the value of `ebp`).  Then:

* `web/sofclient.js` sends the frame with the correct header;
* the checksum's key sequence is `cl->[0x5298]` on the server, which
  is **never written** in .text, so it is 0 for a fresh client - the
  "actual" sequence variant is only needed if the client struct is
  initialised with a non-zero value.

A ready-made sweep for the header contents is `web/netframe.js`
(flags x reliable-seq x reliable-flags x command-char x checksum-seq).

## Update: the netchan header is 13 bytes (session 6 end, IMPORTANT)

The netchan transmit is `0x20005D70` (the write helper is `0x200BDCA0`):

    20005D71  mov  ebx,[esp+0Ch]          ; the netchan struct
    20005D77  mov  esi,[esp+10h]          ; the message buffer
    20005D7C  mov  edi,[esp+1Ch]          ; the outgoing netchan
    20005D82  mov  bp,word ptr [edi+4]    ; the outgoing sequence
    20005D86  cmp bp,word ptr [ebx+4]     ; == the incoming sequence?
    20005D8A  jne 20005D98
    20005D90  mov  byte ptr [esp+20h],0   ; flag byte = 0
    20005D9C  mov  byte ptr [esp+20h],1   ; flag byte = 1
    20005DA4  call 200BDCA0               ; write the flag byte
    20005DA9  shr  bp,4                   ; <-- the sequence is stored >> 4
    20005DB1  push 0Ch                    ; <-- 12 bytes of header
    20005DB3  mov  dword ptr [esp+18h],ebp ; the shifted sequence
    20005DBA  call 200BDCA0               ; write the 12 bytes
    20005DBF  mov  bp,word ptr [edi+6]     ; the reliable sequence
    20005DC5  cmp bp,word ptr [ebx+6]

**=> The netchan header is 1 flag byte + 12 bytes (13 total), and the
outgoing sequence is stored SHIFTED RIGHT BY 4** - which is exactly why
the server masks the top bits when it reads them
(`0x2004D68F: shr edx,1Fh`, `0x2004D692: shr esi,1Fh`,
`0x2004D680: and ebp,7FFFFFFFh`).

So a client->server datagram is:

    [ u8 flag ][ 12 bytes of netchan header ][ u8 command char ][ text ]
    (13 + 1 + len bytes)   and for type 2:
    [ u8 flag ][ 12 bytes ][ 0x02 ][ checksum ][ u32 seq ][ text ]

**The 12 bytes are [seq>>4][?][?] - the remaining two dwords are written
by the code at 0x20005DC3-0x20005DFF (the reliable sequence/flags).**

**=> The checksum's key sequence is the *unshifted* outgoing sequence**
(0x20006378 loads `[201C23F4h]`, the plain sequence) - and the server
uses `cl->[0x5298]`, which is never written in .text.

### Next action

1. Dump `0x20005DC3-0x20005E10` for the last two header dwords
   (the reliable sequence and its flags) and the flag byte's meaning.
2. Dump `0x2001E220` (the stream init called by the server's
   `0x2004D640`) to see where the stream starts - it must skip the
   13-byte header and leave the command char at the front.
3. Then `web/sofclient.js` can build the frame for real; `web/netframe.js`
   is the sweep harness for the header contents.

## Update: the netchan header is a CHANNEL LIST (session 6 end, final)

The transmit `0x20005D70` writes the header as a **series of
channels**, and the pattern repeats three times:

    ; channel N
    mov  bp,word ptr [edi+N*2]        ; the outgoing channel sequence
    cmp  bp,word ptr [ebx+N*2]        ; == the incoming channel sequence?
    mov  byte ptr [esp+18h],0         ; flag = 0  (equal)
    jmp  <write 1 byte>
    mov  byte ptr [esp+18h],1         ; flag = 1  (different)
    call 200BDCA0                     ; write the flag byte
    shr  bp,4                         ; the sequence is stored >> 4
    lea  edx,[esp+1Ch]
    push 0Ch                          ; 12 bytes
    mov  dword ptr [esp+20h],ebp      ; the shifted sequence at offset +4
    push edx
    call 200BDCA0                     ; write the 12 bytes

with `edi+4`, `edi+6`, `edi+8` being three channel sequences (the
main one, the reliable one, and a third).  **If a channel's sequence
matches the peer's, only the single 0 flag byte is written and the 12
bytes are skipped.**

So a datagram looks like:

    [ u8 1 ][ 12 bytes ][ u8 1 ][ 12 bytes ] ... [ u8 cmd char ][ text ]

where each 12-byte block is `[dword0][dword1 = seq>>4][dword2]`, and
`dword0`/`dword2` come from the caller's locals at `[esp+14h]` and
`[esp+1Ch]`.

**=> The command char therefore sits AFTER the channel list**, and the
server's stream builder (`0x2004D640`) skips exactly the channel list
it parses.

### Next action

1. Read the *caller* of `0x20005D70` (the client, at `0x200062B1`
   onwards) to see how `[esp+14h]` and `[esp+1Ch]` (the 12-byte block's
   first and third dwords) are filled - those are the remaining header
   fields.
2. Read `0x2001E220` (the stream init the server calls before reading
   the command char) to see the exact skip: it must consume the channel
   list and leave the char at the front of the stream.
3. Then rebuild the frame in `web/sofclient.js` and close task 1.

**Everything else is ready:** the checksum (`web/sofmd4.js`, verified),
the key table (`web/sofkey.bin`), the OOB connect, the command
dispatch table, and the `cmd configstrings <N> 0` echo protocol.

## Update: the header is a CHANNEL LIST; the message is repacked (session 6 close)

### What is now known for certain

* `0x2001E220` (the server''s stream init) just sets the stream offset to
  0 - so the message the server dispatches starts at offset 0 of the
  data at `cl+0x526C`.
* `0x2004D640` then reads **two dwords** (offset 0->8) and the command
  char is read afterwards, at **offset 8**.
* `0x2004D668`: `cmp dword ptr [ebx+4],1` - the **second dword of the
  message must be 1**, otherwise a different (shorter) path is taken.
* So the server-side message is:

      [ dword0 ][ dword1 == 1 ][ u8 command char ][ ... ]

  and for type 2: `[ dword0 ][ 1 ][ 0x02 ][ checksum ][ u32 seq ][ text ]`.

* The **raw** datagram the client sends is different: the netchan layer
  on the server side strips the channel list and repacks the message.
  The client writes the channel list as
  `[ u8 flag ][ 12 bytes: dword0, dword1 = seq>>4, dword2 ]` per
  channel (three channels: `edi+4`, `edi+6`, `edi+8`), and when a
  channel''s sequence matches the peer''s only the single flag byte is
  written.

**=> 128 raw-frame variants (channel list present/absent, flag, the
three dwords, the command char, the checksum sequence) were swept with
the verified MD4 checksum and none was accepted - so the repacking rule
(the netchan layer) is still not known exactly.**

### The decisive next step

**Read the netchan message extraction on the server: the code that
fills `cl+0x526C`.**  Known anchors:

    0x2005EC13  lea  ecx,[ebx+0000526Ch]     ; the destination buffer
    0x2005EC19  push ecx
    0x2005EC1A  push 1
    0x2005EC1C  call 2004D390                ; the copy
    0x2005EC54  mov  dword ptr [ebx+00005264h],ecx

and the matching reader of the raw datagram is the function that owns
`0x2001E260` / `0x2001E310` / `0x2001E3B0` (the stream helpers) - look
for the caller that parses the channel list out of the raw packet.

That function gives, in one read: the exact raw datagram layout, which
bytes become `dword0`, why `dword1` must be 1, and therefore the exact
frame the browser client has to send.

### Everything else is ready

* checksum: `web/sofmd4.js` (verified against the engine)
* key table: `web/sofkey.bin`
* OOB connect: working live
* command dispatch table + the `cmd configstrings <N> 0` echo protocol
* harnesses: `web/sofclient.js`, `web/chanframe.js`, `web/netframe.js`,
  `web/framesweep.js`, `web/framesweep2.js`
