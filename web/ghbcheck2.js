const fs = require("fs");
const { parseGhoul } = require("./ghb.js");
const file = "C:/Users/User/AppData/Local/Temp/opencode/ghb/ext/y_ghoul_weapon_inview_sniperrifle_SNIPERRIFLE.ghb";
const buf = fs.readFileSync(file);
const g = parseGhoul(buf);
const t = g.end;
const abs = 0x1BF0;
console.log("the tail starts at 0x" + t.toString(16) + ", the absolute 0x1BF0 is the tail +0x" + (abs - t).toString(16));
for (let i = 0; i < 0x40; i += 16) {
	const o = abs + i;
	console.log("  0x" + o.toString(16) + " (+0x" + (o - t).toString(16) + ")  " +
		buf.subarray(o, o + 16).toString("hex").replace(/(.{32})/g, "$1 ") + "  " +
		buf.subarray(o, o + 16).toString("latin1").replace(/[^ -~]/g, "."));
}
/* the record at the tail +0x2a9 = the absolute 0x1BE0 */
for (const rec of [0x1BE0, 0x1C0C]) {
	console.log("the record at 0x" + rec.toString(16) + " (tail +0x" + (rec - t).toString(16) + "):");
	const b = buf.subarray(rec, rec + 44);
	console.log("  hex " + b.toString("hex"));
	console.log("  u32 " + Array.from({ length: 11 }, (_, i) => buf.readUInt32LE(rec + i * 4)).join(" "));
	console.log("  f32 " + Array.from({ length: 11 }, (_, i) => buf.readFloatLE(rec + i * 4).toFixed(4)).join(" "));
}
