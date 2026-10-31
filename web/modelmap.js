/* Resolve the configstring model names against the game's pak: which pak
 * file does each model name refer to? */
const fs = require("fs");
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const table = JSON.parse(fs.readFileSync("sofstringtable.json", "utf8")).names;

/* the pak directory */
const pakPath = "C:/Users/User/Soldier of Fortune/Base/pak0.pak";
const fd = fs.openSync(pakPath, "r");
const head = Buffer.alloc(12);
fs.readSync(fd, head, 0, 12, 0);
const dirLen = head.readInt32LE(8);
const dir = Buffer.alloc(dirLen);
fs.readSync(fd, dir, 0, dirLen, head.readInt32LE(4));
const pakNames = new Map();
for (let o = 0; o + 64 <= dir.length; o += 64) {
	let z = 0;
	while (z < 56 && dir[o + z] !== 0) z++;
	const name = dir.toString("latin1", o, o + z).toLowerCase();
	pakNames.set(name, dir.readInt32LE(o + 60));
}
console.log("pak entries:", pakNames.size);

const sock = dgram.createSocket("udp4");
const client = createClient({
	userinfo: "\\name\\models2\\spectator\\0",
	send: (b) => sock.send(b, 28910, "127.0.0.1"),
	onEvent: () => { }
});
sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "127.0.0.1", () => { client.start(); setInterval(() => client.sendUserCmd(), 50); });

setTimeout(() => {
	const cs = client.configstrings;
	const names = [];
	for (const k of Object.keys(cs)) {
		const v = cs[k];
		if (typeof v === "string") { names.push([k, v]); continue; }
		const n = table[v];
		if (n) names.push([k, n]);
	}
	/* the ones that look like models (not sounds, not cvars) */
	const models = names.filter(x => typeof x[1] === "string" && !/\.wav$/i.test(x[1]) && x[1][0] !== "*" && !/^[0-9.]/.test(x[1]));
	console.log("configstrings:", names.length, "| model-ish:", models.length);
	const hits = [];
	const seen = new Set();
	for (const [k, n] of models) {
		const low = n.toLowerCase();
		if (seen.has(low)) continue;
		seen.add(low);
		/* the pak paths carry prefixes ("effects/...", "/...") so match on the
		 * tail of the path */
		for (const [pname, len] of pakNames) {
			if (pname.endsWith(low + ".eft") || pname.endsWith(low + ".m32") || pname.endsWith(low + ".gpm")) {
				hits.push([k, n, pname, len]);
				break;
			}
		}
	}
	console.log("matched in the pak:", hits.length);
	for (const h of hits.slice(0, 24)) console.log("  cs[" + h[0] + "] " + h[1] + " -> " + h[2] + " (" + h[3] + " bytes)");
	/* the unmatched ones */
	const matched = new Set(hits.map(h => h[1].toLowerCase()));
	console.log("unmatched sample:",
		models.filter(x => !matched.has(x[1].toLowerCase())).slice(0, 10).map(x => x[1]).join(" | "));
	/* what do the pak's model files look like? */
	const byExt = {};
	for (const [p, len] of pakNames) {
		const e = p.slice(p.lastIndexOf("."));
		byExt[e] = byExt[e] || { n: 0, total: 0, sample: null };
		byExt[e].n++; byExt[e].total += len;
		if (!byExt[e].sample) byExt[e].sample = p;
	}
	console.log("pak file types:", Object.entries(byExt).sort((a, b) => b[1].n - a[1].n).slice(0, 12)
		.map(e => e[0] + "=" + e[1].n).join(" "));
	process.exit(0);
}, 9000);
