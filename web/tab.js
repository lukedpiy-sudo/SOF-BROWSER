/*
 * tab.js - manage the CDP tabs: list them, close all but one, open a fresh
 * game tab, or reload the game tab.
 */
"use strict";
const http = require("http");
const CDP = process.env.REA_CDP || "http://127.0.0.1:9222";

function req(method, path) {
	return new Promise((res, rej) => {
		const u = new URL(CDP + path);
		const r = http.request({ hostname: u.hostname, port: u.port, path: u.pathname + u.search, method }, (x) => {
			let b = ""; x.on("data", d => b += d);
			x.on("end", () => { try { res(JSON.parse(b)); } catch (e) { res(b); } });
		});
		r.on("error", rej); r.end();
	});
}

(async () => {
	const cmd = process.argv[2] || "list";
	if (cmd === "list") {
		const l = await req("GET", "/json/list");
		l.filter(t => t.type === "page").forEach(t => console.log(t.id, "|", t.url.slice(0, 70)));
	} else if (cmd === "closeall") {
		const l = await req("GET", "/json/list");
		for (const t of l.filter(t => t.type === "page")) {
			if (t.url.indexOf("index.html") >= 0 || t.url === "about:blank") {
				await req("GET", "/json/close/" + t.id);
				console.log("closed " + t.id);
			}
		}
	} else if (cmd === "open") {
		const url = process.argv[3] || "http://127.0.0.1:8080/index.html";
		const t = await req("PUT", "/json/new?" + encodeURIComponent(url));
		console.log("opened " + t.id + " " + t.url);
	} else if (cmd === "close") {
		const l = await req("GET", "/json/list");
		for (const t of l.filter(t => t.type === "page")) {
			await req("GET", "/json/close/" + t.id);
			console.log("closed " + t.id);
		}
	}
	process.exit(0);
})();
