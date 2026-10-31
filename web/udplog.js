/*
 * udplog.js - a logging UDP proxy.
 *
 * Sits between a real game server and a client so the exact bytes the stock
 * client sends can be captured (this is how the connect handshake and the
 * netchan framing get pinned down).
 *
 * usage: node udplog.js --listen 28912 --target 127.0.0.1:28910 --out traffic.log
 */

"use strict";

const dgram = require("dgram");
const fs = require("fs");

function arg(name, dflt) {
	const i = process.argv.indexOf(name);
	return i >= 0 ? process.argv[i + 1] : dflt;
}

const listenPort = parseInt(arg("--listen", "28912"), 10);
const [tHost, tPort] = arg("--target", "127.0.0.1:28910").split(":");
const targetPort = parseInt(tPort, 10);
const outFile = arg("--out", "traffic.log");

const out = fs.createWriteStream(outFile, { flags: "a" });

/* clients we are proxying for, keyed by their address */
const clients = new Map();
let lastClient = null;

function log(dir, port, data) {
	out.write(`${dir} ${port} len=${data.length}\n`);
	out.write(`  hex: ${data.toString("hex")}\n`);
	out.write(`  txt: ${data.toString("latin1").replace(/[^\x20-\x7e]/g, ".")}\n\n`);
}

const sock = dgram.createSocket("udp4");

sock.on("message", (msg, rinfo) => {
	const fromServer = rinfo.port === targetPort;

	if (fromServer) {
		// reply from the real server: send it on to the client we proxy for
		log("S->C", rinfo.port, msg);
		if (lastClient) sock.send(msg, lastClient.port, lastClient.address);
		return;
	}

	// from the client: forward to the real server and remember it
	const key = rinfo.address + ":" + rinfo.port;
	if (!clients.has(key)) clients.set(key, { address: rinfo.address, port: rinfo.port });
	lastClient = clients.get(key);
	log("C->S", rinfo.port, msg);
	sock.send(msg, targetPort, tHost);
});

sock.bind(listenPort, "127.0.0.1", () => {
	console.log(`[udplog] ${listenPort} -> ${tHost}:${targetPort}, log ${outFile}`);
});
