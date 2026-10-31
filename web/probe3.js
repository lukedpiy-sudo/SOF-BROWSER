"use strict";
/* probe3.js - connect, learn our port, then send type-4 command frames. */
const dgram = require("dgram");
const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "28910", 10);
const UI = "\\name\\one\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";

function hex(b) { return Array.from(b).map(x => x.toString(16).padStart(2, "0")).join(" "); }
const sock = dgram.createSocket("udp4");
let chal = null, myport = 0, seq = 0, sent = false, serverU16 = 0;
function oob(t) {
	sock.send(Buffer.concat([Buffer.from([0xff, 0xff, 0xff, 0xff]), Buffer.from(t, "latin1")]), port, host);
	console.log("C->S OOB: " + JSON.stringify(t));
}
function frame(seq, ack, u16, type, text) {
	const b = Buffer.alloc(10 + 1 + text.length + 1);
	b.writeUInt32BE(seq >>> 0, 0);
	b.writeUInt32BE(ack >>> 0, 4);
	b.writeUInt16BE(u16 & 0xffff, 8);
	b[10] = type;
	b.write(text, 11, "latin1");
	b[b.length - 1] = 0;
	return b;
}
function send(text, opts) {
	const o = opts || {};
	seq++;
	const u16v = o.u16 !== undefined ? o.u16 : (process.env.U16 !== undefined ? parseInt(process.env.U16, 16) : (process.env.ECHO ? serverU16 : myport));
	const f = frame(seq, o.ack || 0, u16v, o.type === undefined ? 4 : o.type, text);
	sock.send(f, port, host);
	console.log("C->S seq=" + seq + " ack=" + (o.ack || 0) + " u16=0x" + (u16v & 0xffff).toString(16) + " type=" + (o.type === undefined ? 4 : o.type) + " " + JSON.stringify(text));
	console.log("   " + hex(f));
}
sock.on("message", (m) => {
	if (m.length >= 4 && m[0] === 0xff && m[1] === 0xff) {
		const t = m.subarray(4).toString("latin1");
		console.log("S->C OOB: " + JSON.stringify(t));
		if (t.startsWith("challenge ")) {
			chal = t.slice(10).trim();
			oob("connect 33 3 " + chal + " " + Math.floor(Date.now() / 1000) + ' 3.14 "' + UI + '"\n');
		}
		return;
	}
	console.log("S->C len=" + m.length + "  " + hex(m.subarray(0, Math.min(m.length, 48))));
	console.log("   ascii: " + JSON.stringify(m.toString("latin1").replace(/[^\x20-\x7e]/g, ".").slice(0, 120)));
	if (m.length > 10 && !sent) {
		const su16 = m.readUInt16BE(8);
		console.log("   server msg u16=0x" + su16.toString(16) + " type=" + m[10] + "  (our port=" + myport + " = 0x" + myport.toString(16) + ")");
		sent = true;
		if (process.env.ECHO) { serverU16 = su16; }
	}
});
sock.bind(0, "0.0.0.0", () => {
	myport = sock.address().port;
	console.log("our local port = " + myport + " (0x" + myport.toString(16) + ")");
	oob("getchallenge 1\n");
});
setTimeout(() => { console.log("--- sending 'new' ---"); send("new"); }, 1500);
setTimeout(() => { console.log("--- done ---"); process.exit(0); }, 9000);
