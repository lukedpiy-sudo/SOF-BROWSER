/*
 * pstouch.js - walk INTO a weapon.
 *
 * In the SoF game module the weapons are picked up by TOUCH (the item entity
 * has a touch callback) while the holdable items (c4, medkit, flashpack) are
 * picked up with the "use" button.  So the player has to run into the weapon,
 * not press a button.
 *
 * The stat that changes is the carried item / weapon id, so the stats are
 * printed whenever they change.
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

let target = null, lastStats = null, pos = null, lastLog = 0, phase = 0;

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
		client.view.yaw = yawTowards(dx, dy);
		client.view.pitch = 0;
		client.setKey("KeyW", true);       /* run into it */
		if (Date.now() - lastLog > 700) {
			lastLog = Date.now();
			console.log("  running, dist " + d.toFixed(0) + " pos=" + pos.map(v => v.toFixed(0)).join(","));
		}
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 30000);
