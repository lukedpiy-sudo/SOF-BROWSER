/* bot.js - a small bot that walks to a weapon pickup, uses it and fires.
 *
 * The button bits are now known: 0x01 attack, 0x02 use, 0x20 run.  The
 * movement goes into the three i16 fields.
 */
"use strict";
const dgram = require("dgram");
const fs = require("fs");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const runMs = parseInt(process.argv[4] || "40000", 10);
const sock = dgram.createSocket("udp4");

const ents = JSON.parse(fs.readFileSync("www/map_entities.json", "utf8"));
const weapons = ents.filter(e => /^item_weapon_/.test(e.classname) && e.origin);
const health = ents.filter(e => /^item_health_/.test(e.classname) && e.origin);

let phase = 0;            /* 0 pick, 1 walk, 2 use, 3 fire */
let tPhase = 0, tStuck = 0, lastPos = null, target = null, psLog = [];
let lastPs = null, selfNum = null;

function findSelf(data, ps) {
	for (const e of data.entities.values()) {
		if (!e.state) continue;
		const ex = e.state.readFloatLE(0x04), ey = e.state.readFloatLE(0x08), ez = e.state.readFloatLE(0x0c);
		for (let i = 0; i + 6 <= ps.length; i++) {
			if (ps.readInt16LE(i) !== Math.round(ex * 8)) continue;
			if (ps.readInt16LE(i + 2) !== Math.round(ey * 8)) continue;
			if (ps.readInt16LE(i + 4) !== Math.round(ez * 8)) continue;
			return e;
		}
	}
	return null;
}

function pick(list, pos) {
	let best = null, bestD = 1e9;
	for (const w of list) {
		const d = Math.hypot(w.origin[0] - pos[0], w.origin[1] - pos[1]);
		if (d < bestD) { bestD = d; best = w; }
	}
	return best;
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const ps = data.frame.playerState;
		if (!ps) return;
		const self = findSelf(data, ps);
		if (!self) return;
		selfNum = self.number;
		const pos = [self.state.readFloatLE(0x04), self.state.readFloatLE(0x08)];
		const pos3 = [pos[0], pos[1], self.state.readFloatLE(0x0c)];

		/* the phase machine */
		const now = Date.now();
		if (phase === 0) {
			target = pick(weapons, pos);
			phase = 1; tPhase = now; tStuck = now; lastPos = pos;
			console.log("target " + target.classname + " at " + target.origin.join(",") +
				" dist " + Math.hypot(target.origin[0] - pos[0], target.origin[1] - pos[1]).toFixed(0));
		} else if (phase === 1) {
			const dx = target.origin[0] - pos[0], dy = target.origin[1] - pos[1];
			const d = Math.hypot(dx, dy);
			if (d < 45) {
				phase = 2; tPhase = now;
				client.setKey("KeyW", false);
				client.setKey("KeyE", true);
				console.log("--- reached the pickup (" + d.toFixed(0) + "), using it");
			} else {
				client.view.yaw = Math.atan2(dy, dx) * 180 / Math.PI;
				client.view.pitch = 0;
				client.setKey("KeyW", true);
				/* the stuck detector: if we do not move for 2.5 s, sidestep */
				if (lastPos && Math.hypot(pos[0] - lastPos[0], pos[1] - lastPos[1]) < 1) {
					if (now - tStuck > 2500) {
						tStuck = now;
						console.log("--- stuck, sidestepping");
						client.view.yaw += 70;
						client.setKey("KeyA", true);
						setTimeout(() => client.setKey("KeyA", false), 600);
					}
				} else { tStuck = now; }
				lastPos = pos;
			}
		} else if (phase === 2) {
			if (now - tPhase > 1200) {
				phase = 3; tPhase = now;
				client.setKey("KeyE", false);
				client.setKey("Mouse0", true);
				console.log("--- firing");
			}
		} else if (phase === 3) {
			if (now - tPhase > 3000) {
				phase = 4; tPhase = now;
				client.setKey("Mouse0", false);
				console.log("--- done firing, ps history:");
				psLog.forEach(l => console.log("   " + l));
			}
		}

		/* the player state changes */
		if (lastPs && lastPs.length === ps.length) {
			const ch = [];
			for (let i = 0; i < ps.length; i++) if (ps[i] !== lastPs[i]) ch.push(i);
			if (ch.length) {
				const l = "t=" + now + " ps changed at " + ch.join(",") +
					" [" + Array.from(ps).map(x => x.toString(16).padStart(2, "0")).join("") + "]";
				psLog.push(l);
				console.log(l);
			}
		}
		lastPs = Buffer.from(ps);
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- end, self #" + selfNum); process.exit(0); }, runMs);
