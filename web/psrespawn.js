/*
 * psrespawn.js - when the player state goes empty, does the "respawn"
 * command bring it back?
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState, hudFromState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let lastMask = null, t0 = Date.now(), respawned = false, sent = false;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		if (st.mask === lastMask) return;
		lastMask = st.mask;
		console.log("[" + ((Date.now() - t0) / 1000).toFixed(1) + "s] mask=0x" + st.mask.toString(16) +
			" stats=" + JSON.stringify(st.stats) + " hp=" + hudFromState(st).health);
		if (st.mask === 0 && !sent) {
			sent = true;
			console.log("  the state went empty -> sending \"respawn\"");
			client.sendStringCmd("respawn");
			setTimeout(() => {
				if (!respawned) { console.log("  the state did NOT come back"); process.exit(0); }
			}, 4000);
		}
		if (st.mask !== 0 && sent && !respawned) {
			respawned = true;
			console.log("  the state came back after the respawn command");
		}
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 40000);
