/*
 * psrecon.js - can the client recover by disconnecting and reconnecting?
 *
 * The server stops sending the player state a few seconds after the spawn (the
 * player disappears from the world), so the client has to leave and come back.
 * "disconnect" is an engine command, so it should free the slot.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let client = null, lastMask = null, phase = 0, t0 = Date.now();

function makeClient() {
	const c = createClient({
		send: (buf) => sock.send(buf, port, host),
		onEvent: (name, data) => {
			if (name === "spawned") { console.log("  spawned at +" + ((Date.now() - t0) / 1000).toFixed(1) + " s"); return; }
			if (name !== "frame") return;
			const f = data.frame;
			if (!f.playerState) return;
			const st = decodePlayerState(f.playerState, 0);
			if (st.mask === lastMask) return;
			lastMask = st.mask;
			console.log("  [" + ((Date.now() - t0) / 1000).toFixed(1) + "s] mask=0x" + st.mask.toString(16));
			if (st.mask === 0 && phase === 1) {
				phase = 2;
				console.log("  the state died -> disconnecting");
				c.sendStringCmd("disconnect");
				setTimeout(() => {
					console.log("  reconnecting");
					lastMask = null;
					phase = 1;
					client = makeClient();
					client.start();
				}, 1500);
			}
		}
	});
	return c;
}
sock.on("message", (msg) => { if (client) client.onDatagram(msg); });
sock.bind(0, "0.0.0.0", () => { client = makeClient(); client.start(); phase = 1; t0 = Date.now(); });
setInterval(() => { if (client && client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 60000);
