"""
q3info.py - query a Quake III style server with getinfo / getstatus.

Used to confirm that the real Soldier of Fortune dedicated server is live
and to discover which map it is serving (the engine binds its own port, not
the 27960 default, so the port has to be probed).

usage: python q3info.py <host> <port> [port ...]
"""

import socket
import sys
import time

def query(host, port, cmd, timeout=2.0):
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    s.settimeout(timeout)
    try:
        s.sendto(cmd.encode("latin-1"), (host, port))
        deadline = time.time() + timeout
        while time.time() < deadline:
            try:
                data, _ = s.recvfrom(4096)
            except socket.timeout:
                break
            except OSError:
                break
            txt = data.decode("latin-1", "replace")
            print('RAW:', repr(txt[:200]))
            if 'infoResponse' in txt or 'statusResponse' in txt:
                return txt
    finally:
        s.close()
    return None


def main():
    host = sys.argv[1] if len(sys.argv) > 1 else "127.0.0.1"
    ports = [int(p) for p in (sys.argv[2:] or ["27960", "28911", "27910"])]

    for port in ports:
        for cmd in ("getinfo", "getstatus"):
            reply = query(host, port, cmd)
            if not reply:
                continue
            body = reply.split("\n", 1)[-1]
            print("port %d  %s ->" % (port, cmd))
            for item in body.split("\\"):
                if not item:
                    continue
                k, _, v = item.partition("\\")
                if k:
                    print("   %-18s %s" % (k, v))
            print()
    return 0


if __name__ == "__main__":
    sys.exit(main())
