/*
 * psent2.js - dump the accumulated entity list and find the model index.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const table = require("./sofstringtable.json").names;

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let frames = 0, dumped = false;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		frames++;
		if (dumped || frames < 60) return;
		dumped = true;
		const cs = client.configstrings;
		const list = Array.from(client.entities.entries());
		console.log("frames " + frames + ", entities " + list.length);
		/* find which offset holds a model-like value */
		const cand = {};
		for (const [num, e] of list) {
			const st = e.state;
			if (!st) continue;
			for (let off = 0x20; off < 0x60; off += 4) {
				const v = st.readInt32LE(off);
				if (v > 0 && v < 1900 && cs[v] !== undefined) {
					cand[off] = (cand[off] || 0) + 1;
				}
			}
		}
		console.log("offset hits (value is a known configstring): " + JSON.stringify(cand));
		let shown = 0;
		for (const [num, e] of list) {
			const st = e.state;
			if (!st) continue;
			const x = st.readFloatLE(0x04), y = st.readFloatLE(0x08), z = st.readFloatLE(0x0c);
			const words = [];
			for (let off = 0x20; off < 0x60; off += 4) words.push(off.toString(16) + ":" + st.readInt32LE(off));
			console.log("  ent " + num + " @" + x.toFixed(0) + "," + y.toFixed(0) + "," + z.toFixed(0) +
				"  " + words.join(" "));
			if (++shown > 12) break;
		}
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 15000);
