/* patchmem.exe <pid> <addr_hex> <hexbytes>   - write bytes into a running process
 *   patchmem.exe <pid> show <addr_hex> <len>
 */
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	HANDLE h;
	unsigned long addr;
	unsigned char buf[256], orig[256];
	DWORD pid, got = 0;
	size_t n, i;

	if (argc < 3) { printf("usage: patchmem.exe <pid> <addr> <hexbytes> | show <addr> <len>\n"); return 2; }
	pid = (DWORD)atoi(argv[1]);
	h = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_VM_OPERATION,
		FALSE, pid);
	if (!h) { printf("OpenProcess failed %lu\n", GetLastError()); return 1; }
	addr = (unsigned long)strtoul(argv[2], NULL, 16);
	if (argc > 3 && strcmp(argv[3], "show") == 0) {
		size_t len = (size_t)strtoul(argv[4], NULL, 16);
		if (!ReadProcessMemory(h, (void*)addr, orig, (DWORD)len, &got)) { printf("read failed\n"); return 1; }
		printf("%08x:", addr);
		for (i = 0; i < len; i++) printf(" %02x", orig[i]);
		printf("\n");
		return 0;
	}
	n = strlen(argv[3]) / 2;
	if (n == 0 || n > 256) { printf("bad hex\n"); return 2; }
	for (i = 0; i < n; i++) {
		unsigned v = 0;
		sscanf(argv[3] + i * 2, "%2x", &v);
		buf[i] = (unsigned char)v;
	}
	if (!ReadProcessMemory(h, (void*)addr, orig, (DWORD)n, &got)) { printf("read failed\n"); return 1; }
	printf("orig:"); for (i = 0; i < n; i++) printf(" %02x", orig[i]); printf("\n");
	if (!WriteProcessMemory(h, (void*)addr, buf, (DWORD)n, &got) || got != n) {
		printf("write failed %lu\n", GetLastError());
		return 1;
	}
	printf("patched %08x: ", addr);
	for (i = 0; i < n; i++) printf(" %02x", buf[i]);
	printf("\n");
	return 0;
}
