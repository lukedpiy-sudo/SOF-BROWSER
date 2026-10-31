/* Find the correct surfedge -> vertex mapping by testing the coplanarity of
 * every face against its plane. */
const fs = require("fs");
const b = fs.readFileSync(process.argv[2] || "C:/Users/User/Soldier of Fortune/User/maps/dm/beta17.bsp");
const L = (i) => ({ off: b.readInt32LE(8 + i * 8), len: b.readInt32LE(8 + i * 8 + 4) });

const nv = L(2).len / 12, ne = L(11).len / 4, ns = L(12).len / 4, nf = L(6).len / 44;
console.log("vertexes", nv, "edges", ne, "surfedges", ns, "faces", nf);

const V = [], E = [], S = [], F = [], P = [];
for (let i = 0; i < nv; i++) { const o = L(2).off + i * 12; V.push([b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8)]); }
for (let i = 0; i < ne; i++) { const o = L(11).off + i * 4; E.push([b.readUInt16LE(o), b.readUInt16LE(o + 2)]); }
for (let i = 0; i < ns; i++) S.push(b.readInt32LE(L(12).off + i * 4));
for (let i = 0; i < nf; i++) { const o = L(6).off + i * 44; F.push({ pn: b.readUInt16LE(o), side: b.readUInt16LE(o + 2), fe: b.readInt32LE(o + 4), ne: b.readInt16LE(o + 8) }); }
for (let i = 0; i < L(1).len / 20; i++) { const o = L(1).off + i * 20; P.push([b.readFloatLE(o), b.readFloatLE(o + 4), b.readFloatLE(o + 8), b.readFloatLE(o + 12)]); }

function test(mode, edgeBase, label) {
	let good = 0, bad = 0, worst = 0, oob = 0;
	for (const f of F) {
		const pl = P[f.pn];
		if (!pl) { bad++; continue; }
		let ok = true;
		for (let k = 0; k < f.ne; k++) {
			const se = S[f.fe + k];
			if (se === undefined) { ok = false; oob++; break; }
			const ei = Math.abs(se) - edgeBase;
			if (ei < 0 || ei >= ne) { ok = false; oob++; continue; }
			const e = E[ei];
			let vi;
			if (mode === 0) vi = se < 0 ? e[1] : e[0];
			else if (mode === 1) vi = se < 0 ? e[0] : e[1];
			else vi = e[0];
			const v = V[vi];
			if (!v) { ok = false; oob++; continue; }
			const d = Math.abs(pl[0] * v[0] + pl[1] * v[1] + pl[2] * v[2] - pl[3]);
			if (d > worst) worst = d;
			if (d > 1) ok = false;
		}
		if (ok) good++; else bad++;
	}
	console.log(label, "mode", mode, "edgeBase", edgeBase, "| good", good, "bad", bad, "oob", oob, "worst", worst.toFixed(2));
}

test(0, 0, "A0base");
test(1, 0, "B0base");
test(0, 1, "A1base");

/* How are the edges themselves laid out?  Check the u16 pair validity and
 * whether the pairs look like real edges (two different vertices). */
let pairOk = 0, same = 0;
for (const e of E) { if (e[0] < nv && e[1] < nv) pairOk++; if (e[0] === e[1]) same++; }
console.log("edges with both vertices in range:", pairOk, "/", ne, " degenerate:", same);
