/*
 * psengine.js - which string commands does the ENGINE answer?
 *
 * The engine's own command table is consulted first.  An unknown command
 * produces a "Unknown command" print (svc 0x0B), so a silent command means
 * something consumed it (the game module) or it never arrived.
 *
 * The server answered "players" with "0 players", which means the engine's
 * client list contains no active player.  That is the thing to pin down.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let step = 0, t0 = 0;

const CMDS = [
	"players",
	"bogusxyz123",
	"players",
	"echo hi",
	"help",
	"status"
];

function dumpPrint(body) {
	/* svc 0x0B: a stream of records; 0x02 = text, then u8 len, then text */
	let p = 0;
	while (p < body.length) {
		const kind = body[p++];
		if (kind === 0x02) {
			const len = body[p++];
			const text = body.toString("latin1", p, p + len).replace(/\0/g, "");
			p += len + 1;
			console.log("    PRINT: " + JSON.stringify(text));
		} else if (kind === 0x01) {
			const len = body.readUInt16LE(p); p += 2;
			console.log("    PRINT(hi): " + body.toString("latin1", p, p + len).replace(/\0/g, ""));
			p += len;
		} else {
			console.log("    PRINT(kind 0x" + kind.toString(16) + "): " +
				body.toString("latin1", p, p + 40).replace(/[^\x20-\x7e]/g, "."));
			break;
		}
	}
}

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
	if (msg.length > 9 && msg[8] === 0x0b) dumpPrint(msg.slice(9));
	client.onDatagram(msg);
});
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 2500 + CMDS.length * 2500);
