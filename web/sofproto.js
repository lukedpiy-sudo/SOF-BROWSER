/*
 * sofproto.js - the SoF client protocol, transport agnostic.
 *
 * The same code drives the Node UDP client (sofclient.js) and the browser
 * client (www/app.js over a WebSocket relay), so the protocol only exists
 * once.
 *
 * Protocol summary (see PROTOCOL.md for the full detail):
 *
 *   out of band:  0xFFFFFFFF + "getchallenge n"   ->  0xFFFFFFFF + "challenge m"
 *                 0xFFFFFFFF + "connect 33 <seed> <m> <ts> 3.14 \"<userinfo>\"\n"
 *                 -> 0xFFFFFFFF + "client_connect"
 *
 *   in band:      [netchan word 1 u32 LE][netchan word 2 u32 LE]
 *                 [seed u16 LE][u8 type][payload]
 *
 *                 netchan word 1 = the outgoing sequence | (fragment flag << 31)
 *                 netchan word 2 = the acknowledged sequence | (reliable toggle << 31)
 *
 *                 type 4 = a string command ("new", "configstrings N V",
 *                         "baselines N V", "ghoulstrings N V", "begin N")
 *                 type 2 = a usercmd ([checksum][u32 seq][the bit packed cmd])
 *
 * The seed is the connect's field 2 and must be < 65536.
 */
"use strict";

const { checksum } = require("./sofmd4.js");
const { encodeCmd, encodeCmds } = require("./cmdenc.js");
const { parseFrame, describeEntity } = require("./snapshot.js");

/* The usercmd button bits, from the engine's own builder (SoF.exe 0x20005240)
 * and the frame assembler (0x200060C0).  The movement is NOT a bit: it goes
 * into the three i16 fields at +0x0A/+0x0C/+0x0E.
 *   0x01 attack (MOUSE1 / LCTRL)   0x02 use (SPACE)      0x04 alt attack
 *   0x08 +weaponExtra1             0x10 +weaponExtra2    0x20 run/sprint
 *   0x40 lean                      0x80 engine internal
 * The game module (gamex86.dll ClientEndFrame) tests 0x01 for the fire,
 * 0x02 for the item pickup and 0x20 to double the movement. */
const BTN = { ATTACK: 0x01, USE: 0x02, ALT: 0x04, EXTRA1: 0x08, EXTRA2: 0x10, RUN: 0x20, LEAN: 0x40 };

/* One full turn is 65536 binary angle units (the engine's constant at
 * 0x201114A0 is 182.0444f = 65536/360 and the game module converts back with
 * 0.005493164 = 360/65536).  The angles are sent as a 12 bit two's complement
 * field of the value divided by 16, so the resolution is 16 units =
 * 0.088 deg.
 *
 * The 12 bit field is SIGNED on the wire (the engine's reader sign extends
 * bit 11), so the 16 bit value has to be a SIGNED binary angle in
 * -32768..32767, i.e. the angle has to be normalised to -180..+180 degrees.
 * An unsigned angle above 180 degrees is read back as a completely
 * different angle (270 degrees becomes -90), and the game module then
 * misbehaves badly enough that it stops writing the player state. */
const DEG_TO_BIN = 65536 / 360;
function toBinaryAngle(deg) {
	let v = Math.round(deg * DEG_TO_BIN);
	/* normalise to (-180, +180] */
	v = ((v + 0x8000) & 0xffff) - 0x8000;
	return v & 0xffff;
}

/* the server clamps the movement fields (the decoder at 0x20005AA0) */
function clampMove(v, lim) {
	return v < -lim ? -lim : (v > lim ? lim : v);
}

const DEFAULT_USERINFO =
	"\\name\\webclient\\spectator\\0\\cl_violence\\63\\fov\\95\\rate\\3000\\team_red_blue\\0";

/* a latin1 decode that works with a Buffer, a Uint8Array or the browser shim */
function latin1(buf, from, to) {
	let s = "";
	const end = to === undefined ? buf.length : to;
	for (let i = from || 0; i < end; i++) s += String.fromCharCode(buf[i]);
	return s;
}

