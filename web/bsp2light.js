/* bsp2light.js - extract the light entities of a SoF v46 .bsp into JSON.
 *
 *   node bsp2light.js <map.bsp> <out.json>
 *
 * The map's entity lump (lump 0) is a text blob:
 *
 *   {
 *   "origin" "-1744 -232 48"
 *   "light" "80"
 *   "_color" "1.000000 0.615686 0.235294"
 *   "classname" "light"
 *   }
 *
 * The SoF lights are the classic Quake II "light" entity.  The keys that
 * the shipped levels use:
 *
 *   origin    the position (SoF is Z up)
 *   light     the intensity (also "_light")
 *   _color    the colour "r g b", 0..1 ("color" as well; 0..255 is accepted)
 *   radius    the light's radius ("_radius" as well)
 *   style     0 = constant, 1..31 = a linear flicker, 32..255 = a random
 *             flicker
 *   wait      the flicker period in seconds ("_wait" as well)
 *   _cone     the cone of a spot light, in degrees
 *   _focus    the focus of a spot light
 *   _mangle   the direction of a spot light, "yaw pitch"
 *
 * The worldspawn carries the sun: "_sun_color", "_sun_light" (the intensity),
 * "_sun_ambient" (the ambient colour, 0..255) and "_sun" (the name of the
 * entity that marks the sun's position).
 *
 * The BSP also has a LIGHTS lump (lump 20, 36 bytes per light: the origin,
 * the colour, the intensity, a type field and a spare float).  It is the
 * engine's own light table, so it is used here only to cross check what the
 * entity lump says.
 */
const fs = require("fs");
const { readBsp } = require("./bspgeo.js");

const src = process.argv[2] || "C:/Users/User/AppData/Local/Temp/opencode/nycdm1.bsp";
const dst = process.argv[3] || "web/www/map_lights.json";

function num(v) {
	const n = parseFloat(v);
	return isNaN(n) ? null : n;
}

/* the colour may be "1.000000 0.615686 0.235294" (0..1) or 0..255 */
function color(v) {
	if (v === undefined) return null;
	const p = String(v).trim().split(/\s+/).map(num).filter(x => x !== null);
	if (p.length < 3) return null;
	const scale = p[0] > 1.0 || p[1] > 1.0 || p[2] > 1.0 ? 1 / 255 : 1;
	return [p[0] * scale, p[1] * scale, p[2] * scale];
}

function vec(v) {
	if (v === undefined) return null;
	const p = String(v).trim().split(/\s+/).map(num);
	if (p.length < 3 || p.some(x => x === null)) return null;
	return [p[0], p[1], p[2]];
}

/* the entity lump: { "key" "value" ... } blocks */
function parseEntities(txt) {
	const out = [];
	const re = /\{([^{}]*)\}/g;
	let m;
	while ((m = re.exec(txt)) !== null) {
		const kv = {};
		const kre = /"([^"]*)"\s*"([^"]*)"/g;
		let k;
		while ((k = kre.exec(m[1])) !== null) kv[k[1]] = k[2];
		out.push(kv);
	}
	return out;
}

const { b, version, lumps } = readBsp(src);
const entLump = lumps[0];
const ents = parseEntities(b.toString("latin1", entLump.off, entLump.off + entLump.len));

/* the entity with the given targetname */
function byTargetName(name) {
	for (const e of ents) if (e.targetname === name) return e;
	return null;
}

/* the vertexes (lump 2), so the sun's direction can be derived */
let bounds = null;
{
	const vl = lumps[2];
	if (vl && vl.len >= 12) {
		const mn = [1e9, 1e9, 1e9], mx = [-1e9, -1e9, -1e9];
		for (let o = vl.off; o + 12 <= vl.off + vl.len; o += 12) {
			for (let i = 0; i < 3; i++) {
				const v = b.readFloatLE(o + i * 4);
				if (v < mn[i]) mn[i] = v;
				if (v > mx[i]) mx[i] = v;
			}
		}
		bounds = { min: mn.map(x => +x.toFixed(2)), max: mx.map(x => +x.toFixed(2)) };
	}
}

/* the sun of the worldspawn */
let sun = null;
const world = ents.find(e => e.classname === "worldspawn");
if (world) {
	const c = color(world._sun_color || world.sun_color) || [1, 1, 1];
	const target = byTargetName(world._sun);
	const pos = target ? vec(target.origin) : null;
	sun = {
		color: c.map(x => +x.toFixed(6)),
		light: num(world._sun_light || world.sun_light) || 0,
		ambient: (world._sun_ambient || world.sun_ambient || "").trim().split(/\s+/).map(num).filter(x => x !== null),
		diffade: num(world._sun_diffade || world.sun_diffade) || 0,
		target: world._sun || null,
		origin: pos
	};
	if (!sun.ambient.length) sun.ambient = [0, 0, 0];
}

