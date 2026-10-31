"use strict";
/* snaptest.js - decode a captured server->client stream.
 * The capture format is a sequence of [u16 length][packet] records.
 *
 * usage: node snaptest.js <capture.bin> [maxPackets]
 */
const fs = require("fs");
const { parseFrame, describeEntity, Reader } = require("./snapshot.js");

const file = process.argv[2];
const maxPackets = parseInt(process.argv[3] || "5", 10);
const data = fs.readFileSync(file);

let p = 0, n = 0, lastFrame = null;
while (p + 2 <= data.length && n < maxPackets) {
	const len = data.readUInt16LE(p); p += 2;
	if (p + len > data.length) break;
	const pkt = data.subarray(p, p + len); p += len; n++;
	/* skip the 8 byte netchan/reliable header */
	if (len <= 8) { console.log("packet " + n + ": keepalive (8 byte header)"); continue; }
	const svc = pkt[8];
	if (svc !== 0x17) {
		console.log("packet " + n + ": svc=0x" + (svc === undefined ? "??" : svc.toString(16)) + " len=" + len + "  (not a frame)");
		continue;
	}
	try {
		const f = parseFrame(pkt, 9, lastFrame);
		lastFrame = f;
		console.log("packet " + n + ": frame=" + f.number + " deltaFrom=" + f.deltaFrom +
			" time=" + f.time.toFixed(3) + " entities=" + f.entities.size +
			" consumed=" + f.consumed + "/" + (len - 9));
		let i = 0;
		for (const e of f.entities.values()) {
			if (i++ > 12) { console.log("   ..."); break; }
			console.log("   " + describeEntity(e));
		}
	} catch (err) {
		console.log("packet " + n + ": parse error " + err.message);
		console.log("   hex: " + pkt.subarray(8, 48).toString("hex"));
	}
}
