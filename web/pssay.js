/*
 * pssay.js - does the server execute our console string commands?
 *
 * The client sends svc_stringcmd (0x04).  The server executes it and usually
 * answers with a print (svc 0x0e?) or with a frame command string.  This
 * sniffs every server datagram and prints any ASCII it contains, so the
 * server's answer to a command becomes visible.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
const CMDS = process.argv.slice(4);
let step = 0, tStep = 0;

function ascii(b) {
	let s = "";
	for (let i = 0; i < b.length; i++) {
		const c = b[i];
		if (c === 0) { if (s.length >= 3) break; s += " "; continue; }
		if (c >= 32 && c < 127) s += String.fromCharCode(c);
		else s += ".";
	}
	return s;
}

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		if (step >= CMDS.length) return;
		if (Date.now() - tStep < 1500) return;
		tStep = Date.now();
		const cmd = CMDS[step++];
		console.log(">>> " + cmd);
		client.sendStringCmd(cmd);
	}
});

/* watch the raw traffic */
sock.on("message", (msg) => {
	const t = ascii(msg);
	/* ignore the noisy frame traffic */
	if (t.length > 4) {
		const interesting = t.replace(/[^A-Za-z0-9 _.:;\-\/]/g, "").trim();
		if (interesting.length > 6 && !/^f[0-9a-f]{6,}/i.test(interesting)) {
			console.log("S<-C svc=0x" + msg[8].toString(16) + " " + interesting.slice(0, 110));
		}
	}
	client.onDatagram(msg);
});
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 3000 + CMDS.length * 1500);
