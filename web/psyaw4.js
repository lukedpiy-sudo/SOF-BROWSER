/*
 * psyaw4.js - find the usercmd's view angle fields and their units.
 *
 * The game module's ClientThink reads two floats at the usercmd offsets
 * +0x10 and +0x14.  This sweeps the value at +0x14 and prints the view
 * angles that the server sends back, so the unit can be identified.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

const VALS = [0, 45, 90, 180, 270, 360, 720, -90];
let step = 0, tStep = 0;
let val = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	cmdPatch: function (cmd) {
		cmd.writeFloatLE(0, 0x10);
		cmd.writeFloatLE(val, 0x14);
	},
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		if (step >= VALS.length) return;
		if (Date.now() - tStep < 1100) return;
		tStep = Date.now();
		val = VALS[step++];
		console.log("wrote " + val + " at +0x14 -> the server says " + JSON.stringify(st.viewAngles));
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 2000 + VALS.length * 1100);
