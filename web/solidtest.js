/* solidtest.js - prove the solid world: the prediction walks, it is stopped by
 * the walls, it never ends up inside a solid and it can step up a ledge.
 *
 *   node shot.js <url> <png> <waitMs> <w> <h> "@solidtest.js" [postWait]
 */
(function () {
	return new Promise(function (res) {
		function sleep(ms) { return new Promise(function (r) { setTimeout(r, ms); }); }
		(async function () {
			var s = document.createElement("script");
			s.src = "sofpredict.js?v=" + Date.now();
			await new Promise(function (r) { s.onload = r; s.onerror = r; document.head.appendChild(s); });
			for (var i = 0; i < 100; i++) { if (window.sofpredict && window.sofpredict.info().ready) break; await sleep(100); }
			var P = window.sofpredict;
			var out = { tests: [] };
			/* a place in the open: the first light entity of the map */
			var m = await (await fetch("map_bsp.json")).json();
			/* an item entity stands on the floor in the open space */
			var light = null;
			for (var e = 0; e < m.entities.length; e++) {
				if (m.entities[e].classname === "item_health_small") { light = m.entities[e]; break; }
			}
			if (!light) for (var e = 0; e < m.entities.length; e++) {
				if (m.entities[e].origin) { light = m.entities[e]; break; }
			}
			var start = light.origin.split(/\s+/).map(Number);
			/* the player stands on the floor: the items are 8 units above it */
			var p0 = [start[0], start[1], start[2] - 8];
			out.start = p0;
			/* first let the player settle on the floor */
			var rs = P.simulate(p0, { forwardmove: 0, sidemove: 0, upmove: 0, buttons: 0, yaw: 0, pitch: 0 }, 60, 1 / 60);
			out.settle = { dz: +(rs.origin[2] - p0[2]).toFixed(2), onGround: rs.onGround, inside: P.insideSolid(rs.origin) };
			p0 = rs.origin;
			/* walk in eight directions for two seconds */
			for (var d = 0; d < 8; d++) {
				var yaw = d * 45;
				var r = P.simulate(p0, { forwardmove: 200, sidemove: 0, upmove: 0, buttons: 0, yaw: yaw, pitch: 0 }, 120, 1 / 60);
				var last = r.path[r.path.length - 1];
				out.tests.push({
					yaw: yaw,
					moved: +Math.hypot(last[0] - p0[0], last[1] - p0[1]).toFixed(2),
					dz: +(last[2] - p0[2]).toFixed(2),
					inside: P.insideSolid(last),
					onGround: r.onGround
				});
			}
			/* the run */
			var rr = P.simulate(p0, { forwardmove: 200, sidemove: 0, upmove: 0, buttons: 0x20, yaw: 0, pitch: 0 }, 120, 1 / 60);
			out.run = {
				moved: +Math.hypot(rr.origin[0] - p0[0], rr.origin[1] - p0[1]).toFixed(2),
				inside: P.insideSolid(rr.origin)
			};
			/* the jump */
			var rj = P.simulate(p0, { forwardmove: 0, sidemove: 0, upmove: 200, buttons: 0, yaw: 0, pitch: 0 }, 60, 1 / 60);
			out.jump = {
				height: +(rj.origin[2] - p0[2]).toFixed(2),
				inside: P.insideSolid(rj.origin)
			};
			/* the step: walk into a wall for a long time and see if the player
			 * climbs a ledge */
			var rw = P.simulate(p0, { forwardmove: 200, sidemove: 0, upmove: 0, buttons: 0, yaw: 0, pitch: 0 }, 600, 1 / 60);
			out.walk = {
				moved: +Math.hypot(rw.origin[0] - p0[0], rw.origin[1] - p0[1]).toFixed(2),
				dz: +(rw.origin[2] - p0[2]).toFixed(2),
				inside: P.insideSolid(rw.origin)
			};
			res(JSON.stringify(out));
		})();
	});
})()
