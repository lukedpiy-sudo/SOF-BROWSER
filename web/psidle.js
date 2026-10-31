/*
 * psidle.js - does the server empty our player state on its own?
 *
 * Watch the player state for 40 s without doing anything, then ask the
 * server who is connected.  If the state goes empty while we are idle, the
 * server is dropping/timing out the client.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState, hudFromState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let t0 = Date.now(), lastMask = null, frames = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		frames++;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		if (st.mask !== lastMask) {
			lastMask = st.mask;
			console.log("[" + ((Date.now() - t0) / 1000).toFixed(1) + "s] frame#" + f.number +
				" t=" + f.time.toFixed(1) + " mask=0x" + st.mask.toString(16) +
				" psLen=" + f.playerState.length + " ents=" + client.entities.size +
				" hp=" + hudFromState(st).health + " ammo=" + hudFromState(st).ammo);
		}
	}
});
sock.on("message", (msg) => {
	const body = msg.slice(8);
	for (let p = 0; p + 2 < body.length; p++) {
		if (body[p] !== 0x02) continue;
		const len = body[p + 1];
		if (len === 0 || p + 2 + len > body.length) continue;
		const text = body.toString("latin1", p + 2, p + 2 + len);
		if (!/^[ -~\r\n\t]+$/.test(text)) continue;
		console.log("  PRINT: " + JSON.stringify(text));
	}
	client.onDatagram(msg);
});
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => {
	console.log("[" + ((Date.now() - t0) / 1000).toFixed(1) + "s] asking the server who is here");
	client.sendStringCmd("players");
	setTimeout(() => { console.log("--- done, frames=" + frames); process.exit(0); }, 2000);
}, 40000);
