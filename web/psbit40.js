/*
 * psbit40.js - does the BUTTONS byte reach the server?
 *
 * The engine reserves button bit 0x40: in SV_ExecuteClientMessage
 * (0x200635F0) a command with (cmd->buttons & 0x40) sets the engine's
 * "sv_restartlevel" cvar, which reloads the level.  A level reload is
 * unmistakable, so it is a clean probe of whether the buttons byte is
 * decoded at all.
 *
 * The msec scheme matters: the engine keeps a per-client msec accumulator
 * and DROPS a command whose msec makes it go negative ("commandMsec
 * underflow"), so the probe uses a constant delta like the stock client.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const MSEC = parseInt(process.argv[4] || "16", 10);
const sock = dgram.createSocket("udp4");

let phase = 0, t0 = 0, lastFrame = 0, lastOrigin = null, counter = 0;
let forceBit40 = false;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	cmdPatch: function (cmd) {
		counter++;
		cmd[0] = MSEC & 0xff;
		if (forceBit40) cmd[1] |= 0x40;
	},
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		const now = Date.now();
		if (phase === 0) {
			if (now - t0 < 3000) return;
			phase = 1;
			t0 = now;
			lastFrame = f.number;
			lastOrigin = st.origin ? st.origin.join(",") : "?";
			console.log("control done (msec=" + MSEC + "), frame " + f.number + " origin " + lastOrigin);
			console.log("--- now sending the button bit 0x40 (the engine's restart level bit)");
			forceBit40 = true;
			return;
		}
		if (phase === 1) {
			const reloaded = f.number < lastFrame || (st.origin && st.origin.join(",") !== lastOrigin);
			if (reloaded) {
				console.log("THE LEVEL RESTARTED -> the buttons byte DOES reach the server");
				console.log("  frame " + lastFrame + " -> " + f.number + ", origin " + lastOrigin + " -> " +
					(st.origin ? st.origin.join(",") : "?"));
				process.exit(0);
			}
			if (now - t0 > 8000) {
				console.log("no restart: the buttons byte did NOT reach the server");
				process.exit(0);
			}
		}
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 20000);
