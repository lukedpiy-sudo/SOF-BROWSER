/*
 * sofclient.js - the native (non-GUI) SoF client.
 *
 * A thin UDP transport over web/sofproto.js (the shared protocol core), so
 * the browser client (web/app.js) and this one speak the protocol identically.
 *
 * usage: node sofclient.js [host] [port] [--seconds N] [--seed N] [--dump FILE]
 */
"use strict";
const dgram = require("dgram");
const fs = require("fs");
const { createClient } = require("./sofproto.js");

const argv = process.argv.slice(2);
const opt = (n, d) => { const i = argv.indexOf(n); return i >= 0 ? argv[i + 1] : d; };
const host = argv[0] && !argv[0].startsWith("--") ? argv[0] : "127.0.0.1";
const port = parseInt(argv[1] && !argv[1].startsWith("--") ? argv[1] : "28910", 10);
const seconds = parseInt(opt("--seconds", "20"), 10);
const dumpFile = opt("--dump", null);

const sock = dgram.createSocket("udp4");
const dump = dumpFile ? fs.createWriteStream(dumpFile) : null;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		switch (name) {
			case "oob": console.log("S->C OOB : " + JSON.stringify(String(data).slice(0, 110))); break;
			case "connected": console.log("*** client_connect ***"); break;
			case "cmd": console.log("C->S cmd : " + JSON.stringify(data)); break;
			case "ask": console.log("*** server asks: " + data); break;
			case "spawned": console.log("*** spawned ***"); break;
			case "frame": {
				const f = data.frame;
				console.log("S->C frame " + f.number + " t=" + f.time.toFixed(2) +
					" entities=" + data.entities.size);
				let i = 0;
				for (const e of data.entities.values()) {
					if (i++ > 4) break;
					console.log("        " + client.describeEntity(e));
				}
				break;
			}
		}
	}
});

sock.on("message", (msg) => {
	if (dump) {
		const lp = Buffer.alloc(2);
		lp.writeUInt16LE(msg.length, 0);
		dump.write(lp);
		dump.write(msg);
	}
	client.onDatagram(msg);
});

sock.bind(0, "0.0.0.0", () => client.start());

const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);

setTimeout(() => {
	clearInterval(tick);
	console.log("--- done ---");
	process.exit(0);
}, seconds * 1000);
