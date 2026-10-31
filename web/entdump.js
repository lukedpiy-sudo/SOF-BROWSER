/* entdump.js - dump the local player's entity state bytes.
 *
 * The local player is found through the player state's origin, so this shows
 * exactly what the server sends about us.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let dumped = 0, tPhase = 0, phase = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const ps = data.frame.playerState;
		if (!ps) return;
		const ox = ps.readInt16LE(12) / 8, oy = ps.readInt16LE(14) / 8, oz = ps.readInt16LE(16) / 8;
		let self = null;
		for (const e of data.entities.values()) {
			if (!e.state) continue;
			if (Math.abs(e.state.readFloatLE(0x04) - ox) < 2 &&
				Math.abs(e.state.readFloatLE(0x08) - oy) < 2 &&
				Math.abs(e.state.readFloatLE(0x0c) - oz) < 2) { self = e; break; }
		}
		if (!self) return;
		if (Date.now() - tPhase > 1200) {
			tPhase = Date.now();
			const st = self.state;
			const h = Array.from(st.subarray(0, 116)).map(x => x.toString(16).padStart(2, "0"));
			for (let i = 0; i < h.length; i += 16) {
				console.log("+" + i.toString(16).padStart(2, "0") + ": " + h.slice(i, i + 16).join(" "));
			}
			console.log("--- i16 at +0x5c..: " +
				[0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72]
					.map(o => o.toString(16) + "=" + st.readInt16LE(o)).join(" "));
			console.log("--- u16 at +0x5c..: " +
				[0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72]
					.map(o => o.toString(16) + "=" + st.readUInt16LE(o)).join(" "));
			phase++;
			if (phase > 2) process.exit(0);
		}
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 12000);
