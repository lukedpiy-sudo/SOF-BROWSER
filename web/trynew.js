/*
 * trynew.js - try one in-band framing candidate and report what happened.
 * usage: node trynew.js <mode>
 *
 * The server prints "New() from <name>" when the "new" command reaches
 * SV_New, "New not valid -- already spawned" when cl->state != 2, and
 * "SV_Configstrings_f from different level" when the token mismatches.
 */

"use strict";
const dgram = require("dgram");
const host = "127.0.0.1", port = 28910;
const mode = parseInt(process.argv[2] || "1", 10);
const TXT = process.env.TXT || "new";
const UI = "\\name\\one\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";

const sock = dgram.createSocket("udp4");
let seq = 1, rel = 0, chal = null;
const T0 = Date.now();

function oob(t) {
	sock.send(Buffer.concat([Buffer.from([0xff, 0xff, 0xff, 0xff]), Buffer.from(t, "latin1")]), port, host);
}
function h16(v) { const b = Buffer.alloc(2); b.writeUInt16LE(v & 0xffff, 0); return b; }

// --- candidate framings -------------------------------------------------
function build(text) {
	const t = Buffer.alloc(text.length + 1); t.write(text, 0, "latin1");
	const net = Buffer.concat([h16(seq++), h16(0x8000)]);
	const relH = Buffer.concat([h16(rel++), h16(0x8000)]);
	switch (mode) {
		case 1: return Buffer.concat([net, relH, h16(17547), Buffer.from([0x44]), t]);
		case 2: return Buffer.concat([net, relH, h16(17547), Buffer.from([0x04]), t]);
		case 3: return Buffer.concat([net, relH, Buffer.from([0x8b, 0x44, 0x04]), t]);
		case 4: return Buffer.concat([net, relH, Buffer.from([0x8b, 0x44]), t]);
		case 5: return Buffer.concat([net, relH, Buffer.from([0x00, 0x40, 0x04]), t]);
		case 6: return Buffer.concat([net, relH, t]);
		case 7: return Buffer.concat([net, Buffer.from([0x8b, 0x44, 0x04]), t]);
		case 8: return Buffer.concat([net, relH, h16(17547), Buffer.from([0x43]), t]);
		case 9: return Buffer.concat([net, relH, h16(0), Buffer.from([0x40, 0x04]), t]);
		case 10: return Buffer.concat([net, relH, h16(17547), Buffer.from([0x44, 0x04]), t]);
		case 11: return Buffer.concat([net, relH, Buffer.from([0x8b, 0x44, 0x04, 0x00]), t]);
		case 12: return Buffer.concat([net, relH, h16(17547), Buffer.from([0x40]), t]);
		case 13: return Buffer.concat([net, relH, Buffer.from([0x00, 0x44, 0x04]), t]);
		case 14: return Buffer.concat([net, relH, Buffer.from([0x00, 0x04]), t]);
		case 15: return Buffer.concat([net, relH, Buffer.from([0x00, 0x00, 0x04]), t]);
		case 16: return Buffer.concat([net, relH, Buffer.from([0x01, 0x44, 0x04]), t]);
		case 17: return Buffer.concat([net, relH, Buffer.from([0x00, 0x43, 0x04]), t]);
		case 18: return Buffer.concat([Buffer.from([0x03]), net, relH, h16(17547), Buffer.from([0x04]), t]);
		case 19: return Buffer.concat([Buffer.from([0x03]), net, relH, Buffer.from([0x8b, 0x44, 0x04]), t]);
		case 20: return Buffer.concat([Buffer.from([0x03]), net, relH, Buffer.from([0x00, 0x44, 0x04]), t]);
		case 21: return Buffer.concat([Buffer.from([0x03]), net, relH, Buffer.from([0x00, 0x00, 0x04]), t]);
		case 22: return Buffer.concat([Buffer.from([0x03]), net, Buffer.from([0x8b, 0x44, 0x04]), t]);
		case 23: return Buffer.concat([Buffer.from([0x01]), net, relH, h16(17547), Buffer.from([0x04]), t]);
		case 24: return Buffer.concat([Buffer.from([0x02]), net, relH, h16(17547), Buffer.from([0x04]), t]);
		case 25: return Buffer.concat([Buffer.from([0x04]), net, relH, h16(17547), Buffer.from([0x04]), t]);
		case 26: return Buffer.concat([Buffer.from([0x02]), net, h16(17547), Buffer.from([0x04]), t]);
		case 27: return Buffer.concat([Buffer.from([0x02]), net, relH, Buffer.from([0x8b, 0x44, 0x04]), t]);
		case 28: return Buffer.concat([Buffer.from([0x01]), net, relH, Buffer.from([0x8b, 0x44, 0x04]), t]);
		case 29: return Buffer.concat([Buffer.from([0x04]), net, relH, Buffer.from([0x8b, 0x44, 0x04]), t]);
		case 30: return Buffer.concat([Buffer.from([0x02]), net, relH, Buffer.from([0x00, 0x00, 0x04]), t]);
		case 31: return Buffer.concat([net, relH, Buffer.from([0x8b, 0x44, 0x04]), t]);
		case 32: return Buffer.concat([net, relH, h16(17547), Buffer.from([0x04]), t]);
		case 33: return Buffer.concat([net, relH, h16(0), Buffer.from([0x04]), t]);
		case 34: return Buffer.concat([net, relH, h16(17547), Buffer.from([0x44]), t]);
		case 35: return Buffer.concat([net, relH, h16(17547), Buffer.from([0x40, 0x04]), t]);
		case 40: return Buffer.concat([Buffer.from([0x04]), t]);
		case 41: return Buffer.concat([Buffer.from([0x02]), t]);
		case 42: return Buffer.concat([Buffer.from([0x04]), Buffer.from([0x8b, 0x44]), t]);
		case 43: return Buffer.concat([Buffer.from([0x04]), h16(17547), t]);
		case 44: return Buffer.concat([Buffer.from([0x03]), t]);

		default: return Buffer.concat([net, relH, h16(17547), Buffer.from([0x44]), t]);
	}
}
function send(text) { sock.send(build(text), port, host); }

sock.on("message", (m) => {
	if (m.length >= 4 && m[0] === 0xff && m[1] === 0xff) {
		const t = m.subarray(4).toString("latin1");
		if (t.startsWith("challenge ")) {
			chal = t.slice(10).trim();
			oob("connect 33 3 " + chal + " " + Math.floor(Date.now() / 1000) + ' 3.14 "' + UI + '"');
		} else if (t.startsWith("client_connect")) {
			setTimeout(() => send(TXT), 150);
			if (process.env.OOB) setTimeout(() => oob(TXT + "\n"), 100);
			setTimeout(() => send("configstrings 0 0"), 350);
			setTimeout(() => send("info"), 950);
			setTimeout(() => send("baselines 0 0"), 550);
			setTimeout(() => send("begin 0"), 750);
		}
		return;
	}
	if (m.length > 8) console.log("  PKT " + m.length + " :: " + m.toString("latin1").replace(/[^\x20-\x7e]/g,".").slice(0,140) + " :: " + " @" + (Date.now() - T0) + " " +
		m.toString("latin1").replace(/[^\x20-\x7e]/g, ".").slice(0, 60));
});
sock.bind(0, "0.0.0.0", () => oob("getchallenge 1\n"));
setTimeout(() => process.exit(0), 2200);
