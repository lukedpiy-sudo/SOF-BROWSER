/* dbgbreak.c - run a program under the debugger with 4 hardware breakpoints
 * on every thread, print registers when they are hit.
 *
 * usage: dbgbreak.exe <seconds> <exe> [args...]  -- bp addresses are compiled in
 * usage: dbgbreak.exe <pid> <bp0> <bp1> <bp2> <bp3> [seconds]   (attach mode)
 */
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

static DWORD g_pid;
static HANDLE g_threads[128];
static int g_nthreads = 0;
static DWORD g_bp[4];
static HANDLE g_proc = NULL;

static void set_bps_on(HANDLE h)
{
	CONTEXT ctx;
	if (!h) return;
	ZeroMemory(&ctx, sizeof(ctx));
	ctx.ContextFlags = CONTEXT_DEBUG_REGISTERS;
	if (!GetThreadContext(h, &ctx)) return;
	ctx.Dr0 = g_bp[0];
	ctx.Dr1 = g_bp[1];
	ctx.Dr2 = g_bp[2];
	ctx.Dr3 = g_bp[3];
	ctx.Dr7 = 0x55;
	SetThreadContext(h, &ctx);
}

static void set_bps_all(void)
{
	int i;
	for (i = 0; i < g_nthreads; i++) set_bps_on(g_threads[i]);
	printf("breakpoints set on %d threads: %08x %08x %08x %08x\n", g_nthreads,
		g_bp[0], g_bp[1], g_bp[2], g_bp[3]);
	fflush(stdout);
}

static void add_thread(HANDLE h)
{
	if (g_nthreads < 128) g_threads[g_nthreads++] = h;
}

static void on_hit(DWORD tid)
{
	CONTEXT ctx;
	HANDLE h = OpenThread(THREAD_GET_CONTEXT, FALSE, tid);
	unsigned char st[48];
	DWORD got = 0;
	if (h && GetThreadContext(h, &ctx)) {
		printf("HIT %08x  eax=%08x ebx=%08x ecx=%08x edx=%08x esi=%08x edi=%08x esp=%08x ebp=%08x\n",
			ctx.Eip, ctx.Eax, ctx.Ebx, ctx.Ecx, ctx.Edx, ctx.Esi, ctx.Edi, ctx.Esp, ctx.Ebp);
		if (ReadProcessMemory(g_proc, (void*)ctx.Esp, st, 48, &got)) {
			int k; printf("   stack:");
			for (k = 0; k < (int)got; k++) printf(" %02x", st[k]);
			printf("\n");
		}
		fflush(stdout);
	}
	if (h) CloseHandle(h);
}

static void loop(int secs)
{
	DEBUG_EVENT ev;
	DWORD start = GetTickCount();
	for (;;) {
		DWORD r = WaitForDebugEvent(&ev, 500);
		if (r == 0) {
			if ((int)((GetTickCount() - start) / 1000) > secs) { printf("timeout\n"); break; }
			continue;
		}
		if (ev.dwDebugEventCode == CREATE_PROCESS_DEBUG_EVENT) {
			add_thread(ev.u.CreateProcessInfo.hThread);
			g_proc = ev.u.CreateProcessInfo.hProcess;
			set_bps_all();
		} else if (ev.dwDebugEventCode == CREATE_THREAD_DEBUG_EVENT) {
			add_thread(ev.u.CreateThread.hThread);
			set_bps_all();
		} else if (ev.dwDebugEventCode == EXIT_PROCESS_DEBUG_EVENT) {
			printf("target exited\n");
			break;
		} else if (ev.dwDebugEventCode == EXCEPTION_DEBUG_EVENT) {
			if (ev.u.Exception.ExceptionRecord.ExceptionCode == EXCEPTION_BREAKPOINT)
				on_hit(ev.dwThreadId);
		}
		ContinueDebugEvent(ev.dwProcessId, ev.dwThreadId, DBG_CONTINUE);
		if ((int)((GetTickCount() - start) / 1000) > secs) { printf("timeout\n"); break; }
	}
}

int main(int argc, char **argv)
{
	int i, secs = 30;

	if (argc >= 3 && argv[1][0] == 'a') {
		/* attach mode */
		g_pid = (DWORD)atoi(argv[2]);
		for (i = 0; i < 4; i++) g_bp[i] = (unsigned long)strtoul(argv[3 + i], NULL, 16);
		if (argc > 7) secs = atoi(argv[7]);
		g_proc = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, g_pid);
		if (!DebugActiveProcess(g_pid)) { printf("DebugActiveProcess failed %lu\n", GetLastError()); return 1; }
		printf("attached to %lu\n", g_pid);
		loop(secs);
		DebugActiveProcessStop(g_pid);
		return 0;
	}

	/* launch mode: dbgbreak.exe <secs> <bp0> <bp1> <bp2> <bp3> <exe> [args...] */
	if (argc < 7) { printf("usage: dbgbreak.exe <secs> <bp0> <bp1> <bp2> <bp3> <exe> [args]\n"); return 2; }
	secs = atoi(argv[2]);
	for (i = 0; i < 4; i++) g_bp[i] = (unsigned long)strtoul(argv[3 + i], NULL, 16);
	{
		STARTUPINFOA si;
		PROCESS_INFORMATION pi;
		char cmd[1024];
		int n = 0;
		cmd[0] = 0;
		{ const char *ex = (argv[7][0] == '-') ? "C:\\Users\\User\\Soldier of Fortune\\SoF.exe" : argv[7];
		cmd[0] = 0; n = sprintf(cmd, "\"%s\"", ex); }
		for (i = 8; i < argc; i++) n += sprintf(cmd + n, " %s", argv[i]);
		ZeroMemory(&si, sizeof(si));
		si.cb = sizeof(si);
		ZeroMemory(&pi, sizeof(pi));
		if (!CreateProcessA((argv[7][0]=='-') ? "C:\\Users\\User\\Soldier of Fortune\\SoF.exe" : argv[7], cmd, NULL, NULL, FALSE, DEBUG_ONLY_THIS_PROCESS, NULL,
			"C:\\Users\\User\\Soldier of Fortune", &si, &pi)) {
			printf("CreateProcess failed %lu (cmd=%s)\n", GetLastError(), cmd);
			return 1;
		}
		printf("launched %s pid %lu\n", cmd, pi.dwProcessId);
		g_pid = pi.dwProcessId;
		loop(secs);
	}
	return 0;
}



