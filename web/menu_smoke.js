/*
 * menu_smoke.js - headless Chrome smoke test for the browser client shell.
 *
 * usage: node web/menu_smoke.js <url> <out-png> <evaluate-js>
 *
 * It launches Chrome with a temporary profile, waits for the page, runs the
 * supplied expression through Runtime.evaluate, then captures a screenshot and
 * prints the page state / console tail.  CHROME can override the binary path.
 */
"use strict";
const { spawn } = require("child_process");
const fs = require("fs");
const os = require("os");
const path = require("path");

const CHROME = process.env.CHROME || "/usr/bin/google-chrome";
const url = process.argv[2] || "http://127.0.0.1:8123/index.html";
const outPng = process.argv[3] || "menu-smoke.png";
const expression = process.argv[4] || "window.sofmenu.getState ? 'ok' : 'missing'";
const port = 9400 + (process.pid % 300);
const profile = path.join(os.tmpdir(), "sofmenusmoke" + process.pid);

const chrome = spawn(CHROME, [
	"--headless=new", "--no-sandbox", "--disable-gpu", "--disable-dev-shm-usage",
	"--enable-unsafe-swiftshader", "--use-angle=swiftshader",
	"--remote-debugging-port=" + port, "--user-data-dir=" + profile,
	"--window-size=1280,800", "--no-first-run", "--disable-extensions", "--no-proxy-server",
	"about:blank"
], { stdio: ["ignore", "pipe", "pipe"] });
let chromeErr = "";
chrome.stderr.on("data", d => { chromeErr += d.toString(); });
const sleep = ms => new Promise(r => setTimeout(r, ms));

(async function () {
	let page = null;
	for (let i = 0; i < 80; i++) {
		try {
			const list = await (await fetch("http://127.0.0.1:" + port + "/json/list")).json();
			page = list.find(t => t.type === "page");
			if (page) break;
		} catch (e) { }
		await sleep(200);
	}
	if (!page) throw new Error("no devtools target: " + chromeErr.slice(-800));
	const ws = new WebSocket(page.webSocketDebuggerUrl);
	let id = 0;
	const pending = new Map();
	ws.addEventListener("message", ev => {
		let m; try { m = JSON.parse(ev.data); } catch (e) { return; }
		if (m.id && pending.has(m.id)) { pending.get(m.id)(m); pending.delete(m.id); }
	});
	await new Promise((res, rej) => { ws.addEventListener("open", res); ws.addEventListener("error", rej); });
	const send = (method, params) => new Promise(res => {
		const myId = ++id; pending.set(myId, res);
		ws.send(JSON.stringify({ id: myId, method, params: params || {} }));
	});
	await send("Page.enable");
	await send("Runtime.enable");
	await send("Page.navigate", { url });
	await sleep(2500);
	const ev = await send("Runtime.evaluate", {
		expression: expression, returnByValue: true, awaitPromise: true
	});
	console.log("EVAL: " + (ev.result && ev.result.result ? ev.result.result.value :
		JSON.stringify(ev.result && ev.result.exceptionDetails ? ev.result.exceptionDetails : ev)));
	const st = await send("Runtime.evaluate", {
		expression: "JSON.stringify(window.sofdebug ? window.sofdebug() : 'no state')",
		returnByValue: true
	});
	console.log("STATE: " + (st.result && st.result.result ? st.result.result.value : ""));
	const shot = await send("Page.captureScreenshot", { format: "png" });
	if (shot.result && shot.result.data) fs.writeFileSync(outPng, Buffer.from(shot.result.data, "base64"));
	console.log("screenshot -> " + outPng);
	ws.close();
})().catch(e => { console.log("ERROR: " + e.message); process.exitCode = 1; })
  .finally(() => { try { chrome.kill(); } catch (e) { } });
