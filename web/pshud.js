/* pshud.js - check the player state decoder against a live server. */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let n = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (n++ % 25) return;
		const st = f.playerStateDecoded;
		if (!st) { console.log("frame " + f.number + ": no decoded state"); return; }
		console.log("frame " + f.number + " mask 0x" + (st.mask >>> 0).toString(16) +
			" statMask 0x" + (st.statMask >>> 0).toString(16) +
			" consumed " + st.consumed + " of " + (f.playerState ? f.playerState.length : 0));
		console.log("   origin  " + JSON.stringify(st.origin) +
			"  velocity " + JSON.stringify(st.velocity) +
			"  viewAngles " + JSON.stringify(st.viewAngles));
		console.log("   stats   " + JSON.stringify(st.stats));
		console.log("   hud     " + JSON.stringify(f.hud));
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 14000);
