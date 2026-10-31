/*
 * relay.js - dependency-free UDP <-> WebSocket relay for Quake III style
 * servers (Soldier of Fortune).
 *
 * WHY THIS EXISTS
 * --------------
 * A browser cannot send UDP. So a browser client needs a path to the
 * game server. The obvious design - one shared UDP socket for all browser
 * clients - breaks Quake III's netchan, which keys its reliability state on
 * the client's source ADDRESS. Every browser client would appear to be the
 * same host and their reliable messages would interleave and corrupt each
 * other.
 *
 * The fix is cheap: give every browser session its OWN UDP socket (its own
 * ephemeral source port). The server then sees each browser client as a
 * distinct address, exactly as if they were on different machines, and the
 * stock server needs no modification at all.
 *
 * USAGE
 *   node relay.js [--http 8080] [--server 127.0.0.1:27960]
 *
 * The browser opens  ws://host:8080/relay  and (optionally) sends a JSON
 * line  {"type":"connect","host":"127.0.0.1","port":27960}  first.
 * If the relay was started with --server, that target is used by default.
 * Binary frames are raw game datagrams in both directions.
 *
 * The client must send a QUIC-style source port that the server can
 * distinguish; the relay preserves the mapping 1 session = 1 socket.
 */

"use strict";

const http = require("http");
const crypto = require("crypto");
const dgram = require("dgram");
const url = require("url");
const fs = require("fs");
const path = require("path");

// ---------------------------------------------------------------- args
function parseArgs(argv) {
	const out = { http: 8080, server: null, verbose: false, www: require("path").join(__dirname, "www"), pak: null };
	for (let i = 2; i < argv.length; i++) {
		const a = argv[i];
		if (a === "--http") out.http = parseInt(argv[++i], 10);
		else if (a === "--server") out.server = argv[++i];
		else if (a === "--verbose" || a === "-v") out.verbose = true;
		else if (a === "--www") out.www = require("path").resolve(argv[++i]);
		else if (a === "--pak") out.pak = argv[++i];
	}
	return out;
}

const args = parseArgs(process.argv);
const GUID = "258EAFA5-E914-47DA-95CA-C5AB0DC85B11";

function log(...a) {
	if (args.verbose) console.log("[relay]", ...a);
}

// ------------------------------------------------------- websocket bits
function acceptKey(key) {
	return crypto.createHash("sha1").update(key + GUID).digest("base64");
}

/* frame parser that handles fragmentation and control frames */
function makeParser(onMessage, onClose, onPing) {
	let buf = Buffer.alloc(0);
	let frag = null;      // {opcode, chunks:[]}
	let fragOp = 0;

	return function feed(chunk) {
		buf = Buffer.concat([buf, chunk]);

		for (;;) {
			if (buf.length < 2) return;

			const b0 = buf[0];
			const b1 = buf[1];
			const fin = (b0 & 0x80) !== 0;
			const opcode = b0 & 0x0f;
			const masked = (b1 & 0x80) !== 0;
			let len = b1 & 0x7f;
			let off = 2;

			if (len === 126) {
				if (buf.length < off + 2) return;
				len = buf.readUInt16BE(off);
				off += 2;
			} else if (len === 127) {
				if (buf.length < off + 8) return;
				const hi = buf.readUInt32BE(off);
				const lo = buf.readUInt32BE(off + 4);
				len = hi * 4294967296 + lo;
				off += 8;
			}

			let mask = null;
			if (masked) {
				if (buf.length < off + 4) return;
				mask = buf.subarray(off, off + 4);
				off += 4;
			}

			if (buf.length < off + len) return;

			let payload = Buffer.from(buf.subarray(off, off + len));
			if (mask) {
				for (let i = 0; i < payload.length; i++) payload[i] ^= mask[i & 3];
			}
			buf = buf.subarray(off + len);

			if (opcode === 0x8) { onClose(); return; }
			if (opcode === 0x9) { onPing(payload); continue; }
			if (opcode === 0xa) continue;      // pong
			if (opcode === 0x0) {
				// continuation
				if (frag) { frag.chunks.push(payload); }
				if (fin && frag) {
					const full = Buffer.concat(frag.chunks);
					onMessage(full, frag.opcode);
					frag = null;
				}
				continue;
			}
			// data frame
			if (!fin) {
				frag = { opcode, chunks: [payload] };
				fragOp = opcode;
				continue;
			}
			onMessage(payload, opcode);
		}
	};
}

