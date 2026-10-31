const fs = require("fs");
const p = "C:/Users/User/Soldier of Fortune/analysis/BROWSER_ROADMAP.md";
let c = fs.readFileSync(p, "utf8");

const row = "| 2026-10-21 (c) | **#4 80% -> 88%, #5 95% -> 100%, #7 45% -> 52%.** **The client can walk.**  A sweep of every usercmd field (`web/cmdsweep.js`) showed that **+0x0A/+0x0C/+0x0E are the movement (forward/side/up), not angle deltas** - writing 100/200/400 into +0x0A makes the local player walk and the same in +0x0C strafes (the engine speed scale is 400 for a run, 100 for a walk).  A second sweep (`web/originscan.js`) matched the live entity origins against the map's entity list and proved that **the origin is three floats at +0x04 in SoF's Z up order** - the earlier 'i16 * 1/8' reading was garbage, the decoded state already holds floats.  Both fixes are in `web/sofproto.js` and `web/snapshot.js`, so the browser client now walks with WASD and the entity boxes and the first person camera sit exactly on the map geometry. |\n";

if (!c.includes("2026-10-21 (c)")) {
	c = c.replace(/(\| 2026-10-21 \(b\) \|[^\n]*\n)/, "$1" + row);
}
c = c.replace("| 4 | Snapshot decode (entity_state, configstrings, player_state, deltas) | **[~] 80%** | - |",
	"| 4 | Snapshot decode (entity_state, configstrings, player_state, deltas) | **[~] 88%** | - |");
c = c.replace("| 5 | Usercmds (bit packed, checksummed, server accepted) | **[x] 95%** | - |",
	"| 5 | Usercmds (bit packed, checksummed, server accepted) | **[x] 100%** | - |");
c = c.replace("| 7 | WebGL renderer (scene, camera, models, Ghoul anim, HUD, audio) | **[~] 45%** | #4,#6 |",
	"| 7 | WebGL renderer (scene, camera, models, Ghoul anim, HUD, audio) | **[~] 52%** | #4,#6 |");
c = c.replace("**Overall: ~60% of the browser client is done.**", "**Overall: ~63% of the browser client is done.**");
c = c.replace("## 4. Snapshot decode - *80%*", "## 4. Snapshot decode - *88%*");
c = c.replace("## 5. Usercmds - *95%*", "## 5. Usercmds - *100%*");
c = c.replace("## 7. WebGL renderer - *45%*", "## 7. WebGL renderer - *52%*");
fs.writeFileSync(p, c);
console.log("roadmap updated");
