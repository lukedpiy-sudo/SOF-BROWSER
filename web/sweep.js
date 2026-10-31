"use strict";
/* sweep.js - connect repeatedly with different header u16 values, look for a reply. */
const dgram = require("dgram");
const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "28910", 10);
const UI = "\\name\\one\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";
const U16S = (process.env.U16S || "0,1,2,3,4,5,3975,61451").split(",").map(x => parseInt(x, 10) & 0xffff);

function hex(b) { return Array.from(b).map(x => x.toString(16).padStart(2, "0")).join(" "); }
const socks = [];

function mk(u16, idx) {
	const sock = dgram.createSocket("udp4");
	let chal = null, myport = 0, done = false;
	function oob(t) {
		sock.send(Buffer.concat([Buffer.from([0xff, 0xff, 0xff, 0xff]), Buffer.from(t, "latin1")]), port, host);
	}
	function frame(seq, ack, u16v, type, text) {
		const b = Buffer.alloc(10 + 1 + text.length + 1);
		b.writeUInt32BE(seq >>> 0, 0);
		b.writeUInt32BE(ack >>> 0, 4);
		b.writeUInt16BE(u16v & 0xffff, 8);
		b[10] = type;
		b.write(text, 11, "latin1");
		b[b.length - 1] = 0;
		return b;
	}
	sock.on("message", (m) => {
		if (m.length >= 4 && m[0] === 0xff && m[1] === 0xff) {
			const t = m.subarray(4).toString("latin1");
			if (t.startsWith("challenge ") && !chal) {
				chal = t.slice(10).trim();
				oob("connect 33 3 " + chal + " " + Math.floor(Date.now() / 1000) + ' 3.14 "' + UI + '"\n');
			} else if (t.startsWith("rejected") || t.startsWith("print")) {
				console.log("[u16=0x" + u16.toString(16) + "] OOB: " + JSON.stringify(t));
			}
			return;
		}
		const a = m.toString("latin1").replace(/[^\x20-\x7e]/g, ".");
		if (a.indexOf("cmd") >= 0 || a.indexOf("configstrings") >= 0 || m.length > 12) {
			console.log("[u16=0x" + u16.toString(16) + "] S->C len=" + m.length + " " + hex(m.subarray(0, 48)));
			console.log("      ascii: " + JSON.stringify(a.slice(0, 120)));
		}
	});
	sock.bind(0, "0.0.0.0", () => {
		myport = sock.address().port;
		oob("getchallenge 1\n");
		setTimeout(() => {
			const f = frame(1, 0, u16, 4, "new");
			sock.send(f, port, host);
			console.log("[u16=0x" + u16.toString(16) + "] sent new  bytes: " + hex(f));
		}, 900);
	});
	socks.push(sock);
}

let i = 0;
function next() {
	if (i >= U16S.length) { console.log("--- all sent ---"); return; }
	mk(U16S[i++], i);
	setTimeout(next, 1100);
}
setTimeout(next, 300);
setTimeout(() => { console.log("--- done ---"); process.exit(0); }, 20000);
