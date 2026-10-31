/* A/B test: the movement through view.forwardmove vs. through cmdPatch,
 * watching the local entity's origin bytes. */
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const sock = dgram.createSocket("udp4");
let phase = 0;   /* 0 = idle, 1 = via view.forwardmove, 2 = via cmdPatch */
let lastCmd = Buffer.alloc(24);
const client = createClient({
	userinfo: "\\name\\ab\\spectator\\0",
	cmdPatch: (c) => { if (phase === 2) c.writeInt16LE(200, 0x0a); lastCmd = Buffer.from(c); },
	send: (b) => sock.send(b, 28910, "127.0.0.1"),
	onEvent: (ev) => { if (ev === "spawned") console.log("spawned"); }
});

function origin(e) {
	if (!e || !e.state) return "-";
	const s = e.state;
	return s.readInt16LE(4) + "," + s.readInt16LE(8) + "," + s.readInt16LE(12);
}
sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "127.0.0.1", () => {
	client.start();
	setInterval(() => client.sendUserCmd(), 50);
});
setInterval(() => {
	const e = client.entities.get(1);
	let ps = "";
	if (client.playerState) {
		const p = client.playerState;
		const f = [];
		for (let o = 1; o + 12 <= p.length; o += 4) f.push(o.toString(16) + ":" + p.readFloatLE(o).toFixed(0));
		ps = "ps[" + f.join(" ") + "]";
	}
	console.log("phase", phase, "fwd", client.view.forwardmove,
		"| e1", origin(e), "|", ps);
}, 500);
setTimeout(() => { phase = 1; client.setKey("KeyW", true); console.log("=== phase 1: view.forwardmove"); }, 3000);
setTimeout(() => { phase = 2; client.setKey("KeyW", false); console.log("=== phase 2: cmdPatch"); }, 7000);
setTimeout(() => { phase = 0; console.log("=== phase 0: idle"); }, 11000);
setTimeout(() => process.exit(0), 14000);
