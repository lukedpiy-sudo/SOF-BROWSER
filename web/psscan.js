/* Find the local origin inside the player state block: scan for the float
 * triple that matches the local entity's origin. */
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const sock = dgram.createSocket("udp4");
let selfNum = null;
const client = createClient({
	userinfo: "\\name\\ps\\spectator\\0",
	send: (b) => sock.send(b, 28910, "127.0.0.1"),
	onEvent: () => { }
});
sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "127.0.0.1", () => { client.start(); setInterval(() => client.sendUserCmd(), 50); });

setTimeout(() => {
	/* find the local entity: the one whose origin changes when we walk */
	const self = client.entities.get(1);
	if (!self || !self.state) { console.log("no entity 1"); process.exit(0); }
	const o = [self.state.readFloatLE(4), self.state.readFloatLE(8), self.state.readFloatLE(12)];
	console.log("entity 1 origin:", o.map(v => v.toFixed(1)).join(","));
	const ps = client.playerState;
	console.log("player state (" + ps.length + "):", ps.toString("hex"));
	/* scan for the float triple */
	for (let off = 0; off + 12 <= ps.length; off++) {
		const a = ps.readFloatLE(off), b = ps.readFloatLE(off + 4), c = ps.readFloatLE(off + 8);
		if (Math.abs(a - o[0]) < 0.5 && Math.abs(b - o[1]) < 0.5 && Math.abs(c - o[2]) < 0.5) {
			console.log("MATCH at offset", off, "->", a.toFixed(1), b.toFixed(1), c.toFixed(1));
		}
	}
	/* also print every float in the block, for inspection */
	const f = [];
	for (let off = 0; off + 4 <= ps.length; off++) f.push(off + ":" + ps.readFloatLE(off).toFixed(1));
	console.log("floats:", f.join(" "));
	process.exit(0);
}, 9000);
