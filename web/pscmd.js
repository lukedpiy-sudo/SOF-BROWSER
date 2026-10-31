/*
 * pscmd.js - try the server console commands and watch the player stats.
 *
 * The game module registers a "gimme" command (give item), the weapon names
 * (knife, pistol1, shotgun, ...) and a "defaultweapons" command.  This sends
 * a list of them and prints the authoritative stats after each.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState, hudFromState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

const CMDS = process.argv.slice(4);
if (!CMDS.length) CMDS.push("gimme weapon_pistol1");

let step = 0, tStep = 0, lastStats = null;

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
			console.log("  stats " + s + "  hp=" + h.health + " ammo=" + h.ammo + "/" + h.ammo2 +
				" carried=" + h.carried + " dead=" + h.dead);
			lastStats = s;
		}
		if (step >= CMDS.length) return;
		if (Date.now() - tStep < 1500) return;
		tStep = Date.now();
		const cmd = CMDS[step++];
		console.log(">>> " + cmd);
		client.sendStringCmd(cmd);
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 1500 + CMDS.length * 1500 + 3000);
