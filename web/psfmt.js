/*
 * psfmt.js - which type 2 message layout keeps the server sending us the
 * player state?
 *
 * The engine's command dispatch accepts a prefix of 0, 2, 4, 8 or 10 bytes
 * before the command char, so the user command message has to use one of
 * those layouts.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const fmt = process.argv[4] || "ck_seq";
const sock = dgram.createSocket("udp4");
let t0 = Date.now(), lastMask = null, alive = 0, firstOrigin = null, lastOrigin = null;

const client = createClient({
	moveFmt: fmt,
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		if (st.mask !== lastMask) {
			lastMask = st.mask;
			if (st.mask !== 0) alive = Date.now();
		}
		if (st.origin) {
			if (!firstOrigin) firstOrigin = st.origin;
			lastOrigin = st.origin;
		}
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); alive = Date.now(); });
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => {
	const d = (firstOrigin && lastOrigin)
		? Math.hypot(lastOrigin[0] - firstOrigin[0], lastOrigin[1] - firstOrigin[1]).toFixed(0)
		: "?";
	console.log("fmt=" + fmt + ": the player state stayed alive for " +
		((alive - t0) / 1000).toFixed(1) + " s of the 12 s phase, the player moved " + d + " units");
	process.exit(0);
}, 12000);
