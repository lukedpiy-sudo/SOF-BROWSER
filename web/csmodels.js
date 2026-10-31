/* Connect, collect the full configstring table and resolve the numeric
 * values through SoF.exe's string table (0x201217B0). */
const dgram = require("dgram");
const fs = require("fs");
const { createClient } = require("./sofproto.js");

const table = JSON.parse(fs.readFileSync("sofstringtable.json", "utf8")).names;
const sock = dgram.createSocket("udp4");
const client = createClient({
	userinfo: "\\name\\models\\spectator\\0",
	send: (b) => sock.send(b, 28910, "127.0.0.1"),
	onEvent: () => { }
});
sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "127.0.0.1", () => client.start());
setTimeout(() => {
	const cs = client.configstrings;
	const keys = Object.keys(cs).map(Number).sort((a, b) => a - b);
	let strings = 0, numbers = 0;
	const models = [];
	for (const k of keys) {
		const v = cs[k];
		if (typeof v === "string") { strings++; continue; }
		numbers++;
		const name = table[v];
		if (name && !/\.wav$/i.test(name) && name[0] !== "*" && !/^[0-9]/.test(name)) {
			models.push([k, v, name]);
		}
	}
	console.log("configstrings:", keys.length, "| strings:", strings, "| numeric:", numbers);
	console.log("resolved names that are not sounds:", models.length);
	models.slice(0, 30).forEach(m => console.log("  cs[" + m[0] + "] = " + m[1] + "  ->  " + m[2]));
	sock.close(); process.exit(0);
}, 14000);
