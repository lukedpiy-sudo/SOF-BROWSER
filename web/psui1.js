/*
 * psui1.js - connect with ONE userinfo string and print the state.
 *
 * usage: node psui1.js <host> <port> "<userinfo>"
 * The userinfo is compared against the default to see whether the
 * "spectator" key makes the server treat the client as a spectator.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState, hudFromState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const userinfo = process.argv[4];
const sock = dgram.createSocket("udp4");
let last = null, n = 0;

const client = createClient({
	userinfo: userinfo,
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		const h = hudFromState(st);
		const s = JSON.stringify(st.stats) + " viewMode=" + st.viewMode;
		if (s !== last) { console.log("  " + s + "  hp=" + h.health + " ammo=" + h.ammo + "/" + h.ammo2 + " carried=" + h.carried); last = s; }
		n++;
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("  frames=" + n); process.exit(0); }, 5000);
