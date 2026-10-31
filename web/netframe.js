/*
 * netframe.js - the client->server frame with a real netchan header:
 *
 *   [u16 seq][u16 flags][u16 relseq][u16 relflags][u8 char]...
 *
 * SoF.exe's 0x2004D640 reads the first two dwords (8 bytes) and then
 * checks `dword ptr [ebx+4] == 1` - i.e. the netchan FLAGS word must be
 * 1 (reliable) for the reliable path to be taken.
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
function u16(v) { const b = Buffer.alloc(2); b.writeUInt16LE(v & 0xffff, 0); return b; }
function build(text, o) {
	const body = Buffer.concat([Buffer.from(text, "latin1"), Buffer.from([0])]);
	const p = [u16(o.seq), u16(o.flags), u16(o.relseq), u16(o.relflags), Buffer.from([o.char])];
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
for (const seq of [0, 1, 2])
	for (const flags of [1, 0, 5, 0x8001])
		for (const relseq of [0, 1])
			for (const relflags of [0, 1])
				for (const ch of [2, 4])
					for (const sm of ["zero", "actual"])
						OPTS.push({ flags, char: ch, relseq, relflags, sm, seq });

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
