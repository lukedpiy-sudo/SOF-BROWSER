/*
 * ghbhuff.js - the svc 0x1A (svc_ghoulreliable) payload decoder.
 *
 * The Ghoul service carries a BIT STREAM (LSB first inside each byte), not a
 * byte stream.  See analysis/ghoul_residuals.md section A and PROTOCOL.md
 * ("The payload's internal layout").  The three pieces are:
 *
 *   [u16 LE byte length][bit stream]
 *     string table   [encoded-u16 index][string] ... [index 0]
 *     section 1      the entity states  (a record per entity, 5 groups)
 *     section 2      the create list    (entity indices only)
 *     section 3      the extra list     (entity indices only)
 *   each section is closed by an encoded-u16 0.
 *
 * Every integer is an "encoded-u16":
 *   [1 bit non-zero][2 bit class c][4*(c+1) bits value]
 * and a string is either an index into the engine's read-only global table or
 * an inline string (raw, or Huffman compressed with the extracted code table).
 *
 * The FIRST string of group 1 (the animation bindings, obj+0x1C) is the
 * model's main .GHL script, e.g. "GHOUL/ENEMY/MESO/MESO_PLAYER.GHL".  SoF
 * names the .ghb mesh after it: swapping .GHL -> .GHB gives the real model
 * path carried by the spawn record.  createModelMap() turns the decoded
 * records into an entity -> .ghb path map for sofmodel.entityModelPath().
 *
 * This module is plain CommonJS with no Buffer dependency so it runs both in
 * Node and inside the tiny browser bundle runtime (mkbundle.js).
 */
"use strict";

/* ------------------------------------------------------------- bit reader */
class BitReader {
	constructor(buf, bitOffset) {
		this.b = buf;
		this.p = bitOffset || 0;
	}
	bit() {
		const v = (this.b[this.p >> 3] >>> (this.p & 7)) & 1;
		this.p++;
		return v;
	}
	bits(n) {
		let v = 0;
		for (let i = 0; i < n; i++) v |= this.bit() << i;
		return v;
	}
	bytes(n) {
		const out = new Uint8Array(n);
		for (let i = 0; i < n; i++) out[i] = this.bits(8);
		return out;
	}
}

/* the engine's encoded-u16 primitive: FUN_200BDCA0 / FUN_2008E450 */
function readU16(r) {
	if (!r.bit()) return 0;
	const c = r.bits(2);
	return r.bits(4 * (c + 1));
}

/* ----------------------------------------------------------- huffman tree */
/* table[sym] = [code, length] from ghoulhuff.json (the MSB is the first bit) */
function buildHuffRoot(table) {
	const root = { l: null, r: null, s: -1 };
	if (!table) return root;
	for (let sym = 0; sym < 256; sym++) {
		const e = table[sym];
		if (!e || !e[1]) continue;
		let node = root;
		for (let i = e[1] - 1; i >= 0; i--) {
			const bit = (e[0] >>> i) & 1;
			const k = bit ? "r" : "l";
			if (!node[k]) node[k] = { l: null, r: null, s: -1 };
			node = node[k];
		}
		node.s = sym;
	}
	return root;
}

function huffDecode(buf, nbits, root) {
	let out = "";
	let node = root;
	for (let p = 0; p < nbits; p++) {
		const bit = (buf[1 + (p >> 3)] >>> (p & 7)) & 1;
		node = bit ? node.r : node.l;
		if (!node) break;
		if (node.s >= 0) {
			out += String.fromCharCode(node.s);
			node = root;
		}
	}
	return out;
}

/* ------------------------------------------------------------- readString */
/* ctx = { globalStrings: [...], huffRoot: <tree> } */
function readString(r, ctx) {
	if (r.bit()) {
		/* the string is in the read-only global table (0x2013ADF8) */
		if (!r.bit()) return "";
		const c = r.bits(2);
		const idx = r.bits(4 * (c + 1));
		return (ctx.globalStrings && ctx.globalStrings[idx]) || "";
	}
	/* inline: raw (header 0xFF) or Huffman compressed */
	if (!r.bit()) return "";
	const c = r.bits(2);
	const L = r.bits(2 * c + 2);
	const buf = r.bytes(L);
	if (L === 0) return "";
	if (buf[0] === 0xff) {
		let s = "";
		for (let i = 1; i < L; i++) s += String.fromCharCode(buf[i]);
		return s;
	}
	const nbits = L * 8 - buf[0] - 8;
	return huffDecode(buf, nbits, ctx.huffRoot);
}

/* ---------------------------------------------------------- decode payload */
/*
 * payload = the bytes after the u16 length prefix.
 * Returns { strings, sections, endBit, totalBits }.
 */
