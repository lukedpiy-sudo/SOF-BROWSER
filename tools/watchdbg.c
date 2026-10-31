/*
 * watchdbg.c - launch a process under the debug API and print the engine's
 * OutputDebugString traffic (delivered as DBG_PRINT events).
 *
 * Quake III based engines (Soldier of Fortune) print everything through
 * OutputDebugString, not stdout, so a redirected console shows nothing.
 * Under the debug API the same text arrives as DBG_PRINT events, which makes
 * the engine's own diagnostics visible.
 *
 * usage: watchdbg.exe <seconds> <exe> [args...]
 */

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

#define DBG_PRINT 4
#define EXCEPTION_DEBUG_EVENT 1
#define EXIT_PROCESS_DEBUG_EVENT 5
#define CREATE_PROCESS_DEBUG_EVENT 3
#define LOAD_DLL_DEBUG_EVENT 6

static void read_str(HANDLE proc, DWORD addr, char *out, int max)
{
	SIZE_T got = 0;
	char buf[4096];
	int n = 0;

	if (!addr || !ReadProcessMemory(proc, (LPCVOID)addr, buf, sizeof (buf) - 1, &got))
	{
		out[0] = 0;
		return;
	}
	buf[got] = 0;
	/* keep it single-line-ish but readable */
	while (n < max - 1 && buf[n]) {
		char c = buf[n];
		out[n++] = (c == '\r' || c == '\n') ? ' ' : c;
	}
	out[n] = 0;
}

int main(int argc, char **argv)
{
	STARTUPINFOA si;
	PROCESS_INFORMATION pi;
	DEBUG_EVENT ev;
	char cmdline[2048];
	int seconds, i, len = 0;
	DWORD start;

	if (argc < 3) {
		printf ("usage: watchdbg.exe <seconds> <exe> [args...]\n");
		return 2;
	}

	seconds = atoi (argv[1]);

	memset (&si, 0, sizeof (si));
	si.cb = sizeof (si);
	memset (&pi, 0, sizeof (pi));

	len = _snprintf (cmdline, sizeof (cmdline), "\"%s\"", argv[2]);
	for (i = 3; i < argc; i++)
		len += _snprintf (cmdline + len, sizeof (cmdline) - len, " \"%s\"", argv[i]);

	if (!CreateProcessA (NULL, cmdline, NULL, NULL, FALSE,
		DEBUG_ONLY_THIS_PROCESS | CREATE_NO_WINDOW, NULL, NULL, &si, &pi)) {
		printf ("CreateProcess failed: %lu\n", GetLastError ());
		return 2;
	}

	printf ("watching pid=%lu for %ds\n", pi.dwProcessId, seconds);

	start = GetTickCount ();
	while ((int)(GetTickCount () - start) < seconds * 1000) {
		if (!WaitForDebugEvent (&ev, 500))
			continue;

		if (ev.dwDebugEventCode == DBG_PRINT) {
			/* ANSI OutputDebugString: the pointer is the first dword of the
			 * event union and the string lives in the debuggee's space. */
			DWORD addr = *(DWORD *)(void *)&ev.u;
			char text[4096];
			read_str (pi.hProcess, addr, text, sizeof (text));
			if (!text[0]) {
				/* Unicode variant: the string is in our own address space */
				const wchar_t *w = (const wchar_t *)(void *)&ev.u;
				int k = 0;
				while (k < (int)sizeof (text) - 1 && w[k] && w[k] != '\n' && w[k] != '\r') {
					text[k] = (w[k] < 128) ? (char)w[k] : '?';
					k++;
				}
				text[k] = 0;
			}
			if (text[0])
				printf ("[dbg] %s\n", text);
			ContinueDebugEvent (ev.dwProcessId, ev.dwThreadId, DBG_CONTINUE);
			continue;
		}

		if (ev.dwDebugEventCode == EXCEPTION_DEBUG_EVENT) {
			DWORD code = ev.u.Exception.ExceptionRecord.ExceptionCode;
			DWORD addr = (DWORD)(ULONG_PTR)ev.u.Exception.ExceptionRecord.ExceptionAddress;
			printf ("[exc] code=0x%08X address=0x%08X first=%lu\n",
				code, addr, ev.u.Exception.dwFirstChance);
		}

		if (ev.dwDebugEventCode == EXIT_PROCESS_DEBUG_EVENT) {
			printf ("[exit] pid=%lu\n", pi.dwProcessId);
			ContinueDebugEvent (ev.dwProcessId, ev.dwThreadId, DBG_CONTINUE);
			break;
		}

		ContinueDebugEvent (ev.dwProcessId, ev.dwThreadId, DBG_CONTINUE);
	}

	TerminateProcess (pi.hProcess, 0);
	CloseHandle (pi.hThread);
	CloseHandle (pi.hProcess);
	return 0;
}
