#!/usr/bin/env bash
#
# fetch_samples.sh - re-extract the ground truth samples the Ghoul tests need.
#
# The samples are not committed (they are extracted retail game assets), so
# this script rebuilds them from the pak archives:
#
#   tools/fetch_samples.sh ["Soldier of Fortune/Base/pak0.pak"]
#
# It needs node on the PATH:  export PATH="$HOME/.local/node/bin:$PATH"
#
set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
PAK0="${1:-Soldier of Fortune/Base/pak0.pak}"
PAK2="${2:-Soldier of Fortune/Base/pak2.pak}"

export PATH="$HOME/.local/node/bin:$PATH"
cd "$ROOT"
mkdir -p samples/ghb samples/gsq samples/gpm

echo "== the .ghb models =="
node web/pakget.js "$PAK0" "ghoul/enemy/female/FEM_ARM.ghb"   samples/ghb/FEM_ARM.ghb
node web/pakget.js "$PAK0" "ghoul/enemy/female/FEMALE.ghb"    samples/ghb/FEMALE.ghb
node web/pakget.js "$PAK0" "ghoul/enemy/bolt/ACC_BOX_HIP.ghb" samples/ghb/ACC_BOX_HIP.ghb
node web/pakget.js "$PAK0" "ghoul/effects/explosion/EXPLODE20.ghb" samples/ghb/EXPLODE20.ghb

echo "== the inview weapons =="
node web/pakget.js "$PAK0" "ghoul/weapon/inview/knife/KNIFE.ghb"             samples/ghb/inview/KNIFE.ghb
node web/pakget.js "$PAK0" "ghoul/weapon/inview/pistol1/pistol1.ghb"         samples/ghb/inview/PISTOL1.ghb
node web/pakget.js "$PAK0" "ghoul/weapon/inview/pistol2/PISTOL2.ghb"         samples/ghb/inview/PISTOL2.ghb
node web/pakget.js "$PAK0" "ghoul/weapon/inview/machinegun/Machinegun.ghb"   samples/ghb/inview/MACHINEGUN.ghb
node web/pakget.js "$PAK0" "ghoul/weapon/inview/assaultrifle/ASSAULTRIFLE.ghb" samples/ghb/inview/ASSAULTRIFLE.ghb
node web/pakget.js "$PAK0" "ghoul/weapon/inview/autoshotgun/AUTOSHOTGUN.ghb" samples/ghb/inview/AUTOSHOTGUN.ghb
node web/pakget.js "$PAK0" "ghoul/weapon/inview/mpistol/MPISTOL.GHB"         samples/ghb/inview/MPISTOL.ghb
node web/pakget.js "$PAK0" "ghoul/weapon/inview/mpg/MPG.ghb"                samples/ghb/inview/MPG.ghb

echo "== the .gsq sequence lists =="
node web/pakget.js "$PAK0" "ghoul/comskin/commoves.gsq" samples/gsq/commoves.gsq

echo "== the .gpm player model scripts =="
node web/pakget.js "$PAK2" "ghoul/pmodels/Assault.gpm" samples/gpm/Assault.gpm

echo
echo "== the tests =="
node web/ghbtest.js samples/ghb/*.ghb
node web/ghanimtest.js samples/ghb/FEM_ARM.ghb samples/ghb/FEMALE.ghb samples/ghb/inview/*.ghb
