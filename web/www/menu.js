/*
 * menu.js - the Soldier of Fortune browser client front-end.
 *
 * The game itself lives in app.js; this module owns the shell around it:
 * main menu, server browser, settings, controls, pause screen and scoreboard.
 * It stores settings in localStorage and drives the client through the
 * stable window.sofapp API, so the protocol code never has to know about UI.
 */
(function () {
	"use strict";

	const SETTINGS_KEY = "sof.browser.settings";
	const DEFAULTS = {
		name: "webclient",
		relay: (location.protocol === "file:" ? "127.0.0.1:8080" : location.host),
		master: (location.protocol === "file:" ? "http://127.0.0.1:8090" : location.protocol + "//" + location.hostname + ":8090"),
		server: "127.0.0.1",
		port: 29000,
		fov: 95,
		sensitivity: 0.35,
		moveSpeed: 200,
		volume: 0.6,
		drawDistance: 40000,
		fogStart: 800,
		fogEnd: 4000,
		thirdPerson: false,
		showDebug: false,
		lastServer: null
	};

	function loadSettings() {
		try {
			const raw = localStorage.getItem(SETTINGS_KEY);
			const saved = raw ? JSON.parse(raw) : {};
			return Object.assign({}, DEFAULTS, saved || {});
		} catch (e) { return Object.assign({}, DEFAULTS); }
	}
	let settings = loadSettings();
	function saveSettings() {
		try { localStorage.setItem(SETTINGS_KEY, JSON.stringify(settings)); } catch (e) { }
	}
	function applySettings() {
		if (!window.sofapp) return;
		window.sofapp.setSetting("fov", settings.fov);
		window.sofapp.setSetting("sensitivity", settings.sensitivity);
		window.sofapp.setSetting("moveSpeed", settings.moveSpeed);
		window.sofapp.setSetting("volume", settings.volume);
		window.sofapp.setSetting("drawDistance", settings.drawDistance);
		window.sofapp.setSetting("fogStart", settings.fogStart);
		window.sofapp.setSetting("fogEnd", settings.fogEnd);
		/* the engine's fog cvars are unset in the shipped build; these are the
		 * city-map colours from the level's sky/ambience */
		if (window.sofFog) window.sofFog.set(settings.fogStart, settings.fogEnd, 0.06, 0.08, 0.10);
		window.sofapp.setSetting("thirdPerson", settings.thirdPerson);
		window.sofapp.setSetting("showDebug", settings.showDebug);
		window.sofapp.setSetting("master", settings.master);
		window.MASTER_URL = settings.master;
	}

	/* ---------------------------------------------------------------- DOM */
	const root = document.createElement("div");
	root.id = "sof-menu";
	root.innerHTML = [
		'<div class="sof-shell">',
		'  <div class="sof-head"><h1>Soldier of Fortune</h1>',
		'    <span class="sub">BROWSER CLIENT &middot; MULTIPLAYER</span></div>',
		'  <div class="sof-body">',
		'    <div class="sof-screen active" data-screen="main">',
		'      <div class="sof-menu-list">',
		'        <button class="sof-btn primary" data-action="quick">DEPLOY / QUICK JOIN</button>',
		'        <button class="sof-btn" data-action="servers">SERVER BROWSER</button>',
		'        <button class="sof-btn" data-action="settings">SETTINGS</button>',
		'        <button class="sof-btn" data-action="controls">CONTROLS</button>',
		'        <button class="sof-btn" data-action="content">CONTENT &amp; MODS</button>',
		'      </div>',
		'      <div class="sof-status" id="sof-main-status"></div>',
		'    </div>',
		'    <div class="sof-screen" data-screen="pause">',
		'      <div class="sof-menu-list">',
		'        <button class="sof-btn primary" data-action="resume">RESUME</button>',
		'        <button class="sof-btn" data-action="settings">SETTINGS</button>',
		'        <button class="sof-btn" data-action="servers">SERVER BROWSER</button>',
		'        <button class="sof-btn danger" data-action="disconnect">DISCONNECT</button>',
		'      </div>',
		'      <div class="sof-status" id="sof-pause-status"></div>',
		'    </div>',
		'    <div class="sof-screen" data-screen="servers">',
		'      <div class="sof-row"><label>MASTER URL</label><input id="sof-master" type="text"></div>',
		'      <div class="sof-row"><label>MANUAL SERVER</label>',
		'        <input id="sof-manual-host" type="text" placeholder="127.0.0.1">',
		'        <input id="sof-manual-port" type="number" placeholder="29000" style="max-width:110px">',
		'        <button class="sof-btn small" data-action="manual-join">JOIN</button></div>',
		'      <div class="sof-actions"><button class="sof-btn small primary" data-action="join-selected">JOIN SELECTED</button>',
		'        <button class="sof-btn small" data-action="refresh">REFRESH LIST</button>',
		'        <button class="sof-btn small" data-action="main">BACK</button></div>',
		'      <div class="sof-list-wrap"><table class="sof-table"><thead><tr>',
		'        <th>HOST</th><th>NAME</th><th>MAP</th><th>PLAYERS</th></tr></thead>',
		'        <tbody id="sof-server-rows"></tbody></table></div>',
		'    </div>',
		'    <div class="sof-screen" data-screen="settings">',
		'      <div class="sof-grid">',
		'        <div>',
		'          <div class="sof-row"><label>PLAYER NAME</label><input id="set-name" type="text"></div>',
		'          <div class="sof-row"><label>RELAY</label><input id="set-relay" type="text"></div>',
		'          <div class="sof-row"><label>MASTER URL</label><input id="set-master" type="text"></div>',
		'          <div class="sof-row"><label>DEFAULT SERVER</label><input id="set-server" type="text"></div>',
		'          <div class="sof-row"><label>PORT</label><input id="set-port" type="number"></div>',
		'        </div>',
		'        <div>',
		'          <div class="sof-row"><label>FIELD OF VIEW</label><input id="set-fov" type="number"></div>',
		'          <div class="sof-row"><label>SENSITIVITY</label><input id="set-sensitivity" type="number" step="0.05"></div>',
		'          <div class="sof-row"><label>MOVE SPEED</label><input id="set-moveSpeed" type="number"></div>',
		'          <div class="sof-row"><label>VOLUME</label><input id="set-volume" type="number" step="0.1" min="0" max="1"></div>',
		'          <div class="sof-row"><label>DRAW DISTANCE</label><input id="set-drawDistance" type="number"></div>',
		'          <div class="sof-row"><label>FOG START</label><input id="set-fogStart" type="number"></div>',
		'          <div class="sof-row"><label>FOG END</label><input id="set-fogEnd" type="number"></div>',
		'          <div class="sof-row"><label>THIRD PERSON</label><input id="set-thirdPerson" type="checkbox"></div>',
		'          <div class="sof-row"><label>DEBUG OVERLAY</label><input id="set-showDebug" type="checkbox"></div>',
		'        </div>',
		'      </div>',
		'      <div class="sof-actions"><button class="sof-btn small primary" data-action="save-settings">SAVE &amp; APPLY</button>',
		'        <button class="sof-btn small" data-action="reset-settings">RESET DEFAULTS</button>',
		'        <button class="sof-btn small" data-action="main">BACK</button></div>',
		'    </div>',
		'    <div class="sof-screen" data-screen="controls">',
		'      <div class="sof-grid"><div>',
		'        <p><span class="sof-kbd">W A S D</span> &nbsp; move / strafe</p>',
		'        <p><span class="sof-kbd">MOUSE</span> &nbsp; look around</p>',
		'        <p><span class="sof-kbd">SHIFT</span> &nbsp; sprint</p>',
		'        <p><span class="sof-kbd">LEFT CLICK</span> &nbsp; fire</p>',
		'        <p><span class="sof-kbd">RIGHT CLICK</span> &nbsp; alternate fire</p>',
		'      </div><div>',
		'        <p><span class="sof-kbd">E</span> &nbsp; use / pick up</p>',
		'        <p><span class="sof-kbd">SPACE</span> &nbsp; jump</p>',
		'        <p><span class="sof-kbd">V</span> &nbsp; third person camera</p>',
		'        <p><span class="sof-kbd">TAB</span> &nbsp; scoreboard</p>',
		'        <p><span class="sof-kbd">T / Y</span> &nbsp; chat / team chat</p>',
		'        <p><span class="sof-kbd">`</span> &nbsp; console &nbsp;&nbsp; <span class="sof-kbd">ESC</span> &nbsp; menu</p>',
		'      </div></div>',
		'      <div class="sof-note">Weapon selection: open the console with <code>`</code> and type ',
		'        <code>weaponselect 3</code>. Any other console text is sent to the server.</div>',
		'      <div class="sof-actions"><button class="sof-btn small" data-action="main">BACK</button></div>',
		'    </div>',
		'  </div>',
		'</div>'
	].join("\n");
	document.body.appendChild(root);

	const scoreboard = document.createElement("div");
	scoreboard.id = "sof-scoreboard";
	scoreboard.innerHTML = '<h2>SCOREBOARD</h2><table class="sof-table"><thead><tr>' +
		'<th>#</th><th>PLAYER</th><th>TEAM</th><th>SCORE</th><th>PING</th></tr></thead>' +
		'<tbody id="sof-score-rows"></tbody></table>';
	document.body.appendChild(scoreboard);

	/* chat: T = all, Y = team.  The text goes through the game module's own
	 * say / say_team string commands, so other real SoF clients see it. */
	const chat = document.createElement("div");
	chat.id = "sof-chat";
	chat.innerHTML = '<span class="label" id="sof-chat-label">SAY:</span>' +
		'<input id="sof-chat-input" type="text" maxlength="180" autocomplete="off" spellcheck="false">';
	document.body.appendChild(chat);
	const chatLog = document.createElement("div");
	chatLog.id = "sof-chat-log";
	document.body.appendChild(chatLog);
	let chatTeam = false;
	function openChat(team) {
		if (!window.sofapp || isVisible()) return;
		chatTeam = !!team;
		chat.classList.add("visible");
		$("sof-chat-label").textContent = chatTeam ? "TEAM:" : "SAY:";
		const input = $("sof-chat-input");
		input.value = "";
		input.focus();
	}
	function closeChat() { chat.classList.remove("visible"); }
	function sendChat() {
		const input = $("sof-chat-input");
		const text = input.value.trim();
		closeChat();
		if (!text || !window.sofapp) return;
		window.sofapp.send((chatTeam ? "say_team " : "say ") + text);
		const line = document.createElement("div");
		line.textContent = (chatTeam ? "[team] " : "") + (window.sofmenu.settings.name || "you") + ": " + text;
		chatLog.appendChild(line);
		while (chatLog.childNodes.length > 8) chatLog.removeChild(chatLog.firstChild);
	}
	$("sof-chat-input").addEventListener("keydown", function (e) {
		e.stopPropagation();
		if (e.key === "Enter") { e.preventDefault(); sendChat(); }
		else if (e.key === "Escape") { e.preventDefault(); closeChat(); }
	});
	document.addEventListener("keydown", function (e) {
		if (isVisible() || chat.classList.contains("visible")) return;
		if (e.target && e.target.closest && e.target.closest("#console")) return;
		if (e.code === "KeyT") { e.preventDefault(); openChat(false); }
		else if (e.code === "KeyY") { e.preventDefault(); openChat(true); }
	});

	function $(id) { return document.getElementById(id); }
	function showScreen(name) {
		root.querySelectorAll(".sof-screen").forEach(function (s) {
			s.classList.toggle("active", s.getAttribute("data-screen") === name);
		});
	}
	function setVisible(v) {
		root.classList.toggle("visible", !!v);
		if (v && document.exitPointerLock) { try { document.exitPointerLock(); } catch (e) { } }
		updateStatus();
	}
	function isVisible() { return root.classList.contains("visible"); }

	function statusText() {
		if (!window.sofapp) return "client not ready";
		const s = window.sofapp.getState();
		const label = s.spawned ? "IN GAME" : (s.status || "offline").toUpperCase();
		return label + " &middot; " + s.server + " &middot; " + s.map +
			" &middot; frames " + s.frames + " &middot; " + s.name;
	}
	function updateStatus() {
		const html = statusText();
		const a = $("sof-main-status"), b = $("sof-pause-status");
		if (a) a.innerHTML = html;
		if (b) b.innerHTML = html;
	}

	/* ------------------------------------------------------------ servers */
	let selectedServer = null;
	function fillSettingsForm() {
		["name", "relay", "master", "server", "port", "fov", "sensitivity",
			"moveSpeed", "volume", "drawDistance", "fogStart", "fogEnd"].forEach(function (k) {
			const el = $("set-" + k);
			if (el) el.value = settings[k];
		});
		["thirdPerson", "showDebug"].forEach(function (k) {
			const el = $("set-" + k);
			if (el) el.checked = !!settings[k];
		});
		const m = $("sof-master");
		if (m) m.value = settings.master;
		const h = $("sof-manual-host"), p = $("sof-manual-port");
		if (h && !h.value) h.value = settings.server;
		if (p && !p.value) p.value = settings.port;
	}
	function readSettingsForm() {
		["name", "relay", "master", "server", "port", "fov", "sensitivity",
			"moveSpeed", "volume", "drawDistance", "fogStart", "fogEnd"].forEach(function (k) {
			const el = $("set-" + k);
			if (!el) return;
			settings[k] = (k === "port" || k === "fov" || k === "sensitivity" ||
				k === "moveSpeed" || k === "volume" || k === "drawDistance" ||
				k === "fogStart" || k === "fogEnd")
				? parseFloat(el.value) : el.value;
		});
		["thirdPerson", "showDebug"].forEach(function (k) {
			const el = $("set-" + k);
			if (el) settings[k] = !!el.checked;
		});
		if (!settings.name) settings.name = DEFAULTS.name;
	}
	function renderServers(list) {
		const body = $("sof-server-rows");
		if (!body) return;
		body.innerHTML = "";
		if (!list || !list.length) {
			body.innerHTML = '<tr><td class="empty" colspan="4">no servers listed - start the master (web/gsmaster.js) or join manually</td></tr>';
			return;
		}
		if (!selectedServer && list.length) selectedServer = list[0];
		list.forEach(function (s, i) {
			const tr = document.createElement("tr");
			if (selectedServer && selectedServer.ip === s.ip && selectedServer.port === s.port) tr.className = "selected";
			[
				s.ip + ":" + s.port,
				s.hostname || (s.ip + ":" + s.port),
				s.mapname || "-",
				((s.players || 0) + "/" + (s.maxplayers || 16))
			].forEach(function (v) {
				const td = document.createElement("td");
				td.textContent = v;
				tr.appendChild(td);
			});
			tr.addEventListener("click", function () { selectedServer = s; renderServers(list); });
			tr.addEventListener("dblclick", function () { join(s.ip, s.port); });
			body.appendChild(tr);
		});
	}
	function refreshServers() {
		const master = ($("sof-master") && $("sof-master").value) || settings.master;
		settings.master = master;
		window.MASTER_URL = master;
		saveSettings();
		if (!window.sofapp) return;
		window.sofapp.refreshServers();
		/* the list arrives asynchronously; poll briefly so a manual refresh
		 * paints as soon as the master answers instead of waiting 5 seconds */
		let tries = 0;
		const poll = setInterval(function () {
			const list = window.sofapp.getServers();
			renderServers(list);
			if (list.length || ++tries > 20) clearInterval(poll);
		}, 150);
	}

	function join(host, port) {
		if (!window.sofapp) return;
		host = host || settings.server;
		port = parseInt(port || settings.port, 10);
		settings.server = host;
		settings.port = port;
		settings.lastServer = { host: host, port: port, relay: settings.relay, name: settings.name };
		saveSettings();
		applySettings();
		window.sofapp.connect(host, port, settings.relay, settings.name);
		showScreen("pause");
		setVisible(false);
	}

	/* ---------------------------------------------------------- scoreboard */
	let scoreTimer = null;
	function showScoreboard(on) {
		scoreboard.classList.toggle("visible", !!on);
		if (on) {
			updateScoreboard();
			scoreTimer = setInterval(updateScoreboard, 300);
		} else if (scoreTimer) {
			clearInterval(scoreTimer); scoreTimer = null;
		}
	}
	function updateScoreboard() {
		if (!window.sofapp) return;
		const s = window.sofapp.getState();
		const body = $("sof-score-rows");
		if (!body) return;
		body.innerHTML = "";
		s.entities.forEach(function (e) {
			const tr = document.createElement("tr");
			[e.number, e.name, e.team, e.score, e.ping].forEach(function (v) {
				const td = document.createElement("td"); td.textContent = v; tr.appendChild(td);
			});
			body.appendChild(tr);
		});
	}

	/* -------------------------------------------------------------- actions */
	root.addEventListener("click", function (ev) {
		const btn = ev.target.closest("[data-action]");
		if (!btn) return;
		const action = btn.getAttribute("data-action");
		if (action === "quick") {
			const last = settings.lastServer || { host: settings.server, port: settings.port };
			join(last.host, last.port);
		} else if (action === "servers") { fillSettingsForm(); showScreen("servers"); refreshServers(); }
		else if (action === "settings") { fillSettingsForm(); showScreen("settings"); }
		else if (action === "controls") showScreen("controls");
		else if (action === "main") { showScreen("main"); fillSettingsForm(); }
		else if (action === "resume") setVisible(false);
		else if (action === "disconnect") {
			if (window.sofapp) window.sofapp.disconnect();
			showScreen("main"); setVisible(true);
		} else if (action === "refresh") refreshServers();
		else if (action === "join-selected") {
			if (selectedServer) join(selectedServer.ip, selectedServer.port);
		} else if (action === "manual-join") {
			join($("sof-manual-host").value, $("sof-manual-port").value);
		} else if (action === "save-settings") {
			readSettingsForm(); saveSettings(); applySettings(); fillSettingsForm();
			showScreen("main");
		} else if (action === "reset-settings") {
			settings = Object.assign({}, DEFAULTS); saveSettings(); applySettings(); fillSettingsForm();
		} else if (action === "content") {
			window.location.href = "content.html";
		}
	});

	window.sofmenu = {
		get settings() { return settings; },
		open: function () { fillSettingsForm(); showScreen("main"); setVisible(true); },
		close: function () { setVisible(false); },
		togglePause: function () {
			if (!isVisible()) { fillSettingsForm(); showScreen("pause"); setVisible(true); }
			else setVisible(false);
		},
		showScoreboard: showScoreboard,
		onDisconnect: function () { updateStatus(); },
		refreshServers: refreshServers
	};

	/* start at the menu; a deep link with autoplay=1 skips it */
	applySettings();
	fillSettingsForm();
	if (new URLSearchParams(location.search).get("autoplay") !== "1") setVisible(true);
	setInterval(updateStatus, 1000);
	setInterval(function () { if ($("sof-server-rows") && isVisible()) {
		const active = document.querySelector(".sof-screen.active");
		if (active && active.getAttribute("data-screen") === "servers") {
			renderServers(window.sofapp ? window.sofapp.getServers() : []);
		}
	} }, 5000);
})();
