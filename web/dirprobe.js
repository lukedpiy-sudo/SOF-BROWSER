/* dirprobe.js - walk in eight directions and see which ones move, and what
 * the brush trace says about each direction.
 */
(function () {
	return new Promise(function (res) {
		function sleep(ms) { return new Promise(function (r) { setTimeout(r, ms); }); }
		function auth() {
			var st = window.sofstate;
			if (!st || !st.entities || st.self === null) return null;
			var e = st.entities.get(st.self);
			if (!e || !e.state) return null;
			return [e.state.readFloatLE(0x04), e.state.readFloatLE(0x08), e.state.readFloatLE(0x0c)];
		}
		function yawOf() {
			var st = window.sofstate;
			if (!st || !st.entities || st.self === null) return null;
			var e = st.entities.get(st.self);
			if (!e || !e.state) return null;
			return e.state.readUInt8(0x14);
		}
		(async function () {
			/* the prediction module */
			var s = document.createElement("script");
			s.src = "sofpredict.js?v=" + Date.now();
			await new Promise(function (r) { s.onload = r; s.onerror = r; document.head.appendChild(s); });
			for (var i = 0; i < 100; i++) { if (auth() && window.sofpredict.info().ready) break; await sleep(100); }
			await sleep(500);
			var out = { start: auth(), dirs: [] };
			/* the best direction: the one the brush trace leaves free */
			var best = null, bestFrac = -1;
			if (out.start) {
				for (var yy = 0; yy < 32; yy++) {
					var ang = yy * 360 / 32;
					var rad = ang * Math.PI / 180;
					var d = [Math.cos(rad) * 100, Math.sin(rad) * 100, 0];
					var tr = window.sofpredict.trace(out.start, [out.start[0] + d[0], out.start[1] + d[1], out.start[2]]);
					if (tr.frac > bestFrac) { bestFrac = tr.frac; best = ang; }
				}
			}
			out.bestYaw = best; out.bestFrac = +bestFrac.toFixed(3);
			var yaws = [best, 0, 45, 90, 135, 180, 225, 270, 315];
			for (var k = 0; k < yaws.length; k++) {
				var b = auth();
				var yb = yawOf();
				window.sofprobe(yaws[k], 1200);
				await sleep(1800);
				var a = auth();
				var ya = yawOf();
				/* the trace in the same direction */
				var tr = null;
				if (b && window.sofpredict) {
					var yaw = yaws[k] * Math.PI / 180;
					var d = [Math.sin(yaw) * 100, Math.cos(yaw) * 100, 0];
					tr = window.sofpredict.trace(b, [b[0] + d[0], b[1] + d[1], b[2] + d[2]]);
				}
				out.dirs.push({
					yaw: yaws[k],
					yawBefore: yb, yawAfter: ya,
					dist: (b && a) ? +Math.hypot(a[0] - b[0], a[1] - b[1]).toFixed(2) : null,
					dz: (b && a) ? +(a[2] - b[2]).toFixed(2) : null,
					traceFrac: tr ? +tr.frac.toFixed(3) : null,
					tracePlane: tr && tr.plane ? tr.plane.map(function (x) { return +x.toFixed(2); }) : null
				});
			}
			out.info = window.sofpredict ? window.sofpredict.info() : null;
			res(JSON.stringify(out));
		})();
	});
})()
