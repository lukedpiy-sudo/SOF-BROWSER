/*
 * psdiff.js - which bytes of the player state block change when the view
 * angles change?
 *
 * The view angles may not be in the block at all, and the server may be
 * reading them from a different place in the usercmd.  This diffs the whole
 * block between two different pitches and prints the changed offsets, so the
 * field that carries the view direction can be found.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

let phase = 0, base = null, baseRaw = null;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const ps = f.playerState;
		if (phase === 0) {
			base = Buffer.from(ps);
			baseRaw = Buffer.from(ps);
			phase = 1;
			/* a distinctive pitch */
			client.view.pitch = 45;
			setTimeout(() => { phase = 2; }, 1500);
			return;
		}
		if (phase === 2) {
			const changed = [];
			for (let i = 0; i < Math.min(base.length, ps.length); i++) {
				if (base[i] !== ps[i]) changed.push(i);
			}
			console.log("the block length changed: " + base.length + " -> " + ps.length);
			console.log("changed byte offsets: " + (changed.join(",") || "(none)"));
			if (changed.length) {
				for (const i of changed) {
					console.log("  +" + i + ": " + base[i] + " -> " + ps[i]);
				}
			}
			console.log("base: " + Array.from(base).map(x => x.toString(16).padStart(2, "0")).join(" "));
			console.log("now : " + Array.from(ps).map(x => x.toString(16).padStart(2, "0")).join(" "));
			process.exit(0);
		}
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 10000);
