/*
 * cdp.js - drive headless Chrome over the DevTools protocol: open a page,
 * wait, read the page state and capture a screenshot.
 *
 * usage: node cdp.js <url> <outPng> [waitMs] [width] [height]
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
const port = 9333 + (process.pid % 200);
const profile = path.join(os.tmpdir(), "sofchrome" + process.pid);

const chrome = spawn(CHROME, [
	"--headless=new",
	"--no-sandbox",
	"--disable-gpu",
	"--enable-unsafe-swiftshader",
	"--use-angle=swiftshader",
	"--remote-debugging-port=" + port,
	"--user-data-dir=" + profile,
	"--window-size=" + width + "," + height,
	"--no-first-run",
	"--disable-extensions",
	"--autoplay-policy=no-user-gesture-required",
	"about:blank"
], { stdio: ["ignore", "pipe", "pipe"] });

let chromeErr = "";
chrome.stderr.on("data", (d) => { chromeErr += d.toString(); });

function sleep(ms) { return new Promise(r => setTimeout(r, ms)); }

async function json(url) {
	const res = await fetch(url);
	return res.json();
}

(async function main() {
	try {
		// wait for the devtools endpoint
		let list = null;
		for (let i = 0; i < 60; i++) {
			try { list = await json("http://127.0.0.1:" + port + "/json/list"); if (list && list.length) break; }
			catch (e) { /* not up yet */ }
			await sleep(250);
		}
		if (!list || !list.length) throw new Error("no devtools targets\n" + chromeErr.slice(-500));
		const page = list.find(t => t.type === "page");
		const ws = new WebSocket(page.webSocketDebuggerUrl);
		let id = 0;
		const pending = new Map();
		ws.addEventListener("message", (ev) => {
			let m;
			try { m = JSON.parse(ev.data); } catch (e) { return; }
			if (m.id && pending.has(m.id)) { pending.get(m.id)(m); pending.delete(m.id); }
		});
		await new Promise((res, rej) => {
			ws.addEventListener("open", res);
			ws.addEventListener("error", rej);
		});
		const send = (method, params) => new Promise((res) => {
			const myId = ++id;
			pending.set(myId, res);
			ws.send(JSON.stringify({ id: myId, method, params: params || {} }));
		});
		await send("Page.enable");
		await send("Runtime.enable");
		await send("Page.navigate", { url });
		await sleep(waitMs);
		const st = await send("Runtime.evaluate", {
			expression: "JSON.stringify(window.sofdebug ? window.sofdebug() : 'no state')",
			returnByValue: true
		});
		console.log("PAGE STATE: " + (st.result && st.result.result ? st.result.result.value : JSON.stringify(st.result && st.result.exceptionDetails ? st.result.exceptionDetails : st)));
		const shot = await send("Page.captureScreenshot", { format: "png" });
		if (shot.result && shot.result.data) {
			fs.writeFileSync(outPng, Buffer.from(shot.result.data, "base64"));
			console.log("screenshot -> " + outPng);
		} else {
			console.log("no screenshot: " + JSON.stringify(shot).slice(0, 300));
		}
		const logs = await send("Runtime.evaluate", {
			expression: "JSON.stringify((window.sofconsole||[]).slice(-20))", returnByValue: true
		});
		console.log("CONSOLE: " + (logs.result && logs.result.result ? logs.result.result.value : ""));
		const music = await send("Runtime.evaluate", {
			expression: "JSON.stringify(window.sofmusic ? window.sofmusic.state : 'no sofmusic')", returnByValue: true
		});
		console.log("MUSIC: " + (music.result && music.result.result ? music.result.result.value : ""));
		const extra = process.argv[7];
		if (extra) {
			/* "@file" runs the expression out of a file (the shell mangles
			 * the quotes of a long expression) */
			const src = extra.charAt(0) === "@" ? require("fs").readFileSync(extra.slice(1), "utf8") : extra;
			const ev = await send("Runtime.evaluate", { expression: src, returnByValue: true, awaitPromise: true });
			console.log("EVAL: " + (ev.result && ev.result.result ? ev.result.result.value :
				JSON.stringify(ev.result && ev.result.exceptionDetails ? ev.result.exceptionDetails : ev)));
			/* the evaluation may have changed the page: take a second shot */
			await sleep(500);
			const shot2 = await send("Page.captureScreenshot", { format: "png" });
			if (shot2.result && shot2.result.data) {
				const out2 = outPng.replace(/\.png$/i, "") + "-2.png";
				fs.writeFileSync(out2, Buffer.from(shot2.result.data, "base64"));
				console.log("screenshot after the evaluation -> " + out2);
			}
		}
		ws.close();
	} catch (e) {
		console.log("ERROR: " + e.message);
	} finally {
		try { chrome.kill(); } catch (e) { /* gone */ }
		try { fs.rmSync(profile, { recursive: true, force: true }); } catch (e) { /* ignore */ }
		process.exit(0);
	}
})();

