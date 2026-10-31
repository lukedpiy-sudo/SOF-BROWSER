/*
 * oneshot.js - one connection, full logging, so we can see exactly what the
 * server sends back for a given token.
 *
 * usage: node oneshot.js <host> <port> <token>
 */

"use strict";

const dgram = require("dgram");

const host = process.argv[2];
const port = parseInt(process.argv[3], 10);
const token = process.argv[4] || String(Math.floor(Date.now() / 1000));

const sock = dgram.createSocket("udp4");
let seq = 1, rel = 0, n = 0, chal = token;

function oob(t) {
	sock.send(Buffer.concat([
		Buffer.from([0xff, 0xff, 0xff, 0xff]), Buffer.from(t, "latin1")
	]), port, host);
}
function netHdr() {
	const h = Buffer.alloc(4);
	h.writeUInt16LE(seq++, 0); h.writeUInt16LE(0x8000, 2); return h;
}
function relHdr() {
	const h = Buffer.alloc(4);
	h.writeUInt16LE(rel++, 0); h.writeUInt16LE(0x8000, 2); return h;
}
function str(s) {
	const b = Buffer.alloc(3 + s.length + 1);
	b.writeUInt16LE(token & 0xffff, 0);
	b.writeUInt8(0x44, 2);
	b.write(s, 3, "latin1");
	b.writeUInt8(0, 3 + s.length);
	sock.send(Buffer.concat([netHdr(), relHdr(), b]), port, host);
	console.log("C->S  " + s);
}

sock.on("message", (msg) => {
	n++;
	if (msg.length >= 4 && msg[0] === 0xff && msg[1] === 0xff) {
		const t = msg.subarray(4).toString("latin1");
		console.log("S->C  OOB: " + t.replace(/[^\x20-\x7e]/g, "."));
		if (t.startsWith("challenge ")) {
			const m = t.slice(10).trim();
			chal = m;
			const ui = "\\name\\one\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";
			oob("connect 33 1 " + m + " " + token + " 3.14 \"" + ui + "\"");
		} else if (t.startsWith("client_connect")) {
			str("new");
			setTimeout(() => str("configstrings " + chal + " 0"), 150);
			setTimeout(() => str("baselines " + chal + " 0"), 300);
			setTimeout(() => str("begin " + chal), 450);
		}
		return;
	}
	if (msg.length <= 8) { console.log("S->C  keepalive (" + msg.length + ")"); return; }
	console.log("S->C  PKT " + msg.length + " bytes");
	console.log("      hex: " + msg.toString("hex").slice(0, 240));
	console.log("      txt: " + msg.toString("latin1").replace(/[^\x20-\x7e]/g, ".").slice(0, 200));
});

sock.bind(0, "0.0.0.0", () => {
	console.log("token =", token);
	oob("getchallenge " + token + "\n");
});
setTimeout(() => { console.log("--- " + n + " packets ---"); process.exit(0); }, 12000);
