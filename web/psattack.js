/*
 * psattack.js - why does the attack button not fire?
 *
 * Two hypotheses are tested at once:
 *
 *  H1 (msec): the engine's SV_ExecuteClientMessage computes
 *      cl->[0x220] -= cmd->msec and DROPS the command when that goes
 *      negative ("commandMsec underflow").  The browser client sends a
 *      CUMULATIVE msec counter that wraps, so most commands may be
 *      dropped - including the ones that carry the buttons.
 *
 *  H2 (buttons): the button byte is sent but the module's fire path is
 *      blocked by one of its gates.
 *
 * The test presses the attack button with different msec schemes and
 * reports whether the magazine ammo changes.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState, hudFromState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");

/* the msec schemes to try */
const SCHEMES = [
	{ name: "cumulative (current)", fn: (n) => (50 * n) & 0xff },
	{ name: "delta 16", fn: () => 16 },
	{ name: "delta 10", fn: () => 10 },
	{ name: "delta 50", fn: () => 50 },
	{ name: "delta 0", fn: () => 0 }
];

let phase = 0, t0 = 0, scheme = SCHEMES[0], counter = 0, lastAmmo = null, lastStats = null;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	cmdPatch: function (cmd) {
		counter++;
		cmd[0] = scheme.fn(counter) & 0xff;
	},
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const st = decodePlayerState(f.playerState, 0);
		const h = hudFromState(st);
		const now = Date.now();
		if (phase === 0) {
			if (now - t0 < 1500) return;
			phase = 1;
			t0 = now;
			scheme = SCHEMES[0];
			counter = 0;
			lastAmmo = h.ammo;
			lastStats = JSON.stringify(st.stats);
			console.log("phase 0: baseline ammo " + h.ammo + "  stats " + lastStats);
			return;
		}
		if (phase > SCHEMES.length) return;
		if (now - t0 < 3000) {
			/* hold the attack button down for the whole phase */
			client.setKey("Mouse0", true);
			return;
		}
		client.setKey("Mouse0", false);
		console.log(scheme.name + ": ammo " + lastAmmo + " -> " + h.ammo +
			(h.ammo !== lastAmmo ? "   FIRED!" : "   (no change)") +
			"   stats " + JSON.stringify(st.stats));
		lastAmmo = h.ammo;
		counter = 0;
		t0 = now;
		if (phase < SCHEMES.length) {
			phase++;
			scheme = SCHEMES[phase - 1];
		} else {
			console.log("--- done");
			process.exit(0);
		}
	}
});
sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => { client.start(); t0 = Date.now(); });
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 30000);
