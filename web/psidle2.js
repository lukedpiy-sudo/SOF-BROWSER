/*
 * psidle2.js - two connections in a row: does the player state go empty at a
 * fixed MAP time or a fixed time after the connection?
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let round = 0, t0 = 0, lastMask = null, client = null, spawned = false;

function startRound() {
	round++;
	console.log("=== round " + round);
	lastMask = null;
	spawned = false;
	t0 = Date.now();
	client = createClient({
		send: (buf) => sock.send(buf, port, host),
		onEvent: (name, data) => {
			if (name !== "frame") return;
			const f = data.frame;
			if (!f.playerState) return;
			const st = decodePlayerState(f.playerState, 0);
			if (st.mask === lastMask) return;
			lastMask = st.mask;
			console.log("  [" + ((Date.now() - t0) / 1000).toFixed(1) + "s] mapTime=" +
				f.time.toFixed(1) + " frame#" + f.number + " mask=0x" + st.mask.toString(16) +
				" psLen=" + f.playerState.length);
			if (st.mask === 0) {
				setTimeout(() => { if (round < 2) startRound(); else { console.log("--- done"); process.exit(0); } }, 12000);
			}
		}
	});
	client.start();
}

sock.on("message", (msg) => { if (client) client.onDatagram(msg); });
sock.bind(0, "0.0.0.0", () => startRound());
let cur = null;
const tick = setInterval(() => { if (client && client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 120000);
