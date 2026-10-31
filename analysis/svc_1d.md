# svc 0x1d = `svc_restart_predn` (client prediction re-sync)

Confirmed name, payload consumption and effect. Sources: SoF.exe PE read,
`analysis/sof_net.txt`, `analysis/sof_move3.txt`, `logs/p5.txt`, `logs/probe7.log`.

## 1. SoF's own svc table, index 0x1d

The engine's name table is the pointer array at **SoF.exe 0x2011E7A0**
(`(&PTR_s_svc_bad_2011e7a0)[opcode]`, used by `Com_Error`/`Com_Printf` in
`sof_net.txt` lines 2159 / 2413). Read directly from the PE (image base is
`0x20000000`, so 0x2011E7A0 = file RVA 0x11E7A0; script
`C:\Users\User\q2work\sof2\tools\svctbl.js` → `logs\svctbl.txt`):

```
0x1c  "svc_ric"                 (ptr 0x2011EC90)
0x1d  "svc_restart_predn"       (ptr 0x2011EC7C)   <- entry 29
0x1e  "svc_rebuild_pred_inv"    (ptr 0x2011EC64)
```

So `REPORT.md` line 482 ("0x1C/0x1D svc_muzzleflash / variant") is wrong for
0x1d: it is a prediction-restart service, not an effect. `0x2011E1FC` also
holds the console command `reset_predn`, handled by `FUN_2000c770`
(`sof_move3.txt` line 789) - the same operation the service performs.

## 2. What the client reader consumes

Parse function: `FUN_2000ee30` = CL_ParseServerMessage (size 2246),
`sof_net.txt` line 2029 / switch line 2150. The whole case is 3 lines:

```c
case 0x1d:                                   // sof_net.txt line 2307
    uVar8 = FUN_2001e260(&DAT_20367ebc);     // one byte  (FUN_2001e260 = 1-byte
    FUN_20012600(uVar8);                     //   unsigned reader, web/playerstate.js line 15,
    break;                                   //   REPORT.md line 465)
```

So the message the client consumes for 0x1d is **exactly 1 byte** (bit-packed,
LSB-first, at message offset 0 = wire offset 9):

| field | width | where it lands |
|---|---|---|
| mode/flag byte | 8 bits | `DAT_201e8fa8` (`sof_move3.txt` line 1019) |

Nothing else is read: `FUN_20012600` (0x20012600, size 180, lines 1005-1052)
has no message reads at all. The ~920 extra bytes in the observed datagrams
(`len=929..943`, `svc` at offset 8) are **not** consumed by this handler - what
they are cannot be proved from the files we have. The per-packet byte value is
not recorded in `probe7.log`/`p5.txt`, so the mode values are unknown too.

## 3. What the handler does (`FUN_20012600`, `sof_move3.txt` 1005-1052)

`DAT_20225054` is the game-module function table (`ccls_t`, REPORT.md line 510);
`DAT_20225930` is the module-side local player object.

1. `DAT_201e8fa8 = byte` (the mode).
2. `**(DAT_20225054 + 4) = -1`.
3. if `DAT_20225930`: call `ccls[+0x28](DAT_20225930)`; `DAT_20225930 = 0`.
4. `DAT_20225930 = ccls[+0x24]()`.
5. if the connection name (`DAT_201c1f2c`) is not `"localhost"`: `ccls[+0x20]()`.
6. clear prediction/inventory state: `DAT_20225258 = 0`, `DAT_2022592c._2_2_ = 0`,
   `DAT_202258cc = DAT_2022591c = _DAT_20225928 = DAT_201e7f28`,
   `DAT_2022581c = DAT_20225408 = DAT_20225824 = DAT_2022525c = 0`.

The prediction function reads the same byte: `sof_move3.txt` line 2179 prints
`"Waiting for prediction resynch "` (`0x2011F444`) while `DAT_201e7f0d !=
DAT_201e8fa8`, and line 2145 prints `"New weapon prediction settings ..."`
(`0x2011F400`). That is the whole purpose: the server tells the client to drop
its local prediction and rebuild it from the module's authoritative state.

## 4. Behaviour on the wire

`logs/p5.txt`: 242 occurrences, `svc=1d` at every 3rd packet, `frag=true`
(reliable datagram), `len=926..943`, starting right after `[SPAWNED]`
(`probe7.log` line 160). So it is a steady ~3/s housekeeping service after the
spawn, not a one-shot event.

## 5. What the browser client should do

- `web/sofproto.js` currently **drops** 0x1d (dispatch covers 0x01/0x04/0x0a/
  0x0f/0x17/0x1a/0x1b only, lines 455-483); `web/snapshot.js` (frames) and
  `web/playerstate.js` (the `player_state_t` block) do **not** cover it.
- It is not renderable data. Parse the single byte (`msg[9]`) as `mode`, and
  feed the prediction module: on 0x1d, discard the local predicted state and
  snap to the authoritative player-state origin from `snapshot.js`, mirroring
  the engine's clear-list in step 6. Emit an event `predresync`
  `{svc, mode}` so `web/www/sofpredict.js` can reconcile - this is exactly the
  gap `PLAYABILITY.md` line 14 / `TARGET_LOOK.md` line 37 report ("local
  prediction is not reconciled with the server").
- If prediction is left out for now, ignoring it is harmless for rendering;
  keep the byte in the capture so the mode values can be measured later.