/* the lights */
const lights = [];
const byClass = {};
for (const e of ents) {
	const cls = e.classname || "";
	const isLight = cls === "light" || cls.indexOf("light_") === 0;
	if (!isLight) continue;
	const o = vec(e.origin);
	if (!o) continue;
	const c = color(e._color || e.color) || [1, 1, 1];
	const intensity = num(e.light !== undefined ? e.light : e._light);
	const radius = num(e.radius !== undefined ? e.radius : e._radius);
	const style = num(e.style !== undefined ? e.style : e._style);
	const wait = num(e.wait !== undefined ? e.wait : e._wait);
	const cone = num(e._cone !== undefined ? e._cone : e.cone);
	const focus = num(e._focus !== undefined ? e._focus : e.focus);
	/* the spot direction: "_mangle" is "yaw pitch" */
	let dir = null;
	if (e._mangle !== undefined || e._angle !== undefined) {
		const m = String(e._mangle || e._angle).trim().split(/\s+/).map(num);
		if (m.length >= 2 && m[0] !== null && m[1] !== null) {
			const yaw = m[0] * Math.PI / 180, pitch = m[1] * Math.PI / 180;
			const cp = Math.cos(pitch);
			dir = [Math.sin(yaw) * cp, Math.cos(yaw) * cp, Math.sin(pitch)];
		}
	}
	lights.push({
		o: o,
		c: c.map(x => +x.toFixed(6)),
		i: intensity === null ? 0 : intensity,
		r: radius === null ? 0 : radius,
		s: style === null ? 0 : style,
		w: wait === null ? 0 : wait,
		d: dir ? dir.map(x => +x.toFixed(6)) : null,
		k: cone === null ? 0 : cone,
		f: focus === null ? 0 : focus,
		a: num(e.angle) || 0,
		n: cls
	});
	byClass[cls] = (byClass[cls] || 0) + 1;
}

/* ------------------------------------------------------------------ the
 * cross check against the BSP's own LIGHTS lump (lump 20): 36 bytes per
 * light (the origin, the colour, the intensity, a type, a spare float).
 * The type is 1 for a point light, 2 for a spot light and 3 for the sun's
 * light grid.
 */
const check = { lump: null };
const ll = lumps[20];
if (ll && ll.len % 36 === 0 && ll.len > 0) {
	const n = ll.len / 36;
	let matched = 0, colorOk = 0, intensityOk = 0, spotOk = 0, spotBad = 0;
	const type = new Map();
	for (let i = 0; i < n; i++) {
		const o = ll.off + i * 36;
		const p = [b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)];
		const c = [b.readFloatLE(o + 12), b.readFloatLE(o + 16), b.readFloatLE(o + 20)];
		const inten = b.readFloatLE(o + 24);
		const t = b.readInt32LE(o + 28);
		type.set(t, (type.get(t) || 0) + 1);
		let hit = null;
		for (const l of lights) {
			if (Math.abs(l.o[0] - p[0]) < 0.5 && Math.abs(l.o[1] - p[1]) < 0.5 && Math.abs(l.o[2] - p[2]) < 0.5) { hit = l; break; }
		}
		if (!hit) continue;
		matched++;
		if (Math.abs(hit.c[0] - c[0]) < 0.01 && Math.abs(hit.c[1] - c[1]) < 0.01 && Math.abs(hit.c[2] - c[2]) < 0.01) colorOk++;
		if (Math.abs(hit.i - inten) < 0.01) intensityOk++;
		const spot = hit.d !== null;
		if (spot && t === 2) spotOk++;
		if (!spot && t === 2) spotBad++;
	}
	check.lump = {
		entries: n,
		matched: matched,
		originMatches: matched,
		colorMatches: colorOk,
		intensityMatches: intensityOk,
		spotMatches: spotOk,
		spotMismatches: spotBad,
		types: Object.fromEntries(type)
	};
}

const out = {
	map: (src.match(/([^\\/]+)\.bsp$/i) || [, "map"])[1].toLowerCase(),
	source: src,
	bspVersion: version,
	bounds: bounds,
	sun: sun,
	counts: {
		entities: ents.length,
		lights: lights.length,
		byClass: byClass
	},
	check: check,
	lights: lights
};

fs.writeFileSync(dst, JSON.stringify(out));
console.log("wrote", dst, (fs.statSync(dst).size / 1024).toFixed(1) + " KB |",
	lights.length, "lights of", ents.length, "entities |", JSON.stringify(byClass));
if (check.lump) console.log("bsp light lump:", JSON.stringify(check.lump));
if (sun) console.log("sun:", JSON.stringify(sun));
