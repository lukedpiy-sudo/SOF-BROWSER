/*
 * psfire.js - does the attack button actually fire, and does the ammo count
 * come down?
 *
 * The client state block carries the ammo in stats[2] (the magazine) and
 * stats[3] (the reserve).  If the attack button works, the magazine count
 * must go down.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState, hudFromState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let phase = 0, t0 = 0;
let lastHud = null;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		const h = hudFromState(st);
		lastHud = h;
		const line = "stats=" + JSON.stringify(st.stats);

		if (phase === 0) {
			/* wait for the first frame, then start firing */
			phase = 1;
			t0 = Date.now();
			console.log("baseline: " + line);
			setTimeout(() => {
				console.log("--- pressing the attack button (0x01) for 2 s");
				client.setKey("Mouse0", true);
			}, 500);
			return;
		}
		if (phase === 1) {
			if (Date.now() - t0 < 2800) return;
			phase = 2;
			client.setKey("Mouse0", false);
			console.log("after firing: " + line);
			const b = lastHud;
			console.log("health=" + b.health + " ammo=" + b.ammo + " ammo2=" + b.ammo2 + " carried=" + b.carried);
			process.exit(0);
		}
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout, last: " + JSON.stringify(lastHud)); process.exit(0); }, 15000);
