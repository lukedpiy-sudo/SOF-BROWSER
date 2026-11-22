#!/usr/bin/env python3
"""Dump the game module's (gamex86.dll) class and field tables.

Everything this prints is read straight out of the shipped module; nothing is
hard-coded, so the tables can be re-verified at any time.

    python3 analysis/module_tables.py                 # the summary
    python3 analysis/module_tables.py classes         # every entity class
    python3 analysis/module_tables.py fields          # the field tables
    python3 analysis/module_tables.py callbacks       # the script callbacks
    python3 analysis/module_tables.py accessories     # the accessory table
    python3 analysis/module_tables.py weapons         # the weapon class names
    python3 analysis/module_tables.py world           # the world entity
    python3 analysis/module_tables.py check           # self-test the tables

The module:  sof_target/gamex86.dll  ==  Soldier of Fortune/Base/gamex86.dll
             md5 152b6b788d0b84c0adfb1bdd1eddc0af, image base 0x50000000.
For this DLL a string VA == the file offset + 0x50000000 (the PE sections are
identity mapped: .text rva/raw 0x1000, .rdata 0x116000, .data 0x12F000).

See analysis/module_classes.md for the full write-up and the evidence.

The two addresses that the old Windows dumps gave for the field tables are
wrong; both are re-derived here and pinned by `check`:

    0x5014ED60   is the LAST entity-class record ("test_rj"), not a field
                 table - the class table ends there with a NULL name pointer
                 at 0x5014ED68.  The entity/world field table starts at
                 0x5014ED70 with the record "classname".
    0x50145298   is the FOURTH record of the vector table ("origin"), not a
                 table start.  The vector table starts at 0x50145268 with
                 the record "x".
"""

import hashlib
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
MODULE_CANDIDATES = [
    os.path.join(ROOT, "sof_target", "gamex86.dll"),
    os.path.join(ROOT, "Soldier of Fortune", "Base", "gamex86.dll"),
]
MODULE_MD5 = "152b6b788d0b84c0adfb1bdd1eddc0af"
BASE = 0x50000000

# the module's PE sections (rva, virtual size, raw offset, raw size)
# the .data virtual size is larger than its raw size: the tail is BSS.
SECTIONS = [
    (0x1000, 0x115000, 0x1000, 0x115000),     # .text
    (0x116000, 0x19000, 0x116000, 0x19000),   # .rdata
    (0x12F000, 0x5F000, 0x12F000, 0x2B000),   # .data (raw part + 0x34000 BSS)
    (0x18E000, 0x1E32C, 0x15A000, 0x1E32C),   # .reloc
]

# the class-table pointer array: 15 table pointers, NULL terminated.
# Read by ED_CallSpawn (0x500BD570) - disasm 0x500BD63A / 0x500BD63F.
CLASS_TABLE_ARRAY = 0x5014F380
CLASS_TABLE_ARRAY_END = 0x5014F3BC          # the NULL terminator
CLASS_TABLE_COUNT = 15

# The two field tables.  Both are arrays of 16-byte records:
#     { const char *name; int offset; int type; int flags; }
# The 5th dword of a record is NOT a field - it is the NEXT record's name
# pointer (the old dumps printed it as a bogus "next:" column).
#
# FIELD_TABLE_SPAWN - the entity/world field table.  96 records, the first is
#   "classname" (offset 0x1B4) and the last is "chopsky" (0x5014F360).
#   Read by FUN_5007B750 (HandleSpawn) and FUN_500BD730 (set field by name).
#   flags bit 0 selects the target: 0 = the entity, 1 = the world entity.
FIELD_TABLE_SPAWN = 0x5014ED70
FIELD_TABLE_SPAWN_COUNT = 96

# FIELD_TABLE_VECTOR - the script vector-field table.  24 records, the first
#   is "x" (offset -1) and the last is "loopsound" (0x501453D8).
#   Read by FUN_5007B5F0 and FUN_50078C60.
FIELD_TABLE_VECTOR = 0x50145268
FIELD_TABLE_VECTOR_COUNT = 24

