/* firetest.js - check whether the attack button bit is accepted by the server.
 *
 * It connects, spawns, then holds the attack bit for a second and watches
 * the entity list: a weapon fire usually adds a short lived muzzle flash
 * entity at the shooter.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

let spawned = false;
let attackUntil = 0;
let t0 = Date.now();
let ents = new Set();
let entLog = [];
let frames = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name === "spawned") {
			spawned = true;
			console.log("spawned");
		} else if (name === "frame") {
			frames++;
			const f = data.frame;
			for (const [id, e] of data.entities) {
				if (!ents.has(id)) {
					ents.add(id);
					entLog.push("t=" + f.time.toFixed(2) + " new entity " + id + " " + client.describeEntity(e));
				}
			}
			if (f.number % 20 === 0) {
				console.log("frame " + f.number + " t=" + f.time.toFixed(2) + " ents=" + data.entities.size);
			}
		} else if (name === "oob") {
			const s = String(data);
			if (s.includes("print") || s.includes("chat")) console.log("OOB: " + s.slice(0, 120));
		}
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());

const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);

setInterval(() => {
	if (spawned && Date.now() > attackUntil && !fired) {
		fired = true;
		attackUntil = Date.now() + 1200;
		console.log(">>> holding the attack bit (0x20)");
		client.setKey("Mouse0", true);
	}
}, 200);
let fired = false;

setTimeout(() => {
	console.log("--- releasing the attack bit");
	client.setKey("Mouse0", false);
}, 10000);

setTimeout(() => {
	console.log("--- new entities during the run:");
	entLog.forEach(l => console.log("   " + l));
	console.log("frames: " + frames);
	process.exit(0);
}, 14000);
