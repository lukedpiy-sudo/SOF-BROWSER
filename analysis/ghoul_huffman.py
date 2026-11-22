#!/usr/bin/env python3
"""The Ghoul inline-string Huffman code table - extracted from SoF.exe.

The Ghoul net payload never carries a raw string.  A string is either

  * an index into the **global string table** baked into `SoF.exe`
    (`count` u32 at `0x2013ADF0`, `char*[]` at `0x2013ADF8`, 3713 entries), or
  * **inline**, Huffman-compressed (this is what the `.ghb` model paths use -
    they are not in the global table).

The inline branch is written by `FUN_200BDE30` (which falls back to the
compressor `FUN_200BDA00` when the binary search of the global table misses)
and read by `FUN_200BE060`.

The Huffman tree is **built at runtime** - `DAT_204063D4` is a pointer in the
zero-initialised tail of `.data`, so it is not in the file.  But the tree is
built from a **static table of 256 float frequencies** at `0x20157C60`
(`SoF.exe`, `.data`), which *is* in the file:

    SoF.exe 0x200BD9F0:  push $0x20157C60
    SoF.exe 0x200BD9F5:  call 0x200BD8C0        ; build the tree

`FUN_200BD8C0` builds the tree with a textbook two-smallest Huffman loop and
`FUN_200BD870` walks it to produce the code table:

    DAT_204059C8 + sym*8   u32  the code   (the MSB is the first bit)
    DAT_204059CC + sym*8   u32  the length (in bits)

This script reproduces that builder **bit for bit** (including its
tie-breaking) and dumps the resulting table, so the browser can decode the
inline-compressed strings without shipping the tree.

    python3 analysis/ghoul_huffman.py                       # a summary
    python3 analysis/ghoul_huffman.py --json web/www/ghoulhuff.json

The `--json` output is self-describing:

    { "count": 256,
      "source": "SoF.exe 0x20157C60 ...",
      "bitorder": "lsb-first inside each byte; ...",
      "tree": "the node is {left@0, right@4, symbol@8}; ...",
      "table": [[code, length], ...] }        ; one entry per byte value
"""
import argparse
import json
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

FREQ_VA = 0x20157C60       # the 256 float frequencies
TREE_VA = 0x20157C60       # the frequency table is also the tree's input
CODE_TABLE_VA = 0x204059C8  # runtime: {u32 code, u32 length} * 256
LEN_TABLE_VA = 0x204059CC   # runtime: the length half of the same record
TREE_PTR_VA = 0x204063D4    # runtime: the root node


# ---------------------------------------------------------------- the PE map

def pe_sections(data):
    pe = struct.unpack_from('<I', data, 0x3c)[0]
    nsec = struct.unpack_from('<H', data, pe + 6)[0]
    optsz = struct.unpack_from('<H', data, pe + 20)[0]
    imagebase = struct.unpack_from('<I', data, pe + 24 + 28)[0]
    off = pe + 24 + optsz
    out = []
    for i in range(nsec):
        name = data[off:off + 8].rstrip(b'\0').decode('latin1')
        vsize, vaddr, rsize, raddr = struct.unpack_from('<IIII', data, off + 8)
        out.append((name, vaddr, vsize, raddr, rsize))
        off += 40
    return imagebase, out


def to_off(va, imagebase, sections):
    rva = va - imagebase
    for name, vaddr, vsize, raddr, rsize in sections:
        if vaddr <= rva < vaddr + max(vsize, rsize):
            return raddr + (rva - vaddr)
    return None


def read_frequencies(path):
    data = open(path, 'rb').read()
    imagebase, sections = pe_sections(data)
    off = to_off(FREQ_VA, imagebase, sections)
    if off is None:
        raise SystemExit('0x%08X is not inside any PE section' % FREQ_VA)
    if off + 256 * 4 > len(data):
        raise SystemExit('the frequency table is not in the file (0x%08X)' % FREQ_VA)
    return list(struct.unpack_from('<256f', data, off))


# ------------------------------------------------- the tree builder (exact)

class Node(object):
    """a 0x10-byte node: {left@0, right@4, symbol@8, freq@0xC}"""

    __slots__ = ('left', 'right', 'symbol', 'freq')

    def __init__(self, symbol, freq):
        self.left = None
        self.right = None
        self.symbol = symbol
        self.freq = freq


def build_tree(freqs):
    """FUN_200BD8C0 - the exact two-smallest loop the engine runs.

    The engine keeps the 256 live nodes in a 256-entry slot array and always
    merges the *smallest* (slot iVar9) with the *second smallest* (slot
    iVar8); the merged node takes over the smallest's slot.  The scan is
    reproduced literally, so the tie-breaking matches.
    """
    slots = [None] * 256
    for i in range(256):
        slots[i] = Node(i, freqs[i])

    root = None
    for _ in range(255):
        # --- the scan: fVar1 = the smallest, local_404 = the second smallest
        f1 = 1e30
        second = 1e30
        i_min = -1
        i_second = -1
        for i in range(256):
            node = slots[i]
            f2 = f1
            if node is not None:
                freq = node.freq
                if f1 <= freq:
                    if freq < second:
                        second = freq
                        i_second = i
                else:
                    i_second = i_min
                    i_min = i
                    f2 = freq
                    second = f1
            f1 = f2
        if i_min < 0 or i_second < 0:
            raise SystemExit('the tree builder ran out of nodes')

        # --- the merge
        node_second = slots[i_second]
        node_min = slots[i_min]
        parent = Node(0xFF, node_min.freq + node_second.freq)
        parent.left = node_second
        parent.right = node_min
        slots[i_min] = parent
        slots[i_second] = None
        root = parent

    return root


