/*
 * server_watchdog.js - keep the real SoF server connectable.
 *
 * The stock server never fully releases dead client slots, and in this
 * environment it occasionally exits.  Every 10 s we check the UDP challenge;
 * if it does not answer we relaunch the dedicated server.  Every 30 s we also
 * kick clients idle for more than 120 s so a fresh browser always has a slot.
 */
"use strict";
const dgram = require("dgram");
const child = require("child_process");
const path = require("path");

const HOST = "127.0.0.1";
const PORT = 29000;
const PASSWORD = process.env.SOF_RCON || "sofbrowser";
/* lastmsg is not small seconds in this build (active clients report values
 * like 10003), so only kick slots that are unmistakably ancient. */
const MAX_IDLE = parseInt(process.env.SOF_MAX_IDLE || "3600", 10);
const ROOT = path.resolve(__dirname, "..");
const SOC_DIR = path.join(ROOT, "Soldier of Fortune");
const LOG = "/tmp/opencode/sof-server.log";
const sock = dgram.createSocket("udp4");
let restarting = false;
let failures = 0;

function alive(cb) {
	const s = dgram.createSocket("udp4");
	let done = false;
	const finish = (v) => { if (!done) { done = true; try { s.close(); } catch (e) { } cb(v); } };
	s.on("message", () => finish(true));
	s.on("error", () => finish(false));
	s.send(Buffer.from("\xff\xff\xff\xffgetchallenge 1\n", "latin1"), PORT, HOST);
	setTimeout(() => finish(false), 1500);
}

function restartServer(reason) {
	if (restarting) return;
	restarting = true;
	console.log("[watchdog] restarting server: " + reason);
	const env = Object.assign({}, process.env, {
		WINEPREFIX: process.env.WINEPREFIX || (process.env.HOME + "/.wine-sof"),
		WINEDEBUG: "-all",
		WINEDLLOVERRIDES: "mscoree,mshtml="
	});
	let out;
	try { out = require("fs").openSync(LOG, "a"); } catch (e) { out = "ignore"; }
	try {
		const p = child.spawn("wine", [
			"SoF.exe", "+set", "dedicated", "1", "+set", "port", "29000",
			"+set", "rcon_password", PASSWORD, "+set", "deathmatch", "0",
			"+set", "ctf", "1", "+set", "dm_ctf", "1", "+set", "dmflags", "128", "+set", "teamplay", "1", "+map", "dm/nycctf1"
		], { cwd: SOC_DIR, env: env, detached: true, stdio: ["ignore", out, out] });
		p.unref();
	} catch (e) { console.log("[watchdog] launch failed: " + e.message); }
	setTimeout(() => { restarting = false; }, 12000);
}

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

function checkIdleClients() {
	rcon("status", function (text) {
		if (!text) return;
		for (const line of text.split("\n")) {
			const m = line.match(/^\s*(\d+)\s+(-?\d+)\s+(\d+)\s+(\S+)\s+(\d+)\s+/);
			if (!m) continue;
			const num = parseInt(m[1], 10), idle = parseInt(m[5], 10);
			if (idle > MAX_IDLE) {
				console.log("[watchdog] kicking idle client " + num + " (lastmsg " + idle + ")");
				rcon("kick " + num, function () { });
			}
		}
	});
}

sock.on("error", function () { });
setInterval(function () {
	alive(function (ok) {
		if (!ok) {
			failures++;
			if (failures >= 3) { failures = 0; restartServer("UDP challenge timed out"); }
		} else {
			failures = 0;
			checkIdleClients();
		}
	});
}, 10000);
console.log("[watchdog] supervising " + HOST + ":" + PORT);
