/*
 * regression.js - one-command browser smoke test for the PVP checklist.
 * Usage: node web/regression.js [url]
 */
"use strict";
const { spawn } = require("child_process");
const path = require("path");
const ROOT = path.resolve(__dirname, "..");
const URL = process.argv[2] || "http://127.0.0.1:8080/index.html";
const EXPR = `(async()=>{
  for (let i=0;i<400;i++){ const d=window.sofdebug(); if (d.spawned && d.playerOrigin && !window.sofstate.orient) break; await new Promise(r=>setTimeout(r,300)); }
  const a = window.sofdebug();
  const before = a.playerOrigin;
  document.dispatchEvent(new KeyboardEvent('keydown',{code:'KeyW',bubbles:true}));
  await new Promise(r=>setTimeout(r,1500));
  document.dispatchEvent(new KeyboardEvent('keyup',{code:'KeyW',bubbles:true}));
  const b = window.sofdebug();
  const ammo0 = window.sofstate.localAmmo;
  document.dispatchEvent(new MouseEvent('mousedown',{button:0,bubbles:true}));
  await new Promise(r=>setTimeout(r,150));
  document.dispatchEvent(new MouseEvent('mouseup',{button:0,bubbles:true}));
  await new Promise(r=>setTimeout(r,400));
  return JSON.stringify({
    spawned:b.spawned, err:b.err,
    moved: before && b.playerOrigin ? Math.hypot(b.playerOrigin.x-before.x,b.playerOrigin.y-before.y) : 0,
    camOK: !!b.playerOrigin && Math.abs(b.cam.y-(b.playerOrigin.z+56))<3,
    ammo:[ammo0, window.sofstate.localAmmo],
    load: document.getElementById('sof-loading').className,
    build: (document.getElementById('bar').textContent.match(/build [^\\]]+/)||[''])[0]
  });
})()`;

const p = spawn(process.execPath, [
	path.join(ROOT, "web", "menu_smoke.js"), URL,
	path.join(ROOT, "shots", "regression.png"), EXPR
], { cwd: ROOT });
let out = "";
p.stdout.on("data", d => { out += d.toString(); });
p.stderr.on("data", d => { out += d.toString(); });
p.on("close", code => {
	const line = out.split("\n").find(x => x.startsWith("EVAL:")) || "EVAL: {}";
	let r = {};
	try { r = JSON.parse(line.slice(5)); } catch (e) { r = { parseError: line }; }
	const checks = {
		spawned: r.spawned === true,
		noErrors: !r.err,
		movement: Number(r.moved) > 3,
		camera: r.camOK === true,
		fire: Array.isArray(r.ammo) && r.ammo[1] < r.ammo[0],
		loadingHidden: r.load === "hidden"
	};
	let ok = true;
	for (const k of Object.keys(checks)) {
		console.log((checks[k] ? "PASS " : "FAIL ") + k);
		if (!checks[k]) ok = false;
	}
	console.log("build: " + (r.build || "unknown") + " | moved: " + r.moved);
	console.log(ok ? "REGRESSION PASS" : "REGRESSION FAIL");
	process.exitCode = ok && code === 0 ? 0 : 1;
});