function createClient(opts) {
	const o = opts || {};
	const send = o.send || function () { };
	const onEvent = o.onEvent || function () { };
	const userinfo = o.userinfo || DEFAULT_USERINFO;
	const seedDefault = (o.seed === undefined ? 3 : o.seed) & 0xffff;

	let seq = 1;            // our outgoing netchan sequence
	let srvSeq = 0;         // the server's last sequence (we acknowledge it)
	let srvReliableToggle = 0; // server's reliable toggle bit (echoed in our word 2)
	let relToggle = true;   // the reliable message toggle bit
	let fragFlag = (o.fragFlag === undefined ? true : o.fragFlag);
	let keepAlive = null;   // the keep alive timer (see startKeepAlive)
	let beginSent = false;
	let baselinesSent = false;
	let seed = seedDefault; // echoed in every frame
	let msec = 0;
	let prevCmd = Buffer.alloc(24);
	let curCmd = Buffer.alloc(24);
	let prevPitch = 0;
	let lastFrame = null;
	let spawnDone = false;
	const configstrings = {};
	let connected = false;
	let entities = new Map();
	let serverTime = 0;
	let frameNumber = 0;
	let userId = -1;
	let playerState = null;
	const view = { pitch: 0, yaw: 0, roll: 0, buttons: 0, forwardmove: 0, sidemove: 0, upmove: 0, weapon: 0 };
	let moveSpeed = 200;
	let lookSpeed = 0.25;
	const keys = Object.create(null);
	const ZERO_CMD = Buffer.alloc(24);
	const cmdRing = [];
	const ghoulPackets = [];
	const soundPackets = [];
	/* fragment reassembly buffer */
	const fragBuf = new Map(); // unused: kept for reference
	var fragPending = Buffer.alloc(0);
	let myToggle = 0; /* the client's own reliable toggle: it flips with every reliable message we send and stays put in unreliable packets */
	/* the fragment flag marks "more follows": fragments accumulate until a
	 * packet arrives WITHOUT the flag, which carries the last piece. */

	/* ------------------------------------------------------------ output */

	function oob(text) {
		const body = Buffer.from(text, "latin1");
		const pkt = Buffer.concat([Buffer.from([0xff, 0xff, 0xff, 0xff]), body]);
		send(pkt);
		onEvent("oob", text);
	}

	/* The netchan header is two 32 bit words:
	 *   word 1 = the outgoing sequence | (fragment flag << 31)
	 *   word 2 = the acknowledged sequence | (reliable toggle << 31)
	 * Every client message is a reliable message, so the toggle in word 2
	 * has to alternate with every packet we send - a constant toggle makes
	 * the server's reliable message queue stall. */
	function netchanHdr(flag) {
		const f = (flag === undefined ? fragFlag : flag);
		const h = Buffer.alloc(4);
		h.writeUInt32LE(((seq++) | (f ? 0x80000000 : 0)) >>> 0, 0);
		return h;
	}
	function reliableHdr() {
		const h = Buffer.alloc(4);
		h.writeUInt32LE(((srvSeq + (o.ackPlusOne ? 1 : 0)) | ((myToggle = (myToggle + 1) & 1) ? 0x80000000 : 0)) >>> 0, 0);
		if (relToggle) console.log("[NET] Sending reliableHdr with relToggle=1 ack=" + (srvSeq + (o.ackPlusOne ? 1 : 0)));
		relToggle = !relToggle;
		return h;
	}

/* The same header but with the server's reliable toggle bit echoed back:
 * the stock client sends user commands as unreliable data, but still
 * acknowledges the server's reliable messages by echoing the server's
 * reliable toggle bit in word 2. */
function unrelHdr() {
	const h = Buffer.alloc(4);
	const ack = (srvSeq + (o.ackPlusOne ? 1 : 0)) >>> 0;
	h.writeUInt32LE(((ack & 0x7fffffff) | (myToggle << 31)) >>> 0, 0);
	if (srvReliableToggle) console.log("[NET] Sending unrelHdr with srvReliableToggle=" + srvReliableToggle + " ack=" + ack);
	return h;
}
	function seedHdr() {
		const h = Buffer.alloc(2);
		h.writeUInt16LE(seed & 0xffff, 0);
		return h;
	}

	function sendStringCmd(text) {
		const t = Buffer.from(text, "latin1");
		const body = Buffer.alloc(3 + t.length + 1);
		body.writeUInt16LE(seed & 0xffff, 0);
		body.writeUInt8(4, 2);
		t.copy(body, 3);
		body.writeUInt8(0, 3 + t.length);
		/* String commands in response to server's reliable messages must
		 * acknowledge the server's reliable toggle. Use unrelHdr() which
		 * echoes srvReliableToggle in word 2. */
		send(Buffer.concat([netchanHdr(), reliableHdr(), body]));
		onEvent("cmd", text);
	}

	/* The type-3 message is the USERINFO.  The engine stores it and forwards it
	 * to the game module's ClientUserinfoChanged, which is where the "spectator",
	 * "bestweap", "name", "teamname" and "skin" keys are parsed. */
	function sendUserinfo(info) {
		const t = Buffer.from(info, "latin1");
		const body = Buffer.alloc(3 + t.length + 1);
		body.writeUInt16LE(seed & 0xffff, 0);
		body.writeUInt8(3, 2);
		t.copy(body, 3);
		body.writeUInt8(0, 3 + t.length);
		send(Buffer.concat([netchanHdr(), reliableHdr(), body]));
		onEvent("userinfo", info);
	}

	/* The engine hands the userinfo to the game module whenever it changes.
	 * A client that only sends it once can leave the module with a stale
	 * player, so the userinfo can be refreshed periodically. */
	function startUserinfoRefresh() {
		const every = o.userinfoInterval || 0;
		if (!every) return;
		setInterval(() => {
			try { sendUserinfo(userinfo); } catch (e) { /* not connected */ }
		}, every);
	}

	function sendUserCmd() {
		/* The msec byte is the number of MILLISECONDS elapsed since the
		 * previous command - not a cumulative counter.
		 *
		 * The engine keeps a per-client msec budget (cl+0x220) and DROPS a
		 * command whose msec makes that budget go negative ("commandMsec
		 * underflow" in SV_ExecuteClientMessage, SoF.exe 0x200635F0), and
		 * the game module uses msec/10 as the number of 10 ms frames it
		 * simulates for that command.
		 *
		 * The server decodes THREE commands out of every movement message
		 * and calls the game module once for each of them, so the three
		 * msec values of one message have to add up to the real time that
		 * passed between two messages.  The server runs at sv_fps (default 10,
		 * 100ms frames).  We send one message per server frame with 3 commands
		 * of ~33ms each = ~99ms total. */
		msec = 33;
		curCmd = Buffer.alloc(24);
		curCmd[0] = msec;
		curCmd[1] = view.buttons;
		/* CONFIRMED LAYOUT (server decoder SoF.exe 0x20005AA0, verified live by
		 * web/moveprobe5.js: the movement direction rotates with the yaw):
		 *   +0x00 u8  msec
		 *   +0x01 u8  buttons      (bit 0x20 = run, doubles the movement shorts
		 *                            in ClientThink 0x500F53A0 line 138154)
		 *   +0x02 u8  flags2
		 *   +0x03 u8  flags3
		 *   +0x04 u16 pitch        (12 bit wire field, << 4)
		 *   +0x06 u16 yaw          (12 bit wire field, << 4)
		 *   +0x08 u16 roll         (12 bit wire field, << 4)
		 *   +0x0A i16 forwardmove  (10 bit wire field, value + 0x1fe)
		 *   +0x0C i16 sidemove
		 *   +0x0E i16 upmove
		 *   +0x10 f32 extra0
		 *   +0x14 f32 extra1
		 * So the encoder writes angles at 4/6/8 and movement at 0x0A/0x0C/0x0E.
		 * SoF's yaw convention measured from the wire: forward = (sin yaw,
		 * -cos yaw, sin pitch), i.e. yaw 0 points along -Y. */
		curCmd.writeUInt16LE(toBinaryAngle(view.pitch), 4);
		curCmd.writeUInt16LE(toBinaryAngle(view.yaw), 6);
		curCmd.writeUInt16LE(toBinaryAngle(view.roll), 8);
		curCmd.writeInt16LE(clampMove(view.forwardmove, 200), 0x0a);
		curCmd.writeInt16LE(clampMove(view.sidemove, 160), 0x0c);
		curCmd.writeInt16LE(clampMove(view.upmove, 200), 0x0e);
		if (o.cmdPatch) o.cmdPatch(curCmd);
		/* The server decodes THREE commands out of every movement message
		 * (SV_ReadClientMessage, SoF.exe 0x200636C0) with the baseline chain
		 * [zero, cmd1, cmd2]:
		 *
		 *   cmd1 is decoded against a ZERO baseline,
		 *   cmd2 against cmd1,
		 *   cmd3 against cmd2.
		 *
		 * The stock client (0x200060C0) therefore writes three commands per
		 * message: the three most recent ones, the oldest encoded against a
		 * zero baseline and each following one against its predecessor.
		 * The server then calls the game module once per decoded command, so
		 * the button's rising edge (which the game module derives from the
		 * previous command) is only seen when the three commands are there.
		 *
		 * The ring holds the three most recent commands, oldest first. */
		if (cmdRing.length === 0) {
			/* the first three commands are all the same, so the chain
			 * [zero, cmd, cmd] resolves consistently */
			cmdRing.push(Buffer.from(curCmd), Buffer.from(curCmd), Buffer.from(curCmd));
		} else {
			cmdRing.push(Buffer.from(curCmd));
			if (cmdRing.length > 3) cmdRing.shift();
		}
		while (cmdRing.length < 3) cmdRing.unshift(Buffer.alloc(24));
		/* a hook to probe the server's command ordering */
		if (o.cmdPatchRing) {
			for (let i = 0; i < cmdRing.length; i++) o.cmdPatchRing(cmdRing[i], i);
		}
		const body = encodeCmds([
			[cmdRing[0], ZERO_CMD],
			[cmdRing[1], cmdRing[0]],
			[cmdRing[2], cmdRing[1]]
		]);
		prevCmd = curCmd;
		const mode = o.moveMode || "rel";
		const mySeq = seq;
		const h = netchanHdr(mode.indexOf("unrel") < 0);
		const inner = Buffer.alloc(4 + body.length);
		/* The sequence the command carries.  The engine compares it with the
		 * sequence of the message in its "fakelag" check (SV_UserMove:
		 * `outgoing_sequence - lastcmd.netchan.outgoing_sequence > 2`), so
		 * the command has to carry the sequence of the message it is sent
		 * in.  With the sequence one too high the difference underflows into
		 * a huge unsigned value, the fakelag check is always true, the
		 * server stops executing the commands and the game module stops
		 * writing the player state - the world freezes a few seconds after
		 * the spawn.  Measured: 6 s of player state with the wrong
		 * sequence, 54 s with the right one. */
		const seqMode = o.seqMode || "same";
		const cmdSeq = (seqMode === "plus1" ? mySeq + 1 : (seqMode === "minus1" ? mySeq - 1 : mySeq)) & 0xffff;
		inner.writeUInt32LE(cmdSeq >>> 0, 0);
		body.copy(inner, 4);
		/* The checksum key is the netchan field the engine uses as the command
		 * ring index, i.e. the outgoing sequence of THIS message (the value in
		 * word 1 of the header), verified against four live vectors: seq 0, 1,
		 * 7 and 3.  The checksum covers the u32 sequence plus the payload. */
		const ckKey = o.ckKey === "plus1" ? (mySeq + 1) & 0xffff
			: (o.ckKey === "minus1" ? (mySeq - 1) & 0xffff : cmdSeq);
		const ck = checksum(inner, ckKey >>> 0);
		/* The user command message.
		 *
		 * `moveMode` selects how the message is framed:
		 *   "rel"    : the reliable toggle alternates (the message is a new
		 *              reliable message - what the string commands use)
		 *   "unrel"  : the reliable toggle bit stays clear, so the message
		 *              is unreliable data like the stock client's user
		 *              command.  Sending every user command as a reliable
		 *              message fills the server's reliable queue, and the
		 *              server drops the client when it overflows.
		 *   "nock"   : no checksum byte
		 *   "unrel_nock": both
		 */
		const rel = mode.indexOf("unrel") >= 0 ? unrelHdr() : reliableHdr();
		/* The type 2 message layout.  The engine's dispatch table
		 * (0x20063A64) is entered with a command char that can be preceded by
		 * a prefix of 0, 2, 4, 8 or 10 bytes, so the user command message
		 * must use one of those prefix lengths. */
		const fmt = o.moveFmt || "ck_seq";
		/* The server verifies the checksum over [u32 sequence][payload] with
		 * the key = this message's outgoing sequence, so the sequence written
		 * into the head has to be the same value that was inside `inner`. */
		let head;
		switch (fmt) {
			case "seq": head = Buffer.from([2]); break;                    // 0
			case "u32seq": head = Buffer.alloc(5); head[0] = 2;           // 4
				head.writeUInt32LE(cmdSeq >>> 0, 1); break;
			case "len": head = Buffer.alloc(2); head[0] = 2;              // 2
				head[1] = body.length; break;
			case "u32seq_len": head = Buffer.alloc(6); head[0] = 2;      // 5
				head.writeUInt32LE(cmdSeq >>> 0, 1); head[5] = body.length; break;
			case "ck_seq": head = Buffer.alloc(6); head[0] = 2;          // 5
				head[1] = ck; head.writeUInt32LE(cmdSeq >>> 0, 2); break;
			case "ck_seq_len": head = Buffer.alloc(7); head[0] = 2;      // 6
				head[1] = ck; head.writeUInt32LE(cmdSeq >>> 0, 2); head[6] = body.length; break;
			case "len_seq": head = Buffer.alloc(7); head[0] = 2;          // 6
				head[1] = body.length; head.writeUInt32LE(cmdSeq >>> 0, 2); break;
			case "u32seq_u32len": head = Buffer.alloc(9); head[0] = 2;   // 8
				head.writeUInt32LE(cmdSeq >>> 0, 1); head.writeUInt32LE(body.length, 5); break;
			case "u32seq_u32len_raw": head = Buffer.alloc(9); head[0] = 2;
				head.writeUInt32LE(cmdSeq >>> 0, 1); head.writeUInt32LE(body.length, 5); break;
			case "raw": head = Buffer.from([2]); break;
			default: head = Buffer.from([2, ck]);
		}
		const payload = Buffer.concat([head, body]);
		send(Buffer.concat([h, rel, seedHdr(), payload]));
	}

	/* ------------------------------------------------------------- input */

	function onDatagram(msg) {
		if (msg.length >= 4 && msg[0] === 0xff && msg[1] === 0xff) {
			const t = latin1(msg, 4);
			onEvent("oob", t);
			if (t.startsWith("challenge ")) {
				const challenge = t.slice(10).trim();
				const now = Math.floor(Date.now() / 1000);
				oob("connect 33 " + seed + " " + challenge + " " + now +
					' 3.14 "' + userinfo + '"\n');
			} else if (t.startsWith("client_connect")) {
				connected = true;
				onEvent("connected");
				sendStringCmd("new");
				startKeepAlive();
				startUserinfoRefresh();
			}
			return;
		}
		if (msg.length < 8) {
			console.log("[NET] RECV SHORT: len=" + msg.length);
			return;
		}
		const word1 = msg.readUInt32LE(0);
		const word2 = msg.readUInt32LE(4);
		const srvOutSeq = word1 & 0x7fffffff;
		const isFragment = (word1 & 0x80000000) !== 0;
		srvSeq = srvOutSeq;
		srvReliableToggle = (word2 >> 31) & 1;

		console.log("[NET] RECV: len=" + msg.length + " srvSeq=" + srvOutSeq + " frag=" + isFragment + " srvRelToggle=" + srvReliableToggle + (msg.length > 8 ? " svc=" + msg[8].toString(16) : ""));

		/* the fragment bit on server packets marks a reliable-message carrier,
		 * not a message split - SoF keeps messages inside one datagram. Process
		 * every packet directly. */
		if (isFragment) { processPacket(msg); return; }
		if (fragPending.length) {
			const full = Buffer.concat([Buffer.from([0, 0, 0, 0, 0, 0, 0, 0]), fragPending, msg.slice(8)]);
			fragPending = Buffer.alloc(0);
			processPacket(full);
			return;
		}

		/* non-fragment packet - process directly */
		processPacket(msg);
	}

		/* process a complete (reassembled) packet */

	/* The server keeps its outgoing reliable message in a queue until the
	 * client acknowledges it, and the acknowledgement only advances when the
	 * client sends a packet.  A client that stays silent between the
	 * server's requests therefore deadlocks the gamestate handshake, so we
	 * send a packet every 50 ms from the moment we are connected. */
	function startKeepAlive() {
		if (keepAlive) return;
		/* The cadence matters: three commands of msec=33 per message add up to
		 * 99 ms, so one message per 100 ms is exactly one sv_fps frame.  A
		 * faster cadence makes the engine's per-client msec budget go negative
		 * (the "commandMsec underflow" drop in SV_ExecuteClientMessage).
		 * `keepAliveInterval` lets a probe pick its own cadence; 0 disables it
		 * so a probe can be the only sender. */
		const every = o.keepAliveInterval === undefined ? 50 : o.keepAliveInterval;
		if (!every) return;
		keepAlive = setInterval(() => {
			try { sendUserCmd(); } catch (e) { /* not connected yet */ }
		}, every);
	}

	function processPacket(msg) {
		if (msg.length < 8) return;
		const word1 = msg.readUInt32LE(0);
		const word2 = msg.readUInt32LE(4);
		const srvOutSeq = word1 & 0x7fffffff;
		srvSeq = srvOutSeq;
		srvReliableToggle = (word2 >> 31) & 1;

		/* svc 0x0f: a stream of configstring records.
		 *   [0x0f][u16 index][u16 value][data]
		 * value 0xffff means "a NUL terminated string follows", any other
		 * value is a numeric configstring (SoF sends the model/sound table
		 * index instead of the name, the client resolves it locally). */
		/* The service byte table (SoF.exe 0x2011E7A0, indexed by the service
		 * byte): 1 = svc_temp_entity, 10 = svc_sound, 15 = svc_configstring,
		 * 21 = svc_packetentities, 23 = svc_frame, 26 (0x1A) = svc_ghoulreliable
		 * and 27 = svc_ghoulunreliable.
		 *
		 * svc_ghoulreliable carries the GHOUL STRING TABLE - the table that
		 * names the Ghoul models and the sounds, and that the game module
		 * (gamex86.dll) decodes; the client only hands the packet to the
		 * module.  The entity state's +0x28 is an index into that table, so
		 * without it no entity can be named.  svc_sound carries the positional
		 * sound events.  Both payloads are captured raw here so that they can
		 * be decoded. */
		if (msg.length > 9 && (msg[8] === 0x01 || msg[8] === 0x04)) {
			/* svc_temp_entity (0x01) and svc_sound_info (0x04) */
			const body = Buffer.from(msg.slice(9));
			onEvent(msg[8] === 0x01 ? "temp" : "soundinfo", { svc: msg[8], body: body });
		}
		if (msg.length > 9 && (msg[8] === 0x1a || msg[8] === 0x1b || msg[8] === 0x0a)) {
			const body = Buffer.from(msg.slice(9));
			if (msg[8] === 0x1a || msg[8] === 0x1b) {
				ghoulPackets.push(body);
				if (ghoulPackets.length > 512) ghoulPackets.shift();
			} else {
				soundPackets.push(body);
				if (soundPackets.length > 256) soundPackets.shift();
			}
			onEvent("ghoul" === "x" ? "" : (msg[8] === 0x0a ? "sound" : "ghoul"), { svc: msg[8], body: body });
		}
		if (msg.length > 9 && msg[8] === 0x0f) {
			const cs = parseConfigStrings(msg, 8);
			for (const k of Object.keys(cs)) {
				if (configstrings[k] === undefined) configstrings[k] = cs[k];
			}
			onEvent("configstrings", cs);
			/* the "cmd ..." request can follow the records in the same
			 * packet, so fall through to the command scan */
		}
		if (msg.length > 9 && msg[8] === 0x1d) {
			/* svc_restart_predn (analysis/svc_1d.md): SoF's own svc name table at
			 * 0x2011E7A0 calls index 29 "svc_restart_predn".  The engine's handler
			 * (FUN_20012600) reads ONE bit-packed byte - the mode - and rebuilds the
			 * client prediction state; the client prints "Waiting for prediction
			 * resynch" while this disagrees with its own counter.  We do not run the
			 * engine's prediction module, so the only useful thing to do is to snap
			 * the local prediction to the authoritative player state. */
			onEvent("predresync", { svc: 0x1d, mode: msg[9] });
		}
		if (msg.length > 9 && msg[8] === 0x17) {
			try {
				const f = parseFrame(msg, 9, lastFrame);
				lastFrame = f;
				frameNumber = f.number;
				serverTime = f.time;
				playerState = f.playerState;
				entities = f.entities;
				onEvent("frame", { frame: f, entities: f.entities });
			} catch (e) { onEvent("frameError", e); }
			return;
		}

		function answer(text) {
			const d = o.answerDelay || 0;
			if (d) setTimeout(() => sendStringCmd(text), d);
			else sendStringCmd(text);
		}

		/* The server keeps its outgoing reliable message in a queue until the
		 * client acknowledges it, and the acknowledgement only advances when the
		 * client sends a packet.  A client that stays silent between the
		 * server's requests therefore deadlocks the gamestate handshake, so we
		 * send a packet every 50 ms from the moment we are connected. */

		/* The server drives the whole gamestate handshake:
		 *   "cmd configstrings <tok> <cursor>"  -> answer with the same
		 *   "cmd ghoulstrings <tok> <cursor>"   -> answer with the same
		 *   "cmd baselines <tok> <cursor>"      -> answer with the same
		 *   "precache <tok>"                    -> answer "precache <tok>"
		 *   "cmd begin <tok>"                   -> answer "begin <tok>"
		 * The server refuses every one of those once the client has
		 * spawned, so nothing may be sent out of order. */
		for (const cmd of findCommands(msg)) {
			let m = cmd.match(/^cmd\s+(configstrings|baselines|ghoulstrings)\s+(\S+)\s*(\S*)/);
			if (m) {
				const verb = m[1], a = m[2], b = m[3] || "0";
				onEvent("ask", verb + " " + a + " " + b);
				answer(verb + " " + a + " " + b);
				/* The gamestate chain is
				 *   configstrings -> ghoulstrings -> baselines -> precache
				 *   -> begin
				 * and the CLIENT drives the last three steps: the server only
				 * asks for the baselines once the client has asked for them,
				 * and it only asks for the begin once the precache step is
				 * done.  A client that sends "begin" too early leaves the
				 * server's gamestate machine half finished and the server
				 * drops the client a few seconds later. */
				if (verb === "ghoulstrings" && !baselinesSent) {
					baselinesSent = true;
					setTimeout(() => sendStringCmd("baselines " + a + " 0"), 60);
				}
				continue;
			}
			m = cmd.match(/^precache\s+(\S+)/);
			if (m) {
				onEvent("ask", "precache " + m[1]);
				answer("precache " + m[1]);
				if (!beginSent) {
					beginSent = true;
					setTimeout(() => {
						sendStringCmd("begin " + m[1]);
						spawnDone = true;
						onEvent("spawned");
					}, 60);
				}
				continue;
			}
			m = cmd.match(/^cmd\s+begin\s+(\S+)/);
			if (m) {
				onEvent("ask", "begin " + m[1]);
				answer("begin " + m[1]);
				spawnDone = true;
				onEvent("spawned");
				continue;
			}
		}
	}

	/* Parse the configstring record stream that starts at "off". */
	function parseConfigStrings(buf, off) {
		const out = {};
		let p = off;
		while (p + 5 <= buf.length && buf[p] === 0x0f) {
			const index = buf.readUInt16LE(p + 1);
			const value = buf.readUInt16LE(p + 3);
			p += 5;
			if (value === 0xffff) {
				let z = p;
				while (z < buf.length && buf[z] !== 0) z++;
				out[index] = buf.toString("latin1", p, z);
				p = z + 1;
			} else {
				out[index] = value;
			}
		}
		return out;
	}

	function findCommands(buf) {
		const out = [];
		let i = 0;
		while (i < buf.length) {
			if (buf[i] === 0x0d) {
				let j = i + 1;
				while (j < buf.length && buf[j] !== 0x00 && buf[j] !== 0x0a) j++;
				out.push(latin1(buf, i + 1, j));
				i = j + 1;
				continue;
			}
			i++;
		}
		return out;
	}

	/* ------------------------------------------------------------- input */

	function setKey(code, down) {
		keys[code] = down;
		let b = 0;
		/* attack: left mouse (Mouse0) OR left ctrl (ControlLeft) */
		if (keys["Mouse0"] || keys["ControlLeft"]) b |= BTN.ATTACK;
		/* alt attack: right mouse (Mouse2) */
		if (keys["Mouse2"]) b |= BTN.ALT;
		/* use: E or Enter */
		if (keys["KeyE"] || keys["Enter"]) b |= BTN.USE;
		/* run: shift */
		if (keys["ShiftLeft"] || keys["ShiftRight"]) b |= BTN.RUN;
		view.buttons = b;
		/* the movement goes into the three i16 fields; the engine's scale is
		 * 400 for a normal run and the 0x20 run bit doubles it server side */
		const speed = moveSpeed;
		view.forwardmove = (keys["KeyW"] || keys["ArrowUp"] ? speed : 0) - (keys["KeyS"] || keys["ArrowDown"] ? speed : 0);
		view.sidemove = (keys["KeyD"] ? speed : 0) - (keys["KeyA"] ? speed : 0);
		view.upmove = (keys["Space"] ? speed : 0) - (keys["KeyC"] || keys["ControlLeft"] ? speed : 0);
	}
	function look(dx, dy) {
		view.yaw = (view.yaw + dx * lookSpeed) % 360;
		view.pitch = Math.max(-89, Math.min(89, view.pitch + dy * lookSpeed));
	}

	function start() { oob("getchallenge 1\n"); }

	return {
		start, onDatagram, sendStringCmd, sendUserinfo, sendUserCmd, setKey, look,
		view: view,
		setMoveSpeed: function (v) { moveSpeed = v; },
		setLookSpeed: function (v) { lookSpeed = v; },
		get entities() { return entities; },
		get ghoulPackets() { return ghoulPackets; },
		get soundPackets() { return soundPackets; },
		get frameNumber() { return frameNumber; },
		get serverTime() { return serverTime; },
		get playerState() { return playerState; },
		get configstrings() { return configstrings; },
		get spawnDone() { return spawnDone; },
		get seq() { return seq; },
		get srvSeq() { return srvSeq; },
		get seed() { return seed; },
		describeEntity, BTN
	};
}

module.exports = { createClient, BTN, DEFAULT_USERINFO };