#!/usr/bin/env python3
"""Boundary-aware audit of the client weapon-class callbacks in player.dll.

Static-only decoder.  It consumes the shipped PE, the raw objdump listing,
the constructor-validated class/vtable map, and Ghidra's partial function
inventory.  No game code is executed.

The previous version of this audit attributed every instruction to the
nearest preceding vtable target.  That is unsafe in an MSVC image: a callback
can be followed by alignment NOPs and by unrelated helper functions which are
not themselves vtable targets.  This version instead uses:

* exact Ghidra ranges when Ghidra inventoried the function;
* otherwise, the next independently proven function start (a Ghidra entry,
  a direct-call target, or a vtable target);
* a trailing RET followed by an alignment-NOP run as an additional boundary.

For each callback it reports direct calls, printable string immediates, and
ECX-derived class-instance field reads/writes.  Register provenance is tracked
linearly; calls conservatively invalidate EAX/ECX/EDX, while EBX/ESI/EDI are
treated as callee-saved.  Consequently field entries are evidence aids, not
a claim that every branch or alias has been solved.
"""
from __future__ import annotations

import hashlib
import re
import struct
from dataclasses import dataclass
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parent.parent
VTABLE_FILE = HERE / "player_vtables.txt"
DISASM_FILE = HERE / "player_disasm.txt"
GHIDRA_FILE = ROOT / "Soldier of Fortune" / "analysis" / "player_funcs.txt"
PE_FILE = ROOT / "Soldier of Fortune" / "Base" / "player.dll"
OUT_FILE = HERE / "player_client_class_audit.txt"

IMAGE_BASE = 0x40000000
TEXT_START = 0x40001000
TEXT_END = 0x4000A810
DATA_START = 0x40015000
DATA_END = 0x40019000

CLASS_RE = re.compile(r"^\[(\d+)\]\s+(.+?)\s+0x([0-9a-f]+)$")
SLOT_RE = re.compile(r"^\s+\+0x([0-9a-f]+)\s+([0-9a-f]+)$")
GHIDRA_RE = re.compile(r"^FUNC\s+([0-9a-f]+)\s+(\d+)\s+")
LINE_RE = re.compile(r"^\s*([0-9a-f]+):\s+(.+?)\s*$")
DIRECT_CALL_RE = re.compile(r"^0x([0-9a-f]+)$")
DATA_IMM_RE = re.compile(r"0x(4001[5-8][0-9a-f]{3})")
MEM_RE = re.compile(
    r"\[(?P<base>e?[abcds][xip])?(?:\+(?P<off>0x[0-9a-f]+|\d+))?\]"
)
MOV_REG_REG_RE = re.compile(r"^(e?[abcds][xip]),(e?[abcds][xip])$")
MOV_REG_IMM_RE = re.compile(r"^(e?[abcds][xip]),(?:0x[0-9a-f]+|\d+)$")
MOV_REG_MEM_RE = re.compile(
    r"^(?P<dst>e?[abcds][xip]),(?:(?:byte|word|dword)ptr)?\[(?P<base>e?[abcds][xip])?(?:\+(?P<off>0x[0-9a-f]+|\d+))?\]$"
)
MOV_MEM_REG_RE = re.compile(
    r"^(?:(?:byte|word|dword)ptr)?\[(?P<base>e?[abcds][xip])?(?:\+(?P<off>0x[0-9a-f]+|\d+))?\],(?P<src>e?[abcds][xip])$"
)
LEA_RE = re.compile(
    r"^(?P<dst>e?[abcds][xip]),(?:(?:byte|word|dword)ptr)?\[(?P<base>e?[abcds][xip])?(?:\+(?P<off>0x[0-9a-f]+|\d+))?\]$"
)
ADD_SUB_RE = re.compile(r"^(?P<dst>e?[abcds][xip]),(?:0x[0-9a-f]+|\d+)$")
XOR_RE = re.compile(r"^(e?[abcds][xip]),(e?[abcds][xip])$")


@dataclass(frozen=True)
class Instruction:
    addr: int
    mnemonic: str
    operands: str
    text: str


@dataclass(frozen=True)
class CandidateOrigin:
    """A register value known to point into an entry-register/argument object."""

    label: str
    offset: int = 0


@dataclass
class FunctionRange:
    start: int
    end: int
    raw_end: int
    source: str
    confidence: str


def sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as fh:
        for chunk in iter(lambda: fh.read(1024 * 1024), b""):
            h.update(chunk)
    return h.hexdigest()


