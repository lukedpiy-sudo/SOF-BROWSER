/* Analyse a .m32 material (the SoF texture format). */
const fs = require("fs");
const path = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/brick.m32";
const b = fs.readFileSync(path);
console.log("size", b.length);

/* the header: u32 version, then fixed size name fields */
console.log("version", b.readInt32LE(0));
let off = 4;
for (let i = 0; i < 3; i++) {
	let z = off;
	while (z < b.length && b[z] !== 0) z++;
	console.log("string @" + off + " (" + (z - off) + "):", JSON.stringify(b.toString("latin1", off, z)));
	/* the next field starts after the NUL and some padding */
	let p = z + 1;
	while (p < b.length && b[p] === 0 && (p - z) < 4096) p++;
	off = p;
}

/* the byte histogram of the tail */
const start = 968;
const hist = new Array(256).fill(0);
for (let i = start; i < b.length; i++) hist[b[i]]++;
console.log("data from", start, "count", b.length - start);
console.log("the most common bytes:", hist.map((c, v) => [v, c]).sort((a, b) => b[0] - a[0]).slice(0, 8)
	.map(x => x[1] + "x" + x[0]).join(" "));
console.log("the first 64 data bytes:", b.subarray(start, start + 64).toString("hex"));

/* look for a repeated block size: try the square sizes */
for (const w of [64, 128, 256]) {
	const need = w * w;
	let i = start;
	while (i + need <= b.length) {
		/* how many zero bytes in the block? */
		let z = 0;
		for (let k = i; k < i + need; k++) if (b[k] === 0) z++;
		if (z > need * 0.9) { console.log("a mostly empty " + w + "x" + w + " block at " + i); break; }
		i += need;
	}
}
