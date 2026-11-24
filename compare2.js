/* compare2.js - capture original SoF client (Xvfb/xwd) and browser client
 * (CDP screenshot) against the same server, then composite side by side. */
"use strict";
const { spawn, execFileSync } = require("child_process");
const fs = require("fs"), os = require("os"), path = require("path");
const CHROME = process.env.CHROME || "/usr/bin/google-chrome";
const URL = process.argv[2] || "http://127.0.0.1:8080/index.html";
const DISP = ":98", port = 9400 + (process.pid % 100);
const profile = path.join(os.tmpdir(), "sofcompare2" + process.pid);
const sh = (cmd, args) => { try { return execFileSync(cmd, args, { stdio: "ignore" }); } catch (e) { return null; } };
sh("pkill", ["-x", "Xvfb"]);
sh("Xvfb", [DISP, "-screen", "0", "1600x900x24"], );
const sleep = ms => new Promise(r => setTimeout(r, ms));
(async () => {
  await sleep(1500);
  const orig = spawn("wine", ["SoF.exe", "+set", "dedicated", "0", "+set", "cl_gun", "1", "+connect", "127.0.0.1:29000"], {
    cwd: path.resolve("Soldier of Fortune"),
    env: Object.assign({}, process.env, { DISPLAY: DISP, WINEPREFIX: "/home/luked/.wine-sof", WINEDEBUG: "-all" }),
    stdio: "ignore"
  });
  await sleep(12000);
  const chrome = spawn(CHROME, ["--headless=new", "--no-sandbox", "--disable-gpu", "--disable-dev-shm-usage",
    "--enable-unsafe-swiftshader", "--use-angle=swiftshader", "--remote-debugging-port=" + port,
    "--user-data-dir=" + profile, "--window-size=1280,800", "--no-first-run", "--disable-extensions",
    "--no-proxy-server", URL], { stdio: "ignore" });
  await sleep(20000);
  let page;
  for (let i = 0; i < 40; i++) { try { const l = await (await fetch("http://127.0.0.1:" + port + "/json/list")).json(); page = l.find(t => t.type === "page"); if (page) break; } catch (e) { } await sleep(200); }
  if (page) {
    const ws = new WebSocket(page.webSocketDebuggerUrl);
    let id = 0; const pending = new Map();
    ws.addEventListener("message", ev => { let m; try { m = JSON.parse(ev.data); } catch (e) { return; } if (m.id && pending.has(m.id)) { pending.get(m.id)(m); pending.delete(m.id); } });
    await new Promise(r => ws.addEventListener("open", r));
    const send = (method, params) => new Promise(res => { const n = ++id; pending.set(n, res); ws.send(JSON.stringify({ id: n, method, params: params || {} })); });
    const shot = await send("Page.captureScreenshot", { format: "png" });
    if (shot.result && shot.result.data) fs.writeFileSync("shots/compare-browser.png", Buffer.from(shot.result.data, "base64"));
    ws.close();
  }
  sh("xwd", ["-display", DISP, "-root", "-silent", "-out", "/tmp/opencode/cmp2.xwd"]);
  sh("ffmpeg", ["-y", "-loglevel", "error", "-i", "/tmp/opencode/cmp2.xwd", "shots/compare-original.png"]);
  chrome.kill(); orig.kill(); sh("pkill", ["-x", "Xvfb"]);
  console.log("captured compare-original.png and compare-browser.png");
})().catch(e => { console.log("ERROR " + e.message); process.exitCode = 1; });
