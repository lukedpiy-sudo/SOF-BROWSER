/*
 * psent3.js - dump every entity with its model name and origin, plus the full
 * decoded player state, so the local player entity can be identified.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
const table = require("./sofstringtable.json").names;
let dumped = false, t0 = Date.now();

function nameOf(cs, idx) {
	const v = cs[idx];
	if (v === undefined) return null;
	return typeof v === "string" ? v : (table[v] || null);
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame" || dumped) return;
		if (Date.now() - t0 < 5000) return;
		dumped = true;
		const cs = client.configstrings;
		const st = decodePlayerState(data.frame.playerState, 0);
		console.log("player state: " + JSON.stringify(st, (k, v) => (v === null ? null : v)).slice(0, 1200));
		console.log("entities: " + client.entities.size);
		for (const [n, e] of client.entities) {
			if (!e.state) { console.log("  " + n + " (no state)"); continue; }
			const mi = e.state.readUInt16LE(0x28);
			const nm = nameOf(cs, mi);
			const x = e.state.readFloatLE(0x04), y = e.state.readFloatLE(0x08), z = e.state.readFloatLE(0x0c);
			const a0 = e.state.readUInt8(0x10), a1 = e.state.readUInt8(0x14), a2 = e.state.readUInt8(0x18);
			console.log("  " + n + " model=" + mi + " " + nm + " @" + x.toFixed(1) + "," + y.toFixed(1) +
				"," + z.toFixed(1) + " ang=" + a0 + "," + a1 + "," + a2);
		}
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 15000);
