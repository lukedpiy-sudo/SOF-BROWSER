/* modelidx.js - find the model index field in the entity state.
 *
 * The model index is a configstring index, so its value has to be one of the
 * configstrings the server sent.  Every 16 bit field of every entity state is
 * checked against that set and against the model-like names.
 */
"use strict";
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const host = process.argv[2] || "127.0.0.1";
const port = parseInt(process.argv[3] || "29000", 10);
const sock = dgram.createSocket("udp4");
let cs = {};
let done = false;

const client = createClient({
	send: (buf) => sock.send(buf, port, host),
	onEvent: (name, data) => {
		if (name === "configstrings") {
			Object.keys(data).forEach(k => { cs[k] = data[k]; });
			return;
		}
		if (name !== "frame" || done) return;
		const n = Object.keys(cs).length;
		if (n < 500) return;
		/* the configstring values that look like models */
		const models = new Set();
		const valid = new Set();
		for (const k of Object.keys(cs)) {
			const v = cs[k];
			valid.add(parseInt(k, 10));
			if (typeof v !== "string") continue;
			if (v.indexOf("/") >= 0 && (v.indexOf(".g") >= 0 || v.indexOf("ghoul") >= 0 ||
				v.indexOf("enemy") >= 0 || v.indexOf("models") >= 0 || v.indexOf("weapons") >= 0 ||
				v.indexOf("items") >= 0 || v.indexOf("world") >= 0)) models.add(parseInt(k, 10));
		}
		console.log("configstrings: " + n + ", model-like: " + models.size);
		/* count the hits per offset (any width, any alignment) */
		const hits = {}, mhits = {};
		for (const e of data.entities.values()) {
			if (!e.state) continue;
			for (let off = 0; off < 116; off++) {
				const v8 = e.state.readUInt8(off);
				if (models.has(v8)) mhits[off + ".u8"] = (mhits[off + ".u8"] || 0) + 1;
				if (valid.has(v8)) hits[off + ".u8"] = (hits[off + ".u8"] || 0) + 1;
				if (off + 2 <= 116) {
					const v16 = e.state.readUInt16LE(off);
					if (models.has(v16)) mhits[off + ".u16"] = (mhits[off + ".u16"] || 0) + 1;
					if (valid.has(v16)) hits[off + ".u16"] = (hits[off + ".u16"] || 0) + 1;
				}
			}
		}
		const ents = data.entities.size;
		console.log("entity count " + ents);
		console.log("-- model-like hits:");
		Object.keys(mhits).map(o => [o, mhits[o]]).sort((a, b) => b[1] - a[1]).slice(0, 8)
			.forEach(r => console.log("  +" + r[0] + "  " + r[1] + "/" + ents));
		console.log("-- any configstring hits:");
		Object.keys(hits).map(o => [o, hits[o]]).sort((a, b) => b[1] - a[1]).slice(0, 8)
			.forEach(r => console.log("  +" + r[0] + "  " + r[1] + "/" + ents));
		/* show the whole state of two entities for a manual look */
		let shown = 0;
		for (const e of data.entities.values()) {
			if (!e.state || shown >= 2) continue;
			console.log("entity #" + e.number + ": " +
				Array.from(e.state.subarray(0, 116)).map(x => x.toString(16).padStart(2, "0")).join(" "));
			shown++;
		}
		done = true;
		process.exit(0);
	}
});

sock.on("message", (msg) => client.onDatagram(msg));
sock.bind(0, "0.0.0.0", () => client.start());
const tick = setInterval(() => { if (client.spawnDone) client.sendUserCmd(); }, 50);
setTimeout(() => { console.log("--- timeout"); process.exit(0); }, 18000);
