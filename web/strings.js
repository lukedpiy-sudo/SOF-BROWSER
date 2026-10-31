/* scan a binary for printable ascii strings of at least N characters */
const fs = require("fs");
const file = process.argv[2];
const min = parseInt(process.argv[3] || "4", 10);
const filter = (process.argv[4] || "").toLowerCase();
const b = fs.readFileSync(file);
let out = [];
let cur = "";
for (let i = 0; i < b.length; i++) {
	const c = b[i];
	if (c >= 32 && c < 127) { cur += String.fromCharCode(c); }
	else {
		if (cur.length >= min) out.push(cur);
		cur = "";
	}
}
if (cur.length >= min) out.push(cur);
const hits = filter ? out.filter(s => s.toLowerCase().includes(filter)) : out;
hits.forEach(s => console.log(s));
console.log("---", hits.length, "of", out.length, "strings");
