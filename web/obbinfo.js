/* obbinfo.js - OOB probes against the SoF server. usage: node obbinfo.js [host] [port] */
"use strict";
const dgram = require("dgram");
const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "28910", 10);
const UI = "\\name\\one\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";

const sock = dgram.createSocket("udp4");
let chal = null;

function oob(t) {
	sock.send(Buffer.concat([Buffer.from([0xff, 0xff, 0xff, 0xff]), Buffer.from(t, "latin1")]), port, host);
	console.log("  C->S OOB: " + t.slice(0, 60));
}
sock.on("message", (m) => {
	const txt = m.toString("latin1");
	const clean = txt.replace(/[^\x20-\x7e]/g, ".");
	console.log("  S->C " + m.length + " bytes: " + clean.slice(0, 300));
	if (m.length > 8) console.log("        hex: " + m.toString("hex"));
	if (m.length >= 4 && m[0] === 0xff && m[1] === 0xff) {
		const t = m.subarray(4).toString("latin1");
		if (t.startsWith("challenge ")) {
			chal = t.slice(10).trim();
			oob("connect 33 3 " + chal + " " + Math.floor(Date.now() / 1000) + ' 3.14 "' + UI + '"');
		} else if (t.startsWith("client_connect")) {
			setTimeout(() => oob("info"), 300);
			setTimeout(() => oob("getstatus"), 600);
			setTimeout(() => oob("getinfo"), 900);
		}
	}
});
sock.bind(0, "0.0.0.0", () => oob("getchallenge 1\n"));
setTimeout(() => process.exit(0), 4000);
