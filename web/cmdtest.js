/* cmdtest.js - send a string command to the server and watch the reply.
 *
 * The client -> server string commands use the same reliable channel as the
 * handshake ("configstrings 42 0" etc).  If the server accepts a console
 * command this way, the client can drive the game from the console.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const cmds = process.argv.slice(4);
const sock = dgram.createSocket("udp4");
let sent = false;
let t0 = Date.now();

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name === "spawned" && !sent) {
			sent = true;
			console.log("spawned, sending the commands");
			cmds.forEach(function (c, i) {
				setTimeout(function () {
					console.log("-> " + c);
					client.sendStringCmd(c);
				}, i * 800);
			});
		} else if (name === "oob") {
			const s = String(data);
			if (s.indexOf("print") >= 0 || s.indexOf("chat") >= 0 || s.indexOf("server") >= 0) {
				console.log("S->C: " + s.slice(0, 200));
			}
		} else if (name === "cmd") {
			console.log("C->S: " + data);
		}
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- done"); process.exit(0); }, 20000);
