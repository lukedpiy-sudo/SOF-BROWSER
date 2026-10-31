// _frag_flag_param.js - netchanHdr takes the flag; unrel usercmds clear it
"use strict";
const fs = require("fs");
const p = "web/sofproto.js";
let s = fs.readFileSync(p, "utf8");

const a = [
"\tfunction netchanHdr() {",
"\t\tconst h = Buffer.alloc(4);",
"\t\th.writeUInt32LE(((seq++) | (fragFlag ? 0x80000000 : 0)) >>> 0, 0);",
"\t\treturn h;",
"\t}"
].join("\n");
if (!s.includes(a)) { console.log("netchanHdr anchor miss"); process.exit(1); }
const b = [
"\tfunction netchanHdr(flag) {",
"\t\tconst f = (flag === undefined ? fragFlag : flag);",
"\t\tconst h = Buffer.alloc(4);",
"\t\th.writeUInt32LE(((seq++) | (f ? 0x80000000 : 0)) >>> 0, 0);",
"\t\treturn h;",
"\t}"
].join("\n");
s = s.replace(a, b);

// first, strip the later `mode` declaration line (it is the ONLY one now)
const fLine = "\t\tconst mode = o.moveMode || \"rel\";\n";
if (!s.includes(fLine)) { console.log("mode line miss"); process.exit(1); }
s = s.replace(fLine, "");

const c = "\t\tconst mySeq = seq;\n\t\tconst h = netchanHdr();";
if (!s.includes(c)) { console.log("sendUserCmd anchor miss"); process.exit(1); }
s = s.replace(c,
"\t\tconst mode = o.moveMode || \"rel\";\n" +
"\t\tconst mySeq = seq;\n" +
"\t\tconst h = netchanHdr(mode.indexOf(\"unrel\") < 0);");

fs.writeFileSync(p, s);
console.log("patched");
