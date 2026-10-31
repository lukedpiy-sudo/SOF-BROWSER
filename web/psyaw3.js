/*
 * psyaw3.js - where does the server read the view angles from?
 *
 * The game module's ClientThink reads two FLOATS at the usercmd offsets
 * +0x10 and +0x14 (0x500F5A5A and 0x500F5A76).  The browser client writes
 * the pitch and the yaw as shorts at +0x04/+0x06, so the server has always
 * seen a view angle of 0 and the player always walks in the same direction.
 *
 * The decisive test: walk forward with a known yaw and compare the
 * direction the player actually moves with the direction that yaw implies.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

/* the yaw to test, and where to put the floats */
const MODE = process.argv[4] || "float";     /* float | short */
const YAWS = [0, 90, 180, 270];
let step = 0, tStep = 0;
let yawNow = 0, phase = 0, startPos = null, startT = 0;
let results = [];

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	cmdPatch: function (cmd) {
		if (MODE === "float") {
			/* the pitch and the yaw as floats at +0x10 and +0x14 */
			cmd.writeFloatLE(0, 0x10);
			cmd.writeFloatLE(yawNow, 0x14);
		} else {
			/* the old layout: shorts at +0x04/+0x06 */
			cmd.writeUInt16LE(((yawNow * 16) & 0xffff), 6);
		}
	},
	onEvent: (name, data) => {
		if (name === "frameError") { console.log("frameError: " + (data && data.message ? data.message : data)); return; }
		if (name !== "frame") { console.log("event " + name); return; }
		const f = data.frame;
		if (!f.playerState) { console.log("no player state"); return; }
		const st = decodePlayerState(f.playerState, 0);
		if (!st.origin) { console.log("no origin in the block (mask 0x" + st.mask.toString(16) + ")"); return; }

		if (phase === 0) {
			/* wait for the player to settle, then start walking */
			if (Date.now() - tStep < 1200) return;
			tStep = Date.now();
			phase = 1;
			startPos = st.origin.slice();
			startT = Date.now();
			client.setKey("KeyW", true);
			return;
		}
		if (phase === 1) {
			if (Date.now() - startT < 1500) return;
			phase = 0;
			client.setKey("KeyW", false);
			const dx = st.origin[0] - startPos[0];
			const dy = st.origin[1] - startPos[1];
			const moved = Math.hypot(dx, dy);
			/* SoF is Z up: the yaw is measured around Z from the +X axis. */
			const actual = ((Math.atan2(dy, dx) * 180 / Math.PI) + 360) % 360;
			console.log("yaw " + yawNow + " -> moved " + moved.toFixed(1) + " units, direction " +
				actual.toFixed(1) + " deg (expected " + yawNow + ")");
			results.push({ yaw: yawNow, moved, actual });
			step++;
			yawNow = YAWS[step % YAWS.length];
			tStep = Date.now();
			if (step >= YAWS.length + 1) {
				console.log("--- done");
				process.exit(0);
			}
		}
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 20000);
