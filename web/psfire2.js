/*
 * psfire2.js - with the msec fixed at 16 ms per command, does the attack
 * button reach the game module?
 *
 * The engine drops a command whose msec overdraws the per-client budget, and
 * the buttons live in the command that is dropped last, so the attack used to
 * be invisible.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState, hudFromState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

let phase = 0, t0 = Date.now(), lastStats = null, lastOrigin = null, frames = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		frames++;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		const h = hudFromState(st);
		const s = JSON.stringify(st.stats);
		if (s !== lastStats) {
			console.log("[" + frames + "] STATS " + s + "  hp=" + h.health + " armor=" + h.armor +
				" ammo=" + h.ammo + "/" + h.ammo2 + " carried=" + h.carried + " item=" + h.item +
				" dead=" + h.dead);
			lastStats = s;
		}
		const now = Date.now();
		if (phase === 0) {
			if (now - t0 < 3000) return;
			phase = 1; t0 = now;
			console.log("--- holding ATTACK (0x01) for 4 s");
			client.setKey("Mouse0", true);
			return;
		}
		if (phase === 1) {
			if (now - t0 < 4000) return;
			client.setKey("Mouse0", false);
			phase = 2; t0 = now;
			console.log("--- released; now holding USE (0x02) for 2 s");
			client.setKey("KeyE", true);
			return;
		}
		if (phase === 2) {
			if (now - t0 < 2000) return;
			client.setKey("KeyE", false);
			phase = 3; t0 = now;
			console.log("--- done");
			process.exit(0);
		}
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout frames=" + frames); process.exit(0); }, 20000);
