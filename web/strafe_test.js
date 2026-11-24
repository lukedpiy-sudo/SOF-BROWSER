/* strafe_test.js - measure strafe direction vs camera basis in one session */
"use strict";
const { spawn } = require("child_process");
const fs = require("fs"), os = require("os"), path = require("path");
const CHROME = process.env.CHROME || "/usr/bin/google-chrome";
const url = process.argv[2] || "http://127.0.0.1:8080/index.html";
const port = 9900 + (process.pid % 80), profile = path.join(os.tmpdir(), "sofstrafe" + process.pid);
const chrome = spawn(CHROME, ["--headless=new", "--no-sandbox", "--disable-gpu", "--disable-dev-shm-usage",
  "--enable-unsafe-swiftshader", "--use-angle=swiftshader", "--remote-debugging-port=" + port,
  "--user-data-dir=" + profile, "--window-size=1280,800", "--no-first-run", "--disable-extensions",
  "--no-proxy-server", "about:blank"], { stdio: ["ignore", "pipe", "pipe"] });
const sleep = ms => new Promise(r => setTimeout(r, ms));
(async () => {
  let page;
  for (let i = 0; i < 80; i++) {
    try { const l = await (await fetch("http://127.0.0.1:" + port + "/json/list")).json(); page = l.find(t => t.type === "page"); if (page) break; } catch (e) { }
    await sleep(200);
  }
  const ws = new WebSocket(page.webSocketDebuggerUrl);
  let id = 0; const pending = new Map();
  ws.addEventListener("message", ev => { let m; try { m = JSON.parse(ev.data); } catch (e) { return; } if (m.id && pending.has(m.id)) { pending.get(m.id)(m); pending.delete(m.id); } });
  await new Promise(r => ws.addEventListener("open", r));
  const send = (method, params) => new Promise(res => { const n = ++id; pending.set(n, res); ws.send(JSON.stringify({ id: n, method, params: params || {} })); });
  const ev = expr => send("Runtime.evaluate", { expression: expr, returnByValue: true, awaitPromise: true });
  const shot = async name => { const s = await send("Page.captureScreenshot", { format: "png" }); fs.writeFileSync(name, Buffer.from(s.result.data, "base64")); };
  await send("Page.enable"); await send("Runtime.enable"); await send("Page.navigate", { url });
  await sleep(2500);
  await ev("(async()=>{for(let i=0;i<400;i++){const d=sofdebug();if(d.spawned&&d.playerOrigin&&!sofstate.orient)break;await new Promise(r=>setTimeout(r,300));}return 'spawned'})()");
  await sleep(400);
  // lock the current spawn yaw so only strafing changes the view
  const yaw0 = (await ev("JSON.stringify(sofdebug().yaw)")).result.result.value;
  await ev("window.sofprobe(" + yaw0 + ",250,200,'KeyW');'ok'");
  await sleep(1200);
  const before = await ev("JSON.stringify({p:sofdebug().playerOrigin,yaw:sofdebug().yaw})");
  await shot("shots/strafe-before.png");
  await ev("window.sofprobe(" + yaw0 + ",1200,200,'" + (process.argv[4] || "KeyD") + "');'ok'");
  let probe;
  for (let i = 0; i < 25; i++) { probe = await ev("JSON.stringify(sofdebug().probe||null)"); if (probe.result.result && probe.result.result.value && probe.result.result.value !== "null") break; await sleep(150); }
  await shot("shots/strafe-after.png");
  const after = await ev("JSON.stringify({p:sofdebug().playerOrigin,yaw:sofdebug().yaw})");
  console.log("BEFORE " + before.result.result.value);
  console.log("PROBE  " + probe.result.result.value);
  console.log("AFTER  " + after.result.result.value);
  ws.close();
})().catch(e => { console.log("ERROR " + e.message); process.exitCode = 1; }).finally(() => { try { chrome.kill(); } catch (e) { } });
