#!/bin/bash
# Side-by-side oracle: original SoF client and the browser client, same server,
# same X display.  Captures shots/compare-latest.png.
# Usage: ./compare.sh [url] [settle-seconds]
set -u
cd "$(dirname "$0")"
URL="${1:-http://127.0.0.1:8080/index.html}"
SETTLE="${2:-30}"
DISP=:97
pkill -x Xvfb >/dev/null 2>&1 || true
Xvfb "$DISP" -screen 0 1920x1080x24 >/tmp/opencode/xvfb-compare.log 2>&1 &
sleep 2
(cd 'Soldier of Fortune' && DISPLAY=$DISP WINEPREFIX=/home/luked/.wine-sof WINEDEBUG=-all \
  WINEDLLOVERRIDES='mscoree,mshtml=' wine SoF.exe +set dedicated 0 +set cl_gun 1 \
  +connect 127.0.0.1:29000 >/tmp/opencode/compare-orig.log 2>&1) &
ORIG=$!
sleep 8
DISPLAY=$DISP google-chrome --no-sandbox --disable-gpu --disable-dev-shm-usage \
  --enable-unsafe-swiftshader --use-angle=swiftshader --no-proxy-server \
  --window-position=640,0 --window-size=1280,800 \
  --user-data-dir=/tmp/opencode/compare-profile-$$ "$URL" >/tmp/opencode/compare-chrome.log 2>&1 &
CHROME=$!
sleep "$SETTLE"
DISPLAY=$DISP xwd -root -silent -out /tmp/opencode/compare.xwd
ffmpeg -y -loglevel error -i /tmp/opencode/compare.xwd shots/compare-latest.png
kill $ORIG $CHROME >/dev/null 2>&1 || true
pkill -x Xvfb >/dev/null 2>&1 || true
echo "captured shots/compare-latest.png"
