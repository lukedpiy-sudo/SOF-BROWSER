#!/usr/bin/env python3
"""The Ghoul / mission script (.os) binary format - SOLVED 2026-11-14.

The scripts are the compiled mission scripts of SoF.  They live in the
paks as "ds/<level>/<name>.os" and are loaded by the game module
(gamex86.dll):

  * FUN_50079D60  - the compiler object's constructor.  It copies the
    script's name into the first 0x104 bytes of the object and calls
    FUN_5007ADC0.
  * FUN_5007ADC0  - loads the file through the engine's FS_LoadFile
    (the import slot 93, SoF.exe 0x20025370), stores the data pointer at
    +0x104, the length at +0x110, and checks that the first u32 is 3 -
    the format version.
  * FUN_500818D0  - the compiler.  It walks the byte stream from
    +0x104 + +0x114 (the cursor) and dispatches on one opcode byte at a
    time (the jump table at gamex86.dll 0x50081F74, 0x36 entries).
  * FUN_5007B2E0  - reads one record: a NUL terminated name, a kind byte
    and a u32.
  * FUN_5007B5F0  - the same, for the field records (opcode 0x06); the
    u32 is the field's index (0..99) and the record is stored at
    +0x318 + index*4.
  * FUN_5007BF20  - the PUSH opcode (0x11): it reads the kind byte and
    then the operand, whose format depends on the kind (the record's
    vtable+0x18 slot does the reading).

THE FILE

    u32  version (3)
    ...  the definitions, each: u8 tag, char name[NUL], u8 kind, u32 code

    tag 0x00  a symbol, interned into the name table at +0x188
    tag 0x01  the same, but the record's vtable+0x18 is called first
    tag 0x02  a script function   (FUN_50082050)
    tag 0x03  the same, with the vtable+0x18 call first
    tag 0x04  a statement          (FUN_50082120)
    tag 0x05  the same, with the vtable+0x18 call first
    tag 0x06  an entity FIELD, the u32 is its index

    and then the body: a stack machine.

THE KINDS (the operand format, read by the vtable's +0x18 slot)

    0  a u32 (an integer)
    1  a u32 (a float)
    2  three u32s (a vector)
    3  a u32 (an entity index, -1 = none)
    4  a NUL terminated string
    5  a u32 (a symbol index)
    6  two u32s (two symbol indices)
    7  a sub opcode byte (0..9) - the "computed" values

THE BODY OPCODES

    0x00-0x06  the definitions above
    0x07       the stack operation "call"
    0x08-0x0f  the arithmetic (+ - * / and the assigning forms)
    0x10       a jump: a u32 target
    0x11       a push: the kind and the operand
    0x12       a pop
    0x13       an if: a byte and a u32 target
    0x14       the end of the script
    0x16-0x20  the statements (each one byte of flags)
    0x21       the Ghoul VM: a FOUR byte instruction
    0x22-0x35  the rest of the statements

    python3 analysis/ghoul_os.py samples/os/ds_arm_bleep.os
    python3 analysis/ghoul_os.py --all samples/os/*
"""
import struct
import sys


def u32(d, p):
    return struct.unpack_from('<I', d, p)[0], p + 4


def cstr(d, p):
    e = d.index(b'\0', p)
    return d[p:e].decode('latin1'), e + 1


# the tags that read a [name NUL][kind][u32] record
RECORD_TAGS = (0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06)

# the tags that also read the kind's operand (they call the vtable+0x18)
RECORD_OPERAND = (0x01, 0x03, 0x05)

# the main opcodes that consume nothing from the stream
NOARG = set(range(0x07, 0x10)) | {0x12, 0x16, 0x1b, 0x22, 0x23, 0x24,
                                  0x25, 0x26, 0x27, 0x2a, 0x2b, 0x2c, 0x2f,
                                  0x30, 0x31, 0x32, 0x34, 0x35}

# the main opcodes that consume one byte
ONEBYTE = {0x17, 0x18, 0x19, 0x1a, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x28, 0x29,
           0x2d}


class Bad(Exception):
    pass


