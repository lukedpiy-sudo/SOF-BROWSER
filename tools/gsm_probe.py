"""
gsm_probe.py - probe a GameSpy-style master server for the SoF server list.

The SoF engine registers with a master over TCP (the config has
gsc_server/gsc_port and an IRC-ish master at irc.globalgamers.net:6667) and
the client queries the same master for the list.  This probes both the
configured master and the classic master.gamespy.com, sends a list request
and dumps whatever comes back.

usage: python gsm_probe.py [gamename] [host:port ...]
"""

import socket
import sys
import time

GAMENAME = sys.argv[1] if len(sys.argv) > 1 else "soldieroffortune"
TARGETS = sys.argv[2:] or [
    "irc.globalgamers.net:6667",
    "master.gamespy.com:6667",
    "gamespy.com:6667",
]


def probe(hostport, gamename, wait=6.0):
    host, _, port = hostport.partition(":")
    port = int(port or 6667)
    print("\n=== %s:%d ===" % (host, port))
    try:
        s = socket.create_connection((host, port), timeout=6)
    except Exception as e:
        print("  connect failed: %s" % e)
        return False
    print("  connected")
    s.settimeout(1.0)

    reqs = [
        "\\list\\gamename\\%s\\final\\\n" % gamename,
        "\\list\\%s\\final\\\n" % gamename,
        "\\heartbeat\\gamename\\%s\\\n" % gamename,
    ]
    for r in reqs:
        try:
            s.sendall(r.encode("latin-1"))
            print("  sent: %r" % r.strip())
        except Exception as e:
            print("  send failed: %s" % e)
            break
        time.sleep(0.4)

    data = b""
    end = time.time() + wait
    while time.time() < end:
        try:
            chunk = s.recv(65536)
            if not chunk:
                print("  server closed")
                break
            data += chunk
            print("  received %d bytes (total %d)" % (len(chunk), len(data)))
        except socket.timeout:
            continue
        except Exception as e:
            print("  recv error: %s" % e)
            break
    s.close()

    if data:
        txt = data.decode("latin-1", "replace")
        print("  --- payload (first 1500 chars) ---")
        print(txt[:1500])
        print("  --- lines: %d ---" % len(txt.splitlines()))
    else:
        print("  no data")
    return bool(data)


def main():
    print("gamename guess: %s" % GAMENAME)
    for t in TARGETS:
        probe(t, GAMENAME)
    return 0


if __name__ == "__main__":
    sys.exit(main())
