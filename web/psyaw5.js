/*
 * psyaw5.js - verify that the view direction is now under our control.
 *
 * The client writes the view angles as binary angles (65536 = 360 deg) into
 * the usercmd fields +0x04 (pitch), +0x06 (yaw) and +0x08 (roll).  This walks
 * forward with four different yaws and reports the world direction the
 * player actually moved, so the yaw convention can be confirmed.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

const YAWS = [0, 90, 180, 270];
let step = 0, phase = 0, startPos = null, startT = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		if (!st.origin) return;

		if (phase === 0) {
			client.view.yaw = YAWS[step % YAWS.length];
			client.view.pitch = 0;
			setTimeout(() => {
				startPos = st.origin.slice();
				startT = Date.now();
				phase = 1;
				client.setKey("KeyW", true);
			}, 400);
			return;
		}
		if (phase === 1) {
			if (Date.now() - startT < 1600) return;
			phase = 0;
			client.setKey("KeyW", false);
			const dx = st.origin[0] - startPos[0];
			const dy = st.origin[1] - startPos[1];
			const moved = Math.hypot(dx, dy);
			const actual = ((Math.atan2(dy, dx) * 180 / Math.PI) + 360) % 360;
			console.log("yaw " + YAWS[step % YAWS.length] + " -> moved " + moved.toFixed(1) +
				" units, world direction " + actual.toFixed(1) + " deg   (server view " +
				JSON.stringify(st.viewAngles) + ")");
			step++;
			if (step >= YAWS.length) {
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
