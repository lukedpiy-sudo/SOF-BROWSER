"""
gsm_list.py - query a GameSpy "gsm" master for the live SoF server list.

Protocol (as implemented by SoF Buddy's master_server_fallback feature,
and by the stock SoF/SoFPlus clients):

  1. TCP connect to <master>:28900
  2. send  "IDQD"
  3. the master answers  \\secure\\<challenge>\\...
  4. reply with the validated challenge:
         \\gamename\\sofretail\\gamever\\1.07f\\location\\0\\validate\\<v>\\final\\\\queryid\\1.1\\
     where <v> = base64(RC4(challenge, key="iVn3a3"))
  5. request the list:
         \\list\\cmp\\gamename\\sofretail\\final\\
  6. the master answers with the list, terminated by \\final\\
     every server is 6 bytes: 4-byte IPv4 address + 2-byte port (big endian)

usage: python gsm_list.py [master[:port]] ...
"""

import socket
import struct
import sys

MASTER_PORT = 28900
GAMENAME = "sofretail"
GAMEVER = "1.07f"
RC4_KEY = b"iVn3a3"
B64 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"


def gamespy_validate(challenge):
    """The classic GameSpy challenge response: RC4 with a fixed key, then
    base64.  Ported verbatim from sof_buddy's master_server_fallback.cpp."""
    if not challenge or len(challenge) > 65:
        return b""

    table = list(range(256))
    a = 0
    for i in range(256):
        a = (a + table[i] + RC4_KEY[i % 6]) & 255
        table[i], table[a] = table[a], table[i]

    a = b = 0
    enc = bytearray(len(challenge))
    for i, ch in enumerate(challenge):
        a = (a + ch + 1) & 255
        x = table[a]
        b = (b + x) & 255
        y = table[b]
        table[b] = x
        table[a] = y
        enc[i] = ch ^ table[(x + y) & 255]

    padded = (len(challenge) + 2) // 3 * 3
    enc = bytes(enc) + b"\x00" * (padded - len(challenge))

    out = []
    for i in range(0, padded, 3):
        x, y, z = enc[i], enc[i + 1], enc[i + 2]
        out.append(B64[x >> 2])
        out.append(B64[((x & 3) << 4) | (y >> 4)])
        out.append(B64[((y & 15) << 2) | (z >> 6)])
        out.append(B64[z & 63])
    return "".join(out).encode("ascii")


def recv_until(sock, needle, limit=262144, timeout=6.0):
    sock.settimeout(timeout)
    buf = b""
    while len(buf) < limit:
        try:
            chunk = sock.recv(4096)
        except socket.timeout:
            break
        if not chunk:
            break
        buf += chunk
        if needle in buf:
            break
    return buf


def query(host, port=MASTER_PORT):
    print("=== %s:%d ===" % (host, port))
    try:
        s = socket.create_connection((host, port), timeout=8)
    except Exception as e:
        print("  connect failed: %s" % e)
        return None
    s.settimeout(8)

    s.sendall(b"IDQD")
    data = recv_until(s, b"\\")
    marker = b"\\secure\\"
    idx = data.find(marker)
    if idx < 0:
        print("  no challenge in %r" % data[:200])
        s.close()
        return None
    start = idx + len(marker)
    end = data.find(b"\\", start)
    challenge = data[start:end if end >= 0 else start + 6]
    print("  challenge: %r" % challenge)

    val = gamespy_validate(challenge)
    if not val:
        print("  validation failed")
        s.close()
        return None

    s.sendall(("\\gamename\\%s\\gamever\\%s\\location\\0\\validate\\%s\\final\\\\queryid\\1.1\\\n"
               % (GAMENAME, GAMEVER, val.decode())).encode("latin-1"))
    s.sendall(("\\list\\cmp\\gamename\\%s\\final\\\n" % GAMENAME).encode("latin-1"))

    buf = recv_until(s, b"\\final\\", limit=262144, timeout=8.0)
    s.close()

    end = buf.find(b"\\final\\")
    if end < 0:
        print("  no final marker; got %d bytes: %r" % (len(buf), buf[:200]))
        return None
    body = buf[:end]
    print("  list body: %d bytes" % len(body))
    if len(body) % 6:
        print("  WARNING: body not a multiple of 6")
    servers = []
    for i in range(0, len(body) - 5, 6):
        ip = ".".join(str(b) for b in body[i:i + 4])
        pt = struct.unpack(">H", body[i + 4:i + 6])[0]
        servers.append((ip, pt))
    for ip, pt in servers:
        print("    %s:%d" % (ip, pt))
    return servers


def main():
    targets = sys.argv[1:] or [
        "sof1master.sofvault.org:28900",
        "sof1master.megalag.org:28900",
        "master.333networks.com:28900",
        "gsm.qtracker.com:28900",
        "master2.qtracker.com:28900",
    ]
    all_servers = []
    for t in targets:
        host, _, port = t.partition(":")
        got = query(host, int(port or MASTER_PORT))
        if got:
            all_servers.extend(got)
    print("\n# %d servers found" % len(all_servers))
    return 0


if __name__ == "__main__":
    sys.exit(main())
