/*
 * pswalk3.js - walk onto a weapon pickup (a TOUCH pickup, no buttons needed)
 * and watch the player state.  If the magazine changes, the stats are the ammo
 * and the pickup works; if the carried item changes, the item was picked up.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState, hudFromState } = require("./playerstate.js");
const mapents = require("./www/map_entities.json");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
const moveSpeed = parseInt(process.argv[4] || "200", 10);
let target = null, lastStats = null, t0 = Date.now(), scanned = false, arrived = false;

const weapons = mapents.filter((e) => e.origin && /item_weapon/.test(e.classname || ""));

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
			console.log("[" + ((Date.now() - t0) / 1000).toFixed(1) + "s] STATS " + s +
				" hp=" + h.health + " armor=" + h.armor + " ammo=" + h.ammo + "/" + h.ammo2 +
				" carried=" + h.carried + " item=" + h.item);
			lastStats = s;
		}
		if (!st.origin) return;
		const ox = st.origin[0], oy = st.origin[1];
		if (!scanned && Date.now() - t0 > 4000) {
			scanned = true;
			const list = weapons.map((e) => ({
				c: e.classname, o: e.origin,
				d: Math.hypot(e.origin[0] - ox, e.origin[1] - oy)
			})).sort((a, b) => a.d - b.d);
			console.log("  me @" + ox.toFixed(0) + "," + oy.toFixed(0) + "  moveSpeed=" + moveSpeed);
			for (const it of list.slice(0, 4)) console.log("   " + it.c + " @" + it.o.join(",") + " d=" + it.d.toFixed(0));
			target = list[0];
			console.log("  target " + target.c + " @" + target.o.join(","));
		}
		if (target) {
			const dx = target.o[0] - ox, dy = target.o[1] - oy;
			const dist = Math.hypot(dx, dy);
			if (dist > 12) {
				const dir = Math.atan2(dy, dx) * 180 / Math.PI;
				client.view.yaw = (dir + 90 + 360) % 360;
				client.view.pitch = 0;
				client.setKey("KeyW", true);
			} else {
				client.setKey("KeyW", false);
				if (!arrived) { arrived = true; console.log("  reached the target, d=" + dist.toFixed(1) + " (z " + target.o[2] + ")"); }
			}
		}
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.setMoveSpeed(moveSpeed); client.start(); t0 = Date.now(); });
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 45000);
