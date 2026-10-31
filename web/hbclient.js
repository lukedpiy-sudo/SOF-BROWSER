/* Connect a client to the running server (the player count change makes the
 * engine send its GameSpy heartbeat) and then read the master's list. */
const { createClient } = require("./sofproto.js");
const dgram = require("dgram");
const http = require("http");

const sock = dgram.createSocket("udp4");
const client = createClient({
	userinfo: "\\name\\hb\\spectator\\0",
		send: (b) => sock.send(b, 29000, "127.0.0.1"),
	onEvent: (ev, d) => {
		if (ev === "oob") console.log("oob:", String(d).slice(0, 60).replace(/\n/g, "|"));
		if (ev === "spawned") console.log("client spawned");
		if (ev === "frame") console.log("frames flowing");
	}
});
sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "127.0.0.1", () => client.start());
setInterval(() => client.sendUserCmd(), 50);

setTimeout(() => {
	http.get("http://127.0.0.1:8090/api/servers", (r) => {
		let s = "";
		r.on("data", (d) => s += d);
		r.on("end", () => { console.log("--- the master list ---"); console.log(s); process.exit(0); });
	}).on("error", (e) => { console.log("api error: " + e.message); process.exit(0); });
}, 25000);
