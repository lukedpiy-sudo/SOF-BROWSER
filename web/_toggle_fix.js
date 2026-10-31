// _toggle_fix.js - client keeps its own alternating reliable toggle
"use strict";
const fs = require("fs");
const p = "web/sofproto.js";
let s = fs.readFileSync(p, "utf8");

function rep(from, to) {
	if (!s.includes(from)) { console.log("MISS: " + from.slice(0, 40)); process.exit(1); }
	s = s.replace(from, to);
}

rep("var fragPending = Buffer.alloc(0);",
"var fragPending = Buffer.alloc(0);\n\tlet myToggle = 0; /* the client's own reliable toggle: it flips with every reliable message we send and stays put in unreliable packets */");

// unrelHdr: echo OUR current toggle (no flip), not the server's
rep("((ack & 0x7fffffff) | (srvReliableToggle << 31)) >>> 0, 0);",
"((ack & 0x7fffffff) | (myToggle << 31)) >>> 0, 0);");

// string answers are reliable messages: they must flip our toggle
rep("send(Buffer.concat([netchanHdr(), unrelHdr(), body]));",
"send(Buffer.concat([netchanHdr(), reliableHdr(), body]));");

// reliableHdr: flip our own toggle
rep("h.writeUInt32LE(((srvSeq + (o.ackPlusOne ? 1 : 0)) | (relToggle ? 0x80000000 : 0)) >>> 0, 0);",
"h.writeUInt32LE(((srvSeq + (o.ackPlusOne ? 1 : 0)) | ((myToggle = (myToggle + 1) & 1) ? 0x80000000 : 0)) >>> 0, 0);");

fs.writeFileSync(p, s);
console.log("ok");