function encodeFrame(payload, opcode) {
	const len = payload.length;
	let header;
	if (len < 126) {
		header = Buffer.alloc(2);
		header[1] = len;
	} else if (len < 65536) {
		header = Buffer.alloc(4);
		header[1] = 126;
		header.writeUInt16BE(len, 2);
	} else {
		header = Buffer.alloc(10);
		header[1] = 127;
		header.writeUInt32BE(0, 2);
		header.writeUInt32BE(len, 6);
	}
	header[0] = 0x80 | (opcode || 2);
	return Buffer.concat([header, payload]);
}

// ------------------------------------------------------------- session
let sessionId = 0;

function handleSession(ws, req) {
	const id = ++sessionId;
	const sock = dgram.createSocket("udp4");
	let target = args.server ? parseTarget(args.server) : null;
	let closed = false;

	log("session", id, "open");

	function parseTarget(s) {
		const i = s.lastIndexOf(":");
		const host = s.slice(0, i);
		const port = parseInt(s.slice(i + 1), 10);
		return { host, port };
	}

	sock.on("message", (msg) => {
		/* datagrams arriving on our UDP socket come FROM the game server:
		 * forward them to the browser, never back to the server */
		if (closed) return;
		ws.send(msg);
	});

	sock.on("error", (e) => console.error("[relay] udp error", e.message));

	sock.bind(0, "0.0.0.0", () => {
		log("session", id, "local udp port", sock.address().port);
	});

	const parser = makeParser(
		(payload, opcode) => {
			if (opcode === 0x1) {
				// text: JSON control
				const txt = payload.toString("utf8");
				log("frame text", payload.length, JSON.stringify(txt.slice(0, 80)));
				try {
					const msg = JSON.parse(txt);
					if (msg.type === "connect") {
						target = { host: msg.host, port: msg.port };
						log("session", id, "target", target.host + ":" + target.port);
						ws.send(Buffer.from(JSON.stringify(
							{ type: "connected", localPort: sock.address().port }), "utf8"), 0x1);
					}
				} catch (e) {
					log("session", id, "bad json", JSON.stringify(txt.slice(0, 60)));
				}
				return;
			}
			// binary: game datagram -> server
			log("frame binary", payload.length);
			if (!target) {
				log("session", id, "binary before connect, dropped");
				return;
			}
			sock.send(payload, target.port, target.host);
		},
		() => close(),
		(payload) => ws.send(payload, 0xa));
	ws.on("message", (data) => parser(Buffer.isBuffer(data) ? data : Buffer.from(data)));
	ws.on("close", () => close());
	ws.on("error", () => close());

	function close() {
		if (closed) return;
		closed = true;
		log("session", id, "close");
		try { sock.close(); } catch (e) { /* already closed */ }
		try { ws.destroy(); } catch (e) { /* already gone */ }
	}
}

// ------------------------------------------------------------- server

/* The game assets live in the Base\*.pak files (pak0.pak is 705 MB), so they
 * are served straight out of the paks instead of being extracted:
 * /pak/<path in the pak>.
 *
 * There is more than one pak: 831 of the 1591 sounds that the level scripts
 * name live in pak1.pak, and the SoF Plus content is in basicpack2015v2.pak.
 * The paks are searched in the order the engine loads them (pak0 first). */
const pakPaths = (args.pak ? [args.pak] : [
	"C:\\Users\\User\\Soldier of Fortune\\Base\\pak0.pak",
	"C:\\Users\\User\\Soldier of Fortune\\Base\\pak1.pak",
	"C:\\Users\\User\\Soldier of Fortune\\Base\\pak2.pak",
	"C:\\Users\\User\\Soldier of Fortune\\Base\\pak3.pak",
	"C:\\Users\\User\\Soldier of Fortune\\Base\\basicpack2015v2.pak",
	"C:\\Users\\User\\Soldier of Fortune\\Base\\sofplus.pak",
	"C:\\Users\\User\\Soldier of Fortune\\Base\\sofplus-optional.pak",
	"C:\\Users\\User\\Soldier of Fortune\\Base\\sofplus-fonts.pak",
	"C:\\Users\\User\\Soldier of Fortune\\Base\\gs.pak"
]);
let pakDir = null;
function pakIndex() {
	if (pakDir) return pakDir;
	const map = new Map();
	for (const p of pakPaths) {
		try {
			const fd = fs.openSync(p, "r");
			const head = Buffer.alloc(16);
			fs.readSync(fd, head, 0, 16, 0);
			const dirLen = head.readUInt32LE(8);
			const dirOff = head.readUInt32LE(4);
			const dir = Buffer.alloc(dirLen);
			fs.readSync(fd, dir, 0, dirLen, dirOff);
			for (let i = 0; i < dirLen; i += 64) {
				let name = dir.toString("latin1", i, i + 56);
				const z = name.indexOf("\0");
				if (z >= 0) name = name.slice(0, z);
				/* the first pak that has the name wins (the engine's order) */
				const key = name.toLowerCase();
				if (!map.has(key)) map.set(key, { fd, off: dir.readUInt32LE(i + 56), len: dir.readUInt32LE(i + 60) });
			}
		} catch (e) { /* this pak is missing */ }
	}
	pakDir = map;
	return pakDir;
}

