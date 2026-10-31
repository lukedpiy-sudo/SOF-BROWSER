/*
 * psbestweap.js - does the "bestweap" userinfo key give the player a weapon?
 *
 * The game module's ClientUserinfoChanged (0x500F4730) parses the userinfo
 * key "bestweap" into gclient+0x2E0 and then applies it to the player
 * object with a virtual call.  The value must be one of the module's weapon
 * names from the "w_*" family (w_pistol1, w_pistol2, w_machinepistol, ...).
 *
 * The userinfo is sent as a type-3 message, which the engine forwards to the
 * module on every update.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState, hudFromState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

const WEAPONS = ["w_pistol1", "w_pistol2", "w_machinepistol", "w_shotgun", "w_assaultrifle"];
let step = 0, t0 = 0, last = null;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		const h = hudFromState(st);
		const s = JSON.stringify(st.stats);
		if (s !== last) {
			console.log("  STATS " + s + "  hp=" + h.health + " ammo=" + h.ammo + "/" + h.ammo2 +
				" carried=" + h.carried + " item=" + h.item);
			last = s;
		}
		const now = Date.now();
		if (step >= WEAPONS.length) return;
		if (now - t0 < 1500) return;
		t0 = now;
		const w = WEAPONS[step++];
		console.log(">>> bestweap = " + w);
		client.setUserinfo("\\name\\webclient\\bestweap\\" + w +
			"\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0");
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 1500 + WEAPONS.length * 1500);
