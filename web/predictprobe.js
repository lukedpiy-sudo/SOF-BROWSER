/* predictprobe.js - the expression that shot.js evaluates in the page: it
 * loads www/sofpredict.js, waits for the spawn, walks forward and compares
 * the predicted origin with the server's authoritative origin.
 *
 *   node shot.js <url> <png> <waitMs> <w> <h> "@predictprobe.js" [postWait]
 */
(function () {
	return new Promise(function (resolve) {
		function sleep(ms) { return new Promise(function (r) { setTimeout(r, ms); }); }
		function key(code, down) {
			document.dispatchEvent(new KeyboardEvent(down ? "keydown" : "keyup", { code: code, bubbles: true }));
		}
		function auth() {
			var st = window.sofstate;
			if (!st || !st.entities || st.self === null || st.self === undefined) return null;
			var e = st.entities.get(st.self);
			if (!e || !e.state) return null;
			return [e.state.readFloatLE(0x04), e.state.readFloatLE(0x08), e.state.readFloatLE(0x0c)];
		}
		var s = document.createElement("script");
		s.src = "sofpredict.js?v=" + Date.now();
		s.onload = function () { window.__sfp = 1; };
		s.onerror = function () { window.__sfp = "error"; };
		document.head.appendChild(s);
		(async function () {
			/* wait for the spawn */
			for (var i = 0; i < 120; i++) {
				if (auth() && window.sofpredict && window.sofpredict.info().ready) break;
				await sleep(100);
			}
			await sleep(500);
			var before = auth();
			var p0 = window.sofpredict ? window.sofpredict.origin() : null;
			/* walk forward for 2.5 seconds */
			key("KeyW", true);
			var samples = [];
			for (var k = 0; k < 25; k++) {
				await sleep(100);
				samples.push({
					a: auth(), p: window.sofpredict ? window.sofpredict.origin() : null,
					t: Date.now()
				});
			}
			key("KeyW", false);
			await sleep(300);
			var info = window.sofpredict ? window.sofpredict.info() : null;
			/* the distance the server moved and the distance the prediction
			 * moved */
			var authDist = 0, predDist = 0, errs = [];
			if (before && samples.length) {
				var lastA = before, lastP = p0;
				for (var j = 0; j < samples.length; j++) {
					var a = samples[j].a, p = samples[j].p;
					if (a && lastA) authDist += Math.hypot(a[0] - lastA[0], a[1] - lastA[1]);
					if (p && lastP) predDist += Math.hypot(p[0] - lastP[0], p[1] - lastP[1]);
					if (a && p) errs.push(Math.hypot(a[0] - p[0], a[1] - p[1], a[2] - p[2]));
					if (a) lastA = a;
					if (p) lastP = p;
				}
			}
			resolve(JSON.stringify({
				spawned: !!before,
				before: before, predicted0: p0,
				authDist: +authDist.toFixed(2),
				predDist: +predDist.toFixed(2),
				errMin: errs.length ? +Math.min.apply(null, errs).toFixed(2) : null,
				errMax: errs.length ? +Math.max.apply(null, errs).toFixed(2) : null,
				errAvg: errs.length ? +(errs.reduce(function (a, c) { return a + c; }, 0) / errs.length).toFixed(2) : null,
				info: info
			}));
		})();
	});
})()
