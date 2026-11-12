"use strict";
/* a self test for the .ghb decoder: it checks the four ground truth models
 * against the numbers the RE produced */
const fs = require("fs");
const { parseGhoul, parseGeometry } = require("./ghb.js");

const EXPECT = {
	"FEM_ARM.ghb": { groups: 27, tris: 719, corners: 555, malformed: 0, maxIdx: 554, pos: 0 },
	"FEMALE.ghb": { groups: 80, tris: 1132, corners: 989, malformed: 0, maxIdx: 988, pos: 0 },
	"ACC_BOX_HIP.ghb": { groups: 1, tris: 20, corners: 32, malformed: 0, maxIdx: 31, pos: 32 },
	"EXPLODE20.ghb": { groups: 1, tris: 20, corners: 22, malformed: 0, maxIdx: 21, pos: 22 }
};

/* the samples live in the repo (samples/ghb), so the test survives a wipe
 * of /tmp; the command line can override the directory */
const DIR = process.argv[2] || require("path").join(__dirname, "..", "samples", "ghb");

let fail = 0;
for (const [name, want] of Object.entries(EXPECT)) {
	const path = DIR + "/" + name;
	if (!fs.existsSync(path)) { console.log("SKIP " + name + " (no sample)"); continue; }
	const buf = fs.readFileSync(path);
	const model = parseGhoul(buf);
	const g = parseGeometry(buf, model);
	if (!g) { console.log("FAIL " + name + ": no geometry"); fail++; continue; }
	let mx = -1e9, mn = 1e9;
	for (const t of g.tris) for (const v of t.i) { if (v > mx) mx = v; if (v < mn) mn = v; }
	const negPos = g.corn.filter(c => c.pos < 0).length;
	const ok = g.groups.length === want.groups &&
		g.triCount === want.tris &&
		g.corn.length === want.corners &&
		g.malformed === want.malformed &&
		mx === want.maxIdx && mn === 0 &&
		negPos === want.pos;
	if (!ok) fail++;
	console.log((ok ? "PASS " : "FAIL ") + name +
		" groups=" + g.groups.length + "/" + want.groups +
		" tris=" + g.triCount + "/" + want.tris +
		" corners=" + g.corn.length + "/" + want.corners +
		" malformed=" + g.malformed +
		" idx=" + mn + ".." + mx +
		" sharedPos=" + negPos +
		" static=" + g.staticPositions +
		" bbox=" + g.comp.bboxMin.map(v => v.toFixed(1)).join(",") + ".." + g.comp.bboxMax.map(v => v.toFixed(1)).join(","));
}
console.log(fail ? "\n" + fail + " FAILED" : "\nall ok");
process.exit(fail ? 1 : 0);
