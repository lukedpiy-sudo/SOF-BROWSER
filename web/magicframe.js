/*
 * magicframe.js - the frame with SoF.exe's magic:
 *
 *   [u32 0x1234ABCD][u32 1][u8 cmd char][u8 checksum][u32 seq][text]
 *
 * 0x1234ABCD is written by the client at 0x20060237 and the server
 * checks `dword ptr [ebx+4] == 1` (0x2004D668) before taking the
 * reliable path.
 */
"use strict";
const dgram = require("dgram");
const { checksum } = require("./sofmd4.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "28910", 10);
const UI = "\\name\\one\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";
const sock = dgram.createSocket("udp4");
let chal = null, seq = 0, hit = false;

function oob(t) {
	sock.send(Buffer.concat([Buffer.from([0xff, 0xff, 0xff, 0xff]), Buffer.from(t, "latin1")]), port, host);
}
function u32(v) { const b = Buffer.alloc(4); b.writeUInt32LE(v >>> 0, 0); return b; }
function build(text, o) {
	const body = Buffer.concat([Buffer.from(text, "latin1"), Buffer.from([0])]);
	const p = [u32(o.magic), u32(o.d2)];
	if (o.d3 !== undefined) p.push(u32(o.d3));
	p.push(Buffer.from([o.char]));
	if (o.char === 2) {
		const c = Buffer.alloc(5);
		c[0] = checksum(text, o.sm === "actual" ? o.seq : 0);
		c.writeUInt32LE(o.seq >>> 0, 1);
		p.push(c);
	}
	p.push(body);
	return Buffer.concat(p);
}
const OPTS = [];
for (const magic of [0x1234abcd, 0, 1])
	for (const d2 of [1, 0])
		for (const d3 of [undefined, 0, 1])
			for (const ch of [2, 4])
				for (const sm of ["zero", "actual"])
					OPTS.push({ magic, d2, d3, char: ch, sm, seq: 1 });

let vi = 0;
function step() {
	if (vi >= OPTS.length) { console.log("--- all sent ---"); return; }
	const o = OPTS[vi++];
	const f = build("new", o);
	sock.send(f, port, host);
	console.log("  v" + vi + " " + JSON.stringify(o) + "  " + f.toString("hex"));
	setTimeout(step, 170);
}
sock.on("message", (m) => {
	if (m.length >= 4 && m[0] === 0xff && m[1] === 0xff) {
		const t = m.subarray(4).toString("latin1");
		console.log("  S->C OOB: " + t.replace(/[^\x20-\x7e]/g, ".").slice(0, 100));
		if (t.startsWith("challenge ")) {
			chal = t.slice(10).trim();
			oob("connect 33 3 " + chal + " " + Math.floor(Date.now() / 1000) + ' 3.14 "' + UI + '"');
		} else if (t.startsWith("client_connect")) setTimeout(step, 300);
		else if (t.startsWith("cmd ")) { hit = true; console.log("  *** SERVER COMMAND: " + t); }
		return;
	}
	if (m.length <= 8) return;
	const raw = m.toString("latin1");
	console.log("  S->C PKT " + m.length + ": " + raw.replace(/[^\x20-\x7e]/g, ".").slice(0, 220));
	const i = raw.indexOf("cmd ");
	if (i >= 0) { hit = true; console.log("  *** SERVER COMMAND IN PKT: " + raw.slice(i, i + 60)); }
});
sock.bind(0, "0.0.0.0", () => oob("getchallenge 1\n"));
setTimeout(() => { console.log(hit ? "RESULT: a variant worked!" : "RESULT: no variant worked"); process.exit(0); }, OPTS.length * 180 + 4000);