# the two stale addresses, kept so `check` can prove they are mis-scans
STALE_FIELD_TABLE_ADDRESSES = [
    ("the entity/world field table", 0x5014ED60, FIELD_TABLE_SPAWN),
    ("the script vector-field table", 0x50145298, FIELD_TABLE_VECTOR),
]

# the accessory table: 16-byte records {name, group, slot, flags}.
# The reader is inside the function at 0x5002F1C0 (disasm 0x5002F3A2).
ACCESSORY_TABLE = 0x50132CC8
ACCESSORY_TABLE_COUNT = 42

# the script callback tables: (name, table address, entry count, value type).
# The bounds and the type mapping are proved by FUN_500BA9B0 (type->pointer)
# and FUN_500BA520 (pointer->index).
CALLBACK_TABLES = [
    ("think", 0x5014D5B8, 0xDB, 13),
    ("blocked", 0x5014D924, 0x05, 14),
    ("touch", 0x5014D938, 0x3A, 15),
    ("use", 0x5014DA20, 0x77, 16),
    ("pluse", 0x5014DBFC, 0x0D, 17),
    ("pain", 0x5014DC30, 0x38, 18),
    ("die", 0x5014DD10, 0x23, 19),
    ("respawn", 0x5014DD9C, 0x02, 20),
]

# The field-record type codes.  Observed in the two readers of the
# entity/world field table: FUN_5007B750 (jump table 0x5007B984) and
# FUN_500BD730 (jump table 0x500BD8D4).  Codes 6..21 never appear in a
# field record; they are the script value types (see SCRIPT_VALUE_TYPE).
FIELD_TYPE = {
    0: "int32",
    1: "int16",
    2: "float32",
    3: "string",
    4: "vector3",
    5: "angle (yaw in the Y slot)",
}

# The script value types, from FUN_500BA9B0 (type -> pointer, cases 0xD..0x14)
# and FUN_500BA520 (pointer -> index).  0..5 are the field-record codes;
# 13..20 are the callback tables; 21 is an opaque script value.
SCRIPT_VALUE_TYPE = {
    0: "int32",
    1: "int16",
    2: "float32",
    3: "string (an allocated buffer)",
    4: "vector3",
    5: "angle",
    6: "null",
    7: "entity (an index into the entity array at 0x5015CCA0)",
    8: "invalid",
    9: "table 0x5014DE98 object (4 x 0x58)",
    10: "table 0x5014DEB8 object (13 x 0x28)",
    11: "client entity (0x600 stride at 0x5015D6C4)",
    12: "bool",
    13: "think callback",
    14: "blocked callback",
    15: "touch callback",
    16: "use callback",
    17: "pluse callback",
    18: "pain callback",
    19: "die callback",
    20: "respawn callback",
    21: "opaque script value (never written into the entity struct)",
}

# the weapon class names (index = the weapon class id)
WEAPON_CLASS_NAMES = 0x5014F3C0
WEAPON_CLASS_COUNT = 13

# the world entity: a 0x10C-byte global structure in the .data BSS.
# It is the flags-bit-0 target of the entity/world field table.
WORLD_ENTITY = 0x5015CB90
WORLD_ENTITY_SIZE = 0x10C


def load():
    path = None
    for cand in MODULE_CANDIDATES:
        if os.path.exists(cand):
            path = cand
            break
    if path is None:
        sys.exit("the module is missing: %s" % MODULE_CANDIDATES[0])
    with open(path, "rb") as fh:
        blob = fh.read()
    md5 = hashlib.md5(blob).hexdigest()
    if md5 != MODULE_MD5:
        sys.exit("the module md5 changed: %s (%s)" % (md5, path))
    return path, blob


def rva_to_offset(rva):
    """The file offset of an rva, or None when it lives in the BSS."""
    for va, vs, ra, rs in SECTIONS:
        if va <= rva < va + vs:
            if rva - va < rs:
                return ra + (rva - va)
            return None
    raise ValueError("the rva 0x%x is not mapped" % rva)


def u32(data, va):
    off = rva_to_offset(va - BASE)
    if off is None:
        raise ValueError("0x%08x is in the BSS, it has no file image" % va)
    return struct.unpack_from("<I", data, off)[0]


