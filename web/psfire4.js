/*
 * psfire4.js - what happens when the attack is pressed?  Watch the raw player
 * state block, the frame number, the entity count and any server command.
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
		if (f.command) console.log("[" + frames + "] frame command: " + JSON.stringify(f.command));
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		const h = hudFromState(st);
		const key = "m=" + st.mask + " s=" + JSON.stringify(st.stats);
		if (key !== lastKey) {
			console.log("[" + frames + "] frame#" + f.number + " t=" + f.time.toFixed(2) +
				" ents=" + client.entities.size + " psLen=" + f.playerState.length +
				" mask=0x" + st.mask.toString(16) +
				" stats=" + JSON.stringify(st.stats) +
				" hp=" + h.health + " ammo=" + h.ammo + "/" + h.ammo2 + " carried=" + h.carried +
				" item=" + h.item + " dead=" + h.dead);
			console.log("      ps hex: " + f.playerState.toString("hex"));
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
			if (now - t0 < 4000) return;
			client.setKey("Mouse0", false);
			phase = 2; t0 = now;
			console.log("--- released");
			return;
		}
		if (phase === 2 && now - t0 > 4000) {
			console.log("--- final: asking the server who is here");
			client.sendStringCmd("players");
			setTimeout(() => { console.log("--- done"); process.exit(0); }, 1500);
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
setTimeout(() => { console.log("--- timeout frames=" + frames); process.exit(0); }, 25000);
