/*
 * vm_orient.js - capture the first-person weapon silhouette at many rotations
 * in a single browser session.  Used only as a visual probe while finding the
 * correct GHB view-model orientation.
 *
 * usage: node web/vm_orient.js <url> <outdir> <rx,ry,rz> [rx,ry,rz ...]
 */
"use strict";
const { spawn } = require("child_process");
const fs = require("fs");
const os = require("os");
const path = require("path");

const CHROME = process.env.CHROME || "/usr/bin/google-chrome";
const url = process.argv[2];
const outDir = process.argv[3];
const combos = process.argv.slice(4).map(s => s.split(",").map(Number));
const port = 9700 + (process.pid % 200);
const profile = path.join(os.tmpdir(), "soforient" + process.pid);
fs.mkdirSync(outDir, { recursive: true });

const chrome = spawn(CHROME, [
	"--headless=new", "--no-sandbox", "--disable-gpu", "--disable-dev-shm-usage",
	"--enable-unsafe-swiftshader", "--use-angle=swiftshader",
	"--remote-debugging-port=" + port, "--user-data-dir=" + profile,
	"--window-size=1280,800", "--no-first-run", "--disable-extensions", "--no-proxy-server",
	"about:blank"
], { stdio: ["ignore", "pipe", "pipe"] });
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
	if (!page) throw new Error("no devtools target");
	const ws = new WebSocket(page.webSocketDebuggerUrl);
	let id = 0; const pending = new Map();
	ws.addEventListener("message", ev => {
		let m; try { m = JSON.parse(ev.data); } catch (e) { return; }
		if (m.id && pending.has(m.id)) { pending.get(m.id)(m); pending.delete(m.id); }
	});
	await new Promise((res, rej) => { ws.addEventListener("open", res); ws.addEventListener("error", rej); });
	const send = (method, params) => new Promise(res => {
		const myId = ++id; pending.set(myId, res);
		ws.send(JSON.stringify({ id: myId, method, params: params || {} }));
	});
	const evalJs = expr => send("Runtime.evaluate", { expression: expr, returnByValue: true, awaitPromise: true });
	await send("Page.enable"); await send("Runtime.enable");
	await send("Page.navigate", { url });
	await sleep(2500);
	await evalJs("(async()=>{for(let i=0;i<300;i++){const d=sofdebug();if(d.spawned&&d.playerOrigin&&document.getElementById('sof-loading').className==='hidden')break;await new Promise(r=>setTimeout(r,300));}return 'ok'})()");
	for (const [rx, ry, rz] of combos) {
		if (rx === "map") {
			// combos entries of the form ["map", ...9 matrix elements]
			const M = combos[combos.indexOf([rx, ry, rz])];
		}
		await evalJs("window.__vmrot={x:" + rx + ",y:" + ry + ",z:" + rz + "};" +
			"window.__vmMap=null;var _m=window.sofviewmodel&&sofviewmodel.state.model;if(_m)_m.mesh=null;'ok'");
		await sleep(700);
		const shot = await send("Page.captureScreenshot", { format: "png" });
		const name = "r_" + rx + "_" + ry + "_" + rz + ".png";
		fs.writeFileSync(path.join(outDir, name), Buffer.from(shot.result.data, "base64"));
		console.log(name);
	}
	ws.close();
})().catch(e => { console.log("ERROR: " + e.message); process.exitCode = 1; })
  .finally(() => { try { chrome.kill(); } catch (e) { } });
