const fs = require("fs");
const path = require("path");
const key = fs.readFileSync(path.join(__dirname, "sofkey.bin"));
const b64 = key.toString("base64");
const out = [
	"/*",
	" * sofkey.js - the 3000 byte checksum key table (SoF.exe file offset",
	" * 0x120648), embedded so the protocol works in a browser too.",
	" */",
	'"use strict";',
	"const KEY_B64 = \"" + b64 + "\";",
	"const KEY = (typeof Buffer !== \"undefined\")",
	"\t? Buffer.from(KEY_B64, \"base64\")",
	"\t: Uint8Array.from(atob(KEY_B64), c => c.charCodeAt(0));",
	"module.exports = { KEY, KEY_B64 };",
	""
].join("\n");
fs.writeFileSync(path.join(__dirname, "sofkey.js"), out);
console.log("wrote sofkey.js", out.length, "bytes");