def build_codes(root):
    """FUN_200BD870 - walk the tree and fill the {code, length} table.

    The engine calls it twice, once for the root's left subtree with the
    code 0 and once for the right subtree with the code 1, both with the
    depth 1.
    """
    codes = [0] * 256
    lengths = [0] * 256

    def walk(node, depth, code):
        while node.left is not None:
            depth += 1
            walk(node.left, depth, code * 2)
            node = node.right
            code = code * 2 | 1
        codes[node.symbol] = code
        lengths[node.symbol] = depth

    walk(root.left, 1, 0)
    walk(root.right, 1, 1)
    return codes, lengths


# ------------------------------------------------- the bit stream (the wire)

class BitWriter(object):
    """the engine's bit order: the first bit goes to bit 0 of byte 0."""

    def __init__(self):
        self.bits = []

    def write(self, code, length):
        # the code's MSB goes to the lowest free bit position
        for i in range(length - 1, -1, -1):
            self.bits.append((code >> i) & 1)

    def bytes(self):
        out = bytearray((len(self.bits) + 7) // 8)
        for i, b in enumerate(self.bits):
            if b:
                out[i >> 3] |= 1 << (i & 7)
        return bytes(out)


def compress(src, codes, lengths):
    """FUN_200BDA00 - returns the (header, payload) pair."""
    bw = BitWriter()
    for ch in src:
        bw.write(codes[ch], lengths[ch])
    payload = bw.bytes()
    nbits = len(bw.bits)
    if len(src) + 1 <= len(payload) + 1:
        # the raw form: the header 0xFF, then the bytes as they are
        return b'\xff' + src
    return bytes([((len(payload)) * 8 - nbits) & 0xFF]) + payload


def decompress(buf, codes, lengths):
    """the reader's half of FUN_200BE060 - used only for the self-test."""
    if not buf:
        return b''
    header = buf[0]
    if header == 0xFF:
        return buf[1:]
    nbits = len(buf) * 8 - header - 8
    # build the decode tree out of the code table: [left, right, symbol]
    root = [None, None, None]
    for sym in range(256):
        code = codes[sym]
        length = lengths[sym]
        node = root
        for i in range(length - 1, -1, -1):
            bit = (code >> i) & 1
            if node[bit] is None:
                node[bit] = [None, None, None]
            node = node[bit]
        node[2] = sym
    out = bytearray()
    pos = 0
    node = root
    while pos < nbits:
        bit = (buf[1 + (pos >> 3)] >> (pos & 7)) & 1
        pos += 1
        node = node[bit]
        if node is None:
            break
        if node[2] is not None:
            out.append(node[2])
            node = root
    return bytes(out)


# --------------------------------------------------------------- the driver

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--exe', default=os.path.join(ROOT, 'sof_target', 'SoF.exe'))
    ap.add_argument('--json', default=None)
    args = ap.parse_args()

    freqs = read_frequencies(args.exe)
    root = build_tree(freqs)
    codes, lengths = build_codes(root)

    kraft = sum(2.0 ** -lengths[s] for s in range(256) if lengths[s])
    print('the frequency table: 0x%08X' % FREQ_VA)
    print('  %d symbols, the lengths run %d..%d' %
          (len(freqs), min(lengths), max(lengths)))
    print('  the Kraft sum = %.9f (1.0 = a complete prefix code)' % kraft)
    print('  the code table: DAT_204059C8 (code) / DAT_204059CC (length)')
    for s in (0x20, 0x41, 0x2f, 0x2e, 0x67, 0x68):
        print('    0x%02x %-4r code 0x%08x  %2d bits' %
              (s, chr(s), codes[s], lengths[s]))

    # the self-test: compress and decompress the model paths we know
    samples = [b'ghoul/enemy/meso/meso.ghb', b'GHOUL/ENEMY/MESO/MESO.GHL',
               b'abolt_head_t', b'']
    for s in samples:
        buf = compress(s, codes, lengths)
        back = decompress(buf, codes, lengths)
        if back != s:
            print('  FAIL: %r -> %r' % (s, back), file=sys.stderr)
            return 1
    print('  the round-trip self-test passes (%d samples)' % len(samples))

    if args.json:
        table = []
        for s in range(256):
            table.append([codes[s], lengths[s]])
        out = {
            "count": 256,
            "source": "SoF.exe 0x%08X (the static float frequency table)" % FREQ_VA,
            "bitorder": "lsb-first inside each byte; the code's MSB is the first bit",
            "tree": "the node is {left@0, right@4, symbol@8}; 0 = left, 1 = right",
            "table": table,
        }
        with open(args.json, 'w') as fh:
            json.dump(out, fh, separators=(',', ':'))
        print('  wrote %s' % args.json)
    return 0


if __name__ == '__main__':
    sys.exit(main())
