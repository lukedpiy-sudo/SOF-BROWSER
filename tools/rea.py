#!/usr/bin/env python3
"""rea.py - thin wrapper around the REA CLI (https://github.com/morluto/rea).

Keeps the chat context small: the raw Evidence JSON and the pseudocode are
written to files under analysis/rea/, and only a short summary is printed.

    tools/rea.py decompile sof_target/SoF.exe 0x200bd430
    tools/rea.py xrefs    sof_target/SoF.exe 0x201571ec
    tools/rea.py search   sof_target/SoF.exe "Bad Ghoul"
    tools/rea.py function sof_target/SoF.exe 0x200bd430
    tools/rea.py instructions sof_target/SoF.exe 0x200bd430
    tools/rea.py analyze  sof_target/SoF.exe

Options: --out NAME (file stem under analysis/rea/), --lines N (pseudocode lines
to print, default 0 = print none), --full (print the whole normalized_result).
"""
import json
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
OUTDIR = os.path.join(ROOT, 'analysis', 'rea')
NODE_BIN = os.path.expanduser('~/.local/node/bin')
ENV = dict(os.environ)
ENV['PATH'] = NODE_BIN + os.pathsep + ENV.get('PATH', '')
ENV['JAVA_HOME'] = '/usr/lib/jvm/java-21-openjdk-amd64'
ENV['GHIDRA_INSTALL_DIR'] = '/data/Projects/tools/ghidra_12.1.4_PUBLIC'
ENV.setdefault('REA_GHIDRA_STARTUP_TIMEOUT_MS', '900000')
REA = os.path.expanduser('~/.local/node/bin/rea')


def run(args):
    os.makedirs(OUTDIR, exist_ok=True)
    name = args[0]
    if '--out' in args:
        i = args.index('--out')
        name = args[i + 1]
        del args[i:i + 2]
    cmd = [REA] + args + ['--provider', 'ghidra', '--json']
    p = subprocess.run(cmd, capture_output=True, text=True, env=ENV, cwd=ROOT)
    stem = args[0]
    raw = p.stdout
    try:
        doc = json.loads(raw)
    except Exception:
        doc = None
    path = os.path.join(OUTDIR, name + '.json')
    with open(path, 'w') as f:
        f.write(raw)
    if p.stderr.strip():
        with open(os.path.join(OUTDIR, name + '.err'), 'w') as f:
            f.write(p.stderr)
    return doc, path, p.returncode


def compact(doc, path, rc, lines=0, full=False):
    print('rc=%d  evidence=%s' % (rc, path))
    if not doc:
        print('  (no JSON output)')
        return
    print('  evidence_id=%s op=%s' % (doc.get('evidence_id', '?')[:16], doc.get('operation')))
    nr = doc.get('normalized_result')
    if isinstance(nr, str):
        body = nr
        if full:
            print(body)
            return
        if lines:
            for ln in body.splitlines()[:lines]:
                print('   ', ln)
        else:
            print('   pseudocode: %d chars, %d lines -> %s' %
                  (len(body), body.count('\n') + 1,
                   os.path.join(OUTDIR, os.path.basename(path).replace('.json', '.txt'))))
            with open(os.path.join(OUTDIR, os.path.basename(path).replace('.json', '.txt')), 'w') as f:
                f.write(body)
        return
    if isinstance(nr, list):
        print('  list(%d):' % len(nr))
        for item in nr[:40]:
            s = json.dumps(item) if not isinstance(item, str) else item
            print('     -', s[:200])
        return
    if isinstance(nr, dict):
        if full:
            print(json.dumps(nr, indent=1)[:20000])
            return
        for k, v in nr.items():
            if isinstance(v, list):
                print('  %s: list(%d)' % (k, len(v)))
                for item in v[:12]:
                    s = json.dumps(item) if not isinstance(item, str) else item
                    print('     -', s[:200])
            elif isinstance(v, dict):
                print('  %s: dict(%s)' % (k, ','.join(list(v)[:12])))
            else:
                print('  %s: %s' % (k, str(v)[:200]))


def main():
    argv = sys.argv[1:]
    lines = 0
    full = False
    while '--lines' in argv:
        i = argv.index('--lines')
        lines = int(argv[i + 1])
        del argv[i:i + 2]
    if '--full' in argv:
        argv.remove('--full')
        full = True
    if not argv:
        print(__doc__)
        return 1
    doc, path, rc = run(argv)
    compact(doc, path, rc, lines, full)
    return 0


if __name__ == '__main__':
    sys.exit(main())
