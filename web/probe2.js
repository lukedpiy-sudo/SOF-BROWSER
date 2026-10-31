"use strict";
/* probe2.js - send raw client->server frames in the discovered layout:
 *   [u32 dword0][u32 dword1][u16 u16][u8 type][text\0]
 * and watch for a server answer.
 */
const dgram = require("dgram");
const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "28910", 10);
const UI = "\\name\\one\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";

function hex(b) { return Array.from(b).map(x => x.toString(16).padStart(2, "0")).join(" "); }
const sock = dgram.createSocket("udp4");
let chal = null;
function oob(t) {
	sock.send(Buffer.concat([Buffer.from([0xff, 0xff, 0xff, 0xff]), Buffer.from(t, "latin1")]), port, host);
	console.log("C->S OOB: " + JSON.stringify(t));
}
// frame builder
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
function send(seq, ack, u16, type, text) {
	const f = frame(seq, ack, u16, type, text);
	sock.send(f, port, host);
	console.log("C->S frame seq=" + seq + " ack=" + ack + " u16=0x" + (u16 & 0xffff).toString(16) + " type=" + type + " text=" + JSON.stringify(text));
	console.log("   bytes: " + hex(f));
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
	console.log("S->C len=" + m.length + "  " + hex(m.subarray(0, Math.min(m.length, 64))));
	console.log("   ascii: " + JSON.stringify(m.toString("latin1").replace(/[^\x20-\x7e]/g, ".").slice(0, 120)));
});
sock.bind(0, "0.0.0.0", () => oob("getchallenge 1\n"));

const variants = [];
if (process.env.VARIANTS) {
	for (const v of process.env.VARIANTS.split(";")) {
		const p = v.split(",");
		variants.push({ seq: +p[0], ack: +p[1], u16: parseInt(p[2], 16) & 0xffff, type: +p[3], text: p[4] });
	}
} else {
	variants.push({ seq: 1, ack: 0, u16: 0, type: 4, text: "new" });
}
let vi = 0;
function next() {
	if (vi >= variants.length) { console.log("--- all variants sent ---"); return; }
	const v = variants[vi++];
	send(v.seq, v.ack, v.u16, v.type, v.text);
}
setTimeout(() => { next(); }, 1200);
const iv = setInterval(() => { if (vi >= variants.length) { clearInterval(iv); } else next(); }, 700);
setTimeout(() => { console.log("--- done ---"); process.exit(0); }, 20000);
