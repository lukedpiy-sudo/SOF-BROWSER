/* Extract one file from a Quake II .pak (the game data).
 * The pak directory entry is: char name[64]; int filepos; int filelen; */
const fs = require("fs");

const pak = process.argv[2];
const want = process.argv[3];
const dst = process.argv[4];

const fd = fs.openSync(pak, "r");
const head = Buffer.alloc(12);
fs.readSync(fd, head, 0, 12, 0);
if (head.toString("latin1", 0, 4) !== "PACK") throw new Error("not a pak");
const dirOff = head.readInt32LE(4), dirLen = head.readInt32LE(8);
const dir = Buffer.alloc(dirLen);
fs.readSync(fd, dir, 0, dirLen, dirOff);

const count = Math.floor(dirLen / 64);
for (let i = 0; i < count; i++) {
	const o = i * 64;
	if (o + 64 > dir.length) break;
	let z = 0;
	while (z < 56 && dir[o + z] !== 0) z++;
	const name = dir.toString("latin1", o, o + z);
	const dataOff = dir.readInt32LE(o + 56);
	const len = dir.readInt32LE(o + 60);
	if (name.toLowerCase() === want.toLowerCase()) {
		const buf = Buffer.alloc(len);
		fs.readSync(fd, buf, 0, len, dataOff);
		fs.writeFileSync(dst, buf);
		fs.closeSync(fd);
		console.log("extracted", name, len, "bytes ->", dst);
		process.exit(0);
	}
}
fs.closeSync(fd);
console.log("not found:", want);
process.exit(1);
