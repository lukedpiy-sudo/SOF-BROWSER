/*
 * psrawframe.js - dump the raw frame payload when the player state changes.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let lastMask = null, n = 0, t0 = Date.now();

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		if (st.mask === lastMask) return;
		lastMask = st.mask;
		n++;
		console.log("=== mask 0x" + st.mask.toString(16) + " frame#" + f.number +
			" psStart=" + f.playerStateStart + " psEnd=" + f.playerStateEnd +
			" entityStart=" + f.entityStart + " rawLen=" + (f.rawFrame ? f.rawFrame.length : 0));
		if (f.rawFrame) {
			const a = Math.max(0, f.playerStateStart - 8);
			const b = Math.min(f.rawFrame.length, f.entityStart + 8);
			console.log("  frame hex [" + a + ".." + b + "]: " + f.rawFrame.slice(a, b).toString("hex"));
			console.log("  ps hex: " + f.playerState.toString("hex"));
		}
		if (n > 6) process.exit(0);
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 25000);
