// _probe_ps.js - moveprobe2: read the properly decoded (delta-chained) player state from the frame event
"use strict";
const fs = require("fs");
const p = "web/moveprobe2.js";
let s = fs.readFileSync(p, "utf8");
const from = "onEvent: (name, data) => {";
const i = s.indexOf(from);
if (i < 0) { console.log("anchor not found"); process.exit(1); }
const j = s.indexOf("});", i);
const repl = [
"onEvent: (name, data) => {",
"\tif (name === \"ask\") console.log(\"[ASK] \" + data);",
"\telse if (name === \"spawned\") console.log(\"[SPAWNED]\");",
"\telse if (name === \"frame\") {",
"\t\tconst ps = data.frame && data.frame.playerStateDecoded;",
"\t\tif (ps && ps.origin) {",
"\t\t\tcurPos = ps.origin;",
"\t\t\tif (lastShown === null || Math.abs(curPos[0]-lastShown[0])+Math.abs(curPos[1]-lastShown[1])+Math.abs(curPos[2]-lastShown[2]) > 2) {",
"\t\t\t\tconsole.log(\"PS pos=(\" + curPos[0].toFixed(1) + \",\" + curPos[1].toFixed(1) + \",\" + curPos[2].toFixed(1) + \")\");",
"\t\t\t\tlastShown = curPos.slice();",
"\t\t\t}",
"\t\t} else { emptyStates++; }",
"\t}",
];
s = s.slice(0, i) + repl.join("\n") + s.slice(j);
// declare the trackers
if (!s.includes("let curPos")) {
	s = s.replace("const entSeen = new Map();",
"const entSeen = new Map();\nlet curPos = null, lastShown = null;");
}
fs.writeFileSync(p, s);
console.log("ok");
