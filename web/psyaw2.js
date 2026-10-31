/*
 * psyaw2.js - find the usercmd offset the server reads the view angles from.
 *
 * The game module's ClientThink reads the view angles as two FLOATS at the
 * usercmd offsets +0x10 and +0x14, but the browser client writes the
 * pitch/yaw as shorts at +0x04/+0x06.  This patches the usercmd with floats
 * at every candidate offset and reports which one makes the server's
 * authoritative view angles change.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

/* [offset, label] pairs to try */
const CANDIDATES = [
	[0x10, "float@0x10"],
	[0x14, "float@0x14"],
	[0x04, "float@0x04"],
	[0x08, "float@0x08"],
	[0x0a, "float@0x0a"]
];
let step = 0, tStep = 0, last = null;
let cur = { off: 0x10, val: 0 };

function patch(cmd) {
	/* write the two floats (pitch, yaw) at the candidate offset */
	cmd.writeFloatLE(0, cur.off);
	cmd.writeFloatLE(cur.val, cur.off + 4);
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	cmdPatch: patch,
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		if (step >= CANDIDATES.length) return;
		if (Date.now() - tStep < 1200) return;
		tStep = Date.now();
		const c = CANDIDATES[step++];
		cur = { off: c[0], val: 33 };
		const a = st.viewAngles;
		const changed = last && a && last.join(",") !== a.join(",");
		console.log(c[1] + " value 33 -> the server says " + JSON.stringify(a) + (changed ? "  CHANGED" : ""));
		last = a ? a.slice() : null;
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 2000 + CANDIDATES.length * 1200);
