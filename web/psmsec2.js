/*
 * psmsec2.js - which msec value keeps the server happy?
 *
 * The engine keeps a per-client msec budget and drops a command whose msec
 * makes the budget go negative.  The three commands of one message have to
 * add up to the real time between two messages.  This measures how long the
 * server keeps sending us a real player state for each msec value.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
const MSECS = [4, 8, 12, 16, 20, 33];
let phase = 0, cur = MSECS[0], t0 = Date.now(), lastMask = null, alive = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	cmdPatchRing: (cmd) => { cmd[0] = cur; },
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
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });

setInterval(() => {
	if (client.spawnDone) client.sendUserCmd();
}, 50);

setTimeout(() => {
	/* phase over: report how long the state stayed alive */
	const life = ((alive - t0) / 1000).toFixed(1);
	console.log("msec=" + cur + "  the player state stayed alive for " + life + " s of the 12 s phase");
	phase++;
	if (phase >= MSECS.length) { console.log("--- done"); process.exit(0); }
	cur = MSECS[phase];
	lastMask = null;
	t0 = Date.now();
	alive = Date.now();
}, 12000);