def read_operand_value(d, p, kind):
    """the kind's operand - the kind byte is already known.

    The reader is the record vtable's +0x18 slot:
      kind 0  FUN_50076D50  a u32 (an integer)
      kind 1  FUN_50076D50  a u32 (a float)
      kind 2  FUN_50077530  three u32s (a vector)
      kind 3  FUN_50077E30  a u32 (an entity index, -1 = none)
      kind 4  FUN_500780D0  a NUL terminated string
      kind 5  FUN_500781F0  a u32 (a symbol index)
      kind 6  FUN_500783A0  two u32s (two symbol indices)
      kind 7  FUN_5007B9A0  a sub opcode byte (0..9)
    """
    if kind == 2:
        v = []
        for _ in range(3):
            x, p = u32(d, p)
            v.append(x)
        return (kind, v), p
    if kind == 4:
        s, p = cstr(d, p)
        return (kind, s), p
    if kind == 6:
        a, p = u32(d, p)
        b, p = u32(d, p)
        return (kind, (a, b)), p
    if kind == 7:
        sub = d[p]
        p += 1
        if sub == 5:
            # FUN_5007B750 reads one more byte
            sub = (sub, d[p])
            p += 1
        return (kind, sub), p
    if kind in (0, 1, 3, 5):
        v, p = u32(d, p)
        return (kind, v), p
    raise Bad('the operand kind %d at %d' % (kind, p))


def read_operand(d, p):
    """the kind byte and the kind's operand (the PUSH opcode 0x11)."""
    kind = d[p]
    p += 1
    return read_operand_value(d, p, kind)


def parse(data, strict=True):
    """-> (version, [(tag, name, kind, value)])

    With strict, the whole file must be consumed - the compiler stops at
    the end opcode (0x14/0x15) but the file must end there.
    """
    p = 0
    ver, p = u32(data, p)
    out = []
    while p < len(data):
        tag = data[p]
        p += 1
        if tag in RECORD_TAGS:
            nm, p = cstr(data, p)
            kind = data[p]
            p += 1
            idx, p = u32(data, p)
            out.append((tag, nm, kind, idx))
            if tag in RECORD_OPERAND:
                # the kind byte is already known - the vtable+0x18 slot
                # reads the operand straight after the record
                v, p = read_operand_value(data, p, kind)
                out.append((0x18, None, v, None))
        elif tag == 0x10:
            v, p = u32(data, p)
            out.append((tag, None, None, v))
        elif tag == 0x11:
            v, p = read_operand(data, p)
            out.append((tag, None, v, None))
        elif tag == 0x13:
            # the IF: one byte and then a u32 jump target (FUN_5007C5A0)
            b = data[p]
            p += 1
            v, p = u32(data, p)
            out.append((tag, None, b, v))
        elif tag == 0x21:
            # the Ghoul VM: the inner interpreter reads a FOUR byte
            # instruction from the same stream (FUN_5007EC40)
            out.append((tag, None, None, data[p:p + 4]))
            p += 4
        elif tag in ONEBYTE:
            out.append((tag, None, None, data[p]))
            p += 1
        elif tag in (0x14, 0x15):
            # the end of the script: the compiler sets +0x108 and stops
            out.append((tag, None, None, None))
            if p >= len(data):
                break
        elif tag == 0x33:
            # the ON statement: two PUSHes and then five raw bytes
            # (FUN_5007C780: it expects the 0x11 opcode before each push)
            for _ in range(2):
                if data[p] != 0x11:
                    raise Bad('the ON wants a PUSH at %d' % p)
                p += 1
                v, p = read_operand(data, p)
                out.append((0x11, None, v, None))
            out.append((tag, None, None, data[p:p + 5]))
            p += 5
        elif tag in NOARG:
            out.append((tag, None, None, None))
        else:
            raise Bad('the opcode 0x%02x at %d' % (tag, p - 1))
    if strict and p != len(data):
        raise Bad('%d bytes left over' % (len(data) - p))
    return ver, out


def main():
    args = sys.argv[1:]
    verbose = '--all' not in args
    args = [a for a in args if a != '--all']
    ok = 0
    bad = []
    for path in args:
        data = open(path, 'rb').read()
        try:
            ver, recs = parse(data)
        except Exception as e:
            bad.append((path, str(e)))
            continue
        ok += 1
        if verbose:
            print("== %s  (%d bytes, version %d)" % (path, len(data), ver))
            for tag, nm, kind, val in recs:
                if nm is not None:
                    print("   tag %02x  %-28s kind %-3d index %d" %
                          (tag, nm, kind, val))
                else:
                    print("   op  %02x  %s" % (tag, val))
            print()
    print("parsed %d of %d, failed %d" % (ok, len(args), len(bad)))
    for p, e in bad[:20]:
        print("   FAIL %s: %s" % (p, e))


if __name__ == '__main__':
    main()
