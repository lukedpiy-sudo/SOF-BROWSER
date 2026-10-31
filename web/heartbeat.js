/* Start the patched server, connect a client (so the player count changes
 * and the engine sends its GameSpy heartbeat) and check the master. */
const { spawn } = require("child_process");
const { createClient } = require("./sofproto.js");
const dgram = require("dgram");

const srv = spawn("C:/Users/User/Soldier of Fortune/SoFTest.exe",
	["+set", "developer", "1", "+set", "dedicated", "1", "+map", "dm/nycdm1"],
	{ detached: true, stdio: "ignore", cwd: "C:/Users/User/Soldier of Fortune" });
srv.unref();
console.log("server pid " + srv.pid);

setTimeout(() => {
	const sock = dgram.createSocket("udp4");
	const client = createClient({
		userinfo: "\\name\\hb\\spectator\\0",
		send: (b) => sock.send(b, 28916, "127.0.0.1"),
		onEvent: (ev) => { if (ev === "spawned") console.log("client spawned"); }
	});
	sock.on("message", (m) => client.onDatagram(m));
	sock.bind(0, "127.0.0.1", () => client.start());
	setInterval(() => client.sendUserCmd(), 50);
}, 9000);

setTimeout(() => {
	const http = require("http");
	http.get("http://127.0.0.1:8090/api/servers", (r) => {
		let s = "";
		r.on("data", (d) => s += d);
		r.on("end", () => { console.log("--- the master list ---"); console.log(s); process.exit(0); });
	}).on("error", (e) => { console.log("api error: " + e.message); process.exit(0); });
}, 30000);
