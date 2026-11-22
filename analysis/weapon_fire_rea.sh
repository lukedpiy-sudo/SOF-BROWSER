#!/bin/bash
# Decompile the gamex86.dll functions that are missing from the offline corpus.
# REA wants a FILE OFFSET (VA - 0x50000000 for gamex86.dll).
cd "/home/luked/Desktop/GITHUB/SOF BROWSER" || exit 1
for va in 50106640 501052b2 50006059 50101a90 50104700 50106890 50065c00 50065900; do
  off=$(( 0x$va - 0x50000000 ))
  name="wf_${va}"
  echo "=== $va (file 0x$(printf '%x' $off)) ==="
  python3 tools/rea.py decompile sof_target/gamex86.dll "$off" --out "$name" 2>&1 | tail -3
done
echo DONE
