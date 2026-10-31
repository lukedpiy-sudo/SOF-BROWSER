/*
 * pshandshake.js - log the whole gamestate handshake: every request the
 * server sends and every command we answer.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let t0 = Date.now();

const client = createClient({ extra: " baselines precache,
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name === "ask") { console.log("[" + ((Date.now() - t0) / 1000).toFixed(2) + "s] SERVER ASKS: " + data); return; }
		if (name === "cmd") { console.log("[" + ((Date.now() - t0) / 1000).toFixed(2) + "s] we send: " + data); return; }
		if (name === "spawned") { console.log("[" + ((Date.now() - t0) / 1000).toFixed(2) + "s] SPAWNED"); return; }
		if (name === "frame") {
			const f = data.frame;
			if (f.playerState) {
				const m = f.playerState.readUInt32LE(0);
				if (m !== lastMask) { lastMask = m; console.log("[" + ((Date.now() - t0) / 1000).toFixed(2) + "s] player state mask=0x" + m.toString(16)); }
			}
			return;
		}
		if (name === "connected") { console.log("[" + ((Date.now() - t0) / 1000).toFixed(2) + "s] connected"); }
	}
});
let lastMask = -1;
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 30000);
