/* Try different outgoing netchan header words and report whether the server
 * advances the configstring cursor (i.e. whether the reliable message is
 * acknowledged). */
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const W2 = parseInt(process.argv[2] || "0x8000", 16) || 0;
const W4 = parseInt(process.argv[3] || "0x8000", 16) || 0;

const sock = dgram.createSocket("udp4");
const client = createClient({
	userinfo: "\\name\\hdrtest\\spectator\\0",
	hdrW2: W2, hdrW4: W4, ackPlusOne: (process.env.ACK1 === "1"), answerDelay: parseInt(process.env.DELAY || "0"), proactive: (process.env.PRO === "1"),
	send: (b) => sock.send(b, 28910, "127.0.0.1"),
	onEvent: (ev, data) => {
		if (ev === "ask") console.log("  ask:", data);
	}
});
let frames = 0, dupes = 0, lastAsk = "";
sock.on("message", (m) => {
	const s = m.toString("latin1");
	if (s.indexOf("cmd configstrings") >= 0) {
		const m2 = s.match(/cmd configstrings (\S+) (\S+)/);
		if (m2) {
			if (m2[2] === lastAsk) dupes++;
			lastAsk = m2[2];
		}
	}
	client.onDatagram(m);
});
sock.bind(0, "127.0.0.1", () => client.start());
setInterval(() => { client.sendUserCmd(); }, 50);
setTimeout(() => {
	const cs = Object.keys(client.configstrings).length;
	console.log("w2=0x" + W2.toString(16), "w4=0x" + W4.toString(16),
		"| configstrings:", cs, "| frames:", frames, "| repeated asks:", dupes);
	sock.close(); process.exit(0);
}, 14000);
