/*
 * sofcmd.js - send a checksummed SoF client command.
 *
 * Frame layout (reverse engineered from SoF.exe):
 *   [u8  command char = 2][u8 checksum][u32 sequence LE][text bytes]
 *
 * checksum = SHA1( text || keybytes )[byte] & 0xFF
 *   keybytes[0] = KEY[(seq%3000)+0] ^ (seq & 0xFF)
 *   keybytes[1] = KEY[(seq%3000)+1]
 *   keybytes[2] = KEY[(seq%3000)+2] ^ ((seq>>8) & 0xFF)
 *   keybytes[3] = KEY[(seq%3000)+3]
 *
 * usage: node sofcmd.js [host] [port]
 */

"use strict";
const dgram = require("dgram");
const fs = require("fs");
const crypto = require("crypto");
const path = require("path");

const KEY = fs.readFileSync(path.join(__dirname, "sofkey.bin"));
const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "28910", 10);
const UI = "\\name\\one\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";

function checksum(text, seq, byteIdx) {
	const b = Buffer.alloc(text.length + 4);
	text.copy(b, 0);
	const k = seq % 3000;
	b[text.length + 0] = (KEY[k + 0] ^ (seq & 0xff)) & 0xff;
	b[text.length + 1] = KEY[k + 1];
	b[text.length + 2] = (KEY[k + 2] ^ ((seq >> 8) & 0xff)) & 0xff;
	b[text.length + 3] = KEY[k + 3];
	const d = crypto.createHash("sha1").update(b).digest();
	return d[byteIdx] & 0xff;
}

function frame(text, seq, byteIdx, nul) {
	const t = Buffer.from(text, "latin1");
	const body = nul ? Buffer.concat([t, Buffer.from([0])]) : t;
	const f = Buffer.alloc(6 + body.length);
	f[0] = 2;
	f[1] = checksum(body, seq, byteIdx);
	f.writeUInt32LE(seq >>> 0, 2);
	body.copy(f, 6);
	return f;
}

const VARIANTS = [];
for (const seq of [0, 1]) for (const byteIdx of [0, 19]) for (const nul of [true, false])
	VARIANTS.push({ seq, byteIdx, nul });

const sock = dgram.createSocket("udp4");
let chal = null, vi = 0, done = false;

function oob(t) {
	sock.send(Buffer.concat([Buffer.from([0xff, 0xff, 0xff, 0xff]), Buffer.from(t, "latin1")]), port, host);
}
function send(text, v) {
	const f = frame(text, v.seq, v.byteIdx, v.nul);
	sock.send(f, port, host);
	console.log("  C->S cmd \"" + text + "\" seq=" + v.seq + " cksumByte=" + v.byteIdx +
		" nul=" + v.nul + "  frame=" + f.toString("hex"));
}
function next() {
	if (vi >= VARIANTS.length) { console.log("--- all variants tried ---"); return; }
	const v = VARIANTS[vi++];
	console.log("== variant " + vi + ": " + JSON.stringify(v));
	send("new", v);
	setTimeout(() => { send("info", v); }, 500);
	setTimeout(next, 1200);
}
sock.on("message", (m) => {
	if (m.length >= 4 && m[0] === 0xff && m[1] === 0xff) {
		const t = m.subarray(4).toString("latin1");
		console.log("  S->C OOB: " + t.replace(/[^\x20-\x7e]/g, ".").slice(0, 90));
		if (t.startsWith("challenge ")) {
			chal = t.slice(10).trim();
			oob("connect 33 3 " + chal + " " + Math.floor(Date.now() / 1000) + ' 3.14 "' + UI + '"');
		} else if (t.startsWith("client_connect")) {
			setTimeout(next, 300);
		}
		return;
	}
	if (m.length <= 8) return;
	const txt = m.toString("latin1").replace(/[^\x20-\x7e]/g, ".");
	console.log("  S->C PKT " + m.length + ": " + txt.slice(0, 220));
});
sock.bind(0, "0.0.0.0", () => oob("getchallenge 1\n"));
setTimeout(() => process.exit(0), VARIANTS.length * 1300 + 3000);
