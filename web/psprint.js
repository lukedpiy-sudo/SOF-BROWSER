/*
 * psprint.js - capture every print the server sends, whatever service it
 * arrives in.
 *
 * A print record is [0x02][u8 len][text][0x00].  The server mixes prints and
 * configstrings in one datagram, so the whole payload is scanned.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let step = 0, t0 = 0, shown = new Set();

const CMDS = [
	"bogusxyz123",
	"help",
	"status",
	"echo hello",
	"players",
	"god",
	"noclip"
];

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		const now = Date.now();
		if (step >= CMDS.length) return;
		if (now - t0 < 2500) return;
		t0 = now;
		const c = CMDS[step++];
		console.log(">>> " + c);
		client.sendStringCmd(c);
	}
});
sock.on("message", (msg) => {
	const body = msg.slice(8);
	for (let p = 0; p + 2 < body.length; p++) {
		if (body[p] !== 0x02) continue;
		const len = body[p + 1];
		if (len === 0 || p + 2 + len > body.length) continue;
		const text = body.toString("latin1", p + 2, p + 2 + len);
		if (!/[\x20-\x7e]/.test(text)) continue;
		/* a print is text; configstring records are not */
		if (!/^[ -~\r\n\t]+$/.test(text)) continue;
		const key = text;
		if (shown.has(key)) continue;
		shown.add(key);
		console.log("  PRINT: " + JSON.stringify(text));
	}
	client.onDatagram(msg);
});
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 2500 + CMDS.length * 2500);
