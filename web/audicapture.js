/*
 * audicapture.js - capture the sound events and the ghoul string table from a
 * live server.
 *
 * The protocol core (web/sofproto.js) hands the raw payloads of the services
 * that the client used to drop:
 *
 *   client.soundPackets  the raw svc_sound (0x0A) payloads
 *   client.ghoulPackets  the raw svc_ghoulreliable (0x1A) and
 *                        svc_ghoulunreliable (0x1B) payloads
 *
 * and it emits the events "sound" ({svc, body}) and "ghoul" ({svc, body}).
 *
 * usage: node web/audicapture.js [host] [port] [--seconds N] [--move]
 *                              [--dump FILE] [--ghoul FILE]
 */
"use strict";
const dgram = require("dgram");
const fs = require("fs");
const { createClient } = require("./sofproto.js");

const argv = process.argv.slice(2);
const opt = (n, d) => { const i = argv.indexOf(n); return i >= 0 ? argv[i + 1] : d; };
const has = (n) => argv.indexOf(n) >= 0;
const host = argv[0] && !argv[0].startsWith("--") ? argv[0] : "127.0.0.1";
const port = parseInt(argv[1] && !argv[1].startsWith("--") ? argv[1] : "29000", 10);
const seconds = parseInt(opt("--seconds", "30"), 10);
const dumpFile = opt("--dump", null);
const ghoulFile = opt("--ghoul", null);

const hex = (b) => Array.from(b).map(x => x.toString(16).padStart(2, "0")).join(" ");

const sock = dgram.createSocket("udp4");
let sounds = 0, ghouls = 0, temps = 0;
const svcCount = {};

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name === "sound") {
			sounds++;
			const b = data.body;
			/* the layout the client uses (SoF.exe 0x2002ca20): three bytes,
			 * then two vec3 of three i16 each (scaled x1/8), then the
			 * index - the exact meaning is worked out here */
			const head = b.length >= 3 ? [b[0], b[1], b[2]] : [];
			const v1 = [], v2 = [];
			for (let i = 0; i < 3 && 3 + i * 2 + 1 < b.length; i++) v1.push(b.readInt16LE(3 + i * 2) / 8);
			for (let i = 0; i < 3 && 9 + i * 2 + 1 < b.length; i++) v2.push(b.readInt16LE(9 + i * 2) / 8);
			const rest = b.length > 15 ? Array.from(b.slice(15)) : [];
			console.log("SOUND " + sounds + " len " + b.length +
				" bytes " + head.map(x => x.toString(16).padStart(2, "0")).join(" ") +
				" v1 " + v1.map(x => x.toFixed(2)).join(",") +
				" v2 " + v2.map(x => x.toFixed(2)).join(",") +
				" rest " + rest.map(x => x.toString(16).padStart(2, "0")).join(" ") +
				"   [" + hex(b) + "]");
		} else if (name === "ghoul") {
			ghouls++;
			const b = data.body;
			console.log("GHOUL svc 0x" + data.svc.toString(16) + " len " + b.length +
				"   [" + hex(b.subarray(0, 48)) + (b.length > 48 ? " ..." : "") + "]");
			if (ghoulFile) {
				const lp = Buffer.alloc(2);
				lp.writeUInt16LE(b.length, 0);
				fs.appendFileSync(ghoulFile, Buffer.concat([Buffer.from([data.svc]), lp, b]));
			}
		} else if (name === "temp") {
			temps++;
			const b = data.body;
			console.log("TEMP svc 0x" + data.svc.toString(16) + " len " + b.length +
				"   [" + hex(b) + "]");
		} else if (name === "spawned") {
			console.log("*** spawned ***");
		} else if (name === "oob") {
			const t = String(data);
			if (/challenge|connect|spawn|precache|configstrings|ghoulstrings/i.test(t)) {
				console.log("S->C OOB : " + JSON.stringify(t.slice(0, 100)));
			}
		} else if (name === "frame") {
			if (sounds === 0 && data.frame.number % 20 === 0) {
				console.log("S->C frame " + data.frame.number + " entities " + data.entities.size);
			}
		}
	}
});

sock.on("message", (msg) => {
	if (dumpFile) {
		const lp = Buffer.alloc(2);
		lp.writeUInt16LE(msg.length, 0);
		fs.appendFileSync(dumpFile, Buffer.concat([lp, msg]));
	}
	/* the raw services: the service byte is at the offset 8 of the message
	 * (the netchan header, the seed header and the service byte) */
	if (msg.length > 9) {
		const svc = msg[8];
		svcCount[svc] = (svcCount[svc] || 0) + 1;
		if (svc !== 0x17 && svc !== 0x0f && msg.length < 400) {
			console.log("RAW svc 0x" + svc.toString(16) + " len " + (msg.length - 9) +
				"   [" + hex(msg.slice(9, 9 + 40)) + "]");
		}
	}
	client.onDatagram(msg);
});

sock.bind(0, "0.0.0.0", () => client.start());

const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);

/* walk forward so the server produces footstep sounds */
let moved = false;
const move = setInterval(() => {
	if (!client.spawnDone) return;
	moved = true;
	client.setKey("KeyW", true);
}, 1500);

/* fire so the server produces the weapon sounds */
let fired = 0;
const fire = setInterval(() => {
	if (!client.spawnDone) return;
	fired++;
	client.setKey("Mouse0", true);
	if (fired % 2 === 0) client.setKey("Mouse0", false);
}, 400);

setTimeout(() => {
	clearInterval(tick);
	clearInterval(move);
	console.log("--- done: " + sounds + " sound events, " + ghouls + " ghoul packets, " + temps + " temp entities, moved " + moved);
console.log("the service bytes at the offset 8: " + JSON.stringify(svcCount));
	console.log("the sound payloads:");
	client.soundPackets.forEach((b, i) => {
		console.log("  [" + i + "] len " + b.length + "  " + hex(b.subarray(0, 24)));
	});
	process.exit(0);
}, seconds * 1000);
