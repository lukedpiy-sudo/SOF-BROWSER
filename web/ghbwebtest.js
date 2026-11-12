/*
 * ghbwebtest.js - the browser draw path, headless.
 *
 * It loads the browser bundle (window.sofghb) and web/www/sofmodel.js the
 * way index.html does, feeds it a real .ghb out of the pak and checks the
 * WebGL calls: the vertex buffer, the index buffer and the draw call.
 *
 *   node ghbwebtest.js <file.ghb> [skin.tga]
 */
"use strict";
const fs = require("fs");
const path = require("path");

const file = process.argv[2];
if (!file) { console.error("usage: node ghbwebtest.js <file.ghb>"); process.exit(2); }
const skin = process.argv[3];

/* ---------------------------------------------------------------- the mock */
const calls = { drawElements: [], drawArrays: [], buffers: [] };

function makeGL() {
	const gl = {
		VERTEX_SHADER: 1, FRAGMENT_SHADER: 2, COMPILE_STATUS: 3,
		TRIANGLES: 4, POINTS: 5, FLOAT: 6, UNSIGNED_SHORT: 7,
		ARRAY_BUFFER: 8, ELEMENT_ARRAY_BUFFER: 9, STATIC_DRAW: 10,
		TEXTURE_2D: 11, TEXTURE0: 12, RGBA: 13, UNSIGNED_BYTE: 14,
		TEXTURE_MIN_FILTER: 15, TEXTURE_MAG_FILTER: 16, LINEAR: 17,
		LINEAR_MIPMAP_LINEAR: 18, TEXTURE_WRAP_S: 19, TEXTURE_WRAP_T: 20, REPEAT: 21,
		createShader: () => ({}), shaderSource: () => {}, compileShader: () => {},
		getShaderParameter: () => true, getShaderInfoLog: () => "",
		createProgram: () => ({}), attachShader: () => {}, linkProgram: () => {},
		getUniformLocation: (p, n) => ({ n: n }), getAttribLocation: (p, n) => ({ n: n }),
		createBuffer: () => ({}), bindBuffer: (t, b) => { gl._cur = { t: t, b: b }; },
		bufferData: (t, d) => { calls.buffers.push({ target: t, bytes: d.length, data: d }); },
		enableVertexAttribArray: () => {}, vertexAttribPointer: () => {},
		useProgram: () => {}, uniformMatrix4fv: () => {}, uniform1f: () => {}, uniform1i: () => {},
		activeTexture: () => {}, bindTexture: () => {}, createTexture: () => ({}),
		texImage2D: () => {}, generateMipmap: () => {}, texParameteri: () => {},
		drawElements: (mode, count, type, off) => calls.drawElements.push({ mode: mode, count: count, type: type, off: off }),
		drawArrays: (mode, first, count) => calls.drawArrays.push({ mode: mode, first: first, count: count })
	};
	return gl;
}

/* the browser: the bundle, then sofmodel.js */
const win = {};
global.window = win;
global.document = { querySelector: () => null };
global.fetch = function (url) {
	const p = String(url).replace(/^\/pak\//i, "");
	if (/acc_box_hip/i.test(p)) return Promise.resolve({ ok: true, arrayBuffer: () => Promise.resolve(fs.readFileSync(file).buffer.slice(fs.readFileSync(file).byteOffset, fs.readFileSync(file).byteOffset + fs.readFileSync(file).byteLength)) });
	if (skin && /\.tga$/i.test(p)) {
		const b = fs.readFileSync(skin);
		return Promise.resolve({ ok: true, arrayBuffer: () => Promise.resolve(b.buffer.slice(b.byteOffset, b.byteOffset + b.byteLength)) });
	}
	return Promise.resolve({ ok: false, status: 404, arrayBuffer: () => Promise.resolve(new ArrayBuffer(0)) });
};

eval(fs.readFileSync(path.join(__dirname, "www", "bundle.js"), "utf8"));
eval(fs.readFileSync(path.join(__dirname, "www", "sofmodel.js"), "utf8"));

const gl = makeGL();
const modelPath = "ghoul/enemy/bolt/acc_box_hip.ghb";
const m = win.sofmodel.load(modelPath, gl);

setTimeout(() => {
	if (m.state !== "ready") { console.log("FAIL: the model did not load: " + m.error); process.exit(1); }
	console.log("loaded:", m.path, "state=" + m.state, "triangles=" + m.triCount,
		"corners=" + (m.geometry ? m.geometry.corn.length : 0),
		"animated=" + m.animated);
	const ok = win.sofmodel.drawModel(gl, m, new Float32Array(16), 1);
	if (!ok) { console.log("FAIL: drawModel returned false"); process.exit(1); }
	const de = calls.drawElements[calls.drawElements.length - 1];
	if (!de) { console.log("FAIL: no drawElements"); process.exit(1); }
	console.log("drawElements: mode=" + de.mode + " (TRIANGLES=" + gl.TRIANGLES + ") count=" + de.count +
		" type=" + de.type + " (UNSIGNED_SHORT=" + gl.UNSIGNED_SHORT + ")");
	const want = m.triCount * 3;
	let fail = 0;
	if (de.mode !== gl.TRIANGLES) { console.log("FAIL: not TRIANGLES"); fail++; }
	if (de.count !== want) { console.log("FAIL: count " + de.count + " != " + want); fail++; }
	/* the index buffer */
	const ibo = calls.buffers.filter(b => b.target === gl.ELEMENT_ARRAY_BUFFER).pop();
	if (!ibo) { console.log("FAIL: no index buffer"); fail++; }
	else {
		const idx = ibo.data;
		let mn = 1e9, mx = -1e9;
		for (let i = 0; i < idx.length; i++) { if (idx[i] < mn) mn = idx[i]; if (idx[i] > mx) mx = idx[i]; }
		console.log("index buffer: " + idx.length + " entries, range " + mn + ".." + mx +
			" (corners=" + m.geometry.corn.length + ")");
		if (mx >= m.geometry.corn.length) { console.log("FAIL: an index is out of range"); fail++; }
	}
	/* the vertex buffer: the positions have to match the Comp's shared cPos */
	const vbo = calls.buffers.filter(b => b.target === gl.ARRAY_BUFFER).pop();
	if (!vbo) { console.log("FAIL: no vertex buffer"); fail++; }
	else {
		const v = vbo.data;
		const c = m.geometry.corners[0].pos;
		console.log("vertex buffer: " + vbo.bytes + " bytes (" + (vbo.bytes / 32) + " vertices of 8 floats)");
		const got = [v[0], v[1], v[2]];
		console.log("corner 0 position: " + got.map(x => x.toFixed(3)).join(",") +
			" expected " + c.map(x => x.toFixed(3)).join(","));
		for (let i = 0; i < 3; i++) if (Math.abs(got[i] - c[i]) > 1e-4) { console.log("FAIL: the position is wrong"); fail++; }
	}
	console.log(fail ? "\n" + fail + " FAILED" : "\nall ok");
	process.exit(fail ? 1 : 0);
}, 300);
