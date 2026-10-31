/*
 * pswalk2.js - walk onto a weapon pickup and watch which stat changes.
 *
 * The map's item positions come from the BSP (web/www/map_entities.json).
 * Weapons are TOUCH pickups, so no button is involved.  If the magazine
 * ammo is one of the stats, the numbers have to change when the weapon
 * changes.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState, hudFromState } = require("./playerstate.js");
const mapents = require("./www/map_entities.json");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let target = null, lastStats = null, t0 = Date.now(), started = false;

const items = mapents.filter((e) => e.origin && /item_weapon|item_|weapon/i.test(e.classname || ""));

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
			console.log("[" + Date.now() - t0 + "ms] STATS " + s + "  hp=" + h.health +
				" armor=" + h.armor + " ammo=" + h.ammo + "/" + h.ammo2 + " carried=" + h.carried +
				" item=" + h.item);
			lastStats = s;
		}
		if (!st.origin) return;
		const ox = st.origin[0], oy = st.origin[1], oz = st.origin[2];
		if (!started && Date.now() - t0 > 3000) {
			started = true;
			const list = items.map((e) => ({
				c: e.classname, o: e.origin,
				d: Math.hypot(e.origin[0] - ox, e.origin[1] - oy, e.origin[2] - oz)
			})).sort((a, b) => a.d - b.d);
			console.log("  player at " + ox.toFixed(0) + "," + oy.toFixed(0) + "," + oz.toFixed(0));
			for (const it of list.slice(0, 8)) {
				console.log("   " + it.c + " @" + it.o.join(",") + " d=" + it.d.toFixed(0));
			}
			/* the closest one that is not far above/below us */
			target = list.find((it) => Math.abs(it.o[2] - oz) < 80) || list[0];
			console.log("  target: " + target.c + " @" + target.o.join(",") + " d=" + target.d.toFixed(0));
		}
		if (target) {
			const dx = target.o[0] - ox, dy = target.o[1] - oy;
			const dist = Math.hypot(dx, dy);
			if (dist > 15) {
				const dir = Math.atan2(dy, dx) * 180 / Math.PI;
				client.view.yaw = (dir + 90 + 360) % 360;
				client.view.pitch = 0;
				client.setKey("KeyW", true);
			} else {
				client.setKey("KeyW", false);
				console.log("  reached the target, d=" + dist.toFixed(1) + " z diff=" + (target.o[2] - oz).toFixed(1));
				target = null;
			}
		}
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 40000);
