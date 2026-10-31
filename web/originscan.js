/* Find the origin field in the 116 byte entity state: scan every offset and
 * every scale / axis order and see which one matches the map's entities. */
const fs = require("fs");
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const map = JSON.parse(fs.readFileSync("www/map_nycdm1.json", "utf8"));
const mapEnts = map.entities.filter(e => e.origin).map(e => e.origin);
const mapKeys = new Set(mapEnts.map(o => o.map(v => Math.round(v)).join(",")));

const sock = dgram.createSocket("udp4");
const client = createClient({
	userinfo: "\\name\\scan\\spectator\\0",
	send: (b) => sock.send(b, 28910, "127.0.0.1"),
	onEvent: () => { }
});
sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "127.0.0.1", () => { client.start(); setInterval(() => client.sendUserCmd(), 50); });

setTimeout(() => {
	const states = [];
	client.entities.forEach((e) => {
		if (e.removed || !e.state) return;
		states.push({ n: e.number, s: e.state });
	});
	console.log("entities:", states.length, "| map entities:", mapEnts.length);
	const perms = [[0, 1, 2], [0, 2, 1], [1, 0, 2], [1, 2, 0], [2, 0, 1], [2, 1, 0]];
	const scales = [1, 1 / 2, 1 / 4, 1 / 8, 1 / 16];
	const results = [];
	for (let off = 0; off + 12 <= 116; off += 2) {
		for (const p of perms) {
			for (const sc of scales) {
				let hit = 0;
				for (const st of states) {
					const v = [st.s.readFloatLE(off), st.s.readFloatLE(off + 4), st.s.readFloatLE(off + 8)];
					const o = [v[p[0]] * sc, v[p[1]] * sc, v[p[2]] * sc].map(x => Math.round(x));
					if (mapKeys.has(o.join(","))) hit++;
				}
				if (hit > 0) results.push({ off, p, sc, hit });
			}
		}
	}
	results.sort((a, b) => b.hit - a.hit);
	console.log("candidates:", results.length);
	for (const r of results.slice(0, 8)) {
		console.log("  offset 0x" + r.off.toString(16), "axes", r.p.join(""), "scale 1/" + Math.round(1 / r.sc), "hits", r.hit + "/" + states.length);
	}
	process.exit(0);
}, 9000);
