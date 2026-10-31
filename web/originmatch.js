/* Match the snapshot's entity origins against the map's entity origins to
 * find the scale and the axis order. */
const fs = require("fs");
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const map = JSON.parse(fs.readFileSync("www/map_nycdm1.json", "utf8"));
const mapEnts = map.entities.filter(e => e.origin).map(e => e.origin);
console.log("map entities with an origin:", mapEnts.length);

const sock = dgram.createSocket("udp4");
const client = createClient({
	userinfo: "\\name\\match\\spectator\\0",
	send: (b) => sock.send(b, 28910, "127.0.0.1"),
	onEvent: () => { }
});
sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "127.0.0.1", () => { client.start(); setInterval(() => client.sendUserCmd(), 50); });

setTimeout(() => {
	const rows = [];
	client.entities.forEach((e) => {
		if (e.removed || !e.state) return;
		const s = e.state;
		rows.push({
			n: e.number,
			a: s.readInt16LE(0x04), b: s.readInt16LE(0x08), c: s.readInt16LE(0x0c)
		});
	});
	console.log("snapshot entities:", rows.length);
	for (const r of rows.slice(0, 8)) {
		console.log(" #" + r.n, "raw", r.a, r.b, r.c);
	}
	/* try every axis permutation and every scale */
	const perms = [[0, 1, 2], [0, 2, 1], [1, 0, 2], [1, 2, 0], [2, 0, 1], [2, 1, 0]];
	const scales = [1, 1 / 2, 1 / 4, 1 / 8, 1 / 16, 1 / 32];
	const mapKeys = new Set(mapEnts.map(o => o.map(v => Math.round(v)).join(",")));
	let best = null;
	for (const p of perms) {
		for (const sc of scales) {
			let hit = 0;
			for (const r of rows) {
				const v = [r.a, r.b, r.c];
				const o = [v[p[0]] * sc, v[p[1]] * sc, v[p[2]] * sc].map(x => Math.round(x));
				if (mapKeys.has(o.join(","))) hit++;
			}
			if (!best || hit > best.hit) best = { p, sc, hit };
		}
	}
	console.log("best match:", best.hit + "/" + rows.length,
		"axis order", best.p, "scale 1/" + Math.round(1 / best.sc));
	process.exit(0);
}, 9000);
