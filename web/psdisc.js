/*
 * psdisc.js - does a client->server string command reach the server at all?
 *
 * The handshake proves that the string channel works for the protocol's own
 * commands, but a command that the ENGINE does not know ("kill", "gimme") has
 * to be forwarded to the game module.  "disconnect" is an engine command, so
 * it is the cheapest test of the channel.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const cmd = process.argv[4] || "disconnect";
const wait = parseInt(process.argv[5] || "4000", 10);
const sock = dgram.createSocket("udp4");
let frames = 0, sent = false, t0 = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name === "frame") {
			frames++;
			if (!sent) {
				sent = true;
				t0 = Date.now();
				console.log("spawned, sending \"" + cmd + "\"");
				setTimeout(() => client.sendStringCmd(cmd), 500);
			}
			return;
		}
		console.log("event " + name + " " + (data && data.message ? data.message : ""));
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => {
	console.log("frames after \"" + cmd + "\": " + frames + " (was " + frames + " at send time)");
	process.exit(0);
}, wait);
