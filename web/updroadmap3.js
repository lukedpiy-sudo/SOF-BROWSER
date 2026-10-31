const fs = require("fs");
const p = "C:/Users/User/Soldier of Fortune/analysis/BROWSER_ROADMAP.md";
let c = fs.readFileSync(p, "utf8");

const rows = [
	"| 2026-10-21 (e) | **#6 62% -> 70%.** **The complete `.bsp` v46 lump table is now known** - the engine prints it when the `developer` cvar is on (`CM_LoadLump: LUMP_<name> <n> entries (<bytes> in, <bytes> out)`), which is the authoritative list: 0 ENTITIES, 1 PLANES (20 B), 2 VERTEXES (12 B), 3 VISIBILITY, 4 NODES (28 B), 5 **TEXINFO (2072 x 76 B)**, 6 FACES (6070 x 44 B), 7 LIGHTING, 8 LEAFS (32 B), 9 LEAFFACES, 10 LEAFBRUSHES, 11 EDGES (4 B), 12 SURFEDGES (4 B), 13 MODELS, 14 BRUSHES, 15 BRUSHSIDES, 16 POP, 17 AREAS, 18 AREAPORTALS, 19 REGIONFACES, 20 LIGHTS.  The **texinfo** record is confirmed: 8 floats (the S and T axes, the 4th = the offset), an int, an int and a 32 byte texture name - so the map's textures are now addressable (`subway/clip`, ...).  The map's textures live in the pak as `.m32` **material** files (`textures/subway/clip.m32`) whose pixel data is a custom compressed codec (open item). |\n",
	"| 2026-10-21 (f) | **#8 75% -> 85%.** The **GameSpy master protocol is fully reverse engineered** from the engine (REA on `SoF.exe` `0x200f4bf0`..`0x200f9xxx`): the master address is **hard coded** (`master.gamespy.com`), the server registers over **UDP 27900** with `\\heartbeat\\<gameport>\\gamename\\sofretail\\statechanged\\` (every 150 s or when the player count changes) and the client queries over **TCP 28900** (a `\\secure\\` challenge answered with `base64(RC4(\"iVn3a3\", challenge))`, then `\\list\\cmp\\gamename\\sofretail\\final\\`).  `web/gsmaster.js` implements that master (heartbeat channel, list channel, HTTP API) and `web/mkmasterpatch.js` writes `SoFTest.exe`, a copy of the server whose two hard coded master strings point at 127.0.0.1 (the original `SoF.exe` is untouched).  Open: the engine's heartbeat still does not arrive - its master socket binds the *local* port 27900, which collides with our master on the same machine, and the `gamespyport` cvar may be read too late. |\n"
].join("");

if (!c.includes("2026-10-21 (e)")) {
	const anchor = c.indexOf("| 2026-10-21 (d) |");
	const end = c.indexOf("\n", anchor);
	c = c.slice(0, end + 1) + rows + c.slice(end + 1);
}
c = c.replace("| 6 | Asset pipeline (.bsp v46, .m32, .ghb/.GHL, .adp) | **[~] 62%** | - |",
	"| 6 | Asset pipeline (.bsp v46, .m32, .ghb/.GHL, .adp) | **[~] 70%** | - |");
c = c.replace("| 8 | Website + master listing + relay | **[~] 75%** | - |",
	"| 8 | Website + master listing + relay | **[~] 85%** | - |");
c = c.replace("## 6. Asset pipeline - *62%*", "## 6. Asset pipeline - *70%*");
c = c.replace("**Overall: ~64% of the browser client is done.**", "**Overall: ~66% of the browser client is done.**");
fs.writeFileSync(p, c);
console.log("roadmap updated");
