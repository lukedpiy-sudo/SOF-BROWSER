/*
 * psmode.js - which user command message framing keeps the connection alive?
 *
 * The server stops sending the player state a few seconds after the user
 * commands start.  The candidates: the user command is sent as a reliable
 * message (filling the server's reliable queue) and/or the checksum byte is
 * wrong.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
const MODES = [process.argv[4] || "rel"];
let phase = 0, client = null, t0 = Date.now(), lastMask = null, alive = 0;

function startMode() {
	if (phase >= MODES.length) { console.log("--- done"); process.exit(0); }
	const mode = MODES[phase];
	console.log("=== mode " + mode);
	lastMask = null;
	t0 = Date.now();
	alive = Date.now();
	client = createClient({
		moveMode: mode,
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
		}
	});
	client.start();
}

sock.on("message", (msg) => { if (client) client.onDatagram(msg); });
sock.bind(0, "0.0.0.0", () => startMode());
setInterval(() => { if (client && client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => {
	const life = ((alive - t0) / 1000).toFixed(1);
	console.log("mode " + MODES[phase] + ": the player state stayed alive for " + life + " s");
	phase++;
	setTimeout(startMode, 1500);
}, 14000);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 120000);
