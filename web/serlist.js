/*
 * serlist.js - the SoF server list service.
 *
 * Queries the live GameSpy "gsm" masters for the SoF server list and serves
 * it as JSON for the website / browser client.
 *
 * Protocol (verified live against sof1master.sofvault.org):
 *   1. TCP connect to <master>:28900
 *   2. send "IDQD"
 *   3. master answers \secure\<challenge>\...
 *   4. reply with base64(RC4(challenge, key="iVn3a3")) inside
 *         \gamename\sofretail\gamever\1.07f\location\0\validate\<v>\final\\queryid\1.1\
 *   5. request the list with
 *         \list\cmp\gamename\sofretail\final\
 *   6. the master answers with the list, terminated by \final\
 *      each server is 6 bytes: 4-byte IPv4 + 2-byte big-endian port
 *
 * usage: node serlist.js [--port 8082] [--master host:port ...] [--interval 60]
 *   GET /api/servers      -> { "servers": [ {ip,port,host?} ], "updated": ts }
 *   GET /api/servers.txt  -> "ip:port" per line
 */

"use strict";

const net = require("net");
const http = require("http");

const MASTER_PORT = 28900;
const GAMENAME = "sofretail";
const GAMEVER = "1.07f";
const RC4_KEY = "iVn3a3";
const B64 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

function parseArgs(argv) {
	const out = {
		port: 8082,
		interval: 60,
		masters: [
			"sof1master.sofvault.org:28900",
			"sof1master.megalag.org:28900",
			"master.333networks.com:28900",
			"gsm.qtracker.com:28900",
			"master2.qtracker.com:28900"
		]
	};
	for (let i = 2; i < argv.length; i++) {
		const a = argv[i];
		if (a === "--port") out.port = parseInt(argv[++i], 10);
		else if (a === "--interval") out.interval = parseInt(argv[++i], 10);
		else if (a === "--master") out.masters = [argv[++i]];
	}
	return out;
}

const args = parseArgs(process.argv);

/* ------------------------------------------------------- validate ---- */
function gamespyValidate(challenge) {
	if (!challenge || challenge.length > 65) return "";

	const key = [];
	for (let i = 0; i < 6; i++) key.push(RC4_KEY.charCodeAt(i));

	const table = new Uint8Array(256);
	for (let i = 0; i < 256; i++) table[i] = i;
	let a = 0;
	for (let i = 0; i < 256; i++) {
		a = (a + table[i] + key[i % 6]) & 255;
		const t = table[i]; table[i] = table[a]; table[a] = t;
	}

	const enc = Buffer.alloc(challenge.length);
	let b = 0;
	a = 0;
	for (let i = 0; i < challenge.length; i++) {
		const ch = challenge.charCodeAt(i);
		a = (a + ch + 1) & 255;
		const x = table[a];
		b = (b + x) & 255;
		const y = table[b];
		table[b] = x; table[a] = y;
		enc[i] = ch ^ table[(x + y) & 255];
	}

	const padded = Math.ceil(challenge.length / 3) * 3;
	const buf = Buffer.alloc(padded);
	enc.copy(buf);
	let out = "";
	for (let i = 0; i < padded; i += 3) {
		const x = buf[i], y = buf[i + 1], z = buf[i + 2];
		out += B64[x >> 2];
		out += B64[((x & 3) << 4) | (y >> 4)];
		out += B64[((y & 15) << 2) | (z >> 6)];
		out += B64[z & 63];
	}
	return out;
}

