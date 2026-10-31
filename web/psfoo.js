/*
 * psfoo.js - connect, send user commands, then exit.  Used together with a
 * captured server console: the console shows what the server thinks of our
 * messages.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = "127.0.0.1";
const port = 29000;
const sock = dgram.createSocket("udp4");
let t0 = Date.now(), lastMask = null, frames = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name === "oob") { console.log("OOB: " + data.trim()); return; }
		if (name !== "frame") return;
		frames++;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		if (st.mask !== lastMask) {
			lastMask = st.mask;
			console.log("[" + ((Date.now() - t0) / 1000).toFixed(1) + "s] frame#" + f.number +
				" mask=0x" + st.mask.toString(16) + " psLen=" + f.playerState.length);
		}
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
console.log("waiting for the server to come up ...");
let connecting = false;
setInterval(() => {
	if (connecting || client.spawnDone) return;
	connecting = true;
	client.start();
	t0 = Date.now();
	setTimeout(() => { connecting = false; }, 1500);
}, 2000);
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("done, frames=" + frames); process.exit(0); }, 60000);
