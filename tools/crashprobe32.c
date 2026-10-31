/*
 * crashprobe32.c - 32-bit Windows crash probe.
 *
 * A 64-bit debugger cannot enumerate the modules of a WOW64 (32-bit) target:
 * the module list it sees belongs to the 64-bit host (wow64*.dll), not to the
 * 32-bit system DLLs the target actually runs in. Running the probe itself as
 * a 32-bit process fixes that, because CreateToolhelp32Snapshot then returns
 * the target's real 32-bit module list.
 *
 * It launches the target under the debug API, waits for a fatal access
 * violation, then prints the faulting instruction pointer, the module that
 * contains it, the module-relative offset, and the bytes at that address.
 *
 * usage: crashprobe32 <exe> [args...]
 */

#include <windows.h>
#include <tlhelp32.h>
#include <stdio.h>

#define EXCEPTION_ACCESS_VIOLATION   0xC0000005
#define EXCEPTION_ILLEGAL_INSTRUCTION 0xC000001D
#define EXCEPTION_STACK_OVERFLOW     0xC00000FD
#define EXCEPTION_PRIV_INSTRUCTION   0xC0000096
#define DBG_CONTINUE                 0x00010002
#define DBG_EXCEPTION_NOT_HANDLED    0x80010001

static void dump_modules(DWORD pid, DWORD fault_addr)
{
	MODULEENTRY32 me;
	HANDLE snap;

	snap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, pid);
	if (snap == INVALID_HANDLE_VALUE)
		return;

	me.dwSize = sizeof(me);
	if (Module32First(snap, &me)) {
		do {
			DWORD base = (DWORD)(ULONG_PTR)me.modBaseAddr;
			DWORD size = me.modBaseSize;
			if (size && fault_addr >= base && fault_addr < base + size) {
				printf ("  >>> FAULT MODULE : %s\n", me.szModule);
				printf ("  >>> module base  : 0x%08X\n", base);
				printf ("  >>> module size  : 0x%X\n", size);
				printf ("  >>> offset       : 0x%X\n", fault_addr - base);
			}
		} while (Module32Next(snap, &me));
	}
	CloseHandle (snap);
}

static void dump_all_modules(DWORD pid)
{
	MODULEENTRY32 me;
	HANDLE snap;

	snap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, pid);
	if (snap == INVALID_HANDLE_VALUE)
		return;

	me.dwSize = sizeof(me);
	if (Module32First(snap, &me)) {
		do {
			printf ("  0x%08X - 0x%08X  %s\n",
				(DWORD)(ULONG_PTR)me.modBaseAddr,
				(DWORD)(ULONG_PTR)me.modBaseAddr + me.modBaseSize,
				me.szModule);
		} while (Module32Next(snap, &me));
	}
	CloseHandle (snap);
}