def parse_vtables() -> list[tuple[str, int, int]]:
    rows: list[tuple[str, int, int]] = []
    current: str | None = None
    for line in VTABLE_FILE.read_text().splitlines():
        cm = CLASS_RE.match(line)
        if cm:
            current = cm.group(2)
            continue
        sm = SLOT_RE.match(line)
        if sm and current is not None:
            rows.append((current, int(sm.group(1), 16), int(sm.group(2), 16)))
    return rows


def parse_ghidra_ranges() -> dict[int, int]:
    out: dict[int, int] = {}
    for line in GHIDRA_FILE.read_text(errors="replace").splitlines():
        m = GHIDRA_RE.match(line)
        if not m:
            continue
        start = int(m.group(1), 16)
        size = int(m.group(2))
        if size > 0:
            out[start] = start + size - 1
    return out


def parse_disasm() -> list[Instruction]:
    out: list[Instruction] = []
    for line in DISASM_FILE.read_text(errors="replace").splitlines():
        # Intel-style objdump separates address, bytes, and instruction by tabs.
        parts = line.split("\t")
        if len(parts) < 3 or not parts[0].strip():
            continue
        try:
            addr = int(parts[0].strip().rstrip(":"), 16)
        except ValueError:
            continue
        instruction_text = parts[2].strip()
        if len(parts) > 3 and parts[3].strip():
            instruction_text += " " + parts[3].strip()
        split = instruction_text.split(None, 1)
        mnemonic = split[0] if split else ""
        operands = split[1] if len(split) > 1 else ""
        out.append(Instruction(addr, mnemonic, operands, instruction_text))
    return out


def pe_sections(blob: bytes) -> tuple[int, list[tuple[int, int, int, int]]]:
    if blob[:2] != b"MZ":
        raise ValueError("not an MZ image")
    pe_off = struct.unpack_from("<I", blob, 0x3C)[0]
    if blob[pe_off : pe_off + 4] != b"PE\0\0":
        raise ValueError("not a PE image")
    coff = pe_off + 4
    section_count = struct.unpack_from("<H", blob, coff + 2)[0]
    optional_size = struct.unpack_from("<H", blob, coff + 16)[0]
    optional = coff + 20
    if struct.unpack_from("<H", blob, optional)[0] != 0x10B:
        raise ValueError("expected PE32")
    image_base = struct.unpack_from("<I", blob, optional + 28)[0]
    section_table = optional + optional_size
    sections: list[tuple[int, int, int, int]] = []
    for index in range(section_count):
        off = section_table + index * 40
        virtual_size, virtual_address, raw_size, raw_pointer = struct.unpack_from(
            "<IIII", blob, off + 8
        )
        sections.append((virtual_address, virtual_size, raw_size, raw_pointer))
    return image_base, sections


def pe_va_to_offset(blob: bytes, va: int) -> int | None:
    image_base, sections = pe_sections(blob)
    rva = va - image_base
    for virtual_address, virtual_size, raw_size, raw_pointer in sections:
        span = max(virtual_size, raw_size)
        if virtual_address <= rva < virtual_address + span:
            return raw_pointer + (rva - virtual_address)
    return None


def read_c_string(blob: bytes, va: int) -> str | None:
    if not (DATA_START <= va < DATA_END):
        return None
    off = pe_va_to_offset(blob, va)
    if off is None or off >= len(blob):
        return None
    end = blob.find(b"\0", off, min(len(blob), off + 256))
    if end < 0:
        return None
    raw = blob[off:end]
    if not raw or any(byte < 0x20 or byte > 0x7E for byte in raw):
        return None
    return raw.decode("ascii")


def direct_target(operands: str) -> int | None:
    m = DIRECT_CALL_RE.match(operands.strip())
    return int(m.group(1), 16) if m else None


def parse_mem(operands: str) -> tuple[str | None, int] | None:
    m = MEM_RE.search(operands)
    if not m:
        return None
    base = m.group("base")
    off_text = m.group("off")
    offset = int(off_text, 0) if off_text else 0
    return base, offset


def normalized_reg(reg: str | None) -> str | None:
    if reg is None:
        return None
    reg = reg.lower()
    return reg if reg.startswith("e") else "e" + reg


