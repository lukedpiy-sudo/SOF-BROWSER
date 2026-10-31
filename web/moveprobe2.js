/*
 * moveprobe2.js - per-field movement probe against a live server.
 *
 * 2026-10-23 finding: USE (button bit 0x02) puts the client in the game
 * module's interact/follow mode (gclient+0x538) which stops the movement
 * simulation AND the player state write.  This probe NEVER sends 0x02.
 *
 * For each phase it holds one command field constant and prints the
 * authoritative origin delta, so we learn which field does which axis.
 * Phases (6 s each, buttons stay 0 except the run bit in phase 6):
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

const phases = [
	{ name: "idle",            apply: (c) => {} },
	{ name: "move0=+150",      apply: (c) => { c.writeInt16LE(150, 0x0a); } },
	{ name: "move0=-150",      apply: (c) => { c.writeInt16LE(-150, 0x0a); } },
	{ name: "move1=+120",      apply: (c) => { c.writeInt16LE(120, 0x0c); } },
	{ name: "move1=-120",      apply: (c) => { c.writeInt16LE(-120, 0x0c); } },
	{ name: "move2=+150",      apply: (c) => { c.writeInt16LE(150, 0x0e); } },
	{ name: "move0=+150 run",  apply: (c) => { c.writeInt16LE(150, 0x0a); c[1] = 0x20; } },
	{ name: "idle again",      apply: (c) => {} }
];
let phase = 0;

const client = createClient({
	userinfo: "\\name\\moveprobe\\spectator\\0",
	moveMode: "unrel",
	cmdPatch: (c) => { phases[phase].apply(c); },
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
	if (name === "ask") console.log("[ASK] " + data);
	else if (name === "spawned") console.log("[SPAWNED]");
	else if (name === "frame") {
		const ps = data.frame && data.frame.playerStateDecoded;
		if (ps && ps.origin) {
			curPos = ps.origin;
			if (lastShown === null || Math.abs(curPos[0]-lastShown[0])+Math.abs(curPos[1]-lastShown[1])+Math.abs(curPos[2]-lastShown[2]) > 2) {
				console.log("PS pos=(" + curPos[0].toFixed(1) + "," + curPos[1].toFixed(1) + "," + curPos[2].toFixed(1) + ")");
				lastShown = curPos.slice();
			}
		} else { emptyStates++; }
	}
	}
});

let pos = null, phaseStart = null, phaseStartT = Date.now();
let emptyStates = 0, totalFrames = 0, lastPos = null, lastChange = Date.now();

sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "0.0.0.0", () => client.start());

setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);

setInterval(() => {
	phase = (phase + 1) % phases.length;
	console.log("-- phase " + phases[phase].name);
}, 6000);

/* Track movement through the entity snapshots: the player entity is the one
 * whose origin changes when we steer; the player-state origin is delta/
 * bit-packed in the frame so it can lag behind the entity state. */
const entSeen = new Map();
let curPos = null, lastShown = null;
setInterval(() => {
	const ents = client.entities;
	if (!ents) return;
	for (const [num, e] of ents) {
		if (!e || !e.state) continue; const o = [e.state.readFloatLE(0x04), e.state.readFloatLE(0x08), e.state.readFloatLE(0x0c)];
		
		const prev = entSeen.get(num);
		if (prev) {
			const d = Math.abs(o[0] - prev[0]) + Math.abs(o[1] - prev[1]) + Math.abs(o[2] - prev[2]);
			if (d > 0.5) {
				console.log("MOVE ent " + num + " d=(" + (o[0] - prev[0]).toFixed(1) + "," + (o[1] - prev[1]).toFixed(1) + "," + (o[2] - prev[2]).toFixed(1) + ") at pos (" + o[0].toFixed(0) + "," + o[1].toFixed(0) + "," + o[2].toFixed(0) + ")");
			}
		}
		entSeen.set(num, [o[0], o[1], o[2]]);
	}
}, 200);


setTimeout(() => { console.log("done frames=" + totalFrames + " empty=" + emptyStates); process.exit(0); }, 150000);
