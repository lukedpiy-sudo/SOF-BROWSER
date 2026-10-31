// _recv_svc.js - add svc byte to the RECV log line in sofproto.js
"use strict";
const fs = require("fs");
const p = "web/sofproto.js";
let s = fs.readFileSync(p, "utf8");
const a = 'console.log("[NET] RECV: len=" + msg.length + " srvSeq=" + srvOutSeq + " frag=" + isFragment + " srvRelToggle=" + srvReliableToggle);';
if (!s.includes(a)) { console.log("anchor missing"); process.exit(1); }
const b = a.slice(0, -1) + ' + (msg.length > 8 ? " svc=" + msg[8].toString(16) : "");';
s = s.replace(a, b);
fs.writeFileSync(p, s);
console.log("recv log patched");
