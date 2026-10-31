/*
 * psyaw.js - where does the server read the view angles from?
 *
 * The game module's ClientThink reads the view angles as two FLOATS at the
 * usercmd offsets +0x10 and +0x14, while the browser client writes the
 * pitch/yaw as shorts at +0x04/+0x06.  This sends different yaw values and
 * prints the authoritative view angles (from the player state block) so the
 * correct usercmd offset can be found.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

const YAWS = [0, 45, 90, 180, 270, 0];
let step = 0, tStep = 0, seen = [];

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		if (step >= YAWS.length) return;
		if (Date.now() - tStep < 1200) return;
		tStep = Date.now();
		const yaw = YAWS[step++];
		/* the client writes the yaw as a short at +6 */
		client.view.yaw = yaw;
		seen.push({ yaw, viewAngles: st.viewAngles, origin: st.origin });
		console.log("sent yaw " + yaw + "  -> the server says " + JSON.stringify(st.viewAngles) +
			"  origin " + JSON.stringify(st.origin));
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => {
	console.log("summary:");
	for (const s of seen) console.log("  " + s.yaw + " -> " + JSON.stringify(s.viewAngles));
	process.exit(0);
}, 2000 + YAWS.length * 1200);
