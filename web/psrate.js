/*
 * psrate.js - does the player state go empty because of what we send?
 *
 * phase 1: no user commands at all (only the keep alive packets)
 * phase 2: user commands at 60 Hz
 * phase 3: user commands at 20 Hz
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let phase = 0, t0 = Date.now(), lastMask = null, client = null, lastSend = 0;
const PHASES = [
	{ name: "no usercmds", rate: 0 },
	{ name: "usercmds 60Hz", rate: 16 },
	{ name: "usercmds 20Hz", rate: 50 }
];

function go() {
	if (phase >= PHASES.length) {
		console.log("--- done");
		process.exit(0);
		return;
	}
	const p = PHASES[phase];
	console.log("=== phase " + phase + ": " + p.name);
	lastMask = null;
	t0 = Date.now();
	phase++;
	setTimeout(go, 20000);
}

client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		if (st.mask === lastMask) return;
		lastMask = st.mask;
		console.log("  [" + ((Date.now() - t0) / 1000).toFixed(1) + "s] mapTime=" + f.time.toFixed(1) +
			" frame#" + f.number + " mask=0x" + st.mask.toString(16) + " psLen=" + f.playerState.length);
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); setTimeout(go, 8000); });
setInterval(() => {
	const p = PHASES[phase - 1];
	if (!p || !p.rate) return;
	if (!client.spawnDone) return;
	const now = Date.now();
	if (now - lastSend < p.rate) return;
	lastSend = now;
	client.sendUserCmd();
}, 5);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 90000);