const server = http.createServer((req, res) => {
	const p = decodeURIComponent(url.parse(req.url).pathname);

	/* an asset out of the pak */
	if (p.startsWith("/pak/")) {
		const want = p.slice(5).toLowerCase();
		const e = pakIndex().get(want);
		if (!e) { res.writeHead(404, { "Content-Type": "text/plain" }); res.end("not in the pak\n"); return; }
		const buf = Buffer.alloc(e.len);
		fs.readSync(e.fd, buf, 0, e.len, e.off);
		const ext = want.slice(want.lastIndexOf("."));
		const types = {
			".wav": "audio/wav", ".tga": "image/x-tga", ".ghb": "application/octet-stream",
			".gpm": "text/plain", ".gsq": "text/plain", ".m32": "application/octet-stream",
			".os": "application/octet-stream", ".eft": "application/octet-stream"
		};
		res.writeHead(200, { "Content-Type": types[ext] || "application/octet-stream", "Cache-Control": "public, max-age=86400" });
		res.end(buf);
		return;
	}

	/* also serve the browser client, so one process is enough */
	const file = path.join(args.www, p === "/" ? "index.html" : p.replace(/^\/+/, ""));
	if (file.startsWith(args.www)) {
		fs.readFile(file, (err, data) => {
			if (err) { res.writeHead(404, { "Content-Type": "text/plain" }); res.end("not found\n"); return; }
			const ext = file.slice(file.lastIndexOf("."));
			const types = {
				".html": "text/html; charset=utf-8", ".js": "application/javascript; charset=utf-8",
				".css": "text/css; charset=utf-8", ".png": "image/png", ".json": "application/json",
				".wav": "audio/wav", ".md": "text/plain; charset=utf-8"
			};
			res.writeHead(200, { "Content-Type": types[ext] || "application/octet-stream", "Cache-Control": "no-store" });
			res.end(data);
		});
		return;
	}
	res.writeHead(200, { "Content-Type": "text/plain" });
	res.end("sof relay\n");
});

server.on("upgrade", (req, socket, head) => {
	const key = req.headers["sec-websocket-key"];
	if (!key) { socket.destroy(); return; }

	const hdr = [
		"HTTP/1.1 101 Switching Protocols",
		"Upgrade: websocket",
		"Connection: Upgrade",
		"Sec-WebSocket-Accept: " + acceptKey(key),
		"\r\n"
	].join("\r\n");
	socket.write(hdr);

	const ws = require("stream").Duplex ? makeWsShim(socket) : null;
	// We implement the small amount of duplex behaviour we need directly.
	handleSession(makeWsShim(socket), req);
	if (head && head.length) socket.unshift(head);
});

/* minimal ws wrapper over a raw socket */
function makeWsShim(socket) {
	const listeners = { message: [], close: [], error: [] };
	const ws = {
		send(payload, opcode) { try { socket.write(encodeFrame(payload, opcode === undefined ? 0x2 : opcode)); } catch (e) { /* closed */ } },
		on(ev, fn) { (listeners[ev] = listeners[ev] || []).push(fn); },
		destroy() { try { socket.destroy(); } catch (e) { /* gone */ } }
	};
	socket.on("data", (d) => {
		for (const fn of listeners.message) fn(d);
	});
	socket.on("close", () => { for (const fn of listeners.close) fn(); });
	socket.on("error", (e) => { for (const fn of listeners.error) fn(e); });
	return ws;
}

server.listen(args.http, () => {
	console.log("[relay] listening on http://" + args.http + " (ws path /relay)");
	if (args.server) console.log("[relay] default target " + args.server);
});


