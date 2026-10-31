/*
 * psent.js - dump the entity list with the model names.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const table = require("./sofstringtable.json").names;

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let done = false;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame" || done) return;
		done = true;
		const cs = client.configstrings;
		console.log("configstrings: " + Object.keys(cs).length);
		const ents = client.entities;
		console.log("entities type: " + (ents && ents.constructor && ents.constructor.name) +
			" size: " + (ents ? (ents.size !== undefined ? ents.size : Object.keys(ents).length) : "?"));
		const list = ents instanceof Map ? Array.from(ents.entries()) : Object.entries(ents);
		console.log("entity count " + list.length);
		let n = 0;
		for (const [num, e] of list) {
			const st = e.state || e;
			if (!st || !st.readInt32LE) continue;
			const mi = st.readInt32LE(0x38);
			const v = cs[mi];
			const nm = typeof v === "string" ? v : (v !== undefined ? table[v] : undefined);
			const x = st.readFloatLE(0x04), y = st.readFloatLE(0x08), z = st.readFloatLE(0x0c);
			console.log("  ent " + num + " modelIdx=" + mi + " cs=" + v + " name=" + nm +
				" @" + x.toFixed(0) + "," + y.toFixed(0) + "," + z.toFixed(0));
			if (++n > 25) break;
		}
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 12000);
