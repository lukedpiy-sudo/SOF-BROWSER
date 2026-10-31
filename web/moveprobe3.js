/* moveprobe3.js - one client; per phase: set movement shorts AND rotating view yaw.
 * Each frame print: origin, velocity, viewAngles, mask - so we can tell which
 * command fields reach the module's player state and which do not.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { hudFromState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

const phases = [
	{ name: "idle",            apply: (c) => {} },
	{ name: "move0=+150",      apply: (c) => { c.writeInt16LE(150, 0x0a); } },
	{ name: "view yaw +90",    apply: (c) => { c.writeInt16LE(16384, 0x04); } },
	{ name: "view yaw -90",    apply: (c) => { c.writeInt16LE(-16384, 0x04); } },
	{ name: "move0+view",      apply: (c) => { c.writeInt16LE(150, 0x0a); c.writeInt16LE(8192, 0x04); } },
	{ name: "move2=+150 (up)", apply: (c) => { c.writeInt16LE(150, 0x0e); } },
	{ name: "idle again",      apply: (c) => {} }
];
let phase = 0;

const client = createClient({
	userinfo: "\\name\\moveprobe3\\spectator\\0",
	moveMode: "unrel",
	cmdPatch: (c) => { phases[phase].apply(c); },
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name === "ask") console.log("[ASK] " + data);
		else if (name === "spawned") console.log("[SPAWNED]");
		else if (name === "frame") {
			frames++;
		 const f = data.frame;
		 const ps = f && f.playerStateDecoded;
		 if (!ps) { emptyStates++; return; }
		 const tag = phases[phase].name;
		 const oy = ps.viewAngles ? ps.viewAngles[0].toFixed(1) : "n/a";
		 const vel = ps.velocity ? ps.velocity.join(",") : "n/a";
		 const o = ps.origin ? ps.origin.join(",") : "n/a";
		 console.log(tag + " f" + f.number + " mask=0x" + ps.mask.toString(16) + " origin=" + o + " vel=" + vel + " yaw=" + oy + " hp=" + (ps.stats[1]) + " msec-ish=" + f.time.toFixed(2));
	}
	}
});

let frames = 0, emptyStates = 0;

sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "0.0.0.0", () => client.start());

setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);

setInterval(() => {
	phase = (phase + 1) % phases.length;
	console.log("-- phase " + phases[phase].name);
}, 6000);

setTimeout(() => { console.log("done frames=" + frames + " empty=" + emptyStates); process.exit(0); }, 80000);
