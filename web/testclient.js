/*
 * testclient.js - prove the relay can carry a Quake III style connectionless
 * query to a real server and get the reply back.
 *
 * usage: node testclient.js [wsUrl] [host] [port]
 */

const WS_URL = process.argv[2] || "ws://127.0.0.1:8080/relay";
const HOST = process.argv[3] || "127.0.0.1";
const PORT = parseInt(process.argv[4] || "28910", 10);

const ws = new WebSocket(WS_URL);
let done = false;

function finish(code, msg) {
	if (done) return;
	done = true;
	console.log(msg);
	try { ws.close(); } catch (e) { /* already closed */ }
	process.exit(code);
}

ws.onopen = () => {
	console.log("ws open -> " + WS_URL);
	ws.send(JSON.stringify({ type: "connect", host: HOST, port: PORT }));
};

ws.onmessage = async (ev) => {
	if (typeof ev.data === "string") {
		console.log("control: " + ev.data);
		return;
	}
	let buf;
	if (typeof ev.data === "string") {
		buf = Buffer.from(ev.data, "latin1");
	} else if (ev.data instanceof ArrayBuffer) {
		buf = Buffer.from(ev.data);
	} else if (ev.data && typeof ev.data.arrayBuffer === "function") {
		// node's global WebSocket delivers binary as a Blob
		buf = Buffer.from(await ev.data.arrayBuffer());
	} else {
		buf = Buffer.from(ev.data);
	}
	console.log("reply (" + buf.length + " bytes): " +
		buf.toString("latin1").replace(/[^\x20-\x7e\n]/g, "."));
	finish(0, "OK: relay round-trip works");
};

ws.onerror = (e) => {
	console.log("ws error: " + (e && e.message ? e.message : String(e)));
};

ws.onclose = () => {
	if (!done) finish(1, "closed without a reply");
};

// Q3 connectionless query: 0xFFFFFFFF + "getstatus"
setTimeout(() => {
	if (done) return;
	const payload = Buffer.concat([
		Buffer.from([0xff, 0xff, 0xff, 0xff]),
		Buffer.from("getstatus", "latin1")
	]);
	console.log("sending getstatus (" + payload.length + " bytes)");
	ws.send(payload);
}, 500);

setTimeout(() => finish(1, "timeout: no reply within 8s"), 8000);
