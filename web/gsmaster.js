/*
 * gsmaster.js - a master server for Soldier of Fortune speaking the
 * GameSpy protocol the stock engine uses.
 *
 * The engine's master client (SoF.exe 0x200f4bf0 .. 0x200f9xxx) does:
 *
 *   UDP  master.gamespy.com:27900
 *        the server registers with
 *           "\heartbeat\<gameport>\gamename\sofretail\statechanged\"
 *        and answers the per server queries (\basic\, \info\, \rules\,
 *        \players\, \status\, \packets\, \echo\) with "\final\" at the end.
 *
 *   TCP  master.gamespy.com:28900
 *        the client reads a greeting that contains "\secure\<6 bytes>",
 *        answers with
 *           "\gamename\sofretail\gamever\1.6\location\0\validate\<b64>\final\\queryid\1.1\"
 *        (the validation is base64(RC4("iVn3a3", challenge))) and then asks
 *           "\list\cmp\gamename\sofretail\final\"
 *        the reply is the server list.
 *
 *   node gsmaster.js [--udp 27900] [--tcp 28900] [--http 8090]
 */
"use strict";

const dgram = require("dgram");
const net = require("net");
const http = require("http");
const fs = require("fs");
const path = require("path");

const args = { udp: 27900, tcp: 28900, http: 8090, game: "sofretail", store: path.join(__dirname, "gsservers.json") };
for (let i = 2; i < process.argv.length; i++) {
	const a = process.argv[i];
	if (a === "--udp") args.udp = parseInt(process.argv[++i], 10);
	else if (a === "--tcp") args.tcp = parseInt(process.argv[++i], 10);
	else if (a === "--http") args.http = parseInt(process.argv[++i], 10);
	else if (a === "--store") args.store = process.argv[++i];
}
const LOG = "C:/Users/User/AppData/Local/Temp/opencode/gsmaster.log";
function say() {
	const line = Array.prototype.join.call(arguments, " ");
	console.log(line);
	try { fs.appendFileSync(LOG, line + "\n"); } catch (e) { }
}

/* ------------------------------------------------------------------ data */
let servers = [];
try {
	const j = JSON.parse(fs.readFileSync(args.store, "utf8"));
	if (Array.isArray(j.servers)) servers = j.servers;
} catch (e) { }
function save() {
	try { fs.writeFileSync(args.store, JSON.stringify({ servers }, null, 1)); } catch (e) { }
}

/* the engine's list format (the classic Quake II master line) */
function listLines() {
	return servers.map(s => `${s.ip} ${s.port} ${s.hostname} ${s.mapname} ${s.protocol} ${s.dedicated} ${s.players} ${s.maxplayers}`).join("\n");
}
function listGs() {
	return servers.map(s =>
		`\\server\\${s.ip}\\port\\${s.port}\\hostname\\${s.hostname}` +
		`\\mapname\\${s.mapname}\\protocol\\${s.protocol}\\dedicated\\${s.dedicated}` +
		`\\players\\${s.players}\\maxplayers\\${s.maxplayers}\\final\\`
	).join("");
}

/* ------------------------------------------------------------------- UDP */
const udp = dgram.createSocket("udp4");
udp.on("message", (msg, rinfo) => {
	const text = msg.toString("latin1").replace(/\0+$/, "");
	if (!text) return;
	say("[gs] udp <<", text.slice(0, 160));
	const m = text.match(/\\heartbeat\\(\d+)\\gamename\\([^\\]*)/);
	if (m) {
		const port = parseInt(m[1], 10);
		const entry = {
			ip: rinfo.address, port: port,
			hostname: rinfo.address + ":" + port,
			mapname: "", protocol: 3, dedicated: 1,
			players: 0, maxplayers: 16, seen: Date.now()
		};
		const i = servers.findIndex(s => s.ip === entry.ip && s.port === entry.port);
		if (i >= 0) servers[i] = entry; else servers.push(entry);
		say("[gs] +server", entry.ip + ":" + entry.port);
		save();
	}
	/* the per server queries arrive at the game server, not here */
});

/* ------------------------------------------------------------------- TCP */
const tcp = net.createServer((sock) => {
	say("[gs] tcp connection from", sock.remoteAddress);
	let buf = "";
	sock.on("data", (d) => {
		buf += d.toString("latin1");
		if (buf.indexOf("\\list\\") >= 0 || buf.indexOf("\\validate\\") >= 0) {
			/* the client's registration: answer with the list */
			const answer = listLines() + "\n\\final\\\n";
			sock.write(answer);
			say("[gs] >> the server list (" + servers.length + ")");
			buf = "";
		}
	});
	/* the greeting: the master sends a challenge in "\secure\" */
	sock.write("\\secure\\" + Buffer.from([0x5a, 0x11, 0x37, 0x4c, 0x22, 0x09]).toString("latin1") + "\\final\\\n");
	sock.on("error", () => { });
});

/* ------------------------------------------------------------------ HTTP */
const server = http.createServer((req, res) => {
	const cors = {
		"access-control-allow-origin": "*",
		"access-control-allow-headers": "content-type",
		"access-control-allow-methods": "GET,POST,OPTIONS"
	};
	if (req.method === "OPTIONS") { res.writeHead(204, cors); res.end(); return; }
	if (req.url === "/api/servers" || req.url === "/api/servers.txt") {
		if (req.method === "POST") {
			let body = "";
			req.on("data", (d) => body += d);
			req.on("end", () => {
				try {
					const j = JSON.parse(body || "{}");
					if (j.ip && j.port) {
						const entry = {
							ip: j.ip, port: j.port,
							hostname: j.hostname || (j.ip + ":" + j.port),
							mapname: j.mapname || "", protocol: 3, dedicated: 1,
							players: j.players || 0, maxplayers: j.maxplayers || 16,
							seen: Date.now()
						};
						const i = servers.findIndex(s => s.ip === entry.ip && s.port === entry.port);
						if (i >= 0) servers[i] = entry; else servers.push(entry);
						say("[gs] +server", entry.ip + ":" + entry.port, "(published)");
						save();
					}
				} catch (e) { }
				res.writeHead(200, Object.assign({ "content-type": "application/json" }, cors));
				res.end(JSON.stringify({ servers: servers }));
			});
			return;
		}
		res.writeHead(200, Object.assign({ "content-type": "application/json" }, cors));
		res.end(JSON.stringify({ servers: servers }, null, 1));
		return;
	}
	if (req.url === "/api/servers.txt") {
		res.writeHead(200, Object.assign({ "content-type": "text/plain" }, cors));
		res.end(listLines() + "\n");
		return;
	}
	res.writeHead(404, cors); res.end("not found\n");
});

udp.bind(args.udp, "0.0.0.0", () => say("[gs] udp on", args.udp, "(the heartbeat channel)"));
tcp.listen(args.tcp, "0.0.0.0", () => say("[gs] tcp on", args.tcp, "(the list channel)"));
server.listen(args.http, "127.0.0.1", () => say("[gs] http api on http://127.0.0.1:" + args.http + "/api/servers"));
