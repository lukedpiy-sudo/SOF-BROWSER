/*
 * psdeath.js - how long does the server keep sending the player state?
 *
 * argv: the mode
 *   plain   : the normal client
 *   zero    : a user command with only the msec set
 *   angles  : the msec and the view angles
 *   move    : the msec and the movement
 *   nomove  : the msec, the angles, but no movement
 *   norate  : the msec, the angles and the movement, but sent at 5 Hz
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const mode = process.argv[4] || "plain";
const rate = parseInt(process.argv[5] || "20", 10);
const sock = dgram.createSocket("udp4");
let lastMask = null, firstState = 0, dead = 0, spawned = 0, sent = 0;

const opts = {
	moveMode: process.argv[6] || "rel",
	ackPlusOne: process.argv[7] === "ack1",
	seqMode: process.argv[8] || "plus1",
	send: (buf) => sock.send(buf, port, host),
	cmdPatchRing: (cmd) => {
		cmd[0] = (mode === "msec0") ? 0 : 16;
		if (mode === "zero") cmd.fill(0, 4);
		else if (mode === "angles") cmd.fill(0, 0x0a);
		else if (mode === "move") { cmd.fill(0, 4, 6); cmd.fill(0, 0x0a, 6); }
		else if (mode === "nomove") cmd.fill(0, 0x0a, 6);
	},
	onEvent: (name, data) => {
		if (name === "spawned") { spawned = Date.now(); return; }
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		if (st.mask === lastMask) return;
		lastMask = st.mask;
		if (st.mask !== 0) { if (!firstState) firstState = Date.now(); return; }
		dead = Date.now();
	}
};
const client = createClient(opts);
sock.on("message", (msg) => {
	if (msg.length >= 4 && msg[0] === 0xff && msg[1] === 0xff) {
		const t = msg.toString("latin1", 4).replace(/\0/g, "").trim();
		if (t && t.indexOf("challenge") !== 0) console.log("  OOB: " + JSON.stringify(t));
	}
	client.onDatagram(msg);
});
sock.bind(0, "0.0.0.0", () => client.start());
setInterval(() => {
	if (!client.spawnDone) return;
	sent++;
	if (mode === "hold") client.setKey("Mouse0", true);
	if (mode === "walk") client.setKey("KeyW", true);
	if (mode === "turn") client.view.yaw = (client.view.yaw + 3) % 360;
	client.sendUserCmd();
}, 1000 / rate);
setTimeout(() => {
	console.log("mode " + mode + ": the first state at +" + ((firstState - spawned) / 1000).toFixed(1) +
		" s after the spawn, the state died at +" + ((dead - spawned) / 1000).toFixed(1) +
		" s (lifetime " + ((dead - firstState) / 1000).toFixed(1) + " s, " + sent + " messages sent)");
	process.exit(0);
}, 60000);
