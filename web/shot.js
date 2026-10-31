/*
 * shot.js - a headless Chrome screenshot tool that can inject a script into
 * the page before the shot is taken.
 *
 *   node shot.js <url> <outPng> [waitMs] [w] [h] [inject] [postWaitMs]
 *
 * The inject expression is evaluated after the first wait and before the
 * screenshot, so a module can be dropped into the running page.
 */
"use strict";
const { spawn } = require("child_process");
const fs = require("fs");
const os = require("os");
const path = require("path");

const CHROME = "C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe";
const url = process.argv[2] || "http://127.0.0.1:8080/";
const outPng = process.argv[3] || "shot.png";
const waitMs = parseInt(process.argv[4] || "12000", 10);
const width = parseInt(process.argv[5] || "1280", 10);
const height = parseInt(process.argv[6] || "720", 10);
let inject = process.argv[7] || "";
/* "@file" reads the expression from a file (the shell mangles long
 * expressions with quotes) */
if (inject.charAt(0) === "@") inject = fs.readFileSync(inject.slice(1), "utf8");
const postWait = parseInt(process.argv[8] || "4000", 10);
const port = 9333 + (process.pid % 200);
const profile = path.join(os.tmpdir(), "sofshot" + process.pid);

const chrome = spawn(CHROME, [
	"--headless=new", "--no-sandbox", "--disable-gpu",
	"--enable-unsafe-swiftshader", "--use-angle=swiftshader",
	"--remote-debugging-port=" + port,
	"--user-data-dir=" + profile,
	"--window-size=" + width + "," + height,
	"--no-first-run", "--disable-extensions",
	"--autoplay-policy=no-user-gesture-required", "about:blank"
], { stdio: ["ignore", "pipe", "pipe"] });
let chromeErr = "";
chrome.stderr.on("data", d => { chromeErr += d.toString(); });

const sleep = ms => new Promise(r => setTimeout(r, ms));
async function json(u) { const r = await fetch(u); return r.json(); }

(async function () {
	try {
		let list = null;
		for (let i = 0; i < 80; i++) {
			try { list = await json("http://127.0.0.1:" + port + "/json/list"); if (list && list.length) break; }
			catch (e) { }
			await sleep(250);
		}
		if (!list || !list.length) throw new Error("no devtools targets\n" + chromeErr.slice(-400));
		const page = list.find(t => t.type === "page");
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
		await send("Log.enable").catch(() => { });
		await send("Page.navigate", { url });
		await sleep(waitMs);
		if (inject) {
			const r = await send("Runtime.evaluate", { expression: inject, returnByValue: true, awaitPromise: true });
			console.log("INJECT: " + JSON.stringify(r.result && r.result.result ? r.result.result.value :
				(r.result && r.result.exceptionDetails ? r.result.exceptionDetails : r)).slice(0, 800));
			await sleep(postWait);
		}
		for (const expr of ["window.sofdebug ? window.sofdebug() : 'no sofdebug'",
			"window.soflight ? window.soflight.info() : 'no soflight'"]) {
			const st = await send("Runtime.evaluate", { expression: "JSON.stringify(" + expr + ")", returnByValue: true });
			console.log("STATE: " + (st.result && st.result.result ? st.result.result.value :
				JSON.stringify(st.result && st.result.exceptionDetails ? st.result.exceptionDetails : st)).slice(0, 1200));
		}
		const shot = await send("Page.captureScreenshot", { format: "png" });
		if (shot.result && shot.result.data) {
			fs.writeFileSync(outPng, Buffer.from(shot.result.data, "base64"));
			console.log("screenshot -> " + outPng + " (" + fs.statSync(outPng).size + " bytes)");
		} else console.log("no screenshot: " + JSON.stringify(shot).slice(0, 300));
		const logs = await send("Runtime.evaluate", { expression: "JSON.stringify((window.sofconsole||[]).slice(-15))", returnByValue: true });
		console.log("CONSOLE: " + (logs.result && logs.result.result ? logs.result.result.value : ""));
		ws.close();
	} catch (e) {
		console.log("ERROR: " + e.message);
	} finally {
		try { chrome.kill(); } catch (e) { }
		try { fs.rmSync(profile, { recursive: true, force: true }); } catch (e) { }
		process.exit(0);
	}
})();
