/*
 * psorder.js - which of the three commands does the server actually use?
 *
 * The engine decodes three commands per movement message and the stock
 * client writes them with the baseline chain [zero, cmd1, cmd2].  This gives
 * each of the three commands a DIFFERENT yaw and reads the authoritative
 * view angles back, so the ordering the server uses is measured rather than
 * assumed.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

/* the three yaws, in the order we write them */
const YAWS = [0, 9000, 18000];   /* 0, 45 and 90 degrees in binary angles */
let seen = null, n = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	cmdPatchRing: function (cmd, i) {
		cmd.writeUInt16LE(YAWS[i % 3], 6);      /* the yaw */
	},
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		if (!st.viewAngles) return;
		const s = JSON.stringify(st.viewAngles);
		if (s === seen) return;
		seen = s;
		console.log("the server reports the view angles " + s +
			"   (we wrote " + YAWS.join(", ") + " = 0/45/90 deg)");
		if (++n >= 3) process.exit(0);
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 15000);
