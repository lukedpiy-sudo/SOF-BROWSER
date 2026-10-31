/*
 * psent4.js - what does the entity state's +0x28 field mean?
 *
 * Two candidate resolutions:
 *   (a) a CONFIG STRING index:  cs[v] is a number, names[cs[v]] is the path
 *   (b) a STRING TABLE index:    names[v] is the path directly
 * The live NYCDM1 entities decide it.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const table = require("./sofstringtable.json").names;
const sock = dgram.createSocket("udp4");
let done = false, t0 = Date.now();

const client = createClient({
	send: (buf) => sock.send(buf, port),
	onEvent: (name, data) => {
		if (name !== "frame" || done) return;
		done = true;
		const cs = client.configstrings;
		for (const [n, e] of client.entities) {
			if (!e.state) continue;
			const v = e.state.readUInt16LE(0x28);
			const csVal = cs[v];
			const a = (typeof csVal === "number") ? table[csVal] : csVal;
			const b = table[v];
			console.log("ent " + n + " +0x28=" + v +
				"  cs[" + v + "]=" + JSON.stringify(csVal) + " -> " + JSON.stringify(a) +
				"   names[" + v + "]=" + JSON.stringify(b));
		}
	}
});
const port = parseInt(process.argv[3] || "29000", 10);
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 15000);
