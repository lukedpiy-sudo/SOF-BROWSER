/* Move the client and watch what changes: the player state block and the
 * entity list.  This identifies the local player and the view angles. */
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const sock = dgram.createSocket("udp4");
let phase = 0, lastPs = null, lastEnts = {};
const client = createClient({
	userinfo: "\\name\\mover\\spectator\\0",
	cmdPatch: (c) => { lastCmd = Buffer.from(c); },
	send: (b) => sock.send(b, 28910, "127.0.0.1"),
	onEvent: (ev) => {
		if (ev === "spawned") console.log("spawned");
	}
});
let lastCmd = Buffer.alloc(24);

function dump(tag) {
	const ps = client.playerState;
	let diff = "";
	if (ps && lastPs) {
		for (let i = 0; i < ps.length; i++) if (lastPs[i] !== ps[i]) diff += " +" + i + "=" + ps[i];
	}
	console.log("[" + tag + "] ps(" + (ps ? ps.length : 0) + "): " + (ps ? ps.toString("hex") : "-") + (diff ? " | diff:" + diff : ""));
	if (ps) lastPs = Buffer.from(ps);
	const moved = [];
	client.entities.forEach((e) => {
		if (e.removed || !e.state) return;
		const s = e.state;
		const o = s.readInt16LE(4) + "," + s.readInt16LE(8) + "," + s.readInt16LE(12);
		if (lastEnts[e.number] !== undefined && lastEnts[e.number] !== o) moved.push("#" + e.number);
		lastEnts[e.number] = o;
	});
	if (moved.length) console.log("   moved entities: " + moved.join(" "));
}

sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "127.0.0.1", () => client.start());
setInterval(() => client.sendUserCmd(), 50);
setInterval(() => {
	console.log("  view fwd", client.view.forwardmove, "side", client.view.sidemove,
		"seq", client.seq, "cmd", lastCmd.toString("hex"),
		"ents", Array.from(client.entities.keys()).join(","));
}, 700);
setTimeout(() => { phase = 1; console.log("--- moving forward ---"); dump("before"); client.setKey("KeyW", true); }, 4000);
setTimeout(() => { client.setKey("KeyW", false); console.log("--- stopped ---"); dump("after-move"); }, 6000);
setTimeout(() => { console.log("--- turning right ---"); client.look(64, 0); }, 7000);
setTimeout(() => { dump("after-turn"); sock.close(); process.exit(0); }, 8500);
