const fs = require("fs");
const p = "C:/Users/User/Soldier of Fortune/analysis/BROWSER_ROADMAP.md";
let c = fs.readFileSync(p, "utf8");

const row = "| 2026-10-21 (d) | **#6 55% -> 62%.** The game data layout is mapped: the `.pak` files hold **4199 `.m32`**, 1112 `.tga`, 824 `.wav`, 727 `.os`, **476 `.ghb`** (the Ghoul models, 196 MB), 390 `.adp` (the audio), 308 `.gsq`, 252 `.ifl`, **211 `.eft`** (the effects) and 136 `.sp`.  The configstring model names resolve against the pak: `cs[648] = \"weapons/world/claymore\"` -> `effects/weapons/world/claymore.eft` (87 of them match).  In the BSP, **lump 5 is the material table** (64 byte entries, the name at +40, 2460 of them) and lump 6 holds the faces.  Still open: the texinfo record (the UV axes) and the Ghoul `.ghb` mesh format. |\n";

if (!c.includes("2026-10-21 (d)")) {
	c = c.replace(/(\| 2026-10-21 \(c\) \|[^\n]*\n)/, "$1" + row);
}
c = c.replace("| 6 | Asset pipeline (.bsp v46, .m32, .ghb/.GHL, .adp) | **[~] 55%** | - |",
	"| 6 | Asset pipeline (.bsp v46, .m32, .ghb/.GHL, .adp) | **[~] 62%** | - |");
c = c.replace("## 6. Asset pipeline - *55%*", "## 6. Asset pipeline - *62%*");
c = c.replace("**Overall: ~63% of the browser client is done.**", "**Overall: ~64% of the browser client is done.**");
fs.writeFileSync(p, c);
console.log("roadmap updated");
