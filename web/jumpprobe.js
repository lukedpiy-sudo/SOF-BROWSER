/* jumpprobe.js - do the commands reach the server?  (a jump changes the z)
 * and what does the brush trace say about the spot the player is in?
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
		(async function () {
			var s = document.createElement("script");
			s.src = "sofpredict.js?v=" + Date.now();
			await new Promise(function (r) { s.onload = r; s.onerror = r; document.head.appendChild(s); });
			for (var i = 0; i < 100; i++) { if (auth() && window.sofpredict.info().ready) break; await sleep(100); }
			await sleep(500);
			var out = { start: auth() };
			/* the jump: hold Space */
			var b = auth();
			document.dispatchEvent(new KeyboardEvent("keydown", { code: "Space", bubbles: true }));
			var zs = [];
			for (var k = 0; k < 14; k++) { await sleep(80); var a = auth(); if (a) zs.push(+a[2].toFixed(1)); }
			document.dispatchEvent(new KeyboardEvent("keyup", { code: "Space", bubbles: true }));
			out.jumpZ = zs;
			/* the vertical trace */
			if (b) {
				var up = window.sofpredict.trace(b, [b[0], b[1], b[2] + 100]);
				var dn = window.sofpredict.trace(b, [b[0], b[1], b[2] - 100]);
				out.traceUp = { frac: +up.frac.toFixed(3), plane: up.plane };
				out.traceDown = { frac: +dn.frac.toFixed(3), plane: dn.plane };
				/* how many brushes contain the point? */
				var inside = 0, near = [];
				var br = window.sofpredict.info();
				out.brushes = br.brushes;
			}
			/* the fire button: does the server see the buttons? */
			var hpBefore = null;
			res(JSON.stringify(out));
		})();
	});
})()
