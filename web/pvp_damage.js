/* pvp_damage.js - two browser clients in one Chrome, fire A at B and compare HP */
"use strict";
const { spawn } = require("child_process");
const fs = require("fs"), os = require("os"), path = require("path");
const CHROME = process.env.CHROME || "/usr/bin/google-chrome";
const URL = process.argv[2] || "http://127.0.0.1:8080/index.html";
const port = 9300 + (process.pid % 100), profile = path.join(os.tmpdir(), "sofdmg" + process.pid);
const chrome = spawn(CHROME, ["--headless=new", "--no-sandbox", "--disable-gpu", "--disable-dev-shm-usage",
  "--enable-unsafe-swiftshader", "--use-angle=swiftshader", "--remote-debugging-port=" + port,
  "--user-data-dir=" + profile, "--window-size=1280,800", "--no-first-run", "--disable-extensions",
  "--no-proxy-server", "about:blank"], { stdio: ["ignore", "pipe", "pipe"] });
const sleep = ms => new Promise(r => setTimeout(r, ms));

async function tab(url) {
  const t = await (await fetch("http://127.0.0.1:" + port + "/json/new?" + encodeURIComponent(url), { method: "PUT" })).json();
  const ws = new WebSocket(t.webSocketDebuggerUrl);
  let id = 0; const pending = new Map();
  ws.addEventListener("message", ev => { let m; try { m = JSON.parse(ev.data); } catch (e) { return; }
    if (m.id && pending.has(m.id)) { pending.get(m.id)(m); pending.delete(m.id); } });
  await new Promise(r => ws.addEventListener("open", r));
  const send = (method, params) => new Promise(res => { const n = ++id; pending.set(n, res);
    ws.send(JSON.stringify({ id: n, method, params: params || {} })); });
  await send("Page.enable"); await send("Runtime.enable");
  const ev = expr => send("Runtime.evaluate", { expression: expr, returnByValue: true, awaitPromise: true });
  return { ev, send, ws };
}
const val = r => r && r.result && r.result.result ? r.result.result.value : null;
(async () => {
  let list;
  for (let i = 0; i < 80; i++) { try { list = await (await fetch("http://127.0.0.1:" + port + "/json/list")).json(); if (list.find(t => t.type === "page")) break; } catch (e) { } await sleep(200); }
  const a = await tab(URL + "?name=Alpha&build=dmga");
  const b = await tab(URL + "?name=Bravo&build=dmga");
  const waitSpawn = async t => t.ev("(async()=>{for(let i=0;i<100;i++){const d=sofdebug&&sofdebug();if(d&&d.spawned&&d.playerOrigin)break;await new Promise(r=>setTimeout(r,300));}return 'ok'})()");
  console.log("tabs created");
  const sa = await waitSpawn(a), sb = await waitSpawn(b);
  console.log("spawn waits", val(sa), val(sb));
  await sleep(1500);
  const st = async t => JSON.parse(val(await t.ev("JSON.stringify({hp:sofstate.localHealth,armor:sofstate.hud&&sofstate.hud.armor,ammo:sofdebug().ammo,origin:sofdebug().playerOrigin,self:sofdebug().self,fm:sofdebug().fm,sm:sofdebug().sm})")));
  const a0 = await st(a), b0 = await st(b);
  // aim A at B via the protocol probe facing, then hold fire
  const aim = await a.ev("(async()=>{const o=sofdebug().playerOrigin;let best=null,bd=1e9;for(const [k,e] of sofstate.entities){if(!e||!e.state||k===sofdebug().self)continue;const x=e.state.readFloatLE(4),y=e.state.readFloatLE(8),z=e.state.readFloatLE(12);if(!x&&!y)continue;const d=Math.hypot(x-o.x,y-o.y);if(d<bd){bd=d;best={x,y,z,k};}}if(!best)return 'noent';const yaw=Math.atan2(best.x-o.x,-(best.y-o.y))*180/Math.PI;sofprobe(yaw,100,0);await new Promise(r=>setTimeout(r,200));return JSON.stringify({yaw,best,dist:bd})})()");
  await a.ev("document.dispatchEvent(new MouseEvent('mousedown',{button:0,bubbles:true}));'ok'");
  await sleep(2500);
  await a.ev("document.dispatchEvent(new MouseEvent('mouseup',{button:0,bubbles:true}));'ok'");
  await sleep(800);
  const a1 = await st(a), b1 = await st(b);
  console.log("A0", JSON.stringify(a0), "A1", JSON.stringify(a1));
  console.log("B0", JSON.stringify(b0), "B1", JSON.stringify(b1));
  console.log("aim", val(aim));
  console.log("B health delta", (b1.hp - b0.hp));
  console.log("A ammo delta", (a1.ammo - a0.ammo));
  a.ws.close(); b.ws.close();
})().catch(e => { console.log("ERROR " + e.message); process.exitCode = 1; }).finally(() => { try { chrome.kill(); } catch (e) { } });
