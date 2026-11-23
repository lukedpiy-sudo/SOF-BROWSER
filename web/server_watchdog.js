/*
 * server_watchdog.js - keep the real SoF server connectable.
 *
 * The stock server never fully releases dead client slots.  We query RCON
 * status every 30 s and kick clients whose lastmsg is older than 120 s, so a
 * fresh browser always has a free slot.
 */
"use strict";
const dgram = require("dgram");

const HOST = "127.0.0.1";
const PORT = 29000;
const PASSWORD = process.env.SOF_RCON || "sofbrowser";
const MAX_IDLE = parseInt(process.env.SOF_MAX_IDLE || "120", 10);
const PERIOD = parseInt(process.env.SOF_WATCHDOG_MS || "30000", 10);
const sock = dgram.createSocket("udp4");

function rcon(cmd, cb) {
	const body = Buffer.from("\xff\xff\xff\xffrcon " + PASSWORD + " " + cmd + "\n", "latin1");
	const timer = setTimeout(() => { sock.removeListener("message", onmsg); cb(null); }, 2500);
	function onmsg(msg) {
		clearTimeout(timer);
		sock.removeListener("message", onmsg);
		cb(msg.toString("latin1", "replace"));
	}
	sock.on("message", onmsg);
	sock.send(body, PORT, HOST);
}

function check() {
	rcon("status", function (text) {
		if (!text) return;
		const lines = text.split("\n");
		for (const line of lines) {
			/* num score ping name lastmsg address qport */
			const m = line.match(/^\s*(\d+)\s+(-?\d+)\s+(\d+)\s+(\S+)\s+(\d+)\s+/);
			if (!m) continue;
			const num = parseInt(m[1], 10);
			const idle = parseInt(m[5], 10);
			if (idle > MAX_IDLE) {
				console.log("[watchdog] kicking idle client " + num + " (lastmsg " + idle + ")");
				rcon("kick " + num, function () { });
			}
		}
	});
}

sock.on("error", function () { /* the server may be restarting */ });
setInterval(check, PERIOD);
console.log("[watchdog] watching " + HOST + ":" + PORT + " every " + PERIOD + " ms");
