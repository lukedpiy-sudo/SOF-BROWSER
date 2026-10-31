/* A tiny live probe: dump the player state block and the entity list. */
const { createClient } = require("./sofproto.js");
const dgram = require("dgram");

const sock = dgram.createSocket("udp4");
let frames = 0;
const client = createClient({
	userinfo: "\\name\\probe\\spectator\\0",
	send: (b) => sock.send(b, 28910, "127.0.0.1"),
	onEvent: (ev, data) => {
		if (ev === "oob") console.log("oob:", String(data).slice(0, 60).replace(/\n/g, "|"));
		if (ev === "spawned") console.log("spawned");
		if (ev === "ask") console.log("ask:", data);
		if (ev === "frame" && frames < 2) {
			frames++;
			const ps = client.playerState;
			console.log("frame", client.frameNumber, "playerState len", ps ? ps.length : 0);
			if (ps) console.log(ps.toString("hex"));
			const ents = [];
			client.entities.forEach((e) => {
				if (e.removed || !e.state) return;
				const s = e.state;
				ents.push("#" + e.number + "(" + (s.readInt16LE(4) / 8).toFixed(0) + "," +
					(s.readInt16LE(8) / 8).toFixed(0) + "," + (s.readInt16LE(12) / 8).toFixed(0) + ")");
			});
			console.log("entities:", ents.join(" "));
			/* fingerprint hunt: the local player's origin (from the player
			 * state) inside the entity states */
			const fp = Buffer.from([0x86, 0x1a, 0x12, 0x84, 0x00, 0x02]);
			client.entities.forEach((e) => {
				if (e.removed || !e.state) return;
				const s = e.state;
				for (let o = 0; o + 6 <= s.length; o++) {
					if (s.subarray(o, o + 6).equals(fp)) {
						console.log("  origin fingerprint in entity #" + e.number + " at +0x" + o.toString(16));
					}
				}
			});
			const f0 = client.entities.get(4) || client.entities.get(3);
			if (f0 && f0.state) console.log("entity state hex:", f0.state.toString("hex"));
		}
		if (ev === "frame" && phase > 0) {
			const ps = client.playerState;
			if (ps) {
				let diff = "";
				for (let i = 0; i < ps.length; i++) {
					if (!lastPs || lastPs[i] !== ps[i]) diff += " +" + i.toString(16);
				}
				if (diff) console.log("phase", phase, "frame", client.frameNumber, ps.toString("hex"), "|diff", diff);
				lastPs = Buffer.from(ps);
			}
			/* which entity moves when we walk? */
			const moved = [];
			client.entities.forEach((e) => {
				if (e.removed || !e.state) return;
				const s = e.state;
				const o = s.readInt16LE(4) + "," + s.readInt16LE(8) + "," + s.readInt16LE(12);
				if (lastEnts && lastEnts[e.number] !== undefined && lastEnts[e.number] !== o) moved.push("#" + e.number);
				lastEnts[e.number] = o;
			});
			if (moved.length) console.log("  moved entities:", moved.join(" "));
		}
	}
});

sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "127.0.0.1", () => client.start());
setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
let phase = 0;
let lastPs = null; let lastEnts = {};
setTimeout(() => { phase = 1; console.log("--- walking forward ---"); client.setKey("KeyW", true); }, 4000);
setTimeout(() => { client.setKey("KeyW", false); phase = 2; console.log("--- stopped ---"); }, 6000);
setTimeout(() => { phase = 3; client.look(64, 0); console.log("--- looking right ---"); }, 7000);
setTimeout(() => { sock.close(); process.exit(0); }, 9000);