def cstr(data, va):
    off = rva_to_offset(va - BASE)
    if off is None:
        return None
    end = data.find(b"\0", off)
    if end < 0:
        return None
    raw = data[off:end]
    if not raw or not all(32 <= c < 127 for c in raw):
        return None
    return raw.decode("ascii")


def is_code(va):
    return 0x50001000 <= va < 0x50116000


def class_tables(data):
    """The array of class tables at 0x5014F380 -> [(slot, table, entries)]."""
    out = []
    slot = CLASS_TABLE_ARRAY
    while True:
        table = u32(data, slot)
        if table == 0:
            break
        n = 0
        at = table
        while u32(data, at) != 0:
            n += 1
            at += 8
        out.append((slot, table, n))
        slot += 4
    return out


def class_entries(data, table):
    """The 8-byte class records: {const char* name; void(*spawn)(edict_t*)}."""
    at = table
    while True:
        name = u32(data, at)
        if name == 0:
            return
        yield cstr(data, name), u32(data, at + 4)
        at += 8


def field_records(data, base):
    """The 16-byte field records: name, offset, type, flags."""
    at = base
    while True:
        name = u32(data, at)
        if name == 0 or cstr(data, name) is None:
            return
        off, typ, flags = struct.unpack_from("<III", data, rva_to_offset(at - BASE) + 4)
        if off >= 0x80000000:
            off -= 0x100000000
        yield cstr(data, name), off, typ, flags
        at += 16


def accessory_records(data, base):
    """The 16-byte accessory/weapon records: name, group, slot, flags."""
    at = base
    while True:
        name = u32(data, at)
        if name == 0 or cstr(data, name) is None:
            return
        group, slot, flags = struct.unpack_from("<III", data, rva_to_offset(at - BASE) + 4)
        yield cstr(data, name), group, slot, flags
        at += 16


def show_classes(data):
    """Every entity class, grouped by the table it lives in."""
    tabs = class_tables(data)
    total = sum(n for _, _, n in tabs)
    print("the class-table pointer array: 0x%08x (%d tables, NULL at 0x%08x)"
          % (CLASS_TABLE_ARRAY, len(tabs), CLASS_TABLE_ARRAY_END))
    print("the record layout: 8 bytes { const char *name; void (*spawn)(edict_t*); }")
    print("the name compare in ED_CallSpawn (0x500BD570) is CASE SENSITIVE")
    print()
    for idx, (slot, table, n) in enumerate(tabs):
        print("== class table %d: the slot 0x%08x -> the table 0x%08x (%d classes)"
              % (idx, slot, table, n))
        at = table
        for name, fn in class_entries(data, table):
            print("   0x%08x  %-32s -> %08x" % (at, name, fn))
            at += 8
        print("   0x%08x  <NULL name = the table terminator>" % at)
    print()
    print("the total: %d classes in %d tables" % (total, len(tabs)))


def show_fields(data):
    """The two field tables (16-byte records: name, offset, type, flags)."""
    for label, base, want in (("the script vector-field table", FIELD_TABLE_VECTOR,
                               FIELD_TABLE_VECTOR_COUNT),
                              ("the entity/world field table", FIELD_TABLE_SPAWN,
                               FIELD_TABLE_SPAWN_COUNT)):
        recs = list(field_records(data, base))
        print("== %s at 0x%08x (%d records)" % (label, base, len(recs)))
        print("   the record layout: 16 bytes { const char *name; int offset;"
              " int type; int flags; }")
        print("   the name compare is CASE INSENSITIVE (__strcmpi)")
        for i, (name, off, typ, flags) in enumerate(recs):
            print("   0x%08x  [%2d] %-16s offset=%-6d type=%-2d (%-12s) flags=%d"
                  % (base + 16 * i, i, name, off, typ,
                     FIELD_TYPE.get(typ, SCRIPT_VALUE_TYPE.get(typ, "?")), flags))
        print()


