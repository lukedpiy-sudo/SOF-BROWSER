/* The content page: the game's weapon table and the client side mods. */
(function () {
	"use strict";

	/* the client mods - the values the game itself uses as a base */
	const DEFAULTS = {
		moveSpeed: 12000,   // the movement scale (the sprint bit doubles it)
		lookSpeed: 0.25,    // the degrees per mouse pixel
		fov: 90,            // the horizontal field of view
		drawDistance: 40000,// the far plane
		shadows: 1,
		masterUrl: "http://127.0.0.1:8090"
	};
	const KEY = "sof.browser.mods";

	function load() {
		try {
			const raw = localStorage.getItem(KEY);
			if (!raw) return Object.assign({}, DEFAULTS);
			return Object.assign({}, DEFAULTS, JSON.parse(raw));
		} catch (e) { return Object.assign({}, DEFAULTS); }
	}
	function save(m) {
		try { localStorage.setItem(KEY, JSON.stringify(m)); } catch (e) { }
	}

	const mods = load();

	const SPEC = [
		{ key: "moveSpeed", min: 1000, max: 32000, step: 500, label: "movement speed", hint: "the forward/side move in the user command; the sprint bit doubles it" },
		{ key: "lookSpeed", min: 0.05, max: 1.0, step: 0.05, label: "look sensitivity", hint: "the degrees per mouse pixel" },
		{ key: "fov", min: 50, max: 140, step: 5, label: "field of view", hint: "the horizontal fov of the renderer" },
		{ key: "drawDistance", min: 2000, max: 60000, step: 1000, label: "draw distance", hint: "the far plane of the renderer" },
		{ key: "shadows", min: 0, max: 1, step: 1, label: "vertex shading", hint: "1 = the faces are lit by their normal, 0 = flat" }
	];

	function buildMods() {
		const host = document.getElementById("mods");
		host.innerHTML = "";
		SPEC.forEach(function (s) {
			const wrap = document.createElement("div");
			const label = document.createElement("label");
			label.innerHTML = s.label + ' <span class="val" id="v_' + s.key + '">' + mods[s.key] + "</span>";
			const input = document.createElement("input");
			input.type = "range";
			input.min = s.min; input.max = s.max; input.step = s.step; input.value = mods[s.key];
			input.title = s.hint;
			input.oninput = function () {
				mods[s.key] = parseFloat(input.value);
				document.getElementById("v_" + s.key).textContent = mods[s.key];
				save(mods);
			};
			wrap.appendChild(label);
			wrap.appendChild(input);
			host.appendChild(wrap);
		});
		/* the master address */
		const wrap = document.createElement("div");
		const label = document.createElement("label");
		label.textContent = "master address";
		const input = document.createElement("input");
		input.type = "text";
		input.value = mods.masterUrl;
		input.oninput = function () { mods.masterUrl = input.value; save(mods); };
		wrap.appendChild(label);
		wrap.appendChild(input);
		host.appendChild(wrap);
	}

	function buildWeapons(w) {
		const sum = document.getElementById("wsummary");
		sum.textContent = w.source + " - " + w.weapons.length + " registrations, " +
			w.weapons.filter(x => x.name).length + " named.  " + w.note;
		const t = document.createElement("table");
		t.innerHTML = "<tr><th>#</th><th>model</th><th>a5</th><th>a6</th><th>a13</th>" +
			"<th>a15</th><th>delay</th><th>alt delay</th><th>fire</th></tr>";
		w.weapons.forEach(function (r) {
			const tr = document.createElement("tr");
			const name = r.name ? r.name.split("/").pop() : '<span style="color:#555">(empty)</span>';
			tr.innerHTML = "<td>" + r.index + "</td><td>" + name + "</td>" +
				'<td class="num">' + r.a5 + "</td>" +
				'<td class="num">' + r.a6 + "</td>" +
				'<td class="num">' + r.a13 + "</td>" +
				'<td class="num">' + r.a15 + "</td>" +
				'<td class="num">' + r.delay + "</td>" +
				'<td class="num">' + r.altdelay + "</td>" +
				'<td style="color:#7a7a7a">' + r.fire + "</td>";
			t.appendChild(tr);
		});
		document.getElementById("weapons").appendChild(t);
	}

	function buildItems(j) {
		document.getElementById("isummary").textContent = j.source + " - " + j.items.length +
			" items.  " + j.note;
		const t = document.createElement("table");
		t.innerHTML = "<tr><th>#</th><th>class</th><th>name</th><th>cat</th><th>type</th>" +
			"<th>mass</th><th>amount</th><th>max</th><th>icon</th></tr>";
		j.items.forEach(function (r) {
			const tr = document.createElement("tr");
			tr.innerHTML = "<td>" + r.index + "</td>" +
				'<td style="color:#7fb0ff">' + r.classname + "</td>" +
				"<td>" + r.name + "</td>" +
				"<td>" + r.catName + "</td>" +
				'<td class="num">' + r.type + "</td>" +
				'<td class="num">' + r.mass + "</td>" +
				'<td class="num">' + r.amount + "</td>" +
				'<td class="num">' + r.max + "</td>" +
				'<td style="color:#7a7a7a">' + r.icon + "</td>";
			t.appendChild(tr);
		});
		document.getElementById("items").appendChild(t);
	}

	document.getElementById("save").onclick = function () {
		save(mods);
		document.getElementById("saved").textContent = "saved";
		setTimeout(function () { document.getElementById("saved").textContent = ""; }, 1500);
	};
	document.getElementById("export").onclick = function () {
		const blob = new Blob([JSON.stringify(mods, null, 1)], { type: "application/json" });
		const a = document.createElement("a");
		a.href = URL.createObjectURL(blob);
		a.download = "sof-browser-mods.json";
		a.click();
	};
	document.getElementById("reset").onclick = function () {
		Object.assign(mods, DEFAULTS);
		save(mods);
		buildMods();
		document.getElementById("saved").textContent = "reset";
	};

	buildMods();
	fetch("weapons.json").then(function (r) { return r.json(); }).then(buildWeapons).catch(function (e) {
		document.getElementById("wsummary").textContent = "could not load weapons.json: " + e;
	});
	fetch("items.json").then(function (r) { return r.json(); }).then(buildItems).catch(function (e) {
		document.getElementById("isummary").textContent = "could not load items.json: " + e;
	});
})();
