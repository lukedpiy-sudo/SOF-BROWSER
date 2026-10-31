/*
 * master.js - our own SoF server master.
 *
 * SoF's engine registers with a master using the GameSpy IRC-style scheme
 * (cvars gsc_nick / gsc_user / gsc_join / gsc_topic / gsc_talk ...) or the
 * older SOCKS master (net_socks*).  Both original masters are dead, so we
 * run our own.  gsc_server / gsc_port are plain cvars, so pointing the
 * stock engine at this master needs NO binary patch - only config.cfg.
 *
 * This server speaks enough IRC for the engine to register, records the
 * server list it is told about, and exposes that list as JSON for the
 * website / browser client.
 *
 *   node master.js [--port 6667] [--http 8081] [--trace]
 *
 * HTTP:
 *   GET /api/servers   -> { "servers": [ ... ] }
 *   GET /api/servers.txt-> one "ip:port hostname mapname" per line
 */

"use strict";

const http = require("http");
const net = require("net");
const fs = require("fs");
const path = require("path");

function parseArgs(argv) {
	const out = { port: 6667, http: 8081, trace: false, store: path.join(__dirname, "servers.json") };
	for (let i = 2; i < argv.length; i++) {
		const a = argv[i];
		if (a === "--port") out.port = parseInt(argv[++i], 10);
		else if (a === "--http") out.http = parseInt(argv[++i], 10);
		else if (a === "--store") out.store = argv[++i];
		else if (a === "--trace" || a === "-v") out.trace = true;
	}
	return out;
}

const args = parseArgs(process.argv);

/* the server list, in the form the engine hands us */
let servers = [];

function loadStore() {
	try {
		const raw = fs.readFileSync(args.store, "utf8");
		const j = JSON.parse(raw);
		if (Array.isArray(j.servers)) servers = j.servers;
	} catch (e) { /* no store yet */ }
}

function saveStore() {
	try {
		fs.writeFileSync(args.store, JSON.stringify({ servers }, null, 1));
	} catch (e) {
		console.error("[master] could not write store:", e.message);
	}
}

loadStore();

/* Remember a list entry. The engine's exact format is still being observed,
 * so accept a few shapes and keep the raw text plus the parsed address. */
function remember(raw) {
	const text = raw.trim();
	if (!text) return;
	if (servers.some((s) => s.raw === text)) return;
	const m = text.match(/^(\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}):(\d+)\s*(.*)$/);
	const entry = { raw: text, address: m ? m[1] + ":" + m[2] : null, info: m ? m[3] : text };
	servers.push(entry);
	console.log("[master] +server %s", text);
	saveStore();
}

/* ------------------------------------------------------------------ */
function handleConnection(sock) {
	let buf = "";
	let nick = "?";
	let joined = null;
	let topic = null;

	console.log("[master] client connected");

	sock.setEncoding("utf8");
	sock.on("data", (d) => {
		buf += d;
		let nl;
		while ((nl = buf.indexOf("\n")) >= 0) {
			const line = buf.slice(0, nl).replace(/\r$/, "");
			buf = buf.slice(nl + 1);
			if (!line) continue;
			console.log("[master] << %s", line);

			const parts = line.split(" ");
			const cmd = (parts[0] || "").toUpperCase();

			if (cmd === "NICK") {
				nick = parts[1] || nick;
				// minimal welcome so the client proceeds
				sock.write(":master 001 " + nick + " :Welcome to the SoF master\r\n");
				sock.write(":master 002 " + nick + " :Your host is master\r\n");
				sock.write(":master 003 " + nick + " :This server was created today\r\n");
				sock.write(":master 004 " + nick + " " + nick + " 1.0 o o\r\n");
			} else if (cmd === "USER") {
				// nothing to do, the 001 above already greeted
			} else if (cmd === "PING") {
				sock.write("PONG :" + (parts[1] || "master") + "\r\n");
			} else if (cmd === "JOIN") {
				joined = parts[1] || null;
				sock.write(":master 366 " + nick + " " + joined + " :End of /NAMES list\r\n");
				// hand over the current list as the channel topic
				if (joined) {
					const list = servers.map((s) => s.raw).join("\n");
					sock.write(":master 332 " + nick + " " + joined + " :" + list + "\r\n");
					sock.write(":master 333 " + nick + " " + joined + " :master\r\n");
				}
			} else if (cmd === "TOPIC") {
				// the engine is registering: it sets the channel topic to
				// the server list. Remember whatever it publishes.
				if (parts.length > 1) {
					topic = parts.slice(1).join(" ").replace(/^:/, "");
					console.log("[master] topic set: %s", topic);
					for (const line of topic.split(/\r?\n/)) {
						const t = line.trim();
						if (t) remember(t);
					}
				}
			} else if (cmd === "PRIVMSG" || cmd === "NOTICE") {
				const text = parts.slice(2).join(" ").replace(/^:/, "");
				console.log("[master] message: %s", text);
				for (const line of text.split(/\r?\n/)) {
					const t = line.trim();
					if (t) remember(t);
				}
			} else if (cmd === "QUIT" || cmd === "PART") {
				sock.end();
			}
		}
	});

	sock.on("close", () => console.log("[master] client disconnected"));
	sock.on("error", (e) => console.error("[master] socket error:", e.message));
}

/* ------------------------------------------------------------------ */
net.createServer(handleConnection).listen(args.port, "0.0.0.0", () => {
	console.log("[master] IRC-style master on " + args.port);
});

http.createServer((req, res) => {
	const url = (req.url || "/").split("?")[0];
	const cors = {
		"Access-Control-Allow-Origin": "*",
		"Content-Type": "application/json"
	};
	if (url === "/api/servers") {
		res.writeHead(200, cors);
		res.end(JSON.stringify({ servers }, null, 1));
	} else if (url === "/api/servers.txt") {
		res.writeHead(200, { "Access-Control-Allow-Origin": "*", "Content-Type": "text/plain" });
		res.end(servers.map((s) => s.raw).join("\n") + "\n");
	} else {
		res.writeHead(200, cors);
		res.end(JSON.stringify({ master: "sof", port: args.port, count: servers.length, servers }));
	}
}).listen(args.http, "0.0.0.0", () => {
	console.log("[master] http api on " + args.http);
});
