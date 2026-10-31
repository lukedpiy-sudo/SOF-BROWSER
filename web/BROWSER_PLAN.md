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
