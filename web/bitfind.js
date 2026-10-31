/* bitfind.js - find the fields in the bit packed player state.
 *
 * The block is bit packed, so a field is a contiguous run of bits.  For every
 * candidate run the value is decoded from the frames of each trial and
 * compared with the known input (the view yaw, the pitch), which identifies
 * the angle fields and their scale.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

const TRIALS = [
	{ name: "y0", yaw: 0, pitch: 0 },
	{ name: "y45", yaw: 45, pitch: 0 },
	{ name: "y90", yaw: 90, pitch: 0 },
	{ name: "y135", yaw: 135, pitch: 0 },
	{ name: "y180", yaw: 180, pitch: 0 },
	{ name: "y225", yaw: 225, pitch: 0 },
	{ name: "y270", yaw: 270, pitch: 0 },
	{ name: "y315", yaw: 315, pitch: 0 },
	{ name: "p30", yaw: 0, pitch: 30 },
	{ name: "p60", yaw: 0, pitch: 60 }
];

let phase = -1, tPhase = 0, samples = null, spawned = false;
const results = [];

function getBits(buf, start, len) {
	let v = 0;
	for (let i = 0; i < len; i++) {
		const b = start + i;
		v |= ((buf[b >> 3] >> (b & 7)) & 1) << i;
	}
	return v;
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name === "spawned") { spawned = true; console.log("spawned"); return; }
		if (name !== "frame") return;
		const ps = data.frame.playerState;
		if (!ps) return;
		if (!samples) samples = [];
		if (samples.length < 300) samples.push(Buffer.from(ps));
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => {
	if (!client.spawnDone) return;
	client.sendUserCmd();
	if (phase < 0) return;
	const t = TRIALS[phase];
	if (!t) return;
	client.view.yaw = t.yaw;
	client.view.pitch = t.pitch;
	client.setKey("KeyW", false);
	client.setKey("Mouse0", false);
}, 50);

setInterval(() => {
	if (!spawned) return;
	if (phase < 0) { phase = 0; tPhase = Date.now(); samples = null; return; }
	if (Date.now() - tPhase < 1500) return;
	results.push({ t: TRIALS[phase], samples: samples || [] });
	console.log("trial " + TRIALS[phase].name + ": " + (samples || []).length + " frames");
	samples = null;
	phase++;
	tPhase = Date.now();
	if (phase >= TRIALS.length) { analyse(); process.exit(0); }
}, 100);

function analyse() {
	const withData = results.filter(r => r.samples.length > 3);
	console.log("\ntrials with data: " + withData.length);
	const maxLen = withData.reduce((m, r) => Math.max(m, r.samples[0].length), 0);
	console.log("the block is " + maxLen + " bytes");

	/* for every candidate bit run, decode the value in each trial and see
	 * whether it tracks the yaw */
	const hits = [];
	for (let start = 0; start < maxLen * 8 - 4; start++) {
		for (const len of [8, 9, 10, 12, 16]) {
			if (start + len > maxLen * 8) continue;
			const series = withData.map(r => {
				/* the most common value in the trial */
				const counts = new Map();
				r.samples.forEach(s => {
					const v = getBits(s, start, len);
					counts.set(v, (counts.get(v) || 0) + 1);
				});
				let best = 0, bestN = -1;
				counts.forEach((n, v) => { if (n > bestN) { bestN = n; best = v; } });
				return best;
			});
			/* the yaw series must be distinct for the distinct yaws */
			const yawTrial = withData.filter(r => r.t.pitch === 0);
			if (yawTrial.length < 4) continue;
			const vals = yawTrial.map(r => {
				const counts = new Map();
				r.samples.forEach(s => {
					const v = getBits(s, start, len);
					counts.set(v, (counts.get(v) || 0) + 1);
				});
				let best = 0, bestN = -1;
				counts.forEach((n, v) => { if (n > bestN) { bestN = n; best = v; } });
				return best;
			});
			const yaws = yawTrial.map(r => r.t.yaw);
			/* is the value a linear function of the yaw? */
			const uniq = new Set(vals);
			if (uniq.size < Math.min(4, yaws.length)) continue;
			/* check the ratio to the yaw */
			const ratios = [];
			for (let i = 0; i < vals.length; i++) {
				if (yaws[i] === 0) continue;
				ratios.push(vals[i] / yaws[i]);
			}
			if (!ratios.length) continue;
			const r0 = ratios[0];
			const consistent = ratios.every(r => Math.abs(r - r0) < Math.max(1, Math.abs(r0) * 0.02));
			if (consistent) hits.push({ start, len, r0, vals, yaws });
		}
	}
	console.log("\ncandidate angle fields:");
	hits.slice(0, 20).forEach(h => {
		console.log("  bit " + h.start + " len " + h.len + "  value/yaw = " + h.r0.toFixed(4) +
			"   " + h.yaws.map((y, i) => y + "->" + h.vals[i]).join(" "));
	});
	if (!hits.length) console.log("  none found (the angles may be quantised or the trials were too noisy)");
}
