/*
 * psfire3.js - attack only, with the full player state detail.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState, hudFromState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

let phase = 0, t0 = Date.now(), lastKey = "", frames = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		frames++;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		const h = hudFromState(st);
		const key = "m=" + st.mask + " sm=" + st.statMask + " s=" + JSON.stringify(st.stats) +
			" o=" + (st.origin ? st.origin.map((v) => v.toFixed(0)).join(",") : "-");
		if (key !== lastKey) {
			console.log("[" + frames + "] mask=0x" + st.mask.toString(16) + " statMask=0x" +
				st.statMask.toString(16) + " stats=" + JSON.stringify(st.stats) +
				" origin=" + (st.origin ? st.origin.map((v) => v.toFixed(1)).join(",") : "-") +
				" hp=" + h.health + " ammo=" + h.ammo + "/" + h.ammo2 + " carried=" + h.carried +
				" item=" + h.item + " dead=" + h.dead);
			lastKey = key;
		}
		const now = Date.now();
		if (phase === 0) {
			if (now - t0 < 3000) return;
			phase = 1; t0 = now;
			console.log("--- ATTACK held");
			client.setKey("Mouse0", true);
			return;
		}
		if (phase === 1) {
			if (now - t0 < 5000) return;
			client.setKey("Mouse0", false);
			phase = 2; t0 = now;
			console.log("--- released");
			return;
		}
		if (phase === 2 && now - t0 > 3000) { console.log("--- done"); process.exit(0); }
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout frames=" + frames); process.exit(0); }, 25000);
