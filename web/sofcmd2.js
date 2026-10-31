/*
 * sofcmd2.js - one connection, many command-frame variants, increasing
 * sequence numbers. Watches for ANY server reply to "new"/"info".
 *
 * Frame candidates:
 *   [char][cksum][u32 seq][text]     (type 2, checksummed)
 *   [char][text]                     (type 4, plain)
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

function cksum(body, seq, idx) {
	const b = Buffer.alloc(body.length + 4);
	body.copy(b, 0);
	const k = seq % 3000;
	b[body.length + 0] = (KEY[k + 0] ^ (seq & 0xff)) & 0xff;
	b[body.length + 1] = KEY[k + 1];
	b[body.length + 2] = (KEY[k + 2] ^ ((seq >> 8) & 0xff)) & 0xff;
	b[body.length + 3] = KEY[k + 3];
	return crypto.createHash("sha1").update(b).digest()[idx] & 0xff;
}

const sock = dgram.createSocket("udp4");
let chal = null, seq = 0;

function oob(t) {
	sock.send(Buffer.concat([Buffer.from([0xff, 0xff, 0xff, 0xff]), Buffer.from(t, "latin1")]), port, host);
}
function raw(buf, label) {
	sock.send(buf, port, host);
	console.log("  C->S " + label + "  " + buf.toString("hex"));
}
function type2(text, idx, nul) {
	const t = Buffer.from(text, "latin1");
	const body = nul ? Buffer.concat([t, Buffer.from([0])]) : t;
	const s = seq++;
	const f = Buffer.alloc(6 + body.length);
	f[0] = 2; f[1] = cksum(body, 0, idx); f.writeUInt32LE(s >>> 0, 2);
	body.copy(f, 6);
	raw(f, "T2 \"" + text + "\" seq=" + s + " idx=" + idx + " nul=" + nul);
}
function type4(text) {
	const t = Buffer.from(text, "latin1");
	const f = Buffer.concat([Buffer.from([4]), t, Buffer.from([0])]);
	raw(f, "T4 \"" + text + "\"");
}

const VARIANTS = [];
for (const idx of [0, 19]) for (const nul of [true, false]) VARIANTS.push({ k: "t2", idx, nul });
VARIANTS.push({ k: "t2", idx: 0, nul: true }, { k: "t2", idx: 19, nul: true });
VARIANTS.push({ k: "t4" });

let vi = 0;
function step() {
	if (vi >= VARIANTS.length) { console.log("--- done ---"); return; }
	const v = VARIANTS[vi++];
	const txt = (vi % 2 === 1) ? "new" : "info";
	if (v.k === "t2") type2(txt, v.idx, v.nul); else type4(txt);
	setTimeout(step, 350);
}
sock.on("message", (m) => {
	if (m.length >= 4 && m[0] === 0xff && m[1] === 0xff) {
		const t = m.subarray(4).toString("latin1");
		console.log("  S->C OOB: " + t.replace(/[^\x20-\x7e]/g, ".").slice(0, 90));
		if (t.startsWith("challenge ")) {
			chal = t.slice(10).trim();
			oob("connect 33 3 " + chal + " " + Math.floor(Date.now() / 1000) + ' 3.14 "' + UI + '"');
		} else if (t.startsWith("client_connect")) setTimeout(step, 400);
		return;
	}
	if (m.length <= 8) return;
	console.log("  S->C PKT " + m.length + ": " +
		m.toString("latin1").replace(/[^\x20-\x7e]/g, ".").slice(0, 240));
});
sock.bind(0, "0.0.0.0", () => oob("getchallenge 1\n"));
setTimeout(() => process.exit(0), VARIANTS.length * 400 + 4000);