def track_candidate_fields(
    instructions: list[Instruction],
) -> list[tuple[int, str, int, str, str]]:
    """Return (address, origin label, offset, access, instruction).

    ECX is tracked as an *entry-register candidate* because the vtable mixes
    thiscall and stack-argument callbacks.  Original stack arguments are
    tracked as ARG1..ARG4 candidates by following ESP adjustments.  The
    labels deliberately do not assert the semantic type of either object.
    Values loaded from candidate fields are then treated as unknown pointers.
    """

    values: dict[str, CandidateOrigin | None] = {
        reg: None
        for reg in ("eax", "ebx", "ecx", "edx", "esi", "edi", "ebp", "esp")
    }
    values["ecx"] = CandidateOrigin("ECX", 0)
    observations: list[tuple[int, str, int, str, str]] = []
    esp_delta = 0

    for insn in instructions:
        mnemonic = insn.mnemonic.lower()
        operands = insn.operands.lower().replace(" ", "")

        if mnemonic == "push":
            esp_delta -= 4
            continue
        if mnemonic == "pop":
            esp_delta += 4
            dst = normalized_reg(operands)
            if dst:
                values[dst] = None
            continue
        if mnemonic in {"add", "sub"} and operands.startswith("esp,"):
            amount = int(operands.split(",", 1)[1], 0)
            esp_delta += amount if mnemonic == "add" else -amount
            continue
        if mnemonic == "call":
            # Conservative caller-clobber model for direct/indirect calls.
            values["eax"] = None
            values["ecx"] = None
            values["edx"] = None
            continue
        if mnemonic == "ret":
            continue

        if mnemonic == "mov":
            mm = MOV_REG_REG_RE.match(operands)
            if mm:
                dst = normalized_reg(mm.group(1))
                src = normalized_reg(mm.group(2))
                if dst:
                    values[dst] = values.get(src)
                continue
            mm = MOV_REG_MEM_RE.match(operands)
            if mm:
                dst = normalized_reg(mm.group("dst"))
                base = normalized_reg(mm.group("base"))
                offset = int(mm.group("off"), 0) if mm.group("off") else 0
                if base == "esp":
                    effective = offset + esp_delta
                    if effective >= 4 and effective <= 0x1C and effective % 4 == 0:
                        if dst:
                            values[dst] = CandidateOrigin(f"ARG{effective // 4}", 0)
                    else:
                        if dst:
                            values[dst] = None
                    continue
                origin = values.get(base) if base else None
                if origin is not None:
                    observations.append(
                        (insn.addr, origin.label, origin.offset + offset, "read", insn.text)
                    )
                if dst:
                    values[dst] = None
                continue
            mm = MOV_MEM_REG_RE.match(operands)
            if mm:
                base = normalized_reg(mm.group("base"))
                offset = int(mm.group("off"), 0) if mm.group("off") else 0
                origin = values.get(base) if base else None
                if origin is not None:
                    observations.append(
                        (insn.addr, origin.label, origin.offset + offset, "write", insn.text)
                    )
                continue
            mm = MOV_REG_IMM_RE.match(operands)
            if mm:
                dst = normalized_reg(mm.group(1))
                if dst:
                    values[dst] = None
                continue
            continue

        if mnemonic == "lea":
            mm = LEA_RE.match(operands)
            if mm:
                dst = normalized_reg(mm.group("dst"))
                base = normalized_reg(mm.group("base"))
                offset = int(mm.group("off"), 0) if mm.group("off") else 0
                origin = values.get(base) if base else None
                if origin is not None:
                    observations.append(
                        (insn.addr, origin.label, origin.offset + offset, "address", insn.text)
                    )
                    if dst:
                        values[dst] = CandidateOrigin(origin.label, origin.offset + offset)
                else:
                    if dst:
                        values[dst] = None
                continue

        if mnemonic in {"add", "sub"}:
            mm = ADD_SUB_RE.match(operands)
            if mm:
                dst = normalized_reg(mm.group("dst"))
                origin = values.get(dst) if dst else None
                if dst and isinstance(origin, CandidateOrigin):
                    amount = int(operands.split(",", 1)[1], 0)
                    values[dst] = CandidateOrigin(
                        origin.label,
                        origin.offset + amount if mnemonic == "add" else origin.offset - amount,
                    )
                continue

        if mnemonic == "xor":
            mm = XOR_RE.match(operands)
            if mm and mm.group(1) == mm.group(2):
                dst = normalized_reg(mm.group(1))
                if dst:
                    values[dst] = None
                continue

    return observations


