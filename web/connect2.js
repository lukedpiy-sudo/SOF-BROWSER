/*
 * connect2.js - SoF client connect with the EXACT engine format:
 *
 *   connect %i %i %i %d %4.2f "%s"
 *      1: 33              protocol
 *      2: 3               int(pi)  (engine FPU trick, 0x200F9DEC)
 *      3: <challenge>    cl_challenge  [0x201CA3FC]
 *      4: <unix time>    time(NULL)    [0x201CA400]
 *      5: 3.14           pi
 *      6: <userinfo>
 *
 * usage: node connect2.js <host> <port> [field2]
 */

"use strict";
const dgram = require("dgram");
const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "28910", 10);
const f2 = process.argv[4] || "3";
const UI = "\\name\\one\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";

const sock = dgram.createSocket("udp4");
let seq = 1, rel = 0, chal = null, tok = null;
const T0 = Date.now();

function oob(t) {
	sock.send(Buffer.concat([Buffer.from([0xff, 0xff, 0xff, 0xff]), Buffer.from(t, "latin1")]), port, host);
}
function hdr(r) { const h = Buffer.alloc(4); h.writeUInt16LE(r ? rel++ : seq++, 0); h.writeUInt16LE(0x8000, 2); return h; }
function str(s) {
	const t = Buffer.alloc(s.length + 1); t.write(s, 0, "latin1");
	const b = Buffer.alloc(3 + t.length);
	b[0] = 0x8b; b[1] = 0x44; b[2] = 0x04;
	t.copy(b, 3);
	sock.send(Buffer.concat([hdr(false), hdr(true), b]), port, host);
	console.log("  C->S  " + s);
}
sock.on("message", (m) => {
	if (m.length >= 4 && m[0] === 0xff && m[1] === 0xff) {
		const t = m.subarray(4).toString("latin1");
		console.log("  S->C  OOB: " + t.replace(/[^\x20-\x7e]/g, ".").slice(0, 80));
		if (t.startsWith("challenge ")) {
			chal = t.slice(10).trim();
			oob("connect 33 " + f2 + " " + chal + " " + Math.floor(Date.now() / 1000) +
				' 3.14 "' + UI + '"');
		} else if (t.startsWith("client_connect")) {
			str("new");
			setTimeout(() => str("configstrings 0 0"), 200);
			setTimeout(() => str("baselines 0 0"), 400);
			setTimeout(() => str("begin 0"), 600);
		} else if (t.startsWith("cmd configstrings")) {
			const p = t.trim().split(/\s+/);       // cmd configstrings <N> <V>
			tok = p[2];
			console.log("  --> server asks for configstrings, token = " + tok);
			str("configstrings " + tok + " " + (p[3] || "0"));
		} else if (t.startsWith("cmd baselines")) {
			const p = t.trim().split(/\s+/);
			str("baselines " + (p[2] || tok || "0") + " " + (p[3] || "0"));
		}
		return;
	}
	if (m.length <= 8) return;
	console.log("  S->C  PKT " + m.length + " @" + (Date.now() - T0) + "ms  " +
		m.toString("latin1").replace(/[^\x20-\x7e]/g, ".").slice(0, 70));
});
sock.bind(0, "0.0.0.0", () => { console.log("field2 = " + f2); oob("getchallenge 1\n"); });
setTimeout(() => { console.log("--- done ---"); process.exit(0); }, 10000);