int main(int argc, char **argv)
{
	STARTUPINFOA si;
	PROCESS_INFORMATION pi;
	DEBUG_EVENT ev;
	char cmdline[2048];
	CONTEXT ctx;
	DWORD fault_addr = 0;
	DWORD deadline;
	DWORD crash_tid = 0;
	DWORD exc_type = 0;
	DWORD exc_data = 0;
	DWORD target_pid = 0;
	int i, len = 0;
	BOOL created;

	if (argc < 2) {
		printf ("usage: crashprobe32 <exe> [args...]\n");
		printf ("       crashprobe32 --attach <pid>\n");
		return 2;
	}

	/* attach mode: debug an already-running process. Attaching does not
	 * enable the debug heap, so the target keeps its exact runtime
	 * behaviour - which matters here because a launched debuggee does not
	 * reproduce the crash. */
	if (!strcmp (argv[1], "--attach") && argc >= 3) {
		target_pid = (DWORD)atoi (argv[2]);
		pi.hProcess = OpenProcess (PROCESS_ALL_ACCESS, FALSE, target_pid);
		if (!pi.hProcess) {
			printf ("OpenProcess failed: %lu\n", GetLastError ());
			return 2;
		}
		pi.dwProcessId = target_pid;
		if (!DebugActiveProcess (target_pid)) {
			printf ("DebugActiveProcess failed: %lu\n", GetLastError ());
			return 2;
		}
		printf ("attached to pid=%lu\n", target_pid);
		goto events;
	}

	len = _snprintf (cmdline, sizeof (cmdline), "\"%s\"", argv[1]);
	for (i = 2; i < argc; i++)
		len += _snprintf (cmdline + len, sizeof (cmdline) - len, " \"%s\"", argv[i]);

	memset (&si, 0, sizeof (si));
	si.cb = sizeof (si);
	memset (&pi, 0, sizeof (pi));
	setvbuf (stdout, NULL, _IONBF, 0);

	created = CreateProcessA (NULL, cmdline, NULL, NULL, FALSE,
		DEBUG_ONLY_THIS_PROCESS, NULL, NULL, &si, &pi);
	if (!created) {
		printf ("CreateProcess failed: %lu\n", GetLastError ());
		return 2;
	}

	printf ("debugging pid=%lu\n", pi.dwProcessId);

events:
	deadline = GetTickCount () + 20000;

	for (;;) {
		DWORD status = DBG_CONTINUE;
		DWORD code;

		/* bounded wait so a client that does not crash does not hang us */
		if (!WaitForDebugEvent (&ev, 1000)) {
			if ((int)(GetTickCount () - deadline) >= 0) {
				printf ("no fatal exception within 20s "
					"(process still alive?)\n");
				goto done;
			}
			continue;
		}

		code = ev.dwDebugEventCode;

		if (code == EXCEPTION_DEBUG_EVENT) {
			DWORD exc = ev.u.Exception.ExceptionRecord.ExceptionCode;
			DWORD addr = (DWORD)(ULONG_PTR)ev.u.Exception.ExceptionRecord.ExceptionAddress;
			DWORD first = ev.u.Exception.dwFirstChance;

			if (exc == EXCEPTION_ACCESS_VIOLATION ||
				exc == EXCEPTION_ILLEGAL_INSTRUCTION ||
				exc == EXCEPTION_STACK_OVERFLOW ||
				exc == EXCEPTION_PRIV_INSTRUCTION)
			{
				/* the target may loop on the fault, so take the first one */
				if (!fault_addr) {
					fault_addr = addr;
					crash_tid = ev.dwThreadId;
					exc_type = (DWORD)ev.u.Exception.ExceptionRecord.ExceptionInformation[0];
					exc_data = (DWORD)(ULONG_PTR)ev.u.Exception.ExceptionRecord.ExceptionInformation[1];
				}
				printf ("EXCEPTION code=0x%08X address=0x%08X first_chance=%lu\n",
					exc, addr, first);
				status = DBG_EXCEPTION_NOT_HANDLED;
			}
		} else if (code == EXIT_PROCESS_DEBUG_EVENT) {
			ContinueDebugEvent (ev.dwProcessId, ev.dwThreadId, DBG_CONTINUE);
			break;
		}

		ContinueDebugEvent (ev.dwProcessId, ev.dwThreadId, status);
		if (fault_addr)
			break;
	}

done:
	if (fault_addr) {
		unsigned char codebytes[16];
		SIZE_T got = 0;
		HANDLE hThread;

		printf ("\nmodules (%lu):\n", pi.dwProcessId);
		dump_all_modules (pi.dwProcessId);

		printf ("\n");
		dump_modules (pi.dwProcessId, fault_addr);

		printf ("\naccess type : %s\n",
			exc_type == 0 ? "READ" : exc_type == 1 ? "WRITE" : "EXECUTE");
		printf ("fault addr  : 0x%08X\n", exc_data);
		{
			unsigned char db[8];
			SIZE_T got2 = 0;
			if (ReadProcessMemory (pi.hProcess, (LPCVOID)exc_data, db, 4, &got2) && got2 == 4)
				printf ("bytes @fault: %02X %02X %02X %02X\n", db[0], db[1], db[2], db[3]);
		}


		/* instruction bytes at the fault address */
		hThread = OpenThread (THREAD_GET_CONTEXT | THREAD_QUERY_INFORMATION, FALSE, crash_tid);
		if (hThread) {
			ZeroMemory (&ctx, sizeof (ctx));
			ctx.ContextFlags = CONTEXT_CONTROL | CONTEXT_INTEGER;
			if (GetThreadContext (hThread, &ctx)) {
				DWORD esp = ctx.Esp, ebp = ctx.Ebp;
				int depth;

				printf ("\nEIP = 0x%08X  ESP = 0x%08X  EBP = 0x%08X\n",
					ctx.Eip, esp, ebp);
				if (ReadProcessMemory (pi.hProcess, (LPCVOID)ctx.Eip,
					codebytes, sizeof (codebytes), &got))
				{
					SIZE_T k;
					printf ("bytes:");
					for (k = 0; k < got; k++)
						printf (" %02X", codebytes[k]);
					printf ("\n");
				}

				/* walk the frame-pointer chain for return addresses */
				printf ("\nstack (ebp chain):\n");
				for (depth = 0; depth < 24; depth++) {
					DWORD retaddr = 0, next_ebp = 0;
					if (!ReadProcessMemory (pi.hProcess, (LPCVOID)ebp,
						&retaddr, 4, &got) || got != 4)
						break;
					if (!ReadProcessMemory (pi.hProcess, (LPCVOID)(ebp + 4),
						&next_ebp, 4, &got) || got != 4)
						break;
					printf ("  #%02d ebp=0x%08X ret=0x%08X\n", depth, ebp, retaddr);
					{
						MODULEENTRY32 me;
						HANDLE snap = CreateToolhelp32Snapshot (TH32CS_SNAPMODULE, pi.dwProcessId);
						if (snap != INVALID_HANDLE_VALUE) {
							me.dwSize = sizeof (me);
							if (Module32First (snap, &me)) {
								do {
									DWORD base = (DWORD)(ULONG_PTR)me.modBaseAddr;
									if (me.modBaseSize && retaddr >= base &&
										retaddr < base + me.modBaseSize)
									{
										printf ("       -> %s+0x%X\n", me.szModule,
											retaddr - base);
										break;
									}
								} while (Module32Next (snap, &me));
							}
							CloseHandle (snap);
						}
					}
					if (next_ebp <= ebp || next_ebp - ebp > 0x100000)
						break;
					ebp = next_ebp;
				}
			}
			CloseHandle (hThread);
		}
	}

	TerminateProcess (pi.hProcess, 0);
	CloseHandle (pi.hThread);
	CloseHandle (pi.hProcess);
	return fault_addr ? 0 : 1;
}
