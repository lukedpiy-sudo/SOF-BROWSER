/*
 * pspick.js - walk to a weapon pickup and pick it up.
 *
 * The game module's USE handler (FUN_500F5E50) fires on the RELEASE edge: it
 * requires the previous frame's buttons to have had the use bit and the
 * current frame not to have it.  So the button has to be pressed for one
 * command and then released.
 *
 * The pickup trace starts at the eye and goes along the view angles, so the
 * player has to look down at the item.
 */
"use strict";
const dgram = require("dgram");
const fs = require("fs");
const { createClient } = require("./sofproto.js");
const { decodePlayerState, hudFromState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

const ents = JSON.parse(fs.readFileSync("www/map_entities.json", "utf8"));
const weapons = ents.filter(e => /^item_weapon_/.test(e.classname) && e.origin);

let phase = 0, target = null, lastStats = null, pos = null;
let tapAt = 0, tapState = 0, lastLog = 0;

/* the yaw that makes the player walk towards (dx, dy) */
function yawTowards(dx, dy) {
	return ((Math.atan2(dy, dx) * 180 / Math.PI) + 90 + 360) % 360;
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		const h = hudFromState(st);
		const s = JSON.stringify(st.stats);
		if (s !== lastStats) {
			console.log("  STATS " + s + "  hp=" + h.health + " ammo=" + h.ammo + "/" + h.ammo2 +
				" carried=" + h.carried + " dead=" + h.dead);
			lastStats = s;
		}
		if (!st.origin) return;
		pos = st.origin;

		/* pick a target as soon as the position is known */
		if (phase === 0) {
			let best = null, bd = 1e9;
			for (const w of weapons) {
				const d = Math.hypot(w.origin[0] - pos[0], w.origin[1] - pos[1]);
				if (d < bd) { bd = d; best = w; }
			}
			if (!best) return;
			target = best;
			phase = 1;
			console.log("target " + target.classname + " at " + target.origin.join(",") + " dist " + bd.toFixed(0));
			return;
		}

		const dx = target.origin[0] - pos[0], dy = target.origin[1] - pos[1];
		const d = Math.hypot(dx, dy);

		if (phase === 1) {
			client.view.yaw = yawTowards(dx, dy);
			client.view.pitch = 0;
			client.setKey("KeyW", true);
			if (Date.now() - lastLog > 1000) {
				lastLog = Date.now();
				console.log("  walking, dist " + d.toFixed(0) + " pos=" +
					pos.map(v => v.toFixed(0)).join(","));
			}
			if (d < 45) {
				phase = 2;
				client.setKey("KeyW", false);
				console.log("--- reached the pickup (d=" + d.toFixed(1) + "), aiming and tapping use");
				tapAt = Date.now() + 500;
			}
			return;
		}

		if (phase === 2) {
			/* aim at the item */
			client.view.yaw = yawTowards(dx, dy);
			const eye = pos[2] + 56;                /* the eye height */
			const dz = (target.origin[2] !== undefined ? target.origin[2] : 0) - eye;
			client.view.pitch = Math.max(-80, Math.min(80, Math.atan2(dz, Math.max(1, d)) * 180 / Math.PI));
			/* the use button: press for one command, then release */
			const now = Date.now();
			if (tapState === 0 && now >= tapAt) {
				client.setKey("KeyE", true);
				tapState = 1;
				tapAt = now + 120;
				console.log("  (use pressed)");
			} else if (tapState === 1 && now >= tapAt) {
				client.setKey("KeyE", false);
				tapState = 2;
				tapAt = now + 400;
				console.log("  (use released)");
			} else if (tapState === 2 && now >= tapAt) {
				tapState = 0;                       /* tap again */
			}
		}
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 40000);
