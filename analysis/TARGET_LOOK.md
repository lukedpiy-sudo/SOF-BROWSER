# The target look (what the browser client has to reach)

Reference material: three screenshots of the **real SoF** (first person, the
weapon in the lower right, a lit corridor) and the current browser client.

## What the real game looks like

1. **First person, at the eye.**  The camera is in the player's eyes (the eye
   height is 56 units).  The weapon (a Ghoul view model) sits in the lower
   right, the hands and the gun move with the look direction, and the muzzle
   flash lights the scene.
2. **A tight HUD, not a debug dump.**  A small SoF-style bar at the bottom
   (health, armour, the ammunition counters, the money), the crosshair in the
   centre, and the scoreboard only when it is asked for.  The current client
   paints a full screen monospace debug overlay over the whole picture - that
   has to become a toggle (F1), and the real HUD has to take its place.
3. **The world is closed and lit.**  The corridors are tiled (the 82 real
   textures), the ceiling lamp lights its surroundings, the corners fall into
   darkness, the distance fades into the fog, the blood and the debris are on
   the floor, the enemies walk around, the shells fly out of the gun.
4. **Nothing floats in a void.**  The sky (the worldspawn's `sky` key) is drawn
   where the map has no geometry, and the engine's distance fog hides the far
   end of the level.

## Where the browser client is today (the gap list, in the order of impact)

| # | gap | why it matters | whose area |
|---|---|---|---|
| 1 | **no first person weapon view model** | the biggest visual difference - the reference screenshots are 50 % weapon | the Ghoul agent (the view model is a Ghoul model with its own animation) |
| 2 | **the debug overlay covers the whole screen** | the game is unreadable; the real HUD has to replace it | mine (`web/www/app.js`) |
| 3 | **the camera is not in the player's eyes** | the default view is the third person / the overview; the real game is first person | mine (`web/www/app.js`) |
| 4 | **the sky is missing** (the void behind the map) | the level ends in a hard edge | the BSP agent (stage 2: the sky faces and the worldspawn's `sky` key) |
| 5 | **the fog is missing** | the corridors do not fade, the level looks flat and small | the BSP agent (the engine's fog cvars) |
| 6 | **the lighting is patchy** | the lightmap is in, but the ambient / the entity lights / the styles need the engine's exact combination, and the entity lights must be attenuated the way the module does | the BSP agent (the module's light attenuation) |
| 7 | **the characters are point clouds** (or boxes) | the enemies and the other players are the point of the game | the Ghoul agent (the triangle topology) |
| 8 | **the sounds are not positional** | the world sounds wrong | the audio agent (the sound entities + the attenuation) |
| 9 | **the client prediction is missing** | the movement lags a round trip, so walking feels dead | the BSP agent (stage 2: the brush collision + the prediction) |
| 10 | **the client spawns slowly** (20+ s) | the page has to load the 3.6 MB map JSON, the lightmap atlas and the models before the handshake finishes | mine (load the assets after the spawn, or in parallel with the handshake) |

## The rule for the HUD

The real SoF HUD (from the reference screenshots):

* bottom left: the health and the armour as two bars with their numbers,
* bottom right: the ammunition (the magazine / the reserve) and the money,
* centre: the crosshair,
* nothing else on screen unless it is asked for (the scoreboard, the chat).

The numbers all come out of the decoded player state (health = stat 1,
armour = stat 5, the magazine = stat 2, the reserve = stat 3, the carried
item = stat 6, the money = stat 10) - see `PROTOCOL.md`, "The player state
block".
