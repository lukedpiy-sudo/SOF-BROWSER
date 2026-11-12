/*
 * extractpalette.js - rebuild the Ghoul normal palette from SoF.exe.
 *
 * The 256 entry direction table at 0x20404C90 lives in the zero filled tail
 * of SoF.exe's .data section, so it is filled at run time.  The writer is
 * the initialiser that starts at 0x200BB600 and it uses two forms:
 *
 *   movl   $imm32,0x20404cXX      one float at a time (the first entries)
 *   push   $imm32                 three pushes
 *   push   $imm32
 *   push   $imm32
 *   mov    $0x20404cXX,%ecx       the destination of the entry
 *   call   0x20079330             the vec3 setter (thiscall)
 *
 * FUN_20079330 is
 *
 *   void FUN_20079330(u32 p1, u32 p2, u32 p3) { ecx[0]=p1; ecx[1]=p2; ecx[2]=p3; }
 *
 * and the arguments are pushed right to left, so the entry is
 * (x, y, z) = (the third push, the second push, the first push).
 *
 *   node analysis/ghb/extractpalette.js [SoF.exe] [out.json]
 */
"use strict";
const fs = require("fs");
const path = require("path");

/* the table: 0x20404C90 .. 0x20405890 (256 entries of 3 floats) */
const BASE = 0x20404c90;
const END = 0x20405890;
const COUNT = (END - BASE) / 12;

const disasm = path.join(__dirname, "..", "rea", "sof_disasm.txt");
const lines = fs.readFileSync(disasm, "utf8").split("\n");

/* parse the disassembly into {va, mnem, ops} */
const ins = [];
const re = /^\s*([0-9a-f]{8}):\s+((?:[0-9a-f]{2}\s+)+)\s*(\S+)\s+(.*?)\s*$/;
for (const line of lines) {
	const m = line.match(re);
	if (!m) continue;
	ins.push({ va: parseInt(m[1], 16), mnem: m[3], ops: m[4], raw: line });
}

const f32 = (bits) => {
	const b = new ArrayBuffer(4);
	new Uint32Array(b)[0] = bits >>> 0;
	return new Float32Array(b)[0];
};

const floats = new Float32Array((END - BASE) / 4);
const seen = new Uint8Array(floats.length);
let how = { movl: 0, call: 0 };

for (let i = 0; i < ins.length; i++) {
	const x = ins[i];
	/* form A: movl $imm, 0xADDR */
	if (x.mnem === "movl") {
		const dm = x.ops.match(/^(\$0x[0-9a-f]+|\$0),0x([0-9a-f]+)$/);
		if (dm) {
			const dst = parseInt(dm[2], 16);
			if (dst >= BASE && dst < END && (dst - BASE) % 4 === 0) {
				floats[(dst - BASE) / 4] = f32(parseInt(dm[1].slice(1), 16));
				seen[(dst - BASE) / 4] = 1;
				how.movl++;
			}
		}
		continue;
	}
	/* form B: three pushes, then mov $ADDR,%ecx, then (somewhere later)
	 * call 0x20079330.  The compiler interleaves the constant stores of
	 * the other entries between the mov and the call, so the pair is
	 * found from the mov and confirmed by the next call. */
	if (x.mnem === "mov") {
		const dm = x.ops.match(/^\$0x([0-9a-f]+),%ecx$/);
		if (!dm) continue;
		const dest = parseInt(dm[1], 16);
		if (dest < BASE || dest >= END || (dest - BASE) % 12 !== 0) continue;
		/* the three pushes just before the mov */
		const pushes = [];
		let j = i - 1;
		while (j >= 0 && pushes.length < 3) {
			const y = ins[j];
			if (y.mnem === "push" && /^\$0x[0-9a-f]+$/.test(y.ops)) { pushes.push(parseInt(y.ops.slice(1), 16)); j--; continue; }
			if (y.mnem === "call" || (y.mnem === "mov" && /%ecx$/.test(y.ops))) break;
			j--;   /* skip the interleaved stores */
		}
		if (pushes.length !== 3) continue;
		/* the call must follow */
		let called = false;
		for (let k = i + 1; k < ins.length && k < i + 400; k++) {
			if (ins[k].mnem === "call") { called = /^(0x20079330|20079330)$/.test(ins[k].ops); break; }
		}
		if (!called) continue;
		/* the pushes are right to left: the first push is the last argument */
		const o = (dest - BASE) / 4;
		floats[o] = f32(pushes[2]); seen[o] = 1;
		floats[o + 1] = f32(pushes[1]); seen[o + 1] = 1;
		floats[o + 2] = f32(pushes[0]); seen[o + 2] = 1;
		how.call++;
	}
}

const palette = [];
let complete = 0, missing = [];
for (let i = 0; i < COUNT; i++) {
	if (seen[i * 3] && seen[i * 3 + 1] && seen[i * 3 + 2]) {
		palette[i] = [floats[i * 3], floats[i * 3 + 1], floats[i * 3 + 2]];
		complete++;
	} else {
		palette[i] = null;
		missing.push(i);
	}
}

/* the statistics */
let unit = 0, notUnit = 0, worst = 0;
const uniq = new Set();
for (const v of palette) {
	if (!v) continue;
	const l = Math.hypot(v[0], v[1], v[2]);
	uniq.add(v.map((x) => x.toFixed(6)).join(","));
	if (Math.abs(l - 1) < 0.02) unit++;
	else { notUnit++; worst = Math.max(worst, Math.abs(l - 1)); }
}

console.log("the stores: " + how.movl + " floats by movl, " + how.call + " entries by the setter");
console.log("the entries complete: " + complete + " of " + COUNT + (missing.length ? ", missing: " + missing.join(",") : ""));
console.log("the unit vectors: " + unit + ", the others: " + notUnit + " (the worst |len-1| " + worst.toFixed(4) + ")");
console.log("the distinct entries: " + uniq.size);

console.log("\nthe first 16 entries:");
for (let i = 0; i < 16; i++) {
	const v = palette[i];
	console.log("  " + String(i).padStart(3) + ": " + v.map((x) => x.toFixed(6)).join(", ").padEnd(34) +
		" len=" + Math.hypot(v[0], v[1], v[2]).toFixed(5));
}

/* the polar angle: the table looks like a spiral over the sphere */
const rows = [];
for (let i = 0; i < COUNT; i++) {
	const v = palette[i];
	rows.push({ i: i, z: v[2], theta: Math.acos(Math.max(-1, Math.min(1, v[2]))) * 180 / Math.PI,
		phi: Math.atan2(v[1], v[0]) * 180 / Math.PI });
}
console.log("\nthe entries 6..23 (the polar angle and the azimuth):");
for (const r of rows.slice(6, 24)) {
	console.log("  " + String(r.i).padStart(3) + ": theta=" + r.theta.toFixed(3).padStart(8) + "  phi=" + r.phi.toFixed(3).padStart(9));
}

fs.writeFileSync(process.argv[3] || path.join(__dirname, "normalpalette.json"),
	JSON.stringify({ base: "0x" + BASE.toString(16), count: COUNT, palette: palette }, null, 1));
console.log("\nwrote " + (process.argv[3] || path.join(__dirname, "normalpalette.json")));
