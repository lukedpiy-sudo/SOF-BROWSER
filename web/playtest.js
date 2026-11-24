/*
 * playtest.js - drive the browser client like a player and capture every step.
 * Usage: node web/playtest.js [url]
 */
"use strict";
const { spawn } = require("child_process");
const fs = require("fs");
const os = require("os");
const path = require("path");

const CHROME = process.env.CHROME || "/usr/bin/google-chrome";
const URL = process.argv[2] || "http://127.0.0.1:8080/index.html";
const SHOTS = path.resolve(__dirname, "../shots");
const port = 9400 + (process.pid % 300);
const profile = path.join(os.tmpdir(), "sofplay" + process.pid);
const chrome = spawn(CHROME, [
	"--headless=new", "--no-sandbox", "--disable-gpu", "--disable-dev-shm-usage",
	"--enable-unsafe-swiftshader", "--use-angle=swiftshader",
	"--remote-debugging-port=" + port, "--user-data-dir=" + profile,
	"--window-size=1600,900", "--no-first-run", "--disable-extensions", "--no-proxy-server",
	"about:blank"
], { stdio: ["ignore", "pipe", "pipe"] });
const sleep = ms => new Promise(r => setTimeout(r, ms));

(async function () {
	let page;
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
	const evalJs = async expr => {
		const r = await send("Runtime.evaluate", { expression: expr, returnByValue: true, awaitPromise: true });
		return r.result && r.result.result ? r.result.result.value : null;
	};
	const shot = async name => {
		const r = await send("Page.captureScreenshot", { format: "png" });
		if (r.result && r.result.data) {
			fs.writeFileSync(path.join(SHOTS, name), Buffer.from(r.result.data, "base64"));
			console.log("shot: " + name);
		}
	};
	await send("Page.enable"); await send("Runtime.enable");
	await send("Page.navigate", { url: URL });
	const results = [];
	await sleep(2500);
	await shot("play-00-load.png");

	/* wait for a real spawn */
	for (let i = 0; i < 200; i++) {
		const s = await evalJs("window.sofdebug && JSON.stringify({spawned:sofdebug().spawned,o:sofdebug().playerOrigin,load:document.getElementById('sof-loading').className})");
		if (s) {
			const j = JSON.parse(s);
			if (j.spawned && j.o && j.load === "hidden") break;
		}
		await sleep(300);
	}
	results.push({ step: "spawn", state: await evalJs("JSON.stringify(sofdebug())") });
	await shot("play-01-spawn.png");

	const actions = [
		["walk", `(async()=>{const a=sofdebug();document.dispatchEvent(new KeyboardEvent('keydown',{code:'KeyW',bubbles:true}));await new Promise(r=>setTimeout(r,1600));document.dispatchEvent(new KeyboardEvent('keyup',{code:'KeyW',bubbles:true}));const b=sofdebug();return JSON.stringify({from:a.playerOrigin,to:b.playerOrigin,dist:a.playerOrigin&&b.playerOrigin?Math.hypot(b.playerOrigin.x-a.playerOrigin.x,b.playerOrigin.y-a.playerOrigin.y).toFixed(1):null,yaw:[a.yaw,b.yaw]})})()`],
		["look", `(async()=>{const a=sofdebug();document.dispatchEvent(new MouseEvent('mousemove',{movementX:180,movementY:20,bubbles:true}));await new Promise(r=>setTimeout(r,400));const b=sofdebug();return JSON.stringify({yaw:[a.yaw,b.yaw],cam:[a.cam,b.cam]})})()`],
		["fire", `(async()=>{const a=sofstate.localAmmo;document.dispatchEvent(new MouseEvent('mousedown',{button:0,bubbles:true}));await new Promise(r=>setTimeout(r,150));document.dispatchEvent(new MouseEvent('mouseup',{button:0,bubbles:true}));await new Promise(r=>setTimeout(r,400));return JSON.stringify({ammo:[a,sofstate.localAmmo],flash:sofviewmodel.state.flash})})()`],
		["reload", `(async()=>{const a=[sofstate.localAmmo,sofstate.localReserve];document.dispatchEvent(new KeyboardEvent('keydown',{code:'KeyR',bubbles:true}));document.dispatchEvent(new KeyboardEvent('keyup',{code:'KeyR',bubbles:true}));await new Promise(r=>setTimeout(r,400));return JSON.stringify({before:a,after:[sofstate.localAmmo,sofstate.localReserve]})})()`],
		["jump", `(async()=>{const a=sofdebug().playerOrigin;document.dispatchEvent(new KeyboardEvent('keydown',{code:'Space',bubbles:true}));await new Promise(r=>setTimeout(r,400));const mid=sofdebug().playerOrigin;document.dispatchEvent(new KeyboardEvent('keyup',{code:'Space',bubbles:true}));await new Promise(r=>setTimeout(r,1200));const land=sofdebug().playerOrigin;return JSON.stringify({z:[a&&a.z,mid&&mid.z,land&&land.z]})})()`],
		["third", `(async()=>{const a=sofdebug();document.dispatchEvent(new KeyboardEvent('keydown',{code:'KeyV',bubbles:true}));document.dispatchEvent(new KeyboardEvent('keyup',{code:'KeyV',bubbles:true}));await new Promise(r=>setTimeout(r,500));const b=sofdebug();return JSON.stringify({cam:[a.cam,b.cam],third:sofstate.thirdPerson})})()`],
		["thirdback", `(async()=>{document.dispatchEvent(new KeyboardEvent('keydown',{code:'KeyV',bubbles:true}));document.dispatchEvent(new KeyboardEvent('keyup',{code:'KeyV',bubbles:true}));await new Promise(r=>setTimeout(r,500));return JSON.stringify({third:sofstate.thirdPerson})})()`],
		["score", `(async()=>{document.dispatchEvent(new KeyboardEvent('keydown',{code:'Tab',bubbles:true}));await new Promise(r=>setTimeout(r,1800));const rows=document.getElementById('sof-score-rows').textContent.slice(0,140);document.dispatchEvent(new KeyboardEvent('keyup',{code:'Tab',bubbles:true}));return JSON.stringify({rows})})()`],
		["menu", `(async()=>{document.dispatchEvent(new KeyboardEvent('keydown',{code:'Escape',bubbles:true}));document.dispatchEvent(new KeyboardEvent('keyup',{code:'Escape',bubbles:true}));await new Promise(r=>setTimeout(r,500));return JSON.stringify({menu:document.getElementById('sof-menu').className})})()`],
		["resume", `(async()=>{document.dispatchEvent(new KeyboardEvent('keydown',{code:'Escape',bubbles:true}));document.dispatchEvent(new KeyboardEvent('keyup',{code:'Escape',bubbles:true}));await new Promise(r=>setTimeout(r,500));return JSON.stringify({menu:document.getElementById('sof-menu').className})})()`]
	];
	let n = 2;
	for (const [name, expr] of actions) {
		const r = await evalJs(expr);
		results.push({ step: name, result: r });
		await shot("play-" + String(n++).padStart(2, "0") + "-" + name + ".png");
		console.log(name + ": " + r);
	}
	results.push({ final: await evalJs("JSON.stringify(sofdebug())") });
	fs.writeFileSync(path.join(SHOTS, "play-results.json"), JSON.stringify(results, null, 2));
	ws.close();
})().catch(e => { console.error("PLAYTEST ERROR " + e.stack); process.exitCode = 1; })
	.finally(() => { try { chrome.kill(); } catch (e) { } });
