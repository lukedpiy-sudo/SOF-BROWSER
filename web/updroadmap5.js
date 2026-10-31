const fs = require("fs");
const p = "C:/Users/User/Soldier of Fortune/analysis/BROWSER_ROADMAP.md";
let c = fs.readFileSync(p, "utf8");

const row = "| 2026-10-21 (h) | **#6 70% -> 78%, #7 52% -> 62%.** **The real SoF map renders with the real game textures.**  The `.m32` material format is decoded: `+0` the version (4), `+4` the name (128 B), `+132` a second name (384 B), `+516` the mip sizes (64,32,16,8,4,2,1), `+644` the pixel offset (968) and the mip level offsets at +648; the pixels are **uncompressed** `w*h` texels of (R,G,B,0xFF).  `web/bsp2json.js` now pulls the materials the map uses out of `Base\\pak0.pak` (94 materials, 82 with an image) and embeds them base64 in the map JSON; the browser builds one WebGL texture per material, adds the texinfo's UV axes to the mesh and enables the mip levels.  The New York City level now shows brick walls, rusted metal and the street geometry in the browser.  (One bug found on the way: the material pixels are RGBA, not RGB - reading them as 3 byte RGB turned the level into colour stripes.) |\n";

if (!c.includes("2026-10-21 (h)")) {
	const anchor = c.indexOf("| 2026-10-21 (g) |");
	const end = c.indexOf("\n", anchor);
	c = c.slice(0, end + 1) + row + c.slice(end + 1);
}
c = c.replace("| 6 | Asset pipeline (.bsp v46, .m32, .ghb/.GHL, .adp) | **[~] 70%** | - |",
	"| 6 | Asset pipeline (.bsp v46, .m32, .ghb/.GHL, .adp) | **[~] 78%** | - |");
c = c.replace("| 7 | WebGL renderer (scene, camera, models, Ghoul anim, HUD, audio) | **[~] 52%** | #4,#6 |",
	"| 7 | WebGL renderer (scene, camera, models, Ghoul anim, HUD, audio) | **[~] 62%** | #4,#6 |");
c = c.replace("**Overall: ~68% of the browser client is done.**", "**Overall: ~72% of the browser client is done.**");
fs.writeFileSync(p, c);
console.log("roadmap updated");