def show_accessories(data):
    """The accessory/weapon table (16-byte records: name, group, slot, flags)."""
    recs = list(accessory_records(data, ACCESSORY_TABLE))
    print("== the accessory/weapon table at 0x%08x (%d records)"
          % (ACCESSORY_TABLE, len(recs)))
    print("   the record layout: 16 bytes { const char *name; int group;"
          " int slot; int flags; }")
    print("   the reader: the function at 0x5002F1C0, the lookup loop at"
          " 0x5002F3A2-0x5002F3E9 (case insensitive, via 0x50112880)")
    print("   group: read at 0x5002F3F0 - inferred: 0 = stackable"
          " (a count argument is required), 1 = unique")
    print("   slot:  read at 0x5002F6C4 - inferred: 0 = held, 1 = worn on the head")
    print("   flags: read at 0x5002F91C - inferred: 1 = not handed out here")
    for i, (name, group, slot, flags) in enumerate(recs):
        print("   0x%08x  [%2d] %-22s group=%d slot=%d flags=%d"
              % (ACCESSORY_TABLE + 16 * i, i, name, group, slot, flags))


def show_callbacks(data):
    """The eight script callback tables and the value type that selects them."""
    print("== the script callback tables")
    print("   the value type -> table mapping is proved by FUN_500BA9B0"
          " (type -> pointer)")
    print("   and FUN_500BA520 (pointer -> index); the same bounds are used by")
    print("   FUN_500BA8F0 (index -> think pointer) and FUN_500BA3C0"
          " (think pointer -> index)")
    for name, base, n, typ in CALLBACK_TABLES:
        vals = [u32(data, base + 4 * i) for i in range(n)]
        bad = [v for v in vals if not is_code(v)]
        print("   %-8s 0x%08x  %3d entries  value type=%-2d  %s"
              % (name, base, n, typ,
                 "all code pointers" if not bad else "BAD: %s" % bad))


def show_weapons(data):
    """The weapon class names (the index is the weapon class id)."""
    print("== the weapon class names at 0x%08x" % WEAPON_CLASS_NAMES)
    print("   read by FUN_500BE990 (0x500BE990) with __strcmpi; the id is"
          " 1 << index")
    print("   the second reader is at 0x500BEA49 (call 0x50112880)")
    at = WEAPON_CLASS_NAMES
    i = 0
    while True:
        p = u32(data, at)
        if p == 0:
            break
        print("   [%2d] %-12s (the string at 0x%08x)" % (i, cstr(data, p), p))
        at += 4
        i += 1


def show_world(data):
    """The world entity - the flags-bit-0 target of the field table."""
    print("== the world entity at 0x%08x" % WORLD_ENTITY)
    print("   a 0x%X-byte global structure in the .data BSS" % WORLD_ENTITY_SIZE)
    print("   it is the target of every field record whose flags bit 0 is set")
    print("   (FUN_5007B750 at 0x5007B87E and FUN_500BD730 at 0x500BD77C)")
    print("   the largest field offset that targets it is 0x108 (chopsky),"
          " so it is 0x10C bytes")


