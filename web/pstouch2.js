/*
 * pstouch2.js - walk onto a weapon pickup and watch the player state.
 *
 * Weapons are TOUCH pickups in the game module (no button needed), so this
 * test does not depend on the buttons byte at all.  It resolves the entity
 * model names through the configstrings and the engine's global string table,
 * steers towards the nearest weapon and reports the stats.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState, hudFromState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
const table = require("./sofstringtable.json").names;

const WEAPON = /pistol|shotgun|rifle|smg|machinegun|rocket|knife|sniper|grenade|ammo|medkit|claymore|c4|flash/i;

let reported = false, lastStats = null, t0 = 0, target = null;

function modelName(cs, idx) {
	const v = cs[idx];
	if (v === undefined) return null;
	if (typeof v === "string") return v;
	return table[v] || null;
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
			console.log("  STATS " + s + "  hp=" + h.health + " armor=" + h.armor +
				" ammo=" + h.ammo + "/" + h.ammo2 + " carried=" + h.carried + " item=" + h.item);
			lastStats = s;
		}
		/* the player origin is field 0x2 of the state block: 3 x s16 / 8 */
		const ps = f.playerState;
		let ox = 0, oy = 0, oz = 0;
		try {
			const st2 = decodePlayerState(ps, 0);
			ox = st2.origin ? st2.origin[0] : 0;
			oy = st2.origin ? st2.origin[1] : 0;
			oz = st2.origin ? st2.origin[2] : 0;
		} catch (e) { /* ignore */ }
		if (!reported) {
			reported = true;
			const cs = client.configstrings;
			const list = [];
			for (const [n, e] of client.entities) {
				if (!e.state) continue;
				const mi = e.state.readInt32LE(0x38);
				const nm = modelName(cs, mi);
				if (!nm) continue;
				if (!WEAPON.test(nm)) continue;
				const x = e.state.readFloatLE(0x04);
				const y = e.state.readFloatLE(0x08);
				const z = e.state.readFloatLE(0x0c);
				list.push({ n, nm, x, y, z, d: Math.hypot(x - ox, y - oy) });
			}
			list.sort((a, b) => a.d - b.d);
			console.log("  player origin " + ox.toFixed(1) + "," + oy.toFixed(1) + "," + oz.toFixed(1));
			for (const it of list.slice(0, 12)) {
				console.log("   ent " + it.n + " " + it.nm + " @ " + it.x.toFixed(0) + "," +
					it.y.toFixed(0) + "," + it.z.toFixed(0) + "  d=" + it.d.toFixed(0));
			}
			target = list[0] || null;
			if (target) console.log("  target: " + target.nm + " at " + target.x.toFixed(0) + "," + target.y.toFixed(0));
		}
		/* steer towards the target */
		if (target) {
			const dx = target.x - ox, dy = target.y - oy;
			const dist = Math.hypot(dx, dy);
			if (dist > 20) {
				/* the world direction is (yaw - 90) mod 360 */
				const dir = Math.atan2(dy, dx) * 180 / Math.PI;
				client.view.yaw = (dir + 90 + 360) % 360;
				client.setKey("KeyW", true);
			} else {
				client.setKey("KeyW", false);
				console.log("  reached the target at d=" + dist.toFixed(1));
				target = null;
			}
		}
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 20000);
