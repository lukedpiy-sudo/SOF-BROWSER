/*
 * dispatchtest.js - is the in-band message dispatched?
 *
 * Phase 1: connect, send NOTHING, log every packet for 2s.
 * Phase 2: send "new", log every packet for 2s.
 * Phase 3: send "disconnect", log every packet for 2s.
 *
 * If the 39-byte userinfo packet appears in phase 1, it comes from the
 * connect path and our in-band messages are NOT dispatched at all.
 */

"use strict";
const dgram = require("dgram");
const host = "127.0.0.1", port = 28910;
const UI = "\\name\\one\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";

const sock = dgram.createSocket("udp4");
let seq = 1, rel = 0, chal = null, phase = 1;
const T0 = Date.now();

function oob(t) {
	sock.send(Buffer.concat([Buffer.from([0xff, 0xff, 0xff, 0xff]), Buffer.from(t, "latin1")]), port, host);
}
function hdr(r) { const h = Buffer.alloc(4); h.writeUInt16LE(r ? rel++ : seq++, 0); h.writeUInt16LE(0x8000, 2); return h; }
function str(s) {
	const t = Buffer.alloc(s.length + 1); t.write(s, 0, "latin1");
	const b = Buffer.alloc(3 + t.length);
	b[0] = 0x8b; b[1] = 0x44; b[2] = 0x04;      // exactly the stock client's shape
	t.copy(b, 3);
	sock.send(Buffer.concat([hdr(false), hdr(true), b]), port, host);
	console.log("  C->S [" + phase + "] " + s);
}
sock.on("message", (m) => {
	if (m.length >= 4 && m[0] === 0xff && m[1] === 0xff) {
		const t = m.subarray(4).toString("latin1");
		console.log("  S->C OOB: " + t.replace(/[^\x20-\x7e]/g, ".").slice(0, 60));
		if (t.startsWith("challenge ")) {
			chal = t.slice(10).trim();
			oob("connect 33 1 " + chal + " " + chal + " 3.14 \"" + UI + "\"");
		} else if (t.startsWith("client_connect")) setTimeout(() => { phase = 2; str("new"); }, 400);
		return;
	}
	if (m.length <= 8) return;
	console.log("  S->C PKT " + m.length + " @" + (Date.now() - T0) + "ms  " +
		m.toString("latin1").replace(/[^\x20-\x7e]/g, ".").slice(0, 50));
});
sock.bind(0, "0.0.0.0", () => {
	oob("getchallenge 1\n");
	setTimeout(() => { console.log("--- phase 1 done (connect only) ---"); phase = 2; str("new"); }, 2000);
	setTimeout(() => { console.log("--- phase 2 done (after new) ---"); phase = 3; str("disconnect"); }, 4000);
	setTimeout(() => { console.log("--- phase 3 done (after disconnect) ---"); process.exit(0); }, 6000);
});
