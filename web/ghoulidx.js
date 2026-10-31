/*
 * ghoulidx.js - check whether the entity model index maps into the
 * engine's global string table (sofstringtable.json).
 */
"use strict";
const fs = require("fs");
const st = JSON.parse(fs.readFileSync("C:/Users/User/q2work/sof2/web/www/sofstringtable.json", "utf8"));
const names = st.names;
console.log("the source " + st.source + " the count " + st.count + " the names " + names.length);
const idx = [10, 38, 39, 44, 47, 48, 49, 50, 55, 56, 81, 84, 89, 99, 102, 110, 111, 987, 1991];
for (const i of idx) console.log("  the index " + i + " = " + JSON.stringify(names[i]));
console.log("--- the range 95..125");
for (let i = 95; i < 126; i++) console.log("  [" + i + "] " + JSON.stringify(names[i]));
let n = 0;
for (let i = 0; i < names.length; i++) {
	if (typeof names[i] === "string" && /ghoul|\.ghb/i.test(names[i])) { if (n < 15) console.log("  the ghoul [" + i + "] " + names[i]); n++; }
}
console.log("the ghoul entries: " + n);
