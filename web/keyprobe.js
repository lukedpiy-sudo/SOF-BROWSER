/* keyprobe.js - does a synthetic key event reach the client, and does the
 * player move?  (the app's own sofprobe holds W and measures the distance)
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
			for (var i = 0; i < 100; i++) { if (auth()) break; await sleep(100); }
			await sleep(500);
			var before = auth();
			/* the app's own probe: it holds W for 2 seconds */
			window.sofprobe(0, 2000);
			await sleep(3000);
			var after = auth();
			/* and a synthetic key event of our own */
			var kbefore = auth();
			document.dispatchEvent(new KeyboardEvent("keydown", { code: "KeyW", bubbles: true }));
			await sleep(1500);
			document.dispatchEvent(new KeyboardEvent("keyup", { code: "KeyW", bubbles: true }));
			var kafter = auth();
			res(JSON.stringify({
				spawned: !!before,
				before: before, after: after,
				probe: window.sofstate.probeResult || null,
				keyDist: (kbefore && kafter) ? +Math.hypot(kafter[0] - kbefore[0], kafter[1] - kbefore[1]).toFixed(2) : null,
				btns: window.sofstate.btns
			}));
		})();
	});
})()
