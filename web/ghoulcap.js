/*
 * ghoulcap.js - capture the svc 0x1A datagrams (the ghoul string table).
 *
 *   node ghoulcap.js [out.bin] [port]
 */
"use strict";
const dgram = require("dgram");
const fs = require("fs");
const { createClient } = require("./sofproto.js");

const out = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/ghoulstrings.bin";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
const chunks = [];
let saw = 0;

const client = createClient({
	send: (buf) => sock.send(buf, port),
	onEvent: () => { }
});
sock.on("message", (msg) => {
	if (msg.length > 9 && msg[8] === 0x1a) {
		saw++;
		chunks.push(Buffer.from(msg.subarray(9)));
	}
	client.onDatagram(msg);
});
sock.bind(0, "0.0.0.0", () => client.start());
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => {
	if (chunks.length) {
		const all = Buffer.concat(chunks);
		fs.writeFileSync(out, all);
		const list = chunks.map(c => c.toString("hex"));
		fs.writeFileSync(out + ".json", JSON.stringify(list));
		console.log("the svc 0x1A datagrams: " + chunks.length + ", " + all.length + " bytes -> " + out);
		console.log("the lengths: " + chunks.map(c => c.length).join(", "));
		console.log("the first 64 bytes: " + all.subarray(0, 64).toString("hex").replace(/(.{32})/g, "$1 "));
	} else {
		console.log("no svc 0x1A datagrams seen");
	}
	process.exit(0);
}, 20000);
