/*
 * gamestate.js - drive a SoF session the way the stock client does, so the
 * server hands us the gamestate (configstrings + entity snapshot).
 *
 * Client -> server frames (captured byte-exact from the stock SoF client):
 *
 *   stringcmd  [netchan hdr][reliable hdr][u16 seed][u8 type][NUL string]
 *   usercmd    [netchan hdr][reliable hdr][22-byte usercmd]
 *
 *   netchan hdr  = seq(u16 LE) | flags(u16 LE)      0x8000 = reliable
 *   reliable hdr = seq(u16 LE) | flags(u16 LE)
 *   type 4 = "new"          type 6 = "configstrings 42 0"
 *
 * usage: node gamestate.js <host> <port> [--seconds N]
 */

"use strict";

const dgram = require("dgram");

const host = process.argv[2];
const port = parseInt(process.argv[3], 10);
const seconds = parseInt((process.argv.includes("--seconds") ?
	process.argv.indexOf("--seconds") + 1 : "15"), 10);

const sock = dgram.createSocket("udp4");
let seq = 1, relSeq = 0, seed = 1, lastChallenge = "";

function oob(text) {
	sock.send(Buffer.concat([
		Buffer.from([0xff, 0xff, 0xff, 0xff]),
		Buffer.from(text, "latin1")
	]), port, host);
}

function netchanHdr() {
	const h = Buffer.alloc(4);
	h.writeUInt16LE(seq++, 0);
	h.writeUInt16LE(0x8000, 2);
	return h;
}

function netchanHdr0() {
	const h = Buffer.alloc(4);
	h.writeUInt16LE(seq++, 0);
	h.writeUInt16LE(0, 2);
	return h;
}

function reliableHdr() {
	const h = Buffer.alloc(4);
	h.writeUInt16LE(relSeq++, 0);
	h.writeUInt16LE(0x8000, 2);
	return h;
}

function sendStringCmd(s, type) {
	const body = Buffer.alloc(3 + s.length + 1);
	body.writeUInt16LE(seed & 0xffff, 0);
	body.writeUInt8(type, 2);
	body.write(s, 3, "latin1");
	body.writeUInt8(0, 3 + s.length);
	sock.send(Buffer.concat([netchanHdr(), reliableHdr(), body]), port, host);
}

function sendUserCmd(yaw) {
	// SoF's on-wire usercmd is 14 bytes: msec(4) buttons(4) angles(3 x i16)
	const b = Buffer.alloc(14);
	b.writeInt32LE(50, 0);        // msec
	b.writeInt32LE(0, 4);         // buttons
	b.writeInt16LE(0, 8);         // pitch
	b.writeInt16LE(yaw, 10);      // yaw
	b.writeInt16LE(0, 12);        // roll
	sock.send(Buffer.concat([netchanHdr(), reliableHdr(), b]), port, host);
}

sock.on("message", (msg) => {
	const isOOB = msg.length >= 4 && msg[0] === 0xff && msg[1] === 0xff;
	if (isOOB) {
		const t = msg.subarray(4).toString("latin1");
		console.log("OOB : " + t.replace(/[^\x20-\x7e]/g, ".").slice(0, 110));
		if (t.startsWith("challenge ")) {
			const challenge = t.slice(10).trim();
			const m = challenge;
			seed = Math.floor(Date.now() / 1000) & 0x7fffffff;
			const ui = "\\name\\webclient\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";
			const now = Math.floor(Date.now() / 1000);
			oob("connect 33 " + seed + " " + m + " " + now + " 3.14 \"" + ui + "\"");
		} else if (t.startsWith("client_connect")) {
			console.log("*** client_connect ***");
			sendStringCmd("new", 4);

			setTimeout(() => {
				console.log("*** request configstrings ***");
				sendStringCmd("configstrings " + Math.floor(Date.now()/1000), 4);
				setTimeout(() => sendStringCmd("baselines " + Math.floor(Date.now()/1000), 4), 120);
				setTimeout(() => sendStringCmd("begin " + Math.floor(Date.now()/1000), 4), 240);
						}, 300);
		}
		return;
	}
	const printable = msg.toString("latin1").replace(/[^\x20-\x7e]/g, ".");
	console.log("PKT len=" + msg.length + " hex=" + msg.toString("hex"));
	if (printable.trim().length > 0)
		console.log("      : " + printable.slice(0, 170));
});

sock.bind(0, "0.0.0.0", () => {
	oob("getchallenge 1\n");
	
});

setTimeout(() => { console.log("--- done ---"); process.exit(0); }, seconds * 1000);
