/*
 * beginprobe.js - find the value the server expects in the "begin" /
 * "configstrings" / "baselines" messages.
 *
 * The server compares atoi(table[1]) - its own expected answer, produced by
 * the MINSTD LCG at 0x200F9F57 - against the value we send.  If the
 * challenge we were handed is one LCG output, the expected answer should be
 * a later output of the same sequence.
 *
 * usage: node beginprobe.js <host> <port> [--steps N]
 */

"use strict";

const dgram = require("dgram");

const host = process.argv[2];
const port = parseInt(process.argv[3], 10);
const A = 0x343FD, C = 0x269EC3;
const M = 0xFFFFFFFF;

function step(s) { return (s * A + C) & M; }

function lcgSeq(start, n) {
	const out = [];
	let s = start;
	for (let i = 0; i < n; i++) { s = step(s); out.push(s); }
	return out;
}

function candidates(challenge) {
	const seq = lcgSeq(challenge, 12);
	const c = new Map();
	const add = (k, v) => { if (!c.has(k)) c.set(k, v); };
	add("challenge", challenge);
	add("ts", Math.floor(Date.now() / 1000));
	for (let k = 0; k < seq.length; k++) {
		add("s" + k, seq[k]);
		add("s" + k + ">>16", (seq[k] >>> 16) & 0xffff);
		add("s" + k + "&7fff", (seq[k] >>> 16) & 0x7fff);
		add("s" + k + ">>16&7fff", (seq[k] >>> 16) & 0x7fff);
	}
	return c;
}

function attempt(value, label) {
		const token = value;
	return new Promise((resolve) => {
		const sock = dgram.createSocket("udp4");
		let seq = 1, rel = 0, challenge = null, done = false;
		const finish = (ok, why) => {
			if (done) return;
			done = true;
			try { sock.close(); } catch (e) { /* closed */ }
			resolve([ok, label, why]);
		};
		const oob = (t) => sock.send(Buffer.concat([
			Buffer.from([0xff, 0xff, 0xff, 0xff]), Buffer.from(t, "latin1")
		]), port, host);
		const netHdr = () => {
			const h = Buffer.alloc(4);
			h.writeUInt16LE(seq++, 0); h.writeUInt16LE(0x8000, 2); return h;
		};
		const relHdr = () => {
			const h = Buffer.alloc(4);
			h.writeUInt16LE(rel++, 0); h.writeUInt16LE(0x8000, 2); return h;
		};
		const str = (s) => {
			const b = Buffer.alloc(3 + s.length + 1);
			b.writeUInt16LE(Math.floor(Date.now() / 1000) & 0xffff, 0);
			b.writeUInt8(4, 2);
			b.write(s, 3, "latin1");
			b.writeUInt8(0, 3 + s.length);
			sock.send(Buffer.concat([netHdr(), relHdr(), b]), port, host);
		};
		sock.on("message", (msg) => {
			if (msg.length >= 4 && msg[0] === 0xff && msg[1] === 0xff) {
				const t = msg.subarray(4).toString("latin1");
				if (t.startsWith("challenge ")) {
					challenge = t.slice(10).trim();
					const ui = "\\name\\probe\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";
					oob("connect 33 1 " + challenge + " " +
						token + " 3.14 \"" + ui + "\"");
				} else if (t.startsWith("client_connect")) {
					str("new");
					setTimeout(() => str("configstrings " + value), 120);
					setTimeout(() => str("baselines " + value), 240);
					setTimeout(() => str("begin " + value), 360);
				}
				return;
			}
			const txt = msg.toString("latin1");
			if (txt.indexOf("NYCDM1") >= 0 || txt.indexOf("cmd configstrings") >= 0 ||
				txt.length > 200) {
				finish(true, "got a big packet (" + msg.length + " bytes)");
			}
		});
		sock.on("error", (e) => { try { sock.close(); } catch (e2) {} });
		sock.on("close", () => {});
		sock.bind(0, "0.0.0.0", () => oob("getchallenge " + token + "\n"));
		setTimeout(() => { try { sock.close(); } catch (e) {} finish(false, "timeout"); }, 3500);
	});
}

(async () => {
	// learn the challenge first
	const ch = await new Promise((res) => {
		const s = dgram.createSocket("udp4");
		s.on("message", (m) => {
			if (m.length >= 4 && m[0] === 0xff) {
				const t = m.subarray(4).toString("latin1");
				if (t.startsWith("challenge ")) { s.close(); res(t.slice(10).trim()); }
			}
		});
		s.bind(0, "0.0.0.0", () => s.send(Buffer.concat([
			Buffer.from([0xff, 0xff, 0xff, 0xff]), Buffer.from("getchallenge 1\n")
		]), port, host));
		setTimeout(() => { try { s.close(); } catch (e) {} res("0"); }, 3000);
	});
	console.log("challenge =", ch);
	for (const [label, val] of candidates(ch)) {
		const [ok, lbl, why] = await attempt(val, label);
		console.log("  value " + label + " = " + val + "  -> " + (ok ? "GAMESTATE! " + why : "no"));
		if (ok) break;
	}
	process.exit(0);
})();
