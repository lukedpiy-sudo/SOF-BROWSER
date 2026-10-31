/*
 * webserver.js - a tiny static file server for the browser client.
 *
 * usage: node webserver.js [--port 8000] [--root <dir>]
 */
"use strict";
const http = require("http");
const fs = require("fs");
const path = require("path");
const url = require("url");

const argv = process.argv.slice(2);
const opt = (n, d) => { const i = argv.indexOf(n); return i >= 0 ? argv[i + 1] : d; };
const port = parseInt(opt("--port", "8000"), 10);
const root = path.resolve(opt("--root", __dirname));

const TYPES = {
	".html": "text/html; charset=utf-8",
	".js": "application/javascript; charset=utf-8",
	".css": "text/css; charset=utf-8",
	".json": "application/json",
	".png": "image/png",
	".bin": "application/octet-stream"
};

http.createServer((req, res) => {
	let p = decodeURIComponent(url.parse(req.url).pathname);
	if (p === "/") p = "/www/index.html";
	const file = path.join(root, p);
	if (!file.startsWith(root)) { res.writeHead(403); res.end("no"); return; }
	fs.readFile(file, (err, data) => {
		if (err) { res.writeHead(404, { "Content-Type": "text/plain" }); res.end("not found: " + p); return; }
		res.writeHead(200, {
			"Content-Type": TYPES[path.extname(file).toLowerCase()] || "application/octet-stream",
			"Cache-Control": "no-store"
		});
		res.end(data);
	});
}).listen(port, () => console.log("web: http://127.0.0.1:" + port + "/  (root " + root + ")"));
