/*
 * pvp_smoke.js - two real browser clients against the real SoF server.
 * Usage: node web/pvp_smoke.js [url]
 */
"use strict";
const { spawn } = require("child_process");
const dgram = require("dgram");
const path = require("path");
const ROOT = path.resolve(__dirname, "..");
const URL = process.argv[2] || "http://127.0.0.1:8080/index.html";

function client(name, outFile) {
	return new Promise(resolve => {
		const expr = `(async()=>{
      for(let i=0;i<200;i++){const d=window.sofdebug();if(d.spawned&&d.playerOrigin&&!window.sofstate.orient)break;await new Promise(r=>setTimeout(r,300));}
      const d=window.sofdebug();
      return JSON.stringify({spawned:d.spawned,err:d.err,self:d.self,entities:d.entities,
        origin:d.playerOrigin,build:(document.getElementById('bar').textContent.match(/build [^\\]]+/)||[''])[0]});
    })()`;
		const p = spawn(process.execPath, [
			path.join(ROOT, "web", "menu_smoke.js"),
			URL + (URL.indexOf("?") >= 0 ? "&" : "?") + "name=" + name,
			path.join(ROOT, "shots", outFile), expr
		], { cwd: ROOT });
		let out = "";
		p.stdout.on("data", d => { out += d.toString(); });
		p.stderr.on("data", d => { out += d.toString(); });
		p.on("close", () => {
			const line = out.split("\n").find(x => x.startsWith("EVAL:")) || "EVAL: {}";
			try { resolve(JSON.parse(line.slice(5))); } catch (e) { resolve({ parseError: line }); }
		});
	});
}
function serverStatus() {
	return new Promise(resolve => {
		const s = dgram.createSocket("udp4");
		s.on("message", m => { try { s.close(); resolve(m.toString("latin1", "replace")); } catch (e) { } });
		s.send(Buffer.from("\xff\xff\xff\xffrcon sofbrowser status\n", "latin1"), 29000, "127.0.0.1");
		setTimeout(() => { try { s.close(); } catch (e) { } resolve(""); }, 2500);
	});
}
(async function () {
	const [a, b, status] = await Promise.all([
		client("Alpha", "pvp-alpha.png"), client("Bravo", "pvp-bravo.png"),
		new Promise(r => setTimeout(() => r(serverStatus()), 20000))
	]);
	const checks = {
		alphaSpawned: a.spawned === true,
		bravoSpawned: b.spawned === true,
		alphaClean: !a.err,
		bravoClean: !b.err,
		alphaHasEntities: Number(a.entities) > 3,
		bravoHasEntities: Number(b.entities) > 3,
		serverListsAlpha: /Alpha/.test(status),
		serverListsBravo: /Bravo/.test(status)
	};
	console.log(JSON.stringify({ a, b, status: status.slice(-400) }, null, 1));
	let ok = true;
	for (const k of Object.keys(checks)) {
		console.log((checks[k] ? "PASS " : "FAIL ") + k);
		if (!checks[k]) ok = false;
	}
	console.log(ok ? "PVP SMOKE PASS" : "PVP SMOKE FAIL");
	process.exitCode = ok ? 0 : 1;
})();
