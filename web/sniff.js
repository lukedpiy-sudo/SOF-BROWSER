/*
 * sniff.js - connect to a SoF server and dump everything it sends, so the
 * netchan framing and the snapshot layout can be decoded from real data.
 *
 * usage: node sniff.js <host> <port> [--seconds N] [--raw]
 */

"use strict";

const dgram = require("dgram");

const host = process.argv[2];
const port = parseInt(process.argv[3], 10);
const seconds = parseInt((process.argv.includes("--seconds") ?
	process.argv[process.argv.indexOf("--seconds") + 1] : "10"), 10);

const sock = dgram.createSocket("udp4");
let n = 0;
let total = 0;
const raw = [];

function oob(text) {
	sock.send(Buffer.concat([
		Buffer.from([0xff, 0xff, 0xff, 0xff]),
		Buffer.from(text, "latin1")
	]), port, host);
}

sock.on("message", (msg) => {
	n++;
	total += msg.length;
	raw.push(msg);
	const isOOB = msg.length >= 4 && msg[0] === 0xff && msg[1] === 0xff;
	if (isOOB) {
		const text = msg.subarray(4).toString("latin1");
		console.log("OOB  (" + msg.length + "): " +
			text.replace(/[^\x20-\x7e]/g, ".").slice(0, 120));
		if (text.startsWith("challenge ")) {
			const m = text.slice(10).trim();
			const seed = Math.floor(Date.now() / 1000) & 0x7fffffff;
			const ui = "\\name\\sniffer\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";
			oob("connect 33 " + seed + " " + m + " " + (m ^ seed) + " 3.14 \"" + ui + "\"");
		}
		return;
	}
	console.log("PKT# " + n + " len=" + msg.length + "\n  hex: " +
		msg.toString("hex").slice(0, 160) + "\n  txt: " +
		msg.toString("latin1").replace(/[^\x20-\x7e]/g, ".").slice(0, 160));
});

sock.bind(0, "0.0.0.0", () => {
	oob("getchallenge 1\n");
});

setTimeout(() => {
	// hunt for the configstrings payload anywhere in the stream
	const all = Buffer.concat(raw);
	const txt = all.toString("latin1");
	let i = 0;
	while ((i = txt.indexOf("cmd configstrings", i)) >= 0) {
		console.log("\n=== configstrings @ " + i + " ===\n" +
			txt.slice(i, i + 900).replace(/[^\x20-\x7e\n]/g, "."));
		i += 10;
	}
	console.log("\n--- totals: packets=" + n + " bytes=" + total);
	process.exit(0);
}, seconds * 1000);
