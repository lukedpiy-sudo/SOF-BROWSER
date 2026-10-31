/*
 * drive.js - drive the running Chrome over CDP: hold keys, move the mouse,
 * capture screenshots and read the page state.
 *
 * usage:
 *   node drive.js <targetUrlOrId> <script.json>
 *
 * The script is a list of actions:
 *   {"a":"key","code":"KeyW","down":true}
 *   {"a":"key","code":"KeyW","down":false}
 *   {"a":"wait","ms":1000}
 *   {"a":"shot","file":"C:/tmp/x.png"}
 *   {"a":"state"}          -> prints window.sofdebug()
 *   {"a":"click","x":640,"y":360}
 *   {"a":"mouse","dx":40,"dy":0}
 */
"use strict";
const fs = require("fs");
const http = require("http");

const CDP = process.env.REA_CDP || "http://127.0.0.1:9222";

function getJSON(path) {
	return new Promise((res, rej) => {
		http.get(CDP + path, (r) => {
			let b = "";
			r.on("data", d => b += d);
			r.on("end", () => {
				/* Chrome answers /json/new with a plain text message unless the
				 * request is a PUT */
				if (r.statusCode >= 300 && r.statusCode < 400 && r.headers.location) {
					return getJSON(r.headers.location.slice(CDP.length)).then(res, rej);
				}
				try { res(JSON.parse(b)); } catch (e) { rej(new Error("bad json: " + b.slice(0, 80))); }
			});
		}).on("error", rej);
	});
}

class CDPClient {
	constructor(ws) {
		this.ws = ws;
		this.id = 0;
		this.pending = new Map();
		ws.addEventListener("message", (ev) => {
			let m;
			try { m = JSON.parse(ev.data); } catch (e) { return; }
			if (m.id && this.pending.has(m.id)) {
				const { res, rej } = this.pending.get(m.id);
				this.pending.delete(m.id);
				if (m.error) rej(new Error(JSON.stringify(m.error)));
				else res(m.result);
			}
		});
	}
	send(method, params) {
		const id = ++this.id;
		return new Promise((res, rej) => {
			this.pending.set(id, { res, rej });
			this.ws.send(JSON.stringify({ id, method, params: params || {} }));
			setTimeout(() => {
				if (this.pending.has(id)) { this.pending.delete(id); rej(new Error(method + " timed out")); }
			}, 30000);
		});
	}
}

async function main() {
	const arg = process.argv[2] || "";
	const scriptFile = process.argv[3];
	let target = null;
	if (arg.indexOf("http") === 0) {
		/* Chrome needs PUT for /json/new */
		target = await new Promise((res, rej) => {
			const u = new URL(CDP + "/json/new?" + encodeURIComponent(arg));
			const req = http.request({ hostname: u.hostname, port: u.port, path: u.pathname + u.search, method: "PUT" },
				(r) => {
					let b = "";
					r.on("data", d => b += d);
					r.on("end", () => { try { res(JSON.parse(b)); } catch (e) { rej(new Error(b.slice(0, 80))); } });
				});
			req.on("error", rej);
			req.end();
		});
	} else {
		const list = await getJSON("/json/list");
		target = list.find(t => t.id === arg) || list.find(t => t.type === "page" && t.url.indexOf("8080") >= 0) || list.find(t => t.type === "page");
	}
	if (!target) throw new Error("no target");
	console.log("target: " + target.id + " " + target.url);

	const ws = new WebSocket(target.webSocketDebuggerUrl);
	await new Promise((res, rej) => {
		ws.addEventListener("open", res);
		ws.addEventListener("error", rej);
	});
	const cdp = new CDPClient(ws);
	await cdp.send("Page.enable");
	await cdp.send("Runtime.enable");
	await cdp.send("Log.enable");

	const steps = JSON.parse(fs.readFileSync(scriptFile, "utf8").replace(/^\uFEFF/, ""));
	for (const st of steps) {
		try {
			if (st.a === "key") {
				await cdp.send("Input.dispatchKeyEvent", {
					type: st.down ? "keyDown" : "keyUp",
					code: st.code,
					key: st.key || (st.code || "").replace("Key", "").toLowerCase(),
					windowsVirtualKeyCode: st.vk || 0,
					nativeVirtualKeyCode: st.vk || 0
				});
			} else if (st.a === "char") {
				for (const ch of st.text) {
					await cdp.send("Input.dispatchKeyEvent", { type: "keyDown", text: ch, key: ch });
					await cdp.send("Input.dispatchKeyEvent", { type: "keyUp", key: ch });
					await cdp.send("Input.insertText", { text: ch });
				}
			} else if (st.a === "type") {
				await cdp.send("Input.insertText", { text: st.text });
			} else if (st.a === "wait") {
				await new Promise(r => setTimeout(r, st.ms || 500));
			} else if (st.a === "click") {
				await cdp.send("Input.dispatchMouseEvent", {
					type: "mousePressed", x: st.x, y: st.y, button: "left", clickCount: 1
				});
				await cdp.send("Input.dispatchMouseEvent", {
					type: "mouseReleased", x: st.x, y: st.y, button: "left", clickCount: 1
				});
			} else if (st.a === "mousedown") {
				await cdp.send("Input.dispatchMouseEvent", {
					type: "mousePressed", x: st.x || 640, y: st.y || 360, button: st.button || "left", clickCount: 1
				});
			} else if (st.a === "mouseup") {
				await cdp.send("Input.dispatchMouseEvent", {
					type: "mouseReleased", x: st.x || 640, y: st.y || 360, button: st.button || "left", clickCount: 1
				});
			} else if (st.a === "mouse") {
				await cdp.send("Input.dispatchMouseEvent", {
					type: "mouseMoved", x: st.x || 640, y: st.y || 360,
					deltaX: st.dx || 0, deltaY: st.dy || 0, button: "none"
				});
			} else if (st.a === "shot") {
				const r = await cdp.send("Page.captureScreenshot", { format: "png" });
				fs.writeFileSync(st.file, Buffer.from(r.data, "base64"));
				console.log("shot -> " + st.file);
			} else if (st.a === "state") {
				const r = await cdp.send("Runtime.evaluate", {
					expression: st.expr || "JSON.stringify(window.sofdebug ? window.sofdebug() : {})",
					returnByValue: true
				});
				console.log("state: " + (r.result && r.result.value));
			} else if (st.a === "eval") {
				const r = await cdp.send("Runtime.evaluate", {
					expression: st.expr, returnByValue: true, awaitPromise: true
				});
				console.log("eval: " + JSON.stringify(r.result && r.result.value));
			} else if (st.a === "log") {
				const r = await cdp.send("Runtime.evaluate", {
					expression: "JSON.stringify(window.soferrors || [])", returnByValue: true
				});
				console.log("log: " + (r.result && r.result.value));
			}
		} catch (e) {
			console.log("step " + JSON.stringify(st) + " failed: " + e.message);
		}
	}
	ws.close();
	process.exit(0);
}
main().catch(e => { console.log("error: " + e.message); process.exit(1); });