def infer_ranges(
    instructions: list[Instruction],
    ghidra: dict[int, int],
    vtable_targets: set[int],
) -> tuple[dict[int, FunctionRange], dict[str, int]]:
    by_addr = {insn.addr: insn for insn in instructions}
    addrs = sorted(by_addr)

    direct_targets = {
        target
        for insn in instructions
        if insn.mnemonic.lower() == "call"
        for target in [direct_target(insn.operands)]
        if target is not None and TEXT_START <= target < TEXT_END
    }
    strong_starts = set(ghidra) | direct_targets | vtable_targets

    # RET + a run of alignment NOPs is a strong end/start boundary.  The
    # successor of the NOP run is a proven start even if Ghidra missed it.
    padding_successors: set[int] = set()
    padding_starts: list[tuple[int, int]] = []
    index = 0
    while index < len(addrs):
        if by_addr[addrs[index]].mnemonic.lower() != "nop":
            index += 1
            continue
        run_start = addrs[index]
        run_end_index = index
        while (
            run_end_index + 1 < len(addrs)
            and by_addr[addrs[run_end_index + 1]].mnemonic.lower() == "nop"
        ):
            run_end_index += 1
        run_end = addrs[run_end_index]
        previous = by_addr[addrs[index - 1]] if index else None
        successor = addrs[run_end_index + 1] if run_end_index + 1 < len(addrs) else None
        if (
            previous is not None
            and previous.mnemonic.lower().startswith("ret")
            and run_end_index - index + 1 >= 3
            and successor is not None
        ):
            padding_starts.append((run_start, successor))
            padding_successors.add(successor)
        index = run_end_index + 1

    strong_starts |= padding_successors
    sorted_starts = sorted(strong_starts)

    def next_start(start: int) -> int | None:
        for candidate in sorted_starts:
            if candidate > start:
                return candidate
        return None

    def trim_trailing_nops(start: int, end: int) -> int:
        while end >= start and by_addr.get(end) and by_addr[end].mnemonic.lower() == "nop":
            end -= 1
        return end

    ranges: dict[int, FunctionRange] = {}
    for start in sorted(set(vtable_targets) | set(ghidra)):
        if start in ghidra:
            raw_end = ghidra[start]
            code_end = trim_trailing_nops(start, raw_end)
            ranges[start] = FunctionRange(
                start, code_end, raw_end, "Ghidra exact function range", "high"
            )
            continue
        successor = next_start(start)
        if successor is None:
            continue
        raw_end = successor - 1
        # Prefer a RET/NOP boundary when one occurs before the next strong
        # start; otherwise the next strong start itself bounds the function.
        boundary = None
        for pad_start, pad_successor in padding_starts:
            if start < pad_start < successor:
                boundary = pad_start - 1
                break
        if boundary is None:
            boundary = raw_end
        code_end = trim_trailing_nops(start, boundary)
        source = "inferred direct-call/vtable/Ghidra start boundary"
        confidence = "medium-high"
        for pad_start, pad_successor in padding_starts:
            if start < pad_start < successor:
                source = "inferred RET + alignment-NOP boundary"
                confidence = "high"
                break
        ranges[start] = FunctionRange(start, code_end, raw_end, source, confidence)

    stats = {
        "instructions": len(instructions),
        "ghidra_ranges": len(ghidra),
        "direct_call_targets": len(direct_targets),
        "vtable_targets": len(vtable_targets),
        "padding_boundaries": len(padding_starts),
    }
    return ranges, stats


def instructions_for(
    instructions: list[Instruction], function: FunctionRange
) -> list[Instruction]:
    return [
        insn
        for insn in instructions
        if function.start <= insn.addr <= function.end
    ]


def format_hex_set(values: set[int]) -> str:
    return ", ".join(f"0x{value:08x}" for value in sorted(values))


