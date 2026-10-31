/* Sweep the usercmd fields to find where the movement is encoded.
 * We watch the entity list: the local player is the only thing that moves. */
const dgram = require("dgram");
const { createClient } = require("./sofproto.js");

const sock = dgram.createSocket("udp4");
let lastEnts = {};
let mode = 0;
const modes = [
	{ name: "buttons=1", apply: (c) => { c[1] = 1; } },
	{ name: "buttons=8", apply: (c) => { c[1] = 8; } },
	{ name: "buttons=16", apply: (c) => { c[1] = 16; } },
	{ name: "buttons=32", apply: (c) => { c[1] = 32; } },
	{ name: "buttons=64", apply: (c) => { c[1] = 64; } },
	{ name: "flags2=1", apply: (c) => { c[2] = 1; } },
	{ name: "flags3=1", apply: (c) => { c[3] = 1; } },
	{ name: "extra0=200", apply: (c) => { c.writeFloatLE(200, 0x10); } },
	{ name: "extra1=200", apply: (c) => { c.writeFloatLE(200, 0x14); } },
	{ name: "view0=200", apply: (c) => { c.writeUInt16LE(200, 4); } },
	{ name: "view1=200", apply: (c) => { c.writeUInt16LE(200, 6); } },
	{ name: "view2=200", apply: (c) => { c.writeUInt16LE(200, 8); } },
	{ name: "delta0=200", apply: (c) => { c.writeInt16LE(200, 0x0a); } },
	{ name: "delta0=400", apply: (c) => { c.writeInt16LE(400, 0x0a); } },
	{ name: "delta0=100", apply: (c) => { c.writeInt16LE(100, 0x0a); } },
	{ name: "delta0=200+btn1", apply: (c) => { c.writeInt16LE(200, 0x0a); c[1] = 1; } },
	{ name: "delta1=200", apply: (c) => { c.writeInt16LE(200, 0x0c); } },
	{ name: "byte 0x11=200", apply: (c) => { c[0x11] = 200; } },
	{ name: "byte 0x12=200", apply: (c) => { c[0x12] = 200; } },
	{ name: "byte 0x13=200", apply: (c) => { c[0x13] = 200; } }
];

const client = createClient({
	userinfo: "\\name\\sweep\\spectator\\0",
	cmdPatch: (c) => modes[mode].apply(c),
	send: (b) => sock.send(b, 28910, "127.0.0.1"),
	onEvent: (ev) => { if (ev === "spawned") console.log("spawned"); }
});

sock.on("message", (m) => client.onDatagram(m));
sock.bind(0, "127.0.0.1", () => {
	client.start();
	setInterval(() => client.sendUserCmd(), 50);
});

let hits = 0;
const watcher = setInterval(() => {
	const moved = [];
	client.entities.forEach((e) => {
		if (e.removed || !e.state) return;
		const s = e.state;
		const o = s.readInt16LE(4) + "," + s.readInt16LE(8) + "," + s.readInt16LE(12);
		if (lastEnts[e.number] !== undefined && lastEnts[e.number] !== o) moved.push("#" + e.number);
		lastEnts[e.number] = o;
	});
	if (moved.length) { hits++; console.log("MOVE  mode", modes[mode].name, "->", moved.join(" ")); }
}, 100);

const step = setInterval(() => {
	mode = (mode + 1) % modes.length;
	console.log("-- mode:", modes[mode].name);
}, 1200);

setTimeout(() => {
	clearInterval(watcher); clearInterval(step);
	console.log("hits:", hits);
	process.exit(0);
}, 22000);
