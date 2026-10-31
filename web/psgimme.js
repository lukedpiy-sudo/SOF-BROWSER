/*
 * psgimme.js - try the game module's "gimme" command.
 *
 * The module's gimme handler looks the item up by its DISPLAY NAME
 * ("9mm Pistol", ".44 Pistol", "12 Gauge Shotgun", "C4", "MedKit", ...) and
 * the engine's tokenizer honours double quotes, so a name with a space has to
 * be quoted.  The module also parses the "bestweap" userinfo key, whose value
 * is a weapon name from the "w_*" family (w_pistol1, w_pistol2, ...).
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState, hudFromState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

const CMDS = [
	'gimme "9mm Pistol"',
	'gimme "12 Gauge Shotgun"',
	'gimme "C4"',
	'gimme "5.56 SMG"',
	'gimme "Heavy Machinegun"',
	'gimme "M-1943 Rocket Launcher"'
];

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
				" carried=" + h.carried + " item=" + h.item + " dead=" + h.dead);
			last = s;
		}
		const now = Date.now();
		if (step >= CMDS.length) return;
		if (now - t0 < 1500) return;
		t0 = now;
		const c = CMDS[step++];
		console.log(">>> " + c);
		client.sendStringCmd(c);
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 1500 + CMDS.length * 1500);
