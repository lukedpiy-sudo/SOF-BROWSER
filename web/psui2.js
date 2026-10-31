/*
 * psui2.js - how long does the server keep the player state alive?
 *
 * argv: the mode
 *   plain       : the normal client
 *   refresh     : the userinfo is re-sent every 3 s
 *   minimal     : a minimal userinfo (only the name)
 *   team        : the userinfo without the "team_red_blue" key
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const mode = process.argv[4] || "plain";
const sock = dgram.createSocket("udp4");
let t0 = Date.now(), lastMask = null, alive = 0, spawned = 0;

const opts = {
	send: (buf) => sock.send(buf, port, host),
	cmdPatchRing: (cmd) => { cmd[0] = 16; },
	onEvent: (name, data) => {
		if (name === "spawned") { spawned = Date.now(); return; }
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		if (st.mask !== lastMask) {
			lastMask = st.mask;
			if (st.mask !== 0) alive = Date.now();
		}
	}
};
if (mode === "refresh") opts.userinfoInterval = 3000;
if (mode === "minimal") opts.userinfo = "\\name\\webclient\\";
if (mode === "team") opts.userinfo = "\\name\\webclient\\cl_violence\\63\\fov\\95\\rate\\3000\\";

const client = createClient(opts);
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); alive = Date.now(); });
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => {
	console.log("mode " + mode + ": the player state stayed alive for " +
		((alive - spawned) / 1000).toFixed(1) + " s after the spawn");
	process.exit(0);
}, 25000);
