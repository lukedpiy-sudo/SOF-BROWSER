/*
 * pstouch3.js - walk onto a weapon pickup (TOUCH, no buttons needed).
 *
 * The entity state: origin = 3 x s16 / 8 at +0x04, the model index is the
 * 16 bit field at +0x28 and it is a configstring index, so the model name is
 * the string table entry of the configstring's numeric value.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState, hudFromState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
const table = require("./sofstringtable.json").names;
const WEAPON = /pistol|shotgun|rifle|smg|machinegun|rocket|knife|sniper|ammo|medkit|claymore|c4|flash|grenade/i;

let scanned = false, target = null, lastStats = null, t0 = Date.now();

function nameOf(cs, idx) {
	const v = cs[idx];
	if (v === undefined) return null;
	return typeof v === "string" ? v : (table[v] || null);
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
		const cs = client.configstrings;
		const me = client.entities.get(1);
		let ox = 0, oy = 0;
		if (me && me.state) { ox = me.state.readFloatLE(0x04); oy = me.state.readFloatLE(0x08); }
		if (!scanned && Date.now() - t0 > 4000) {
			scanned = true;
			const list = [];
			for (const [n, e] of client.entities) {
				if (!e.state || n === 1) continue;
				const nm = nameOf(cs, e.state.readUInt16LE(0x28));
				if (!nm || !WEAPON.test(nm)) continue;
				const x = e.state.readFloatLE(0x04), y = e.state.readFloatLE(0x08);
				const z = e.state.readFloatLE(0x0c);
				list.push({ n, nm, x, y, z, d: Math.hypot(x - ox, y - oy) });
			}
			list.sort((a, b) => a.d - b.d);
			console.log("  me @" + ox.toFixed(1) + "," + oy.toFixed(1) + "  weapon-ish entities: " + list.length);
			for (const it of list.slice(0, 10)) {
				console.log("   ent " + it.n + " " + it.nm + " @" + it.x.toFixed(0) + "," + it.y.toFixed(0) +
					"," + it.z.toFixed(0) + " d=" + it.d.toFixed(0));
			}
			target = list[0] || null;
		}
		if (target) {
			const dx = target.x - ox, dy = target.y - oy;
			const dist = Math.hypot(dx, dy);
			if (dist > 18) {
				const dir = Math.atan2(dy, dx) * 180 / Math.PI;
				client.view.yaw = (dir + 90 + 360) % 360;
				client.setKey("KeyW", true);
			} else {
				client.setKey("KeyW", false);
				console.log("  reached " + target.nm + " d=" + dist.toFixed(1));
				target = null;
			}
		}
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 25000);
