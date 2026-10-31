/* bspwater.js - the brushes (and the water) and the entity classes.
 *   node bspwater.js <map.bsp>
 */
"use strict";
const { readBsp } = require("./bspmap.js");
const file = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const { b, lumps } = readBsp(file);
const L = (i) => lumps[i];

/* the brushes: 12 bytes: firstside(i32), numsides(i32), contents(i32) */
const n = L(14).len / 12;
const c = new Map(), ns = new Map();
for (let i = 0; i < n; i++) {
	const o = L(14).off + i * 12;
	const v = b.readInt32LE(o + 8);
	c.set(v, (c.get(v) || 0) + 1);
	const k = b.readInt32LE(o + 4);
	ns.set(k, (ns.get(k) || 0) + 1);
}
console.log("BRUSHES:", n);
console.log("  the contents flags:", [...c.entries()].sort((a, x) => x[1] - a[1])
	.map(e => "0x" + e[0].toString(16) + " x" + e[1]).join("  "));
console.log("  the number of sides:", [...ns.entries()].sort((a, x) => x[1] - a[1]).slice(0, 8)
	.map(e => e[0] + " x" + e[1]).join("  "));

/* the brush sides: 4 bytes */
const sideCount = L(15).len / 4;
const texCount = L(5).len / 76;
let badA = 0, badB = 0;
for (let i = 0; i < sideCount; i++) {
	const o = L(15).off + i * 4;
	if (b.readUInt16LE(o) >= texCount) badA++;
	if (b.readUInt16LE(o + 2) >= texCount) badB++;
}
console.log("BRUSHSIDES:", sideCount, "  the first u16 out of range as a texinfo:", badA,
	"  the second:", badB);

/* the entity classes and the fog */
const t = b.toString("latin1", L(0).off, L(0).off + L(0).len);
const cls = {};
const re = /"classname"\s*"([^"]*)"/g;
let m;
while ((m = re.exec(t)) !== null) cls[m[1]] = (cls[m[1]] || 0) + 1;
console.log("\nthe entity classes:", JSON.stringify(cls));
console.log("the entity lump mentions fog:", /fog/i.test(t), " water:", /water/i.test(t),
	" style:", /"style"/i.test(t));

/* the surfaces that carry the fog or the water flags: the texinfo flags */
const flags = new Map();
for (let i = 0; i < texCount; i++) {
	const o = L(5).off + i * 76;
	const v = b.readInt32LE(o + 32) >>> 0;
	flags.set(v, (flags.get(v) || 0) + 1);
}
console.log("\nthe texinfo flags:");
for (const [k, v] of [...flags.entries()].sort((a, x) => x[1] - a[1]))
	console.log("   0x" + k.toString(16).padStart(8, "0") + " x" + v);
