/*
 * psbuttons.js - do the BUTTON bits reach the server?
 *
 * The game module doubles the forward/side/up movement when the run bit
 * (0x20) is set.  That is a clean, observable consequence of the buttons
 * byte, so it proves whether the buttons arrive without needing the weapon
 * to fire.
 *
 * The player walks in a gentle circle (the yaw turns continuously) so that it
 * never runs into a wall, and the speed is the path length over the time.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

const PHASES = [
	{ name: "walk", keys: ["KeyW"] },
	{ name: "walk + run (0x20)", keys: ["KeyW", "ShiftLeft"] },
	{ name: "walk + use (0x02)", keys: ["KeyW", "KeyE"] },
	{ name: "walk + attack (0x01)", keys: ["KeyW", "Mouse0"] },
	{ name: "walk only again", keys: ["KeyW"] }
];

let phase = 0, t0 = 0, lastPos = null, path = 0, yaw = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		if (!st.origin) return;
		const now = Date.now();
		if (phase === 0) {
			if (now - t0 < 1500) return;
			phase = 1;
			t0 = now;
			lastPos = st.origin.slice();
			path = 0;
			yaw = 0;
			client.setKey("KeyW", true);
			console.log("phase 0: walking in a circle");
			return;
		}
		if (phase > PHASES.length) return;
		/* the path length */
		if (lastPos) path += Math.hypot(st.origin[0] - lastPos[0], st.origin[1] - lastPos[1]);
		lastPos = st.origin.slice();
		/* turn gently so the player walks in a circle */
		yaw = (yaw + 0.9) % 360;
		client.view.yaw = yaw;
		client.view.pitch = 0;
		const elapsed = (now - t0) / 1000;
		if (elapsed >= 3.0) {
			console.log("phase " + phase + " (" + PHASES[phase - 1].name + "): path " +
				path.toFixed(0) + " units in " + elapsed.toFixed(1) + " s = " +
				(path / elapsed).toFixed(0) + " units/s");
			for (const k of ["KeyW", "ShiftLeft", "KeyE", "Mouse0"]) client.setKey(k, false);
			lastPos = st.origin.slice();
			path = 0;
			t0 = now;
			if (phase < PHASES.length) {
				phase++;
				for (const k of PHASES[phase - 1].keys) client.setKey(k, true);
			} else {
				console.log("--- done");
				process.exit(0);
			}
		}
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 30000);