/* --------------------------------------------------------- query ----- */
function queryMaster(host, port) {
	return new Promise((resolve) => {
		const sock = net.createConnection({ host, port });
		let buf = Buffer.alloc(0);
		let done = false;

		const finish = (servers, err) => {
			if (done) return;
			done = true;
			try { sock.destroy(); } catch (e) { /* already gone */ }
			resolve(err ? { error: String(err) } : { servers });
		};

		sock.setTimeout(8000);
		sock.on("timeout", () => finish(null, "timeout"));
		sock.on("error", (e) => finish(null, e.message));
		sock.on("close", () => finish(null, "closed"));

		sock.on("connect", () => sock.write("IDQD"));

		sock.on("data", (d) => {
			buf = Buffer.concat([buf, d]);

			const marker = Buffer.from("\\secure\\");
			const mi = buf.indexOf(marker);
			if (mi < 0) {
				if (buf.length > 4096) finish(null, "no challenge");
				return;
			}
			const start = mi + marker.length;
			const end = buf.indexOf(0x5c, start);   // '\'
			const challenge = buf.subarray(start, end < 0 ? start + 6 : end).toString("latin1");
			const validation = gamespyValidate(challenge);
			if (!validation) { finish(null, "validation failed"); return; }

			buf = Buffer.alloc(0);
			sock.write("\\gamename\\" + GAMENAME + "\\gamever\\" + GAMEVER +
				"\\location\\0\\validate\\" + validation + "\\final\\\\queryid\\1.1\\\n");
			sock.write("\\list\\cmp\\gamename\\" + GAMENAME + "\\final\\\n");

			sock.on("data", (d2) => {
				buf = Buffer.concat([buf, d2]);
				const fin = buf.indexOf(Buffer.from("\\final\\"));
				if (fin < 0) {
					if (buf.length > 262144) finish(null, "list too big");
					return;
				}
				const body = buf.subarray(0, fin);
				const servers = [];
				for (let i = 0; i + 6 <= body.length; i += 6) {
					const ip = body[i] + "." + body[i + 1] + "." + body[i + 2] + "." + body[i + 3];
					const p = body.readUInt16BE(i + 4);
					servers.push({ ip, port: p });
				}
				finish(servers);
			});
		});
	});
}

/* ---------------------------------------------------------- state ---- */
let state = { servers: [], updated: 0, masters: {} };

async function refresh() {
	const seen = new Map();
	const per = {};
	for (const m of args.masters) {
		const idx = m.lastIndexOf(":");
		const host = m.slice(0, idx);
		const port = parseInt(m.slice(idx + 1), 10) || MASTER_PORT;
		try {
			const r = await queryMaster(host, port);
			if (r.error) { per[host] = "ERR " + r.error; continue; }
			per[host] = r.servers.length + " servers";
			for (const s of r.servers) {
				const k = s.ip + ":" + s.port;
				if (!seen.has(k)) seen.set(k, s);
			}
		} catch (e) {
			per[host] = "ERR " + e.message;
		}
	}
	state.servers = Array.from(seen.values());
	state.updated = Date.now();
	state.masters = per;
	console.log("[serlist] " + state.servers.length + " servers; " + JSON.stringify(per));
}

function serve() {
	http.createServer((req, res) => {
		const url = (req.url || "/").split("?")[0];
		const cors = { "Access-Control-Allow-Origin": "*", "Cache-Control": "no-store" };
		if (url === "/api/servers") {
			res.writeHead(200, Object.assign({ "Content-Type": "application/json" }, cors));
			res.end(JSON.stringify(state, null, 1));
		} else if (url === "/api/servers.txt") {
			res.writeHead(200, Object.assign({ "Content-Type": "text/plain" }, cors));
			res.end(state.servers.map((s) => s.ip + ":" + s.port).join("\n") + "\n");
		} else {
			res.writeHead(200, Object.assign({ "Content-Type": "application/json" }, cors));
			res.end(JSON.stringify({
				service: "sof server list",
				masters: args.masters,
				count: state.servers.length,
				updated: state.updated,
				perMaster: state.masters
			}));
		}
	}).listen(args.port, "0.0.0.0", () => {
		console.log("[serlist] http on " + args.port);
	});
}

serve();
refresh();
setInterval(refresh, args.interval * 1000);
