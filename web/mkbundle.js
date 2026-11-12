/*
 * mkbundle.js - build the browser bundle from the shared protocol modules.
 *
 * The browser has no module loader, so the CommonJS modules are wrapped in a
 * tiny runtime.  This keeps ONE copy of the protocol: the Node client, the
 * browser client and the bundler all use web/sofproto.js.
 */
const fs = require("fs");
const path = require("path");

const MODULES = [
	"./sofkey.js",
	"./sofmd4.js",
	"./cmdenc.js",
	"./playerstate.js",
	"./snapshot.js",
	"./sofproto.js",
	"./ghb.js"
];

const RUNTIME = `
(function (global) {
	if (typeof global.Buffer === "undefined") {
		/* a tiny Buffer shim: the shared protocol code uses the LE accessors
		 * and index access, so it is a real Uint8Array subclass */
		class B extends Uint8Array {
			/* the standard TypedArray signature has to be supported, because
			 * subarray/slice construct the result through Symbol.species:
			 * new B(buffer, byteOffset, length).  Without it a subarray
			 * silently covers the whole underlying buffer. */
			constructor(a, byteOffset, length) {
				if (a instanceof ArrayBuffer) {
					super(a, byteOffset, length);
				} else if (a instanceof Uint8Array) {
					super(a.buffer, a.byteOffset, a.byteLength);
				} else {
					super(a || 0);
				}
			}
			static get [Symbol.species]() { return B; }
			static alloc(n, fill) { const u = new Uint8Array(n); if (fill) u.fill(fill); return new B(u); }
			/* the slice helpers have to keep the byte offset, otherwise the
			 * accessors read from the wrong place */
			subarray(begin, end) {
				const s = super.subarray(begin, end);
				return new B(s.buffer, s.byteOffset, s.byteLength);
			}
			slice(begin, end) {
				const s = super.slice(begin, end);
				return new B(s);
			}
			static from(a, enc) {
				if (typeof a === "string") {
					if (enc === "base64") {
						const bin = atob(a); const u = new Uint8Array(bin.length);
						for (let i = 0; i < bin.length; i++) u[i] = bin.charCodeAt(i);
						return new B(u);
					}
					const u = new Uint8Array(a.length);
					for (let i = 0; i < a.length; i++) u[i] = a.charCodeAt(i) & 0xff;
					return new B(u);
				}
				if (a instanceof Uint8Array) return new B(a);
				return new B(new Uint8Array(a));
			}
			static concat(list) {
				const parts = []; let n = 0;
				for (const p of list) { const u = (p && p.buf) ? p.buf : p; parts.push(u); n += u.length; }
				const out = new Uint8Array(n); let o = 0;
				for (const u of parts) { out.set(u, o); o += u.length; }
				return new B(out);
			}
			copy(dst, off) { const d = (dst && dst.buf) ? dst.buf : dst; d.set(this, off || 0); return this.length; }
			readUInt8(o) { return this[o]; }
			readInt8(o) { const v = this[o]; return v > 127 ? v - 256 : v; }
			readUInt16LE(o) { return this[o] | (this[o + 1] << 8); }
			readInt16LE(o) { const v = this.readUInt16LE(o); return v > 32767 ? v - 65536 : v; }
			readUInt32LE(o) { return (this[o] | (this[o+1] << 8) | (this[o+2] << 16) | (this[o+3] << 24)) >>> 0; }
			readInt32LE(o) { return this.readUInt32LE(o) | 0; }
			readFloatLE(o) { const dv = new DataView(this.buffer, this.byteOffset, this.byteLength); return dv.getFloat32(o, true); }
			writeUInt8(v, o) { this[o] = v & 0xff; return 1; }
			writeUInt16LE(v, o) { this[o] = v & 0xff; this[o+1] = (v >>> 8) & 0xff; return 2; }
			writeInt16LE(v, o) { return this.writeUInt16LE(v < 0 ? v + 65536 : v, o); }
			writeUInt32LE(v, o) { this[o] = v & 0xff; this[o+1] = (v >>> 8) & 0xff; this[o+2] = (v >>> 16) & 0xff; this[o+3] = (v >>> 24) & 0xff; return 4; }
			writeInt32LE(v, o) { return this.writeUInt32LE(v >>> 0, o); }
			writeFloatLE(v, o) { const dv = new DataView(this.buffer, this.byteOffset, this.byteLength); dv.setFloat32(o, v, true); return 4; }
			toString(enc, a, b) {
				if (enc === "utf-8" || enc === "utf8") return new TextDecoder("utf-8").decode(this);
				let s = ""; const e = b === undefined ? this.length : b, s0 = a || 0;
				for (let i = s0; i < e; i++) s += String.fromCharCode(this[i]);
				return s;
			}
		}
		global.Buffer = B;
	}
	var __defs = {}, __cache = {};
	function __resolve(name, from) {
		if (name.charAt(0) !== ".") return name;
		var base = from.split("/").slice(0, -1);
		var parts = name.split("/");
		for (var i = 0; i < parts.length; i++) {
			if (parts[i] === "." || parts[i] === "") continue;
			if (parts[i] === "..") base.pop();
			else base.push(parts[i]);
		}
		var p = base.join("/");
		if (!/\.js$/.test(p)) p += ".js";
		return p;
	}
	function __require(name, from) {
		var id = __resolve(name, from || "./index.js");
		if (__cache[id]) return __cache[id].exports;
		if (!__defs[id]) throw new Error("module not bundled: " + id);
		var m = { exports: {} };
		__cache[id] = m;
		__defs[id](m, m.exports, function (n) { return __require(n, id); });
		return m.exports;
	}
	global.__sofRequire = __require;
	global.__sofDefs = __defs;
})(window);
`;

let out = RUNTIME;
for (const rel of MODULES) {
	const src = fs.readFileSync(path.join(__dirname, rel), "latin1");
	out += "\nwindow.__sofDefs[" + JSON.stringify(rel) + "] = function (module, exports, require) {\n" + src + "\n};\n";
}
out += "\nwindow.sofproto = window.__sofRequire('./sofproto.js');\n";
out += "window.sofsnapshot = window.__sofRequire('./snapshot.js');\n";
out += "window.sofplayerstate = window.__sofRequire('./playerstate.js');\n";
out += "window.sofghb = window.__sofRequire('./ghb.js');\n";

const outPath = path.join(__dirname, "www", "bundle.js");
fs.mkdirSync(path.dirname(outPath), { recursive: true });
fs.writeFileSync(outPath, out);
console.log("wrote", outPath, out.length, "bytes");

