/* pstest.js - watch the player state block (0x14) under different conditions.
 *
 * The block is the game module's player_state_t.  It is located between the
 * 0x14 marker and the 0x15 "packet entities" marker, so it can be dumped and
 * diffed while the client does different things.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

let phase = 0;
let tPhase = 0;
let lastPs = null;
let debugCount = 0;
const PHASES = ["idle", "walk forward", "walk back", "turn right", "fire", "stop"];

function hex(b) {
	return Array.from(b).map(x => x.toString(16).padStart(2, "0")).join(" ");
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name === "frame") {
			const ps = data.frame.playerState;
			if (debugCount++ < 3) {
				console.log("frame " + data.frame.number + " ps=" +
					(ps ? ps.length : "none") + " ents=" + data.entities.size);
			}
			if (!ps) return;
			/* diff every frame against the previous one */
			if (lastPs && lastPs.length === ps.length) {
				const ch = [];
				for (let i = 0; i < ps.length; i++) {
					if (ps[i] !== lastPs[i]) {
						ch.push("+" + i + ":" + lastPs[i].toString(16) + "->" + ps[i].toString(16));
					}
				}
				if (ch.length) console.log("f" + data.frame.number + " " + ch.join(" "));
			}
			lastPs = Buffer.from(ps);
			if (Date.now() - tPhase > 1500) {
				let diff = "";
				if (lastPs && lastPs.length === ps.length) {
					const ch = [];
					for (let i = 0; i < ps.length; i++) {
						if (ps[i] !== lastPs[i]) ch.push(i + ":" + lastPs[i].toString(16) + "->" + ps[i].toString(16));
					}
					diff = ch.length ? "  changed: " + ch.join(" ") : "  (unchanged)";
				}
				console.log("[" + PHASES[phase] + "] len=" + ps.length + diff);
				console.log("   " + hex(ps));
				lastPs = Buffer.from(ps);
				phase++;
				tPhase = Date.now();
				/* drive the next phase */
				client.setKey("KeyW", phase === 1);
				client.setKey("KeyS", phase === 2);
				client.setKey("Mouse0", phase === 4);
				if (phase >= 4) client.look(phase === 3 ? 30 : 0, 0);
				if (phase >= PHASES.length) { console.log("--- done"); process.exit(0); }
			}
		}
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 20000);
