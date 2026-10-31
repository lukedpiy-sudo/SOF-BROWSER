/* bspdump.js - dump the raw lump table of a SoF v46 BSP and probe every lump.
 *
 *   node bspdump.js <file.bsp> [file2.bsp ...]
 *
 * The v46 header is 184 bytes:
 *   char ident[4]   "IBSP"
 *   int  version    46
 *   22 x { int off; int len; }
 *
 * For every lump this prints the offset/length, a hex+ascii preview of the
 * first bytes, the printable strings it contains and whether its length is
 * divisible by the record sizes that matter (4, 8, 12, 20, 24, 32, 40, 64, 76).
 */
"use strict";
const fs = require("fs");

function lumps(b) {
	if (b.toString("latin1", 0, 4) !== "IBSP") throw new Error("not a BSP");
	const out = [];
	for (let i = 0; i < 22; i++) {
		out.push({ index: i, off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(8 + i * 8 + 4) });
	}
	return { version: b.readInt32LE(4), lumps: out };
}

function hex(b, off, n) {
	const rows = [];
	for (let i = 0; i < n; i += 16) {
		const s = Math.min(16, n - i);
		const h = [], a = [];
		for (let k = 0; k < s; k++) {
			const c = b[off + i + k];
			h.push(c.toString(16).padStart(2, "0"));
			a.push(c >= 0x20 && c < 0x7f ? String.fromCharCode(c) : ".");
		}
		rows.push("    " + (off + i).toString(16).padStart(8, "0") + "  " +
			h.join(" ").padEnd(47) + "  |" + a.join("") + "|");
	}
	return rows.join("\n");
}

function strings(b, off, len, minLen) {
	minLen = minLen || 6;
	const s = b.toString("latin1", off, off + len);
	const m = s.match(/[\x20-\x7e]{" + minLen + ",}/g) || [];
	return m;
}

const files = process.argv.slice(2);
for (const file of files) {
	const b = fs.readFileSync(file);
	const { version, lumps: L } = lumps(b);
	console.log("=".repeat(100));
	console.log(file, "  " + b.length + " bytes   version " + version);
	for (const l of L) {
		const divs = [4, 8, 12, 16, 20, 24, 32, 36, 40, 44, 48, 56, 64, 68, 72, 76, 80, 88, 96, 100, 104, 108, 112, 120, 128]
			.filter(s => l.len > 0 && l.len % s === 0);
		console.log("  lump " + String(l.index).padStart(2) +
			"  off=" + String(l.off).padStart(9) +
			"  len=" + String(l.len).padStart(9) +
			"  rec=" + divs.join(","));
		if (l.len > 0) {
			const strs = strings(b, l.off, l.len, 8);
			if (strs.length) console.log("        strings(" + strs.length + "): " +
				JSON.stringify(strs.slice(0, 6)).slice(0, 300));
			console.log(hex(b, l.off, Math.min(64, l.len)));
		}
	}
}
