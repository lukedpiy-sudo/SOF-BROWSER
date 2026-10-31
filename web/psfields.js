/*
 * psfields.js - which part of the user command makes the server stop sending
 * the player state?
 *
 * The mode selects which fields of the command are filled in:
 *   zero    : only the msec
 *   angles  : the msec and the three view angles
 *   move    : the msec and the three movement fields
 *   full    : everything (the normal client)
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const mode = process.argv[4] || "full";
const sock = dgram.createSocket("udp4");
let t0 = Date.now(), lastMask = null, alive = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	cmdPatchRing: (cmd) => {
		if (mode === "zero") {
			cmd.fill(0, 4);
		} else if (mode === "angles") {
			cmd.fill(0, 0x0a);
		} else if (mode === "move") {
			cmd.fill(0, 4, 6);
			cmd.fill(0, 0x0a, 6);
		}
	},
	onEvent: (name, data) => {
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
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => {
	console.log("mode " + mode + ": the player state stayed alive for " +
		((alive - t0) / 1000).toFixed(1) + " s of the 12 s phase");
	process.exit(0);
}, 12000);
