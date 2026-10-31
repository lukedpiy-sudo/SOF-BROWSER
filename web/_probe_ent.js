// _probe_ent.js - rewrite moveprobe2's watcher/report to track entity origins
"use strict";
const fs = require("fs");
const p = "web/moveprobe2.js";
let s = fs.readFileSync(p, "utf8");
const from = "/* watch the player state each frame via the entities hook is not exposed;";
const i = s.indexOf(from);
if (i < 0) { console.log("anchor not found"); process.exit(1); }
const j = s.indexOf("const report = setInterval");
if (j < 0) { console.log("anchor2 not found"); process.exit(1); }
const repl = [
"/* Track movement through the entity snapshots: the player entity is the one",
" * whose origin changes when we steer; the player-state origin is delta/",
" * bit-packed in the frame so it can lag behind the entity state. */",
"const entSeen = new Map();",
"setInterval(() => {",
"\tconst ents = client.entities;",
"\tif (!ents) return;",
"\tfor (const [num, e] of ents) {",
"\t\tif (!e || !e.origin) continue;",
"\t\tconst o = e.origin;",
"\t\tconst prev = entSeen.get(num);",
"\t\tif (prev) {",
"\t\t\tconst d = Math.abs(o[0] - prev[0]) + Math.abs(o[1] - prev[1]) + Math.abs(o[2] - prev[2]);",
"\t\t\tif (d > 0.5) {",
"\t\t\t\tconsole.log(\"MOVE ent \" + num + \" d=(\" + (o[0] - prev[0]).toFixed(1) + \",\" + (o[1] - prev[1]).toFixed(1) + \",\" + (o[2] - prev[2]).toFixed(1) + \") at pos (\" + o[0].toFixed(0) + \",\" + o[1].toFixed(0) + \",\" + o[2].toFixed(0) + \")\");",
"\t\t\t}",
"\t\t}",
"\t\tentSeen.set(num, [o[0], o[1], o[2]]);",
"\t}",
"}, 200);",
"",
];
s = s.slice(0, i) + repl.join("\n") + s.slice(j);
const k = s.indexOf("const report = setInterval");
const kEnd = s.indexOf("}, 6000);", k);
if (k >= 0 && kEnd > k) s = s.slice(0, k) + s.slice(kEnd + "}, 6000);".length);
fs.writeFileSync(p, s);
console.log("ok");
