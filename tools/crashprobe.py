"""
crashprobe.py - minimal Windows crash probe.

Launches a child under the debug API, records every loaded module with its
real SizeOfImage, waits for an access violation, and reports the faulting
address plus the module it falls in.

Usage: python crashprobe.py <exe> [args...]
"""

import ctypes
import ctypes.wintypes as wt
import struct
import sys

k32 = ctypes.WinDLL("kernel32", use_last_error=True)

DEBUG_ONLY_THIS_PROCESS = 0x00000002
CREATE_NO_WINDOW = 0x08000000
EXCEPTION_DEBUG_EVENT = 1
CREATE_PROCESS_DEBUG_EVENT = 3
EXIT_PROCESS_DEBUG_EVENT = 5
LOAD_DLL_DEBUG_EVENT = 6
EXCEPTION_ACCESS_VIOLATION = 0xC0000005
EXCEPTION_ILLEGAL_INSTRUCTION = 0xC000001D
EXCEPTION_STACK_OVERFLOW = 0xC00000FD
EXCEPTION_PRIV_INSTRUCTION = 0xC0000096
DBG_CONTINUE = 0x00010002
DBG_EXCEPTION_NOT_HANDLED = 0x80010001
INFINITE = 0xFFFFFFFF
SIZE_T = ctypes.c_size_t


class STARTUPINFOW(ctypes.Structure):
    _fields_ = [
        ("cb", wt.DWORD), ("lpReserved", wt.LPWSTR), ("lpDesktop", wt.LPWSTR),
        ("lpTitle", wt.LPWSTR), ("dwX", wt.DWORD), ("dwY", wt.DWORD),
        ("dwXSize", wt.DWORD), ("dwYSize", wt.DWORD), ("dwXCountChars", wt.DWORD),
        ("dwYCountChars", wt.DWORD), ("dwFillAttribute", wt.DWORD),
        ("dwFlags", wt.DWORD), ("wShowWindow", wt.WORD), ("cbReserved2", wt.WORD),
        ("lpReserved2", ctypes.POINTER(ctypes.c_byte)), ("hStdInput", wt.HANDLE),
        ("hStdOutput", wt.HANDLE), ("hStdError", wt.HANDLE),
    ]


class PROCESS_INFORMATION(ctypes.Structure):
    _fields_ = [
        ("hProcess", wt.HANDLE), ("hThread", wt.HANDLE),
        ("dwProcessId", wt.DWORD), ("dwThreadId", wt.DWORD),
    ]


class DEBUG_EVENT(ctypes.Structure):
    _fields_ = [
        ("code", wt.DWORD), ("pid", wt.DWORD), ("tid", wt.DWORD),
        # the real union holds PVOID64 members, so it is 8-byte aligned and
        # starts at offset 16 - not 12.
        ("pad", wt.DWORD),
        ("u", ctypes.c_byte * 192),
    ]


k32.CreateProcessW.argtypes = [wt.LPWSTR, wt.LPWSTR, wt.LPVOID, wt.LPVOID,
                                wt.BOOL, wt.DWORD, wt.LPVOID, wt.LPWSTR,
                                ctypes.POINTER(STARTUPINFOW),
                                ctypes.POINTER(PROCESS_INFORMATION)]
k32.WaitForDebugEvent.argtypes = [ctypes.POINTER(DEBUG_EVENT), wt.DWORD]
k32.ContinueDebugEvent.argtypes = [wt.DWORD, wt.DWORD, wt.DWORD]
k32.ReadProcessMemory.argtypes = [wt.HANDLE, wt.LPVOID, wt.LPVOID, SIZE_T,
                                  ctypes.POINTER(SIZE_T)]


def read_mem(hproc, addr, size):
    if not addr:
        return b""
    buf = (ctypes.c_byte * size)()
    got = SIZE_T(0)
    ok = k32.ReadProcessMemory(hproc, ctypes.c_void_p(addr), buf, size,
                               ctypes.byref(got))
    return bytes(buf[:got.value]) if ok else b""


def pe_size(hproc, base):
    """SizeOfImage from the loaded PE header."""
    hdr = read_mem(hproc, base, 0x400)
    if len(hdr) < 0x40 or hdr[:2] != b"MZ":
        return 0
    e_lfanew = struct.unpack_from("<I", hdr, 0x3C)[0]
    if e_lfanew + 0x58 > len(hdr):
        return 0
    return struct.unpack_from("<I", hdr, e_lfanew + 0x50)[0]


def image_name(hproc, us_ptr):
    """Resolve a UNICODE_STRING* (in the target) to a python str."""
    if not us_ptr:
        return "?"
    us = read_mem(hproc, us_ptr, 16)
    if len(us) < 16:
        return "?"
    length = struct.unpack_from("<H", us, 0)[0]
    buf = struct.unpack_from("<I", us, 4)[0]
    if not length or not buf:
        return "?"
    raw = read_mem(hproc, buf, length)
    try:
        return raw.decode("utf-16-le")
    except Exception:
        return "?"


psapi = ctypes.WinDLL("psapi", use_last_error=True)


class MODULEINFO(ctypes.Structure):
    _fields_ = [("lpBaseOfDll", wt.LPVOID), ("SizeOfImage", wt.DWORD),
                ("EntryPoint", wt.LPVOID)]


