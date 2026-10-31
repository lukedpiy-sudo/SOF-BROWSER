/* setdev.c - read/patch the live SoF server's "developer" cvar so that
 * Com_DPrintf output becomes visible in the server console.
 *
 * usage: setdev.exe <pid> [value]     (no value = just report)
 */
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct { unsigned char b[256]; } BYTES;

static int rd(HANDLE h, unsigned long addr, void *out, size_t n)
{
	DWORD got = 0;
	if (!ReadProcessMemory(h, (void*)addr, out, (DWORD)n, &got)) return 0;
	return got == n;
}
static int wr(HANDLE h, unsigned long addr, const void *in, size_t n)
{
	DWORD put = 0;
	return WriteProcessMemory(h, (void*)addr, in, (DWORD)n, &put) && put == n;
}

int main(int argc, char **argv)
{
	HANDLE h;
	unsigned long cvar = 0;
	float val, cur;
	char name[64];

	if (argc < 2) { printf("usage: setdev.exe <pid> [value]\n"); return 2; }
	h = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ |
		(argc > 2 ? PROCESS_VM_WRITE | PROCESS_VM_OPERATION : 0), FALSE, (DWORD)atoi(argv[1]));
	if (!h) { printf("OpenProcess failed %lu\n", GetLastError()); return 1; }
	if (!rd(h, 0x2024961C, &cvar, 4)) { printf("read cvar ptr failed\n"); return 1; }
	printf("developer cvar ptr = %08x\n", cvar);
	if (!cvar) { printf("cvar not created yet\n"); return 1; }
	if (!rd(h, cvar, name, 4)) { printf("read cvar failed\n"); return 1; }
	{
		unsigned long np = 0;
		memcpy(&np, name, 4);
		if (np) { char s[64]; if (rd(h, np, s, 63)) { s[63]=0; printf("name = '%s'\n", s); } }
	}
	if (!rd(h, cvar + 0x18, &cur, 4)) { printf("read value failed\n"); return 1; }
	printf("developer value = %f\n", cur);
	if (argc > 2) {
		val = (float)atof(argv[2]);
		if (!wr(h, cvar + 0x18, &val, 4)) { printf("write failed\n"); return 1; }
		printf("developer value set to %f\n", val);
	}
	CloseHandle(h);
	return 0;
}
