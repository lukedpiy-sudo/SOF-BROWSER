/*
 * pswalk.js - can the player walk to a point?
 *
 * The player now turns (the view angles reach the server), so this checks
 * whether the movement actually converges on a target: it steers towards a
 * point and prints the distance every second.
 */
"use strict";
const dgram = require("dgram");
const fs = require("fs");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
const ents = JSON.parse(fs.readFileSync("www/map_entities.json", "utf8"));
const weapons = ents.filter(e => /^item_weapon_/.test(e.classname) && e.origin);

let pos = null, target = null, lastLog = 0, t0 = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		if (!st.origin) return;
		pos = st.origin;
		if (!target) {
			/* pick the nearest weapon once the position is known */
			let best = null, bd = 1e9;
			for (const w of weapons) {
				const d = Math.hypot(w.origin[0] - pos[0], w.origin[1] - pos[1]);
				if (d < bd) { bd = d; best = w; }
			}
			if (best) {
				target = best.origin;
				t0 = Date.now();
				console.log("target " + best.classname + " at " + target.join(",") + " dist " + bd.toFixed(0));
			}
			return;
		}
		const dx = target[0] - pos[0], dy = target[1] - pos[1];
		const d = Math.hypot(dx, dy);
		client.view.yaw = ((Math.atan2(dy, dx) * 180 / Math.PI) + 90 + 360) % 360;
		client.view.pitch = 0;
		client.setKey("KeyW", true);
		if (Date.now() - lastLog > 1000) {
			lastLog = Date.now();
			console.log("t=" + ((Date.now() - t0) / 1000).toFixed(1) + "s pos=(" +
				pos[0].toFixed(0) + "," + pos[1].toFixed(0) + "," + pos[2].toFixed(0) + ") dist=" + d.toFixed(0) +
				" yaw=" + client.view.yaw.toFixed(0));
		}
		if (d < 30) {
			console.log("--- reached the target");
			process.exit(0);
		}
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout, pos=" + JSON.stringify(pos)); process.exit(0); }, 30000);
