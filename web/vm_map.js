/*
 * vm_map.js - capture the first-person weapon at many axis orientations.
 * usage: node web/vm_map.js <url> <outdir> "m0,m1,...,m8" [more matrices...]
 * Each matrix is a row-major 3x3 mapping from model (X,Y,Z) to view (x,y,z).
 */
"use strict";
const { spawn } = require("child_process");
const fs = require("fs"), os = require("os"), path = require("path");
const CHROME = process.env.CHROME || "/usr/bin/google-chrome";
const url = process.argv[2], outDir = process.argv[3];
const maps = process.argv.slice(4).map(s => s.split(",").map(Number));
const port = 9800 + (process.pid % 150), profile = path.join(os.tmpdir(), "sofmap" + process.pid);
fs.mkdirSync(outDir, { recursive: true });
const chrome = spawn(CHROME, ["--headless=new", "--no-sandbox", "--disable-gpu", "--disable-dev-shm-usage",
	"--enable-unsafe-swiftshader", "--use-angle=swiftshader", "--remote-debugging-port=" + port,
	"--user-data-dir=" + profile, "--window-size=1280,800", "--no-first-run", "--disable-extensions",
	"--no-proxy-server", "about:blank"], { stdio: ["ignore", "pipe", "pipe"] });
const sleep = ms => new Promise(r => setTimeout(r, ms));
(async () => {
	let page;
	for (let i = 0; i < 80; i++) {
		try { const l = await (await fetch("http://127.0.0.1:" + port + "/json/list")).json();
			page = l.find(t => t.type === "page"); if (page) break; } catch (e) { }
		await sleep(200);
	}
	if (!page) throw new Error("no devtools target");
	const ws = new WebSocket(page.webSocketDebuggerUrl);
	let id = 0; const pending = new Map();
	ws.addEventListener("message", ev => { let m; try { m = JSON.parse(ev.data); } catch (e) { return; }
		if (m.id && pending.has(m.id)) { pending.get(m.id)(m); pending.delete(m.id); } });
	await new Promise((res, rej) => { ws.addEventListener("open", res); ws.addEventListener("error", rej); });
	const send = (method, params) => new Promise(res => { const n = ++id; pending.set(n, res);
		ws.send(JSON.stringify({ id: n, method, params: params || {} })); });
	const ev = expr => send("Runtime.evaluate", { expression: expr, returnByValue: true, awaitPromise: true });
	await send("Page.enable"); await send("Runtime.enable"); await send("Page.navigate", { url });
	await sleep(2500);
	await ev("(async()=>{for(let i=0;i<300;i++){const d=sofdebug();if(d.spawned&&d.playerOrigin&&document.getElementById('sof-loading').className==='hidden')break;await new Promise(r=>setTimeout(r,300));}return 'ok'})()");
	for (let i = 0; i < maps.length; i++) {
		const M = maps[i];
		await ev("window.__vmMap=[" + M.join(",") + "];var _m=window.sofviewmodel&&sofviewmodel.state.model;if(_m)_m.mesh=null;'ok'");
		await sleep(700);
		const shot = await send("Page.captureScreenshot", { format: "png" });
		const name = "m" + String(i).padStart(2, "0") + ".png";
		fs.writeFileSync(path.join(outDir, name), Buffer.from(shot.result.data, "base64"));
		console.log(name + " " + M.join(","));
	}
	ws.close();
})().catch(e => { console.log("ERROR " + e.message); process.exitCode = 1; }).finally(() => { try { chrome.kill(); } catch (e) { } });
