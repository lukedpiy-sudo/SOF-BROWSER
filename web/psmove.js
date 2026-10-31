/*
 * psmove.js - does the decoded player state track the real movement?
 *
 * The player state block is bit packed: a field that is not on the wire keeps
 * the base frame's value.  The engine's own copy is zeroed every frame, so a
 * field that is absent reads back as zero.  This watches the decoded origin
 * while the player walks, to see whether the decoder follows it.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let n = 0, lastOrigin = null;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		const o = JSON.stringify(st.origin);
		if (o !== lastOrigin) {
			console.log("origin " + o + "   mask=0x" + st.mask.toString(16) +
				"  view=" + JSON.stringify(st.viewAngles));
			lastOrigin = o;
			n++;
		}
		if (n > 12) {
			console.log("--- done");
			process.exit(0);
		}
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => {
	client.start();
	/* walk forward as soon as we are spawned */
	setTimeout(() => {
		client.view.yaw = 0;
		client.setKey("KeyW", true);
		console.log("walking");
	}, 3000);
});
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout, changes=" + n); process.exit(0); }, 20000);
