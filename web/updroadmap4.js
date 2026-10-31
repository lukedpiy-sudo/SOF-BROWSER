const fs = require("fs");
const p = "C:/Users/User/Soldier of Fortune/analysis/BROWSER_ROADMAP.md";
let c = fs.readFileSync(p, "utf8");

const row = "| 2026-10-21 (g) | **#8 85% -> 95%.** The **master round trip works end to end**: the browser client publishes the server it is connected to (`POST /api/servers`) and reads the list back (`GET /api/servers`, CORS enabled) and the HUD shows it (`master (1): 127.0.0.1:29000  NYCDM1`).  Two findings from the chase: (1) a **dedicated server can never register with a GameSpy master by itself** - the master client is created in the *client's* `Sys_Main` (`0x2001f390`), so the server process has no master object and the heartbeat gate (`0x2005f720`, which needs a non empty `hostname` and the `maxclients` condition) never fires; the browser client therefore publishes the server.  (2) the `developer` cvar opens a \"Developer Mode\" window and starting the server hidden makes the engine **hang before it binds its socket** - that was the cause of the 'Couldn't allocate dedicated server IP port' dialogs.  The `port` cvar works from `User/config.cfg` (read before the net init) but **not** from the command line. |\n";

if (!c.includes("2026-10-21 (g)")) {
	const anchor = c.indexOf("| 2026-10-21 (f) |");
	const end = c.indexOf("\n", anchor);
	c = c.slice(0, end + 1) + row + c.slice(end + 1);
}
c = c.replace("| 8 | Website + master listing + relay | **[~] 85%** | - |",
	"| 8 | Website + master listing + relay | **[~] 95%** | - |");
c = c.replace("**Overall: ~66% of the browser client is done.**", "**Overall: ~68% of the browser client is done.**");
fs.writeFileSync(p, c);
console.log("roadmap updated");
