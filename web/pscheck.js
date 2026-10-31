/* pscheck.js - verify the player state decode against the entity origin.
 *
 * The engine's parser is FUN_200028B0; this checks the JS port by
 * comparing the decoded origin with the local entity's origin.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let n = 0, shown = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (n++ % 30) return;
		const st = f.playerStateDecoded;
		if (!st) return;
		/* the local entity: the one whose origin matches the player state */
		let self = null;
		for (const e of data.entities.values()) {
			if (!e.state) continue;
			const ex = e.state.readFloatLE(0x04), ey = e.state.readFloatLE(0x08), ez = e.state.readFloatLE(0x0c);
			for (let i = 0; i + 6 <= f.playerState.length; i++) {
				if (f.playerState.readInt16LE(i) !== Math.round(ex * 8)) continue;
				if (f.playerState.readInt16LE(i + 2) !== Math.round(ey * 8)) continue;
				if (f.playerState.readInt16LE(i + 4) !== Math.round(ez * 8)) continue;
				self = e;
			}
			if (self) break;
		}
		if (shown++ > 3) return;
		console.log("frame " + f.number + " mask 0x" + (st.mask >>> 0).toString(16) +
			" statMask 0x" + (st.statMask >>> 0).toString(16) +
			" consumed " + st.consumed + "/" + f.playerState.length);
		console.log("   the block: " + Array.from(f.playerState).map(x => x.toString(16).padStart(2, "0")).join(" "));
		console.log("   decoded origin " + JSON.stringify(st.origin) +
			"  viewAngles " + JSON.stringify(st.viewAngles));
		if (self) {
			const s = self.state;
			console.log("   entity #" + self.number + " origin (" + s.readFloatLE(0x04).toFixed(1) + "," +
				s.readFloatLE(0x08).toFixed(1) + "," + s.readFloatLE(0x0c).toFixed(1) + ")");
		} else {
			console.log("   no entity matched");
		}
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 14000);
