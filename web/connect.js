/*
 * connect.js - a minimal SoF/Q3 protocol client.
 *
 * Implements the connectionless handshake that was captured from the stock
 * SoF client and server:
 *
 *   C->S  ffffffff "getchallenge <n>\n"
 *   S->C  ffffffff "challenge <m>"
 *   C->S  ffffffff "connect 33 <seed> <m> <resp> 3.14 \"<userinfo>\"\n"
 *   S->C  ffffffff "client_connect"
 *
 * then the netchan, whose packets look like
 *   01|02|03 00 00 80  <u16 len>  <payload>
 *
 * usage: node connect.js <host> <port> [--resp N] [--userinfo "..."] [--seconds N]
 */

"use strict";

const dgram = require("dgram");

const argv = process.argv.slice(2);
const host = argv[0];
const port = parseInt(argv[1], 10);

function opt(name, dflt) {
	const i = argv.indexOf(name);
	return i >= 0 ? argv[i + 1] : dflt;
}

const RESP = parseInt(opt("--resp", "0"), 10);
const SECONDS = parseInt(opt("--seconds", "10"), 10);
const USERINFO = opt("--userinfo",
	"\\name\\webclient\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0");

const PROTO = 33;
const VERSION = "3.14";

const sock = dgram.createSocket("udp4");
let state = "challenge";
let serverChallenge = null;
let connected = false;
let packets = 0;

function oob(text) {
	const p = Buffer.concat([
		Buffer.from([0xff, 0xff, 0xff, 0xff]),
		Buffer.from(text, "latin1")
	]);
	console.log("C->S  " + p.toString("latin1").replace(/[^\x20-\x7e]/g, "."));
	sock.send(p, port, host);
}

sock.on("message", (msg, rinfo) => {
	packets++;
	const isOOB = msg.length >= 4 && msg[0] === 0xff && msg[1] === 0xff &&
		msg[2] === 0xff && msg[3] === 0xff;

	if (isOOB) {
		const text = msg.subarray(4).toString("latin1");
		console.log("S->C  " + text.replace(/[^\x20-\x7e]/g, "."));
		if (text.startsWith("challenge ")) {
			serverChallenge = text.slice(10).trim();
			const seed = Math.floor(Date.now() / 1000) & 0x7fffffff;
			const resp = RESP || (serverChallenge ^ seed) >>> 0;
			console.log("  challenge=" + serverChallenge + " seed=" + seed + " resp=" + resp);
			oob('connect ' + PROTO + ' ' + seed + ' ' + serverChallenge + ' ' +
				resp + ' ' + VERSION + ' "' + USERINFO + '"');
		} else if (text.startsWith("client_connect")) {
			connected = true;
			console.log("*** CONNECTED ***");
		}
		return;
	}

	// netchan packet
	const hdr = msg.subarray(0, 6);
	const len = msg.readUInt16LE(4);
	const payload = msg.subarray(6, 6 + len);
	console.log("netchan type=" + hdr[0] + " seq=" + hdr.readUInt32LE(2) +
		" len=" + len + "  " +
		payload.toString("latin1").replace(/[^\x20-\x7e]/g, ".").slice(0, 160));
});

sock.on("error", (e) => { console.log("udp error: " + e.message); process.exit(1); });

sock.bind(0, "0.0.0.0", () => {
	console.log("connecting to " + host + ":" + port + " from " +
		sock.address().address + ":" + sock.address().port);
	oob("getchallenge 12345\n");
});

setTimeout(() => {
	console.log("\n--- summary: packets=" + packets + " connected=" + connected);
	process.exit(connected ? 0 : 1);
}, SECONDS * 1000);
