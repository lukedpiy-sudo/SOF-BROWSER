/* statfind.js - look for the HUD stats in the local player's entity state.
 *
 * The entity state has twelve shorts at +0x5C (selected by the mask bits
 * 0..11).  At spawn the player's health is 100, so a field that holds 100
 * is a candidate for the health.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let dumped = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const ps = data.frame.playerState;
		if (!ps) return;
		/* the local player: the entity whose origin is in the player state */
		let self = null;
		for (const e of data.entities.values()) {
			if (!e.state) continue;
			const ex = e.state.readFloatLE(0x04), ey = e.state.readFloatLE(0x08), ez = e.state.readFloatLE(0x0c);
			for (let i = 0; i + 6 <= ps.length; i++) {
				if (ps.readInt16LE(i) !== Math.round(ex * 8)) continue;
				if (ps.readInt16LE(i + 2) !== Math.round(ey * 8)) continue;
				if (ps.readInt16LE(i + 4) !== Math.round(ez * 8)) continue;
				self = e;
			}
			if (self) break;
		}
		if (!self) return;
		if (dumped++ > 2) return;
		const s = self.state;
		console.log("the local entity #" + self.number);
		const shorts = [];
		for (let o = 0x5c; o <= 0x72; o += 2) shorts.push(o.toString(16) + "=" + s.readInt16LE(o));
		console.log("  the 12 shorts: " + shorts.join(" "));
		console.log("  the bytes 0x3c..0x5b: " + s.subarray(0x3c, 0x5c).toString("hex").replace(/(.{32})/g, " "));
		console.log("  the whole state:");
		for (let i = 0; i < 116; i += 16) {
			console.log("   +" + i.toString(16).padStart(2, "0") + "  " +
				s.subarray(i, i + 16).toString("hex").replace(/(.{32})/g, "$1 "));
		}
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 14000);