function decodePayload(payload, ctx) {
	const r = new BitReader(payload);
	const strings = {};
	let guard = 0;

	/* the payload-local string table; indices are a persistent server-side
	 * counter, so a record can reference a string sent in an earlier packet */
	while (true) {
		const idx = readU16(r);
		if (idx === 0) break;
		strings[idx] = readString(r, ctx);
		if (++guard > 10000) break;
	}

	const sections = [[], [], []];
	for (let s = 0; s < 3; s++) {
		let nrec = 0;
		while (true) {
			const raw = readU16(r);          /* the engine negates this for its BST */
			if (raw === 0) break;
			const entity = raw;
			if (s === 0) {
				const groups = [];
				for (let g = 0; g < 5; g++) {
					const n = readU16(r);
					const vals = [];
					let prev = -1;           /* delta decode: v_i = d_i + v_(i-1) + 1 */
					for (let i = 0; i < n; i++) {
						/* group 5 (obj+0x14 / obj+0xC0) is special: each element
						 * is [1-bit changed flag][encoded-u16 key if changed]
						 * [encoded-u16 delta].  Groups 1-4 are plain deltas. */
						if (g === 4 && r.bit()) readU16(r);
						const v = readU16(r) + prev + 1;
						vals.push(v);
						prev = v;
						if (vals.length > 100000) break;
					}
					groups.push({ n: n, vals: vals });
				}
				sections[s].push({ entity: entity, groups: groups });
			} else {
				sections[s].push({ entity: entity });
			}
			if (++nrec > 10000) break;
		}
	}
	return {
		strings: strings,
		sections: sections,
		endBit: r.p,
		totalBits: payload.length * 8
	};
}

/* ------------------------------------------------------------ model map */
/*
 * createModelMap(ctx) returns a stateful accumulator.  add(body) takes a raw
 * captured svc 0x1A body ([u16 length][payload]); get(entity) returns the
 * decoded .ghb path for that entity number.  The string table is accumulated
 * across packets because its indices are a persistent server-side counter.
 */
function createModelMap(ctx) {
	const strings = {};
	const models = Object.create(null);   /* entity number -> { path, ghl } */
	let packets = 0, records = 0, lastError = null;

	function add(body) {
		if (!ctx || !ctx.huffRoot || !body || body.length < 4) return 0;
		let len;
		if (body.readUInt16LE) len = body.readUInt16LE(0);
		else len = body[0] | (body[1] << 8);
		if (len < 4 || len > body.length - 2) return 0;
		const payload = body.subarray ? body.subarray(2, 2 + len) : body.slice(2, 2 + len);
		let d;
		try { d = decodePayload(payload, ctx); }
		catch (e) { lastError = String(e && e.message || e); return 0; }
		/* reject garbage (a false-positive 0x1a inside another message) */
		const ks = Object.keys(d.strings);
		if (ks.length) {
			let printable = 0;
			for (const k of ks) {
				const s = d.strings[k];
				if (s && /^[A-Za-z0-9_./\\ +*'-]+$/.test(s)) printable++;
			}
			if (printable < ks.length * 0.8) return 0;
		}
		Object.assign(strings, d.strings);
		packets++;

		for (const rec of d.sections[0]) {
			records++;
			/* group 1 (obj+0x0C / obj+0x1C) holds the animation bindings; its
			 * first element is the model's main .GHL script.  The .ghb mesh is
			 * named after that script. */
			let path = null, ghl = null;
			const g1 = rec.groups[0] && rec.groups[0].vals || [];
			for (const v of g1) {
				const s = strings[v];
				if (s && /\.GHL$/i.test(s)) { ghl = s; break; }
			}
			/* fall back to any group if group 1 does not carry a .GHL */
			if (!ghl) {
				for (let g = 1; g < 5 && !ghl; g++) {
					for (const v of (rec.groups[g] && rec.groups[g].vals) || []) {
						const s = strings[v];
						if (s && /\.GHL$/i.test(s)) { ghl = s; break; }
					}
				}
			}
			if (ghl) path = ghl.replace(/\.GHL$/i, ".GHB").replace(/\\/g, "/");
			if (path) models[rec.entity] = { path: path, ghl: ghl, entity: rec.entity };
		}
		return d.sections[0].length;
	}

	return {
		add: add,
		setContext: function (newCtx) { ctx = newCtx; return this; },
		get: function (entity) { return models[entity] || null; },
		getPath: function (entity) { const m = models[entity]; return m ? m.path : null; },
		get strings() { return strings; },
		get models() { return models; },
		get packets() { return packets; },
		get records() { return records; },
		get lastError() { return lastError; }
	};
}

/* ------------------------------------------------------------------ setup */
function createContext(globalStrings, huffTable) {
	return {
		globalStrings: globalStrings || [],
		huffRoot: buildHuffRoot(huffTable)
	};
}

module.exports = {
	BitReader: BitReader,
	readU16: readU16,
	buildHuffRoot: buildHuffRoot,
	huffDecode: huffDecode,
	readString: readString,
	decodePayload: decodePayload,
	createContext: createContext,
	createModelMap: createModelMap
};