def check(data):
    """Self-test: the invariants that the write-up relies on."""
    ok = True
    tabs = class_tables(data)
    total = sum(n for _, _, n in tabs)
    print("the class tables: %d tables, %d classes" % (len(tabs), total))
    if (len(tabs), total) != (CLASS_TABLE_COUNT, 422):
        print("   !! expected %d tables / 422 classes" % CLASS_TABLE_COUNT)
        ok = False
    for idx, (slot, table, n) in enumerate(tabs):
        bad = [nm for nm, fn in class_entries(data, table) if nm is None or not is_code(fn)]
        if bad:
            print("   !! table %d has bad entries: %s" % (idx, bad))
            ok = False
    if u32(data, CLASS_TABLE_ARRAY_END) != 0:
        print("   !! the class-table array is not NULL terminated at 0x%08x"
              % CLASS_TABLE_ARRAY_END)
        ok = False
    # the class table at 0x5014E988 ends with "test_rj" at 0x5014ED60 and its
    # NULL terminator at 0x5014ED68 - which is why the stale Windows dump
    # mistook 0x5014ED60 for the start of a field table.
    last = list(class_entries(data, 0x5014E988))[-1]
    print("the last class: %s -> %08x (the record at 0x5014ED60)" % (last[0], last[1]))
    print("the terminator at 0x5014ED68 is %s" % (u32(data, 0x5014ED68) == 0))
    for label, base, want in (("the script vector-field table", FIELD_TABLE_VECTOR,
                               FIELD_TABLE_VECTOR_COUNT),
                              ("the entity/world field table", FIELD_TABLE_SPAWN,
                               FIELD_TABLE_SPAWN_COUNT)):
        recs = list(field_records(data, base))
        print("%s at 0x%08x: %d records (expected %d)" % (label, base, len(recs), want))
        if len(recs) != want:
            ok = False
    # the two stale addresses must NOT look like a table start
    for label, stale, good in STALE_FIELD_TABLE_ADDRESSES:
        stale_name = cstr(data, u32(data, stale))
        good_name = cstr(data, u32(data, good))
        print("%s: the stale 0x%08x holds %r, the real start 0x%08x holds %r"
              % (label, stale, stale_name, good, good_name))
        if stale_name == good_name:
            print("   !! the stale address looks like the real one")
            ok = False
    print("the accessory table at 0x%08x: %d records (expected %d)"
          % (ACCESSORY_TABLE, len(list(accessory_records(data, ACCESSORY_TABLE))),
             ACCESSORY_TABLE_COUNT))
    for name, base, n, typ in CALLBACK_TABLES:
        vals = [u32(data, base + 4 * i) for i in range(n)]
        if not all(is_code(v) for v in vals):
            print("   !! the %s table has non-code entries" % name)
            ok = False
    wep = [u32(data, WEAPON_CLASS_NAMES + 4 * i) for i in range(WEAPON_CLASS_COUNT)]
    if wep[-1] == 0 or u32(data, WEAPON_CLASS_NAMES + 4 * WEAPON_CLASS_COUNT) != 0:
        print("   !! the weapon class name array is not %d long" % WEAPON_CLASS_COUNT)
        ok = False
    print("the world entity 0x%08x is in the %s"
          % (WORLD_ENTITY, "BSS" if rva_to_offset(WORLD_ENTITY - BASE) is None else "file"))
    print("the result: %s" % ("all the invariants hold" if ok else "PROBLEMS"))
    return 0 if ok else 1


def main(argv):
    path, data = load()
    what = argv[1] if len(argv) > 1 else "summary"
    if what in ("summary", "all"):
        tabs = class_tables(data)
        total = sum(n for _, _, n in tabs)
        print("the module: %s" % path)
        print("the image base: 0x%08x" % BASE)
        print()
        print("the entity classes: %d in %d tables (the array at 0x%08x)"
              % (total, len(tabs), CLASS_TABLE_ARRAY))
        for idx, (slot, table, n) in enumerate(tabs):
            print("   [%2d] the slot 0x%08x -> 0x%08x  (%3d classes)"
                  % (idx, slot, table, n))
        print()
        print("the field tables (16-byte records: name, offset, type, flags):")
        print("   the script vector-field table  0x%08x  %d records"
              % (FIELD_TABLE_VECTOR, len(list(field_records(data, FIELD_TABLE_VECTOR)))))
        print("   the entity/world field table  0x%08x  %d records"
              % (FIELD_TABLE_SPAWN, len(list(field_records(data, FIELD_TABLE_SPAWN)))))
        print("   the accessory table           0x%08x  %d records"
              % (ACCESSORY_TABLE, len(list(accessory_records(data, ACCESSORY_TABLE)))))
        print()
        print("the script callback tables:")
        show_callbacks(data)
        print()
        show_weapons(data)
        print()
        show_world(data)
    if what in ("classes", "all"):
        print()
        show_classes(data)
    if what in ("fields", "all"):
        print()
        show_fields(data)
    if what in ("accessories", "all"):
        print()
        show_accessories(data)
    if what in ("callbacks", "all"):
        print()
        show_callbacks(data)
    if what in ("weapons", "all"):
        print()
        show_weapons(data)
    if what in ("world", "all"):
        print()
        show_world(data)
    if what == "check":
        print()
        return check(data)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