def main() -> int:
    vtables = parse_vtables()
    vtable_targets = {fn for _, _, fn in vtables}
    instructions = parse_disasm()
    ghidra = parse_ghidra_ranges()
    ranges, stats = infer_ranges(instructions, ghidra, vtable_targets)
    blob = PE_FILE.read_bytes()

    with OUT_FILE.open("w") as out:
        out.write("player.dll client class callback audit (boundary-aware)\n")
        out.write(f"player.dll sha256: {sha256(PE_FILE)}\n")
        out.write(f"image base: 0x{IMAGE_BASE:08x}\n")
        out.write(f"disassembly: {DISASM_FILE.relative_to(ROOT)}\n")
        out.write(f"vtable map: {VTABLE_FILE.relative_to(ROOT)}\n")
        out.write(f"Ghidra inventory: {GHIDRA_FILE.relative_to(ROOT)}\n")
        out.write(
            "text bounds: "
            f"0x{TEXT_START:08x}..0x{TEXT_END - 1:08x}; "
            f"string bounds: 0x{DATA_START:08x}..0x{DATA_END - 1:08x}\n"
        )
        out.write(
            "boundary policy: exact Ghidra range; otherwise next independently "
            "proven Ghidra/direct-call/vtable start, tightened by RET+NOP padding\n"
        )
        out.write(
            "field policy: ECX and original stack arguments are tracked as "
            "candidate bases; semantic object types are not asserted; calls "
            "invalidate EAX/ECX/EDX\n"
        )
        out.write(
            "coverage: "
            + ", ".join(f"{key}={value}" for key, value in stats.items())
            + "\n"
        )
        out.write(
            "confidence labels describe range attribution, not the semantic "
            "meaning of an access or call.\n\n"
        )

        for cls, slot, fn in vtables:
            function = ranges.get(fn)
            out.write(f"{cls:12s} +0x{slot:02x} -> 0x{fn:08x}\n")
            if function is None:
                out.write("  range: UNRESOLVED (no independently proven boundary)\n")
                continue
            out.write(
                f"  range: 0x{function.start:08x}..0x{function.end:08x} "
                f"(raw through 0x{function.raw_end:08x}); {function.source}; "
                f"confidence={function.confidence}\n"
            )
            body = instructions_for(instructions, function)
            strings: list[str] = []
            calls: list[str] = []
            for insn in body:
                for match in DATA_IMM_RE.finditer(insn.operands):
                    va = int(match.group(1), 16)
                    value = read_c_string(blob, va)
                    if value is not None:
                        strings.append(f"0x{va:08x}={value!r}")
                if insn.mnemonic.lower() == "call":
                    target = direct_target(insn.operands)
                    if target is not None:
                        calls.append(f"0x{target:08x}")
            strings = list(dict.fromkeys(strings))
            calls = list(dict.fromkeys(calls))
            if strings:
                out.write("  strings: " + "; ".join(strings) + "\n")
            if calls:
                out.write("  calls: " + ", ".join(calls) + "\n")

            fields = track_candidate_fields(body)
            if fields:
                grouped: dict[str, dict[int, list[tuple[int, str, str]]]] = {}
                for addr, label, offset, access, text in fields:
                    grouped.setdefault(label, {}).setdefault(offset, []).append(
                        (addr, access, text)
                    )
                out.write("  candidate-base fields (semantic object type not asserted):\n")
                for label in sorted(grouped):
                    out.write(f"    {label}:\n")
                    for offset in sorted(grouped[label]):
                        accesses = grouped[label][offset]
                        details = ", ".join(
                            f"0x{addr:08x}={access}" for addr, access, _ in accesses
                        )
                        out.write(f"      +0x{offset:02x}: {details}\n")
            else:
                out.write(
                    "  candidate-base fields: (none proven in range)\n"
                )
            out.write("\n")

        # Focused constructor provenance.  This function is not a vtable
        # callback, but it is the authoritative writer of the copied fields.
        constructor = ranges.get(0x40009D20)
        out.write("Focused class-constructor provenance\n")
        if constructor is None:
            out.write("  FUN_40009d20: range unresolved\n")
        else:
            out.write(
                f"  FUN_40009d20 range 0x{constructor.start:08x}.."
                f"0x{constructor.end:08x}; {constructor.source}; "
                f"confidence={constructor.confidence}\n"
            )
            body = instructions_for(instructions, constructor)
            for insn in body:
                if insn.addr in {
                    0x40009D3A,
                    0x40009D40,
                    0x40009D42,
                    0x40009D45,
                    0x40009D48,
                    0x40009D4A,
                    0x40009D4D,
                    0x40009D50,
                    0x40009D53,
                    0x40009D56,
                    0x40009D59,
                    0x40009D5C,
                    0x40009D5F,
                    0x40009D62,
                    0x40009D65,
                    0x40009D68,
                    0x40009D6B,
                    0x40009D6E,
                }:
                    out.write(f"    0x{insn.addr:08x}: {insn.text}\n")

        out.write(
            "\nNegative-search boundary for this audit: player.dll .text "
            f"0x{TEXT_START:08x}..0x{TEXT_END - 1:08x}; printable immediates "
            f"were read only from 0x{DATA_START:08x}..0x{DATA_END - 1:08x}.\n"
        )

    print(OUT_FILE)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
