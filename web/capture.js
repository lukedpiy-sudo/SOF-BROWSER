/* Capture every datagram the server sends during the handshake and dump
 * the packet headers so the netchan framing can be worked out. */
const dgram = require("dgram");
const fs = require("fs");
const { createClient } = require("./sofproto.js");

const sock = dgram.createSocket("udp4");
const out = [];
sock.on("message", (m) => {
	out.push({ len: m.length, hex: m.toString("hex") });
	client.onDatagram(m);
});

const client = createClient({
	userinfo: "\\name\\capture\\spectator\\0",
	send: (b) => sock.send(b, 28910, "127.0.0.1"),
	onEvent: () => { }
});

sock.bind(0, "127.0.0.1", () => client.start());
setInterval(() => client.sendUserCmd(), 50);
setTimeout(() => {
	sock.close();
	fs.writeFileSync("fixtures/handshake-packets.json", JSON.stringify(out, null, 1));
	console.log("packets:", out.length);
	out.forEach((p, i) => {
		console.log(String(i).padStart(2), String(p.len).padStart(6), p.hex.slice(0, 48));
	});
	process.exit(0);
}, 12000);
