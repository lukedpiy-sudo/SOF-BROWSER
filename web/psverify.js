/*
 * psverify.js - verify the player state decoder against a live server.
 *
 * The engine's client state block is followed by the 0x15 "packet entities"
 * marker, so the block length is known exactly.  The decoder must consume
 * precisely that many bytes, otherwise the layout is wrong.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");
const { decodePlayerState, hudFromState } = require("./playerstate.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let n = 0, ok = 0, bad = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name !== "frame") return;
		const f = data.frame;
		if (!f.playerState) return;
		const block = f.playerState;
		/* the block runs from `from` to the 0x15 marker */
		const from = f.playerStateStart;
		const end = f.playerStateEnd;
		if (from === undefined || end === undefined) return;
		const st = decodePlayerState(block, 0);
		const want = end - from;
		n++;
		if (st.consumed === want) {
			ok++;
			if (ok <= 4) {
				console.log("frame " + f.number + ": consumed " + st.consumed + " == " + want + " OK");
				console.log("   mask=0x" + st.mask.toString(16) + " statMask=0x" + st.statMask.toString(16));
				console.log("   stats=" + JSON.stringify(st.stats));
				console.log("   origin=" + JSON.stringify(st.origin) + " viewMode=" + st.viewMode);
				console.log("   hud=" + JSON.stringify(hudFromState(st)));
			}
		} else {
			bad++;
			if (bad <= 5) {
				console.log("frame " + f.number + ": consumed " + st.consumed + " != " + want + "  MISMATCH");
				console.log("   mask=0x" + st.mask.toString(16) + " bytes=" + Array.from(block.subarray(0, Math.min(want + 4, block.length))).map(x => x.toString(16).padStart(2, "0")).join(" "));
			}
		}
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => {
	console.log("frames=" + n + " ok=" + ok + " bad=" + bad);
	process.exit(0);
}, 12000);
