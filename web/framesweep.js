/*
 * framesweep.js - with the checksum now correct, sweep the remaining
 * frame-format unknowns in one connection:
 *   command char, NUL-terminated text or not, the sequence encoding,
 *   and which sequence the checksum key is derived from.
 */
"use strict";
const dgram = require("dgram");
const { checksum } = require("./sofmd4.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "28910", 10);
const UI = "\\name\\one\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";

const sock = dgram.createSocket("udp4");
let chal = null, seq = 0;
let hit = false;

function oob(t) {
	sock.send(Buffer.concat([Buffer.from([0xff, 0xff, 0xff, 0xff]), Buffer.from(t, "latin1")]), port, host);
}
function frame(text, o) {
	const body = Buffer.from(text, "latin1");
	const withNul = Buffer.concat([body, Buffer.from([0])]);
	const hashed = o.nul ? withNul : body;
	const s = seq++;
	const cs = checksum(hashed.toString("latin1").replace(/\0+$/, ""), o.seqmode === "actual" ? s : 0);
	// o.pre = number of bytes the receiver strips before the stream
	const P = o.pre;
	const f = Buffer.alloc(P + 6 + withNul.length);
	for (let q = 0; q < P; q++) f[q] = (q === 0 ? (o.seed & 0xff) : (o.seed >> 8) & 0xff);
	f[P] = o.char;
	f[P + 1] = cs;
	f.writeUInt32LE(s >>> 0, P + 2);
	withNul.copy(f, P + 6);
	return f;
}
const OPTS = [];
for (const pre of [0, 2, 4, 8, 10])      // bytes stripped before the stream
	for (const ch of [2, 4])                // the command char
		for (const nul of [true, false])    // NUL-terminated text or not
			for (const sm of ["zero", "actual"])
				OPTS.push({ pre, char: ch, nul, seqmode: sm, seed: 17547 });

let vi = 0;
function step() {
	if (vi >= OPTS.length) { console.log("--- all " + OPTS.length + " variants sent ---"); return; }
	const o = OPTS[vi++];
	const f = frame("new", o);
	sock.send(f, port, host);
	console.log("  variant " + vi + " " + JSON.stringify(o) + "  " + f.toString("hex"));
	setTimeout(step, 220);
}
sock.on("message", (m) => {
	if (m.length >= 4 && m[0] === 0xff && m[1] === 0xff) {
		const t = m.subarray(4).toString("latin1");
		console.log("  S->C OOB: " + t.replace(/[^\x20-\x7e]/g, ".").slice(0, 100));
		if (t.startsWith("challenge ")) {
			chal = t.slice(10).trim();
			oob("connect 33 3 " + chal + " " + Math.floor(Date.now() / 1000) + ' 3.14 "' + UI + '"');
		} else if (t.startsWith("client_connect")) {
			setTimeout(step, 300);
		} else if (t.startsWith("cmd ")) {
			hit = true;
			console.log("  *** GOT SERVER COMMAND: " + t);
		}
		return;
	}
	if (m.length <= 8) return;
	const raw = m.toString("latin1");
	console.log("  S->C PKT " + m.length + ": " + raw.replace(/[^\x20-\x7e]/g, ".").slice(0, 200));
	const i = raw.indexOf("cmd ");
	if (i >= 0) { hit = true; console.log("  *** GOT SERVER COMMAND IN PACKET: " + raw.slice(i, i + 60)); }
});
sock.bind(0, "0.0.0.0", () => oob("getchallenge 1\n"));
setTimeout(() => { console.log(hit ? "RESULT: at least one variant worked" : "RESULT: no variant worked"); process.exit(0); }, OPTS.length * 250 + 4000);
