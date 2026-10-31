const fs = require("fs");
const p = "C:/Users/User/Soldier of Fortune/analysis/BROWSER_ROADMAP.md";
let c = fs.readFileSync(p, "utf8");
const lines = c.split("\n");
const ia = lines.findIndex(l => l.startsWith("| 2026-10-21 (a) |"));
if (ia >= 0) {
	const row = lines.splice(ia, 1)[0];
	const ib = lines.findIndex(l => l.startsWith("| 2026-10-21 (b) |"));
	lines.splice(ib, 0, row);
	fs.writeFileSync(p, lines.join("\n"));
	console.log("session log reordered");
}
