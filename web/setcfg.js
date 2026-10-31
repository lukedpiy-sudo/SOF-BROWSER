const fs = require("fs");
const cfg = "C:/Users/User/Soldier of Fortune/User/config.cfg";
let c = fs.readFileSync(cfg, "utf8");
/* the IRC redirect made the engine's master init hang the server: restore
 * the game's own values and keep only the test port */
c = c.replace(/set gsc_server "[^"]*"/, 'set gsc_server "peerchat.gamespy.com"');
c = c.replace(/set gsc_port "[^"]*"/, 'set gsc_port "6667"');
fs.writeFileSync(cfg, c);
console.log("config: the game's own gsc values restored");
