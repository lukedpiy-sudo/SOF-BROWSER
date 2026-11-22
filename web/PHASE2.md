# Phase 2 — browser multiplayer client shell

This phase adds the player-facing shell around the already-working SoF protocol
client. The game still speaks the **real SoF wire protocol** to a real dedicated
server through the WebSocket/UDP relay; nothing is emulated or faked.

## What was added

| surface | implementation | notes |
|---|---|---|
| Main menu | `web/www/menu.js`, `web/www/menu.css` | quick join, server browser, settings, controls, content/mods |
| Pause menu | `window.sofmenu.togglePause()` | `Esc` opens it while playing |
| Settings | `sof.browser.settings` in `localStorage` | name, relay, master URL, default server/port, FOV, sensitivity, move speed, volume, draw distance, third person, debug |
| Server browser | `GET <master>/api/servers` | refresh, manual host/port, double-click to join |
| Scoreboard | `Tab` | live entity/player list from the snapshot |
| HUD | `web/www/app.js` | health/armour bars, magazine/reserve, carried item, weapon name, heat meter, crosshair |
| Weapon input | number keys `1`-`0`, `R`, mouse buttons | `weaponselect N` and `reload` are sent as real server string commands |
| Protocol bridge | `window.sofapp` | connect/disconnect/settings/state, no UI code in the protocol core |
| Ghoul characters | `web/www/sofmodel.js` | decoded Elem triangles, animated vertices/normals, per-entity two-track clip player and sub-frame blending |
| Sky / fog / decals | `web/www/sofsurface.js`, `web/www/effects.js` | SURF_SKY faces, shared MVP/fog bridge, real decal quads and particle billboards |
| Positional audio / voice | `web/www/sofmusic.js` | RE `svc_sound` parser, pitch/channel/delay/rolloff, sound-table cache, AI/general voice path builders, weapon/impact helpers |

## Running it

```bash
# terminal 1: relay (also serves the static client and /pak/*)
PATH="$HOME/.local/node/bin:$PATH" node web/relay.js --http 8080 --www web/www --pak "Soldier of Fortune/Base"

# terminal 2: master / server-list API
PATH="$HOME/.local/node/bin:$PATH" node web/gsmaster.js --http 8090 --udp 27900 --tcp 28900

# open
http://127.0.0.1:8080/index.html
```

Pick **SERVER BROWSER** to refresh the master list, or enter a host/port
manually. **DEPLOY / QUICK JOIN** uses the last server. `?autoplay=1` skips the
menu for deep links.

## Verification

`web/menu_smoke.js` drives headless Chrome over the DevTools protocol:

```bash
PATH="$HOME/.local/node/bin:$PATH" node web/menu_smoke.js \
  http://127.0.0.1:8080/index.html shots/menu.png \
  "document.querySelector('[data-action=servers]').click();'servers'"
```

Verified: menu render, settings persistence, live master list (two published
servers), join through the relay, weapon selection and heat accumulation.
