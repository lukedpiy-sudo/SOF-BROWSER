/* pssolve2.js - locate the player state's fields empirically.
 *
 * The player state's origin must equal the local entity's origin, so the
 * block is searched for the three shorts that encode it.  The same block
 * also carries the stats, and the health is 100 on spawn, which gives a
 * second anchor.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let done = false;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame" || done) return;
		const f = data.frame;
		if (!f.playerState || f.playerState.length < 24) return;
		const b = f.playerState;

		/* the local entity: the one whose origin is a multiple of 1/8 and
		 * whose position is closest to the player state */
		let self = null, bestD = 1e9;
		for (const e of data.entities.values()) {
			if (!e.state) continue;
			const o = [e.state.readFloatLE(0x04), e.state.readFloatLE(0x08), e.state.readFloatLE(0x0c)];
			/* the player is the entity that is present in every frame and
			 * whose number is the lowest */
			if (!self) { self = e; }
		}
		if (!self) return;
		const o = [self.state.readFloatLE(0x04), self.state.readFloatLE(0x08), self.state.readFloatLE(0x0c)];
		const q = o.map(v => Math.round(v * 8));

		console.log("the block (" + b.length + " bytes): " +
			Array.from(b).map(x => x.toString(16).padStart(2, "0")).join(" "));
		console.log("entity #" + self.number + " origin " + o.map(x => x.toFixed(2)).join(",") +
			"  the shorts " + q.join(","));

		/* search for the three shorts, in every order and both endians */
		const orders = [[0, 1, 2], [1, 0, 2], [2, 1, 0], [0, 2, 1], [1, 2, 0], [2, 0, 1]];
		for (let off = 0; off + 6 <= b.length; off++) {
			for (const ord of orders) {
				for (const be of [true, false]) {
					const v = [];
					for (let k = 0; k < 3; k++) {
						const s = be ? b.readInt16BE(off + k * 2) : b.readInt16LE(off + k * 2);
						v.push(s);
					}
					let ok = true;
					for (let k = 0; k < 3; k++) if (v[ord[k]] !== q[k]) ok = false;
					if (ok) {
						console.log("MATCH at offset " + off + " order " + JSON.stringify(ord) +
							" endian " + (be ? "BE" : "LE") + "  values " + JSON.stringify(v));
					}
				}
			}
		}
		/* search for the health 100 as a stat */
		for (let off = 0; off + 2 <= b.length; off++) {
			if (b.readInt16BE(off) === 100 || b.readInt16LE(off) === 100) {
				console.log("the value 100 at offset " + off);
			}
		}
		done = true;
		process.exit(0);
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 14000);
