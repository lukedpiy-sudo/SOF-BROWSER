/*
 * conncheck.js - can we still connect to the server?
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let events = 0;
const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name === "frame") { events++; if (events === 1) console.log("first frame at " + Date.now() % 100000); return; }
		console.log("event " + name + " " + (typeof data === "object" ? JSON.stringify(data).slice(0, 120) : data));
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("frames=" + events + " spawned=" + client.spawnDone); process.exit(0); }, 8000);
