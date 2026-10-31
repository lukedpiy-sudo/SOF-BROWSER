/*
 * movetest.js - test movement with attack button held
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const sock = dgram.createSocket("udp4");
const host = "127.0.0.1";
const port = 29000;

const client = createClient({
		send: (buf) => sock.send(buf, port, host),
		onEvent: (name, data) => {
			switch (name) {
				case "oob": console.log("OOB: " + String(data).slice(0, 80)); break;
				case "connected": console.log("*** connected ***"); break;
				case "cmd": console.log("CMD: " + data); break;
				case "ask": console.log("ASK: " + data); break;
				case "spawned": console.log("*** spawned ***"); break;
				case "frame": {
					const f = data.frame;
					const ents = Array.from(data.entities.values());
					ents.forEach(e => {
						const s = e.state;
						const x = s.readFloatLE(0x04);
						const y = s.readFloatLE(0x08);
						const z = s.readFloatLE(0x0c);
						console.log("  #" + e.number + " pos=(" + x.toFixed(1) + "," + y.toFixed(1) + "," + z.toFixed(1) + ")");
					});
					break;
				}
				case "frameError": console.log("FRAME ERROR: " + data); break;
			}
		},
		moveMode: "unrel",
		moveFmt: "seq",
		fragFlag: false
	});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => {
	client.start();
	/* hold attack + forward after spawn */
	setTimeout(() => {
		console.log("--- holding attack + forward ---");
		client.setKey("Mouse0", true);   // attack bit
		client.setKey("KeyW", true);     // forward
	}, 3000);
	setTimeout(() => {
		console.log("--- releasing ---");
		client.setKey("Mouse0", false);
		client.setKey("KeyW", false);
	}, 8000);
});

const tick = setInterval(() => { client.sendUserCmd(); }, 100);

setTimeout(() => {
	clearInterval(tick);
	console.log("--- done ---");
	process.exit(0);
}, 30000);