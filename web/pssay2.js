/*
 * pssay2.js - do the game module's console commands reach the server?
 *
 * The module's "say" command (0x50089D50 area) broadcasts a chat message,
 * which the server sends back to every client.  If the message comes back, the
 * module's ClientCommand dispatcher IS being reached.
 *
 * The engine's own command table is checked first, and the engine forwards to
 * the module only when no engine command matched AND the server state is 2
 * (a .bsp level, which is what we are running).
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let step = 0, t0 = 0;

const CMDS = ["say hello from the browser", "players", "score", "help"];

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name === "frame" && data.frame && data.frame.command) {
			console.log("  frame command: " + JSON.stringify(data.frame.command));
			return;
		}
		if (name === "cmd") return;
		const now = Date.now();
		if (step >= CMDS.length) return;
		if (now - t0 < 1500) return;
		t0 = now;
		const c = CMDS[step++];
		console.log(">>> " + c);
		client.sendStringCmd(c);
	}
});
sock.on("message", (msg) => {
	/* a chat message arrives as a service 0x0d string */
	if (msg.length > 9 && msg[8] === 0x0d) {
		console.log("  SERVER CHAT: " + msg.toString("latin1", 9).replace(/\0/g, ""));
	}
	client.onDatagram(msg);
});
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 1500 + CMDS.length * 1500);
