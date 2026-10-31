"use strict";
const dgram = require("dgram");
const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "28910", 10);
const UI = "\\name\\one\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";

const sock = dgram.createSocket("udp4");
function hex(b) { return Array.from(b).map(x => x.toString(16).padStart(2, "0")).join(" "); }
function oob(t) {
	sock.send(Buffer.concat([Buffer.from([0xff, 0xff, 0xff, 0xff]), Buffer.from(t, "latin1")]), port, host);
	console.log("C->S OOB: " + JSON.stringify(t));
}
let chal = null;
sock.on("message", (m) => {
	console.log("S->C len=" + m.length + "  " + hex(m.subarray(0, Math.min(m.length, 80))));
	console.log("       ascii: " + JSON.stringify(m.toString("latin1").replace(/[^\x20-\x7e]/g, ".").slice(0, 120)));
	if (m.length >= 4 && m[0] === 0xff && m[1] === 0xff) {
		const t = m.subarray(4).toString("latin1");
		if (t.startsWith("challenge ")) {
			chal = t.slice(10).trim();
			oob("connect 33 3 " + chal + " " + Math.floor(Date.now() / 1000) + ' 3.14 "' + UI + '"\n');
		}
	}
});
sock.bind(0, "0.0.0.0", () => {
	oob("getchallenge 1\n");
});
setTimeout(() => { console.log("--- done ---"); process.exit(0); }, 6000);
