"use strict";
/* cmdprobe.js - send a type-2 usercmd frame and see if the server accepts it.
 *
 * The type-2 frame is:
 *   [netchan seq u16 LE][0x8000][ack u16 LE][0x8000][seed u16 LE]
 *   [0x02][checksum][u32 seq][the cmd bit stream]
 *
 * The cmd bit stream is produced by tools\cmdwrite2.exe (the stock client
 * writer) and pasted in as a hex string, or read from a file.
 *
 * usage: node cmdprobe.js <host> <port> [--cmds file.hex] [--count N]
 */
const dgram = require("dgram");
const fs = require("fs");
const crypto = require("crypto");

const argv = process.argv.slice(2);
const opt = (n, d) => { const i = argv.indexOf(n); return i >= 0 ? argv[i + 1] : d; };
const host = argv[0] || "127.0.0.1";
const port = parseInt(argv[1] || "28910", 10);
const count = parseInt(opt("--count", "20"), 10);

const KEY = fs.readFileSync(require("path").join(__dirname, "sofkey.bin"));
const UI = "\\name\\webclient\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";

/* the engine's checksum over a raw payload buffer */
const { md4, keyBytes } = require("./sofmd4.js");
function checksum(payload, seq) {
	const d = md4(Buffer.concat([payload, keyBytes(seq)]));
	return (d[0] ^ d[1] ^ d[2] ^ d[3]) & 0xff;
}

function checksum(payload, seq) {
	const k = seq % 3000;
	const kb = Buffer.from([
		(KEY[k + 0] ^ (seq & 0xff)) & 0xff,
		KEY[k + 1],
		(KEY[k + 2] ^ ((seq >> 8) & 0xff)) & 0xff,
		KEY[k + 3]
	]);
	const d = md4(Buffer.concat([payload, kb]));
	return (d[0] ^ d[1] ^ d[2] ^ d[3]) & 0xff;
}

const sock = dgram.createSocket("udp4");
let seed = 3, seq = 1, srvSeq = 0, msec = 0, sent = 0;
let cmdStream = Buffer.from("006400", "hex");

function hdr() {
	const b = Buffer.alloc(10);
	b.writeUInt16LE(seq++ & 0xffff, 0);
	b.writeUInt16LE(0x8000, 2);
	b.writeUInt16LE(srvSeq & 0xffff, 4);
	b.writeUInt16LE(0x8000, 6);
	b.writeUInt16LE(seed & 0xffff, 8);
	return b;
}
function oob(text) {
	sock.send(Buffer.concat([Buffer.from([0xff, 0xff, 0xff, 0xff]), Buffer.from(text, "latin1")]), port, host);
	console.log("C->S OOB : " + JSON.stringify(text));
}
function sendCmd(text) {
	const t = Buffer.from(text, "latin1");
	const body = Buffer.alloc(3 + t.length + 1);
	body.writeUInt16LE(seed & 0xffff, 0);
	body.writeUInt8(4, 2);
	t.copy(body, 3);
	body.writeUInt8(0, 3 + t.length);
	sock.send(Buffer.concat([hdr(), body]), port, host);
	console.log("C->S cmd : " + JSON.stringify(text) + "  [" + Buffer.concat([hdr(), body]).toString("hex") + "]");
}
function sendUserCmd() {
	/* [u8 2][u8 checksum][u32 seq][the cmd bit stream]
	 * the checksum's key sequence is the outgoing netchan sequence, which the
	 * stock client takes from its own sequence counter */
	const h = hdr();
	const inner = Buffer.alloc(4 + cmdStream.length);
	inner.writeUInt32LE(seq & 0xffff, 0);
	cmdStream.copy(inner, 4);
	const key = parseInt(opt("--key", "nseq"), 10) === 0 ? 0 : (seq - 1);
	const ck = checksum(inner, key);
	const f = Buffer.concat([h, Buffer.from([2, ck]), inner]);
	sock.send(f, port, host);
	if (sent < 4) console.log("C->S ucmd: [" + f.toString("hex") + "]  ck=0x" + ck.toString(16) + " key=" + key);
	sent++;
}
sock.on("message", (m) => {
	if (m.length >= 4 && m[0] === 0xff && m[1] === 0xff) {
		const t = m.subarray(4).toString("latin1");
		console.log("S->C OOB : " + JSON.stringify(t.slice(0, 90)));
		if (t.startsWith("challenge ")) {
			const ch = t.slice(10).trim();
			seed = parseInt(opt("--seed", "3"), 10);
			oob("connect 33 " + seed + " " + ch + " " + Math.floor(Date.now() / 1000) + ' 3.14 "' + UI + '"\n');
		} else if (t.startsWith("client_connect")) {
			sendCmd("new");
			setTimeout(() => sendCmd("configstrings 42 0"), 200);
			setTimeout(() => sendCmd("baselines 42 0"), 350);
			setTimeout(() => sendCmd("ghoulstrings 42 0"), 500);
			setTimeout(() => sendCmd("begin 42"), 650);
			setTimeout(() => {
				const iv = setInterval(() => {
					msec += 50;
					sendUserCmd();
					if (sent >= count) { clearInterval(iv); setTimeout(() => process.exit(0), 2000); }
				}, 50);
			}, 900);
		}
		return;
	}
	if (m.length >= 2) srvSeq = m.readUInt16LE(0);
	const a = m.toString("latin1").replace(/[^\x20-\x7e]/g, ".");
	if (m.length > 8 || a.indexOf("cmd") >= 0)
		console.log("S->C len=" + m.length + " " + m.subarray(0, 32).toString("hex") + "  " + JSON.stringify(a.slice(0, 90)));
});
const cf = opt("--cmds", null);
if (cf) cmdStream = Buffer.from(fs.readFileSync(cf, "latin1").trim(), "hex");
sock.bind(0, "0.0.0.0", () => oob("getchallenge 1\n"));
setTimeout(() => { console.log("--- done, sent " + sent + " usercmds ---"); process.exit(0); }, 12000);

