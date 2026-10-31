/*
 * psprobe.js - one connection: print the player state, then try to fire.
 *
 * usage: node psprobe.js <host> <port> "<userinfo>"
 *
 * It answers three questions at once:
 *   - does the userinfo's "spectator" key change the authoritative state?
 *   - does the attack button change the stats (does the weapon fire)?
 *   - does the use button change the stats (does an item get picked up)?
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState, hudFromState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const userinfo = process.argv[4] || undefined;
const sock = dgram.createSocket("udp4");
let phase = 0, t0 = 0, last = null;

const client = createClient({
	userinfo: userinfo,
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		const h = hudFromState(st);
		const s = JSON.stringify(st.stats);
		if (s !== last) {
			console.log("  STATS " + s + "  hp=" + h.health + " armor=" + h.armor +
				" ammo=" + h.ammo + "/" + h.ammo2 + " carried=" + h.carried +
				" dead=" + h.dead + " viewMode=" + st.viewMode);
			last = s;
		}
		const now = Date.now();
		if (phase === 0 && now - t0 > 1500) {
			phase = 1;
			t0 = now;
			console.log("--- pressing the attack button for 2 s");
			client.setKey("Mouse0", true);
		} else if (phase === 1 && now - t0 > 2000) {
			phase = 2;
			t0 = now;
			client.setKey("Mouse0", false);
			console.log("--- tapping the use button");
			client.setKey("KeyE", true);
		} else if (phase === 2 && now - t0 > 200) {
			phase = 3;
			t0 = now;
			client.setKey("KeyE", false);
		} else if (phase === 3 && now - t0 > 2000) {
			console.log("--- done");
			process.exit(0);
		}
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 15000);
