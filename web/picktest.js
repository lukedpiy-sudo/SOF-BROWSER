/* picktest.js - walk to a weapon pickup and try to use it.
 *
 * The map's entity list (lump 0) gives the pickup positions.  The client
 * steers towards the nearest weapon and then holds the attack/use button; the
 * player state block is watched for a change (a picked up weapon changes the
 * ammo/weapon stats).
 */
"use strict";
const dgram = require("dgram");
const fs = require("fs");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.00.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

const ents = JSON.parse(fs.readFileSync("www/map_entities.json", "utf8"));
const weapons = ents.filter(e => /^item_weapon_/.test(e.classname) && e.origin);

let phase = 0, tPhase = 0, target = null, lastPs = null, pos = null;

function findSelf(data, ps) {
	for (const e of data.entities.values()) {
		if (!e.state) continue;
		const ex = e.state.readFloatLE(0x04), ey = e.state.readFloatLE(0x08);
		for (let i = 0; i + 6 <= ps.length; i++) {
			if (ps.readInt16LE(i) !== Math.round(ex * 8)) continue;
			if (ps.readInt16LE(i + 2) !== Math.round(ey * 8)) continue;
			if (ps.readInt16LE(i + 4) !== Math.round(e.state.readFloatLE(0x0c) * 8)) continue;
			return e;
		}
	}
	return null;
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const ps = data.frame.playerState;
		if (!ps) return;
		const self = findSelf(data, ps);
		if (!self) return;
		pos = [self.state.readFloatLE(0x04), self.state.readFloatLE(0x08)];

		/* steer */
		if (phase === 1 && target) {
			const dx = target.origin[0] - pos[0], dy = target.origin[1] - pos[1];
			const d = Math.hypot(dx, dy);
			if (d < 50) {
				phase = 2;
				client.setKey("KeyW", false);
				console.log("--- reached the pickup (" + d.toFixed(1) + "), pressing the button");
				setTimeout(() => { client.setKey("Mouse0", true); }, 300);
			} else {
				client.view.yaw = Math.atan2(dy, dx) * 180 / Math.PI;
				client.view.pitch = 0;
				client.setKey("KeyW", true);
			}
		}

		if (Date.now() - tPhase < 700) return;
		tPhase = Date.now();
		const changed = [];
		if (lastPs && lastPs.length === ps.length) {
			for (let i = 0; i < ps.length; i++) if (ps[i] !== lastPs[i]) changed.push(i);
		}
		lastPs = Buffer.from(ps);
		console.log("phase " + phase + " pos=(" + pos[0].toFixed(0) + "," + pos[1].toFixed(0) + ")" +
			" dist=" + (target ? Math.hypot(target.origin[0] - pos[0], target.origin[1] - pos[1]).toFixed(0) : "-") +
			" psLen=" + ps.length + (changed.length ? " changed:" + changed.join(",") : ""));
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);

setInterval(() => {
	if (!client.spawnDone || phase !== 0) return;
	/* pick the weapon closest to the spawn */
	let best = null, bestD = 1e9;
	for (const w of weapons) {
		if (!pos) continue;
		const d = Math.hypot(w.origin[0] - pos[0], w.origin[1] - pos[1]);
		if (d < bestD) { bestD = d; best = w; }
	}
	if (best) {
		target = best;
		phase = 1;
		tPhase = Date.now();
		console.log("target: " + target.classname + " at " + target.origin.join(",") + " (dist " + bestD.toFixed(0) + ")");
	}
}, 300);

setTimeout(() => { console.log("--- done"); process.exit(0); }, 30000);
