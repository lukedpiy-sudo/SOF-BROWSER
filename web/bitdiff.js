/* bitdiff.js - find the bit fields of the player state block empirically.
 *
 * The block is bit packed, so instead of reading the engine's parser we can
 * measure which bits change when a known input changes: the view yaw, the
 * movement and the attack button.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

/* the trials: each one sets a view angle and holds it */
const TRIALS = [
	{ name: "yaw 0", yaw: 0, pitch: 0, walk: false, fire: false },
	{ name: "yaw 45", yaw: 45, pitch: 0, walk: false, fire: false },
	{ name: "yaw 90", yaw: 90, pitch: 0, walk: false, fire: false },
	{ name: "yaw 180", yaw: 180, pitch: 0, walk: false, fire: false },
	{ name: "yaw 270", yaw: 270, pitch: 0, walk: false, fire: false },
	{ name: "pitch 45", yaw: 0, pitch: 45, walk: false, fire: false },
	{ name: "walk", yaw: 0, pitch: 0, walk: true, fire: false },
	{ name: "fire", yaw: 0, pitch: 0, walk: false, fire: true }
];

let phase = 0, tPhase = 0, samples = null;
const results = [];

function bitsOf(buf) {
	const out = [];
	for (let i = 0; i < buf.length * 8; i++) {
		out.push((buf[i >> 3] >> (i & 7)) & 1);
	}
	return out;
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const ps = data.frame.playerState;
		if (!ps) return;
		if (!samples) samples = [];
		/* only the frames that actually carry the block (they differ per
		 * frame because of the bit mask) */
		if (samples.length < 400) samples.push(Buffer.from(ps));
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => {
	if (!client.spawnDone) return;
	client.sendUserCmd();
	const t = TRIALS[phase];
	if (!t) { process.exit(0); }
	client.view.yaw = t.yaw;
	client.view.pitch = t.pitch;
	client.setKey("KeyW", t.walk);
	client.setKey("Mouse0", t.fire);
}, 50);

/* the phase machine: run each trial for a while and collect its samples */
setInterval(() => {
	if (!client.spawnDone) return;
	const t = TRIALS[phase];
	if (!t) return;
	if (Date.now() - tPhase < 1800) return;
	results.push({ name: t.name, samples: samples || [] });
	samples = null;
	phase++;
	tPhase = Date.now();
	console.log("trial " + t.name + ": " + results[results.length - 1].samples.length + " frames");
	if (phase >= TRIALS.length) {
		analyse();
		process.exit(0);
	}
}, 100);

function analyse() {
	/* the bit positions whose value differs between two trials */
	const maxBits = Math.max.apply(null, results.map(r => r.samples.reduce((m, s) => Math.max(m, s.length), 0))) * 8;
	console.log("\nup to " + maxBits + " bits");
	let header = "bit  ";
	TRIALS.forEach(t => header += t.name.slice(0, 8).padStart(9));
	console.log(header);
	for (let b = 0; b < Math.min(maxBits, 320); b++) {
		const vals = results.map(r => {
			/* the most common value of this bit in the trial */
			const counts = [0, 0];
			r.samples.forEach(s => {
				if (b >> 3 < s.length) counts[(s[b >> 3] >> (b & 7)) & 1]++;
			});
			return counts[1] > counts[0] ? 1 : 0;
		});
		/* only the bits that are not the same in every trial */
		if (vals.every(v => v === vals[0])) continue;
		console.log(String(b).padStart(3) + "  " + vals.map(v => String(v).padStart(9)).join(""));
	}
}
