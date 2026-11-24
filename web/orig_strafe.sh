#!/bin/bash
# Capture the original SoF client before/after pressing D, for strafe comparison.
cd "$(dirname "$0")/.."
D=:96
pkill -x Xvfb >/dev/null 2>&1 || true
Xvfb "$D" -screen 0 1280x720x24 >/tmp/opencode/xvfb-os.log 2>&1 &
sleep 2
(cd 'Soldier of Fortune' && DISPLAY=$D WINEPREFIX=/home/luked/.wine-sof WINEDEBUG=-all \
  WINEDLLOVERRIDES='mscoree,mshtml=' wine SoF.exe +set dedicated 0 +set cl_gun 1 \
  +connect 127.0.0.1:29000 >/tmp/opencode/orig-os.log 2>&1) &
ORIG=$!
sleep 22
WID=$(DISPLAY=$D xdotool search --name '^SoF$' 2>/dev/null | head -1)
DISPLAY=$D xwd -root -silent -out /tmp/opencode/ob.xwd
ffmpeg -y -loglevel error -i /tmp/opencode/ob.xwd shots/orig-strafe-before.png
DISPLAY=$D xdotool keydown --window $WID d 2>/dev/null || DISPLAY=$D xdotool keydown d
sleep 2
DISPLAY=$D xdotool keyup --window $WID d 2>/dev/null || DISPLAY=$D xdotool keyup d
DISPLAY=$D xwd -root -silent -out /tmp/opencode/oa.xwd
ffmpeg -y -loglevel error -i /tmp/opencode/oa.xwd shots/orig-strafe-after.png
kill $ORIG >/dev/null 2>&1 || true
pkill -x Xvfb >/dev/null 2>&1 || true
echo "captured orig-strafe-before/after.png"