psapi.GetModuleInformation.argtypes = [wt.HANDLE, wt.HMODULE,
                                      ctypes.POINTER(MODULEINFO), wt.DWORD]
psapi.EnumProcessModules.argtypes = [wt.HANDLE, ctypes.POINTER(wt.HMODULE),
                                     wt.DWORD, ctypes.POINTER(wt.DWORD)]
psapi.GetModuleFileNameExW.argtypes = [wt.HANDLE, wt.HMODULE, wt.LPWSTR, wt.DWORD]


def enumerate_modules(hproc):
    """Live module list of a still-running (crashed but not yet killed) process."""
    out = []
    handles = (wt.HMODULE * 1024)()
    needed = wt.DWORD(0)
    if not psapi.EnumProcessModules(hproc, handles, ctypes.sizeof(handles),
                                    ctypes.byref(needed)):
        return out
    n = needed.value // ctypes.sizeof(wt.HMODULE)
    for i in range(min(n, 1024)):
        mi = MODULEINFO()
        if not psapi.GetModuleInformation(hproc, handles[i], ctypes.byref(mi),
                                        ctypes.sizeof(mi)):
            continue
        buf = ctypes.create_unicode_buffer(1024)
        psapi.GetModuleFileNameExW(hproc, handles[i], buf, 1024)
        out.append((ctypes.cast(mi.lpBaseOfDll, ctypes.c_void_p).value or 0,
                    mi.SizeOfImage, buf.value or "?"))
    return out


def main():
    exe = sys.argv[1]
    args = sys.argv[2:]

    si = STARTUPINFOW()
    si.cb = ctypes.sizeof(si)
    pi = PROCESS_INFORMATION()

    cmd = ctypes.create_unicode_buffer("\x00".join([exe] + args))
    if not k32.CreateProcessW(None, cmd, None, None, False,
                              DEBUG_ONLY_THIS_PROCESS | CREATE_NO_WINDOW,
                              None, None, ctypes.byref(si), ctypes.byref(pi)):
        print("CreateProcess failed: %d" % ctypes.get_last_error())
        return 2

    modules = []
    modules_seen = 0
    fault = None
    ev = DEBUG_EVENT()

    for _ in range(6000):
        if not k32.WaitForDebugEvent(ctypes.byref(ev), INFINITE):
            break
        code = ev.code
        u = bytes(ev.u)
        status = DBG_CONTINUE

        if modules_seen < 3 and code in (CREATE_PROCESS_DEBUG_EVENT,
                                         LOAD_DLL_DEBUG_EVENT):
            print("[raw %s] %s" % (
                hex(code),
                " ".join("%02X" % b for b in bytes(ev)[:48])))
            modules_seen += 1

        if code == CREATE_PROCESS_DEBUG_EVENT:
            base = struct.unpack_from("<I", u, 12)[0]
            name = image_name(pi.hProcess, struct.unpack_from("<I", u, 20)[0])
            modules.append((base, pe_size(pi.hProcess, base), name))
        elif code == LOAD_DLL_DEBUG_EVENT:
            base = struct.unpack_from("<I", u, 4)[0]
            name = image_name(pi.hProcess, struct.unpack_from("<I", u, 16)[0])
            modules.append((base, pe_size(pi.hProcess, base), name))
        elif code == EXCEPTION_DEBUG_EVENT:
            exc_code = struct.unpack_from("<I", u, 0)[0]
            addr = struct.unpack_from("<Q", u, 16)[0]
            first = struct.unpack_from("<I", u, 148)[0]
            if exc_code in (EXCEPTION_ACCESS_VIOLATION,
                            EXCEPTION_ILLEGAL_INSTRUCTION,
                            EXCEPTION_STACK_OVERFLOW,
                            EXCEPTION_PRIV_INSTRUCTION):
                print("EXCEPTION code=0x%08X address=0x%016X first_chance=%d"
                      % (exc_code, addr, first))
                if not first:
                    fault = (exc_code, addr)
                    live = enumerate_modules(pi.hProcess)
                    status = DBG_EXCEPTION_NOT_HANDLED
        elif code == EXIT_PROCESS_DEBUG_EVENT:
            k32.ContinueDebugEvent(ev.pid, ev.tid, DBG_CONTINUE)
            break

        k32.ContinueDebugEvent(ev.pid, ev.tid, status)
        if fault:
            break

    print("\nlive modules at fault (%d):" % len(live))
    for base, size, nm in sorted(live):
        short = nm.rsplit("\\", 1)[-1]
        print("  0x%08X - 0x%08X  %s" % (base, base + size, short))

    if fault:
        exc_code, addr = fault
        print("\nFAULT: code=0x%08X address=0x%016X" % (exc_code, addr))
        for base, size, nm in live:
            if size and base <= addr < base + size:
                print("MODULE : %s" % nm)
                print("OFFSET : 0x%X (module base 0x%08X)" % (addr - base, base))
                return 0
        print("FAULT address not inside any reported module")
        return 0

    print("\nno fatal access violation observed")
    return 1


if __name__ == "__main__":
    sys.exit(main())
