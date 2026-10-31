"use strict";
/* framesweep3.js - try frame variants of the SoF stringcmd channel.
 *
 * frame = [netchan hdr][reliable hdr][u16 seed][u8 type][NUL string]
 *   netchan hdr  = seq(u16 LE) | flags(u16 LE)
 *   reliable hdr = relSeq(u16 LE) | flags(u16 LE)
 */
const dgram = require("dgram");
const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "28910", 10);
const UI = "\\name\\webclient\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";

/* each variant: connect with a given seed and send one "new" frame */
const VARIANTS = [
	{ name: "baseline",        seed: 3,     nseq: 1, nflg: 0x8000, rseq: 1, rflg: 0x8000, seedBE: true,  pad: 0 },
	{ name: "flags=0",         seed: 3,     nseq: 1, nflg: 0x0000, rseq: 1, rflg: 0x8000, seedBE: true,  pad: 0 },
	{ name: "rel=0",           seed: 3,     nseq: 1, nflg: 0x8000, rseq: 0, rflg: 0x8000, seedBE: true,  pad: 0 },
	{ name: "relflags=0",      seed: 3,     nseq: 1, nflg: 0x8000, rseq: 1, rflg: 0x0000, seedBE: true,  pad: 0 },
	{ name: "nseq=0",          seed: 3,     nseq: 0, nflg: 0x8000, rseq: 1, rflg: 0x8000, seedBE: true,  pad: 0 },
	{ name: "seedLE",          seed: 3,     nseq: 1, nflg: 0x8000, rseq: 1, rflg: 0x8000, seedBE: false, pad: 0 },
	{ name: "padded64",        seed: 3,     nseq: 1, nflg: 0x8000, rseq: 1, rflg: 0x8000, seedBE: true,  pad: 64 },
	{ name: "seed=1234",       seed: 1234,  nseq: 1, nflg: 0x8000, rseq: 1, rflg: 0x8000, seedBE: true,  pad: 0 }
];

function hex(b) { return b.toString("hex"); }
const socks = [];

function build(v) {
	const h = Buffer.alloc(4);
	h.writeUInt16LE(v.nseq & 0xffff, 0);
	h.writeUInt16LE(v.nflg & 0xffff, 2);
	const r = Buffer.alloc(4);
	r.writeUInt16LE(v.rseq & 0xffff, 0);
	r.writeUInt16LE(v.rflg & 0xffff, 2);
	const t = Buffer.from("new", "latin1");
	const body = Buffer.alloc(3 + t.length + 1 + v.pad);
	if (v.seedBE) body.writeUInt16BE(v.seed & 0xffff, 0); else body.writeUInt16LE(v.seed & 0xffff, 0);
	body.writeUInt8(4, 2);
	t.copy(body, 3);
	body.writeUInt8(0, 3 + t.length);
	return Buffer.concat([h, r, body]);
}

function tryVariant(v) {
	const sock = dgram.createSocket("udp4");
	let chal = null;
	function oob(text) {
		sock.send(Buffer.concat([Buffer.from([0xff, 0xff, 0xff, 0xff]), Buffer.from(text, "latin1")]), port, host);
	}
	sock.on("message", (m) => {
		if (m.length >= 4 && m[0] === 0xff && m[1] === 0xff) {
			const t = m.subarray(4).toString("latin1");
			if (t.startsWith("challenge ") && !chal) {
				chal = t.slice(10).trim();
				const now = Math.floor(Date.now() / 1000);
				oob("connect 33 " + v.seed + " " + chal + " " + now + ' 3.14 "' + UI + '"\n');
			}
			return;
		}
		const a = m.toString("latin1").replace(/[^\x20-\x7e]/g, ".");
		if (m.length > 8 || a.indexOf("cmd") >= 0) {
			console.log("[" + v.name + "] S->C len=" + m.length + " " + hex(m.subarray(0, 40)) + "  " + JSON.stringify(a.slice(0, 90)));
		}
	});
	sock.bind(0, "0.0.0.0", () => {
		oob("getchallenge 1\n");
		setTimeout(() => {
			const f = build(v);
			sock.send(f, port, host);
			console.log("[" + v.name + "] C->S " + hex(f));
		}, 900);
	});
	socks.push(sock);
}

let i = 0;
function next() {
	if (i >= VARIANTS.length) { console.log("--- all sent ---"); return; }
	tryVariant(VARIANTS[i++]);
}
setTimeout(next, 300);
const iv = setInterval(() => { if (i >= VARIANTS.length) clearInterval(iv); else next(); }, 1500);
setTimeout(() => { console.log("--- done ---"); process.exit(0); }, 22000);
