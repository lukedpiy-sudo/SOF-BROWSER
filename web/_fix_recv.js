// _fix_recv.js - repair parenthesization of the RECV console.log line
"use strict";
const fs = require("fs");
const p = "web/sofproto.js";
let s = fs.readFileSync(p, "utf8");
const a = 'srvReliableToggle) + (msg.length > 8 ? " svc=" + msg[8].toString(16) : "");';
const b = 'srvReliableToggle + (msg.length > 8 ? " svc=" + msg[8].toString(16) : ""));';
if (!s.includes(a)) { console.log("miss"); process.exit(1); }
s = s.replace(a, b);
fs.writeFileSync(p, s);
console.log("fixed");
