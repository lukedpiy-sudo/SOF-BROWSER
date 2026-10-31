/* Parse the recovered item table (analysis/itemtable.md) into JSON. */
const fs = require("fs");
const src = "C:/Users/User/Soldier of Fortune/analysis/itemtable.md";
const lines = fs.readFileSync(src, "utf8").split(/\r?\n/);

const CATS = ["ammo", "weapon", "armor", "equipment", "health"];
const rows = [];
for (const l of lines) {
	/* | 12 | `item_ammo_knife` | Knife | 0 | 1 | 30.0 | 1 | -1 | 0x30F | 0x326 | */
	const m = l.match(/^\|\s*(\d+)\s*\|\s*`([^`]+)`\s*\|\s*(.*?)\s*\|\s*(\d+)\s*\|\s*(\d+)\s*\|\s*\**([\d.]+)\**\s*\|\s*\**(-?[\d.]+)\**\s*\|\s*\**(-?[\d.]+)\**\s*\|\s*(0x[0-9A-Fa-f]+|\d+)\s*\|\s*(0x[0-9A-Fa-f]+|\d+)\s*\|/);
	if (!m) continue;
	rows.push({
		index: parseInt(m[1], 10),
		classname: m[2],
		name: m[3].replace(/\*/g, ""),
		cat: parseInt(m[4], 10),
		catName: CATS[parseInt(m[4], 10)] || "other",
		type: parseInt(m[5], 10),
		mass: parseFloat(m[6]),
		amount: parseFloat(m[7]),
		max: parseFloat(m[8]),
		icon: m[9],
		msg: m[10]
	});
}
const out = {
	source: "analysis/itemtable.md (gamex86.dll, 39 item records)",
	note: "cat: 0 ammo, 1 weapon, 2 armor, 3 equipment, 5 health; typ is the item type " +
		"index (1 knife, 2 .44, 3 9mm, 4 12ga, 5 5.56, 6 rockets, 7 battery, 8 gas, 9 slugs)",
	items: rows
};
fs.writeFileSync("www/items.json", JSON.stringify(out, null, 1));
console.log("wrote www/items.json with", rows.length, "items");
