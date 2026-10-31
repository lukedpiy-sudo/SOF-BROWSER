/*
 * psraw.js - raw monitor of everything the server sends, and the commands we
 * send.  Used to find out what the server answers to a string command.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let step = 0, t0 = 0, n = 0;

const CMDS = ["say hello", "players", "score", "help", "gimme \"9mm Pistol\""];

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		const now = Date.now();
		if (step >= CMDS.length) return;
		if (now - t0 < 2000) return;
		t0 = now;
		const c = CMDS[step++];
		console.log(">>> " + c);
		client.sendStringCmd(c);
	}
});
sock.on("message", (msg) => {
	/* the netchan header is 8 bytes; the payload starts at 8 */
	if (msg.length > 8) {
		const svc = msg[8];
		if (svc !== 0x17) {           /* 0x17 = svc_frame */
			const body = msg.slice(9);
			console.log("  SVC 0x" + svc.toString(16) + " len=" + body.length +
				"  " + body.toString("hex").slice(0, 160) +
				"  |" + body.toString("latin1").replace(/[^\x20-\x7e]/g, ".") + "|");
		}
	}
	n++;
	client.onDatagram(msg);
});
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- datagrams: " + n); process.exit(0); }, 2000 + CMDS.length * 2000);
