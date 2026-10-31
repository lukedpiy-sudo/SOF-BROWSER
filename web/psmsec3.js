/*
 * psmsec3.js - how long does the server keep sending the player state for a
 * given msec value?
 *
 * The engine keeps a per-client msec budget (cl+0x220) and drops a command
 * whose msec makes the budget go negative.  The three commands of one message
 * have to add up to the real time between two messages, so with a 50 ms
 * message interval msec must be about 16.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const msec = parseInt(process.argv[4] || "16", 10);
const interval = parseInt(process.argv[5] || "50", 10);
const sock = dgram.createSocket("udp4");
let t0 = Date.now(), lastMask = null, alive = 0, spawned = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	cmdPatchRing: (cmd) => { cmd[0] = msec; },
	onEvent: (name, data) => {
		if (name === "spawned") { spawned = Date.now(); return; }
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		if (st.mask !== lastMask) {
			lastMask = st.mask;
			if (st.mask !== 0) alive = Date.now();
		}
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); alive = Date.now(); });
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, interval);
setTimeout(() => {
	console.log("msec=" + msec + " interval=" + interval + "ms: the player state stayed alive for " +
		((alive - spawned) / 1000).toFixed(1) + " s after the spawn");
	process.exit(0);
}, 15000);
