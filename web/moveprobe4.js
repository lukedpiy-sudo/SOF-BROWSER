/*
 * moveprobe4.js - clean per-phase movement measurement at 10 Hz.
 *
 * Two questions:
 *   1. How big is the origin change for a given movement short? The wire
 *      carries movement as a 10 bit field (cmdenc.js: value + 0x1fe, so the
 *      encodable range is -510..+510 and the decoder clamps it), the game
 *      module scales it by 0.125.  So a full forwardmove of 400 should move
 *      the player a measurable number of units per server frame.
 *   2. How long does the client's stream survive after spawn?  (Earlier runs:
 *      5 Hz -> 16 s, 20 Hz -> 6 s.  At 10 Hz with msec=33 the three commands
 *      of a message add up to 99 ms = one real sv_fps frame, so the per-client
 *      msec budget should not run negative.)
 *
 * The cmd buffer uses the DECODER layout (see cmdenc.js): angles at
 * +0x04/+0x06/+0x08, movement at +0x0A/+0x0C/+0x0E.  The decoder clamps the
 * movement shorts to +-200 / +-160 / +-200, so the phases use those maxima;
 * the game module doubles them afterwards when the run button (0x20) is set.
 *
 * No button bit 0x02 (USE) is ever set, so the interact gate at gclient+0x538
 * stays closed and nothing interferes with the movement copy.
 *
 * Run:  node moveprobe4.js [host] [port]
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

const PHASE_MS = 8000;
const phases = [
	{ name: "idle",        apply: () => { } },
	{ name: "fwd +200",    apply: (c) => { c.writeInt16LE(200, 0x0a); } },
	{ name: "fwd -200",    apply: (c) => { c.writeInt16LE(-200, 0x0a); } },
	{ name: "side +160",   apply: (c) => { c.writeInt16LE(160, 0x0c); } },
	{ name: "fwd +200 + run bit", apply: (c) => { c.writeInt16LE(200, 0x0a); c[1] = 0x20; } },
	{ name: "up +200 (jump)", apply: (c) => { c.writeInt16LE(200, 0x0e); } },
	{ name: "yaw +90 deg", apply: (c) => { c.writeUInt16LE(16384, 6); } },
	{ name: "idle again",  apply: () => { } }
];

let phase = 0;
let frames = 0, emptyStates = 0;
let spawnAt = 0, lastFrameAt = 0;
let phaseStartOrigin = null;
let prevOrigin = null;
const svcTally = {};

function now() { return Date.now(); }

function fmt(v) { return v === null ? "n/a" : v.map((x) => x.toFixed(3)).join(","); }

const client = createClient({
	userinfo: "\\name\\moveprobe4\\model\\guy1\\skin\\guy1\\team_red_blue\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\spectator\\0",
	ackPlusOne: false,
	moveMode: "unrel",
	keepAliveInterval: 100,           /* one message per sv_fps frame */
	cmdPatch: (c) => { phases[phase].apply(c); },
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name === "ask") console.log("[ASK] " + data);
		else if (name === "oob") console.log("[OOB] " + data.trim());
		else if (name === "spawned") {
			spawnAt = now();
			console.log("[SPAWNED] t=0");
		} else if (name === "frameError") {
			console.log("[FRAME ERR] " + data.message);
		} else if (name === "frame") {
			frames++;
			lastFrameAt = now();
			const f = data.frame;
			const ps = f && f.playerStateDecoded;
			if (!ps) { emptyStates++; return; }
			const t = ((now() - spawnAt) / 1000).toFixed(1);
			let dPrev = "n/a", dPhase = "n/a";
			if (ps.origin) {
				if (phaseStartOrigin === null) phaseStartOrigin = ps.origin.slice();
				if (prevOrigin) {
					dPrev = ps.origin.map((x, i) => (x - prevOrigin[i]).toFixed(3)).join(",");
				}
				dPhase = ps.origin.map((x, i) => (x - phaseStartOrigin[i]).toFixed(3)).join(",");
				prevOrigin = ps.origin.slice();
			}
			const yaw = ps.viewAngles ? ps.viewAngles[0].toFixed(1) : "n/a";
			const vel = ps.velocity ? ps.velocity.join(",") : "n/a";
			console.log(phases[phase].name + " | t=" + t + "s f" + f.number +
				" mask=0x" + ps.mask.toString(16) +
				" origin=" + fmt(ps.origin) +
				" d(frame)=" + dPrev +
				" d(phase)=" + dPhase +
				" vel=" + vel + " yaw=" + yaw + " hp=" + ps.stats[1]);
		}
	}
});

/* count the service bytes so the stream-death picture is complete */
function tallySvc(byte) { svcTally[byte.toString(16)] = (svcTally[byte.toString(16)] || 0) + 1; }

const onRaw = sock.on("message", (m) => {
	if (m.length >= 9 && (m[0] !== 0xff || m[1] !== 0xff)) tallySvc(m[8]);
	client.onDatagram(m);
});

sock.bind(0, "0.0.0.0", () => client.start());

setInterval(() => {
	phase = (phase + 1) % phases.length;
	phaseStartOrigin = null;
	prevOrigin = null;
	console.log("-- phase " + phases[phase].name);
}, PHASE_MS);

/* watchdog: report when the server stops sending frames */
setInterval(() => {
	if (spawnAt && lastFrameAt && now() - lastFrameAt > 3000) {
		console.log("[DEAD] no frame for 3 s, last was " +
			((lastFrameAt - spawnAt) / 1000).toFixed(1) + " s after spawn");
		console.log("[TALLY] " + Object.keys(svcTally).map((k) => "0x" + k + " x" + svcTally[k]).join(" "));
		process.exit(0);
	}
}, 1000);

setTimeout(() => {
	console.log("done frames=" + frames + " empty=" + emptyStates);
	console.log("[TALLY] " + Object.keys(svcTally).map((k) => "0x" + k + " x" + svcTally[k]).join(" "));
	process.exit(0);
}, 80000);
