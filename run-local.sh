#!/usr/bin/env bash
# Start the real SoF dedicated server, the WebSocket/pak relay and the local
# GameSpy-compatible master.  All three are detached so a shell timeout cannot
# take the game down mid-session.
set -u
ROOT="$(cd "$(dirname "$0")" && pwd)"
LOGDIR="${TMPDIR:-/tmp}/opencode"
mkdir -p "$LOGDIR"

stop() {
	pkill -x SoF.exe 2>/dev/null || true
	pkill -f 'node .*web/relay\.js' 2>/dev/null || true
	pkill -f 'node .*web/gsmaster\.js' 2>/dev/null || true
	pkill -f 'node .*web/server_watchdog\.js' 2>/dev/null || true
}

start() {
	( cd "$ROOT/Soldier of Fortune" && nohup setsid env \
		WINEPREFIX="$HOME/.wine-sof" WINEDEBUG=-all \
		WINEDLLOVERRIDES='mscoree,mshtml=' wine SoF.exe \
		+set dedicated 1 +set port 29000 +set rcon_password sofbrowser \
		+set deathmatch 0 +set ctf 1 +set dm_ctf 1 +set dmflags 128 +set teamplay 1 +map dm/nycctf1 >"$LOGDIR/sof-server.log" 2>&1 < /dev/null & )

	nohup setsid env PATH="$HOME/.local/node/bin:$PATH" \
		node "$ROOT/web/relay.js" --http 8080 --www "$ROOT/web/www" \
		--pak "$ROOT/Soldier of Fortune/Base/pak0.pak" \
		--pak "$ROOT/Soldier of Fortune/Base/pak1.pak" \
		--pak "$ROOT/Soldier of Fortune/Base/pak2.pak" \
		--pak "$ROOT/Soldier of Fortune/Base/pak3.pak" \
		--pak "$ROOT/Soldier of Fortune/Base/basicpack2015v2.pak" \
		>"$LOGDIR/relay.log" 2>&1 < /dev/null &

	nohup setsid env PATH="$HOME/.local/node/bin:$PATH" \
		node "$ROOT/web/gsmaster.js" --http 8091 --udp 27901 --tcp 28901 \
		--store "$LOGDIR/gsservers.json" >"$LOGDIR/gsmaster.log" 2>&1 < /dev/null &

	nohup setsid env PATH="$HOME/.local/node/bin:$PATH" \
		node "$ROOT/web/server_watchdog.js" >"$LOGDIR/watchdog.log" 2>&1 < /dev/null &

	python3 - "$LOGDIR" <<'PY'
import socket, sys, time
for _ in range(80):
	s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
	s.settimeout(0.5)
	try:
		s.sendto(b'\xff\xff\xff\xffgetchallenge 1\n', ('127.0.0.1', 29000))
		s.recvfrom(2048)
		print('SoF server ready on 127.0.0.1:29000')
		break
	except OSError:
		time.sleep(0.5)
	finally:
		s.close()
else:
	print('SoF server did not start; see', sys.argv[1] + '/sof-server.log')
PY
}

case "${1:-start}" in
	start) start ;;
	stop) stop ;;
	restart) stop; sleep 2; start ;;
	status)
		ps -eo pid,cmd | grep -E 'SoF\.exe|web/(relay|gsmaster)\.js' | grep -v grep || true
		curl -s -o /dev/null -w 'client:%{http_code}\n' http://127.0.0.1:8080/index.html || true
		curl -s -o /dev/null -w 'master:%{http_code}\n' http://127.0.0.1:8091/api/servers || true
		;;
	*) echo "usage: $0 {start|stop|restart|status}" ;;
esac
