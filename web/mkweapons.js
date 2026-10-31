/* Parse the decoded weapon table (analysis/weapontable.txt) into JSON for
 * the browser content page. */
const fs = require("fs");
const src = "C:/Users/User/Soldier of Fortune/analysis/weapontable.txt";
const lines = fs.readFileSync(src, "utf8").split(/\r?\n/);

	const rows = [];
	for (const l of lines) {
		if (!/^\d+\s/.test(l)) continue;
		let c = l.trim().split(/\s+/);
		if (c.length < 9) continue;
		/* the rows without a model path have an empty name column, so the
		 * fixed-width table shifts by one field */
		let name = null, fire, alt, rest;
		if (/^0x/.test(c[1])) { fire = c[1]; alt = c[2]; rest = c.slice(3); }
		else { name = c[1]; fire = c[2]; alt = c[3]; rest = c.slice(4); }
		const f = function (i) { return rest.length > i ? parseFloat(rest[i]) : 0; };
		rows.push({
			index: parseInt(c[0], 10),
			name: name,
			fire: fire, altfire: alt,
			a5: f(0), a6: f(1), a13: f(2), a15: f(3),
			delay: f(4),
			altdelay: f(5)
		});
	}
	const out = {
		source: "analysis/weapontable.txt (gamex86.dll, 31 registrations)",
		note: "the weapon description row: a5/a6/a13/a15 are the row's unnamed float " +
			"fields (+0x004/+0x008/+0x124/+0x130), delay/altdelay are the fire delays " +
			"(+0x118/+0x11C) and name is the weapon model path (+0x014)",
		columns: ["index", "name", "fire", "altfire", "a5", "a6", "a13", "a15", "delay", "altdelay"],
		weapons: rows
	};
fs.writeFileSync("www/weapons.json", JSON.stringify(out, null, 1));
console.log("wrote web/www/weapons.json with", rows.length, "weapons");
