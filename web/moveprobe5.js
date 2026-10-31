/*
 * moveprobe5.js - does the yaw in the usercmd reach the game module?
 *
 * The decoder (SoF.exe 0x20005AA0) puts the three 12 bit fields at +4/+6/+8
 * and the three 10 bit movement fields at +0x0A/+0x0C/+0x0E; ClientThink
 * (gamex86.dll 0x500F53A0 line 138154) doubles exactly the shorts at
 * +0x0A/+0x0C/+0x0E when button bit 0x20 is set, so those are the movement
 * fields and +4/+6/+8 are the angles.
 *
 * If the yaw reaches the module, the direction of travel must rotate with the
 * yaw.  Each phase keeps forwardmove at 200 and only changes the yaw; the
 * resulting movement direction is printed per frame.
 *
 * Run:  node moveprobe5.js [host] [port]
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

const PHASE_MS = 8000;
const phases = [
	{ name: "idle yaw=0",        apply: () => { } },
	{ name: "fwd yaw=0",         apply: (c) => { c.writeInt16LE(200, 0x0a); } },
	{ name: "fwd yaw=90",        apply: (c) => { c.writeInt16LE(200, 0x0a); c.writeUInt16LE(16384, 6); } },
	{ name: "fwd yaw=180",       apply: (c) => { c.writeInt16LE(200, 0x0a); c.writeUInt16LE(32768, 6); } },
	{ name: "fwd yaw=270",       apply: (c) => { c.writeInt16LE(200, 0x0a); c.writeUInt16LE(49152, 6); } },
	{ name: "fwd yaw=90 again",  apply: (c) => { c.writeInt16LE(200, 0x0a); c.writeUInt16LE(16384, 6); } },
	{ name: "pitch -45 yaw=90",  apply: (c) => { c.writeInt16LE(200, 0x0a); c.writeUInt16LE(16384, 6); c.writeUInt16LE(57344, 4); } },
	{ name: "idle",              apply: () => { } }
];

let phase = 0;
let frames = 0, spawnAt = 0, lastFrameAt = 0;
let phaseStartOrigin = null, prevOrigin = null;
const svcTally = {};
const dirs = {};

function now() { return Date.now(); }
function dirName(dx, dy) {
	if (Math.abs(dx) < 0.01 && Math.abs(dy) < 0.01) return "still";
	if (Math.abs(dx) < 0.01) return dy > 0 ? "+Y" : "-Y";
	if (Math.abs(dy) < 0.01) return dx > 0 ? "+X" : "-X";
	const q = (dx > 0 ? "X+" : "X-") + (dy > 0 ? "Y+" : "Y-");
	return q + " " + (Math.atan2(dy, dx) * 180 / Math.PI).toFixed(0) + "deg";
}

const client = createClient({
	userinfo: "\\name\\moveprobe5\\model\\guy1\\skin\\guy1\\team_red_blue\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\spectator\\0",
	ackPlusOne: false,
	moveMode: "unrel",
	keepAliveInterval: 100,
	cmdPatch: (c) => { phases[phase].apply(c); },
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name === "spawned") { spawnAt = now(); console.log("[SPAWNED]"); }
		else if (name === "frame") {
			frames++; lastFrameAt = now();
			const ps = data.frame && data.frame.playerStateDecoded;
			if (!ps) return;
			if (!ps.origin) return;
			if (phaseStartOrigin === null) phaseStartOrigin = ps.origin.slice();
			if (prevOrigin) {
				const dx = ps.origin[0] - prevOrigin[0], dy = ps.origin[1] - prevOrigin[1];
				const d = dirName(dx, dy);
				dirs[phases[phase].name] = dirs[phases[phase].name] || {};
				dirs[phases[phase].name][d] = (dirs[phases[phase].name][d] || 0) + 1;
			}
			prevOrigin = ps.origin.slice();
		}
	}
});

sock.on("message", (m) => {
	if (m.length >= 9 && (m[0] !== 0xff || m[1] !== 0xff)) tallySvc(m[8]);
	client.onDatagram(m);
});
function tallySvc(b) { svcTally[b.toString(16)] = (svcTally[b.toString(16)] || 0) + 1; }

sock.bind(0, "0.0.0.0", () => client.start());

setInterval(() => { phase = (phase + 1) % phases.length; }, PHASE_MS);

setTimeout(() => {
	console.log("frames=" + frames);
	for (const p of phases) {
		const d = dirs[p.name];
		console.log(p.name + " -> " + (d ? Object.keys(d).map((k) => k + " x" + d[k]).join(", ") : "no data"));
	}
	console.log("[TALLY] " + Object.keys(svcTally).map((k) => "0x" + k + " x" + svcTally[k]).join(" "));
	process.exit(0);
}, 70000);

setInterval(() => {
	if (spawnAt && lastFrameAt && now() - lastFrameAt > 3000) {
		console.log("[DEAD] no frame for 3 s");
		process.exit(0);
	}
}, 1000);
