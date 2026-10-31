/* Point the client at the port the running server actually bound. */
const { execSync } = require("child_process");
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

let port = 0;
try {
	const out = execSync("netstat -a -ano -p UDP", { encoding: "utf8" });
	for (const l of out.split(/\r?\n/)) {
		const m = l.match(/UDP\s+\S+:(\d+)\s+\S+\s+(\d+)/);
		if (m && Number(m[2]) === 2660) port = Number(m[1]);
	}
} catch (e) { }
if (!port) {
	const out = execSync("netstat -a -ano -p UDP", { encoding: "utf8" });
	for (const l of out.split(/\r?\n/)) {
		const m = l.match(/UDP\s+\S+:(\d+)\s+\S+\s+(\d+)/);
		if (m && Number(m[1]) > 28000 && Number(m[1]) < 29500) port = Number(m[1]);
	}
}
console.log("the server is on port", port);
if (!port) process.exit(1);

const sock = dgram.createSocket("udp4");
const client = createClient({
	userinfo: "\\name\\probe\\spectator\\0",
	send: (b) => sock.send(b, port, "127.0.0.1"),
	onEvent: (ev, d) => {
		if (ev === "oob") console.log("oob:", String(d).slice(0, 50).replace(/\n/g, "|"));
		if (ev === "spawned") console.log("SPAWNED");
	}
});
sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "127.0.0.1", () => client.start());
setInterval(() => client.sendUserCmd(), 50);
setTimeout(() => process.exit(0), 15000);
