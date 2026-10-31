// _probe4.js - patch moveprobe3: log OOB + classify svc bytes of data packets
"use strict";
const fs = require("fs");
const p = "web/moveprobe3.js";
let s = fs.readFileSync(p, "utf8");
const anchor = "if (name === \"ask\") console.log(\"[ASK] \" + data);";
if (!s.includes(anchor)) { console.log("anchor missing"); process.exit(1); }
s = s.replace(anchor,
"if (name === \"ask\") console.log(\"[ASK] \" + data);\n\t\telse if (name === \"oob\") console.log(\"[OOB] \" + String(data).slice(0, 90));\n\t\telse if (name === \"frameError\") console.log(\"[FRAME ERR] \" + (data && data.message));");
// extend the timeout a bit and shrink phases: 60 s
s = s.replace("}, 80000);", "}, 70000);");
fs.writeFileSync(p, s);
console.log("patched");
