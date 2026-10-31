/* dumpall.c - dump all client slots of the live dedicated server. */
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

int main(int argc, char **argv)
{
	HANDLE h;
	unsigned long clients_ptr = 0, cl;
	unsigned int idx, maxc = 8;
	DWORD pid;

	if (argc < 2) { printf("usage: dumpall.exe <pid> [maxclients]\n"); return 2; }
	pid = (DWORD)atoi(argv[1]);
	if (argc > 2) maxc = (unsigned int)atoi(argv[2]);

	h = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, pid);
	if (!h) { printf("OpenProcess failed %lu\n", GetLastError()); return 1; }
	if (!rd(h, 0x20396EEC, &clients_ptr, 4)) { printf("read sv.clients failed\n"); return 1; }
	printf("sv.clients = %08x\n", clients_ptr);
	for (idx = 0; idx < maxc; idx++) {
		BYTES b;
		unsigned int state, v5294, v204, v5298, v5274;
		unsigned short port;
		cl = clients_ptr + (unsigned long)idx * 0xD2AC;
		if (!rd(h, cl, b.b, 4)) { printf("client[%u] read fail\n", idx); continue; }
		memcpy(&state, b.b + 0x000, 4);
		if (!rd(h, cl + 0x204, b.b, 4)) continue;
		memcpy(&v204, b.b, 4);
		if (!rd(h, cl + 0x5274, b.b, 4)) continue;
		memcpy(&v5274, b.b, 4);
		if (!rd(h, cl + 0x5292, b.b, 2)) continue;
		memcpy(&port, b.b, 2);
		if (!rd(h, cl + 0x5294, b.b, 4)) continue;
		memcpy(&v5294, b.b, 4);
		if (!rd(h, cl + 0x5298, b.b, 4)) continue;
		if (!rd(h, cl + 0x526C, b.b, 0x50)) continue;
		printf("     netchan+4=%u netchan+0x2C=%u netchan+0x30=%u netchan+0x34=%u netchan+0x38=%u netchan+0x3C=%u netchan+0x40=%u\n", *(unsigned*)(b.b+4), *(unsigned*)(b.b+0x2C), *(unsigned*)(b.b+0x30), *(unsigned*)(b.b+0x34), *(unsigned*)(b.b+0x38), *(unsigned*)(b.b+0x3C), *(unsigned*)(b.b+0x40));
		memcpy(&v5298, b.b, 4);
		printf("client[%u] state=%u  [0x204]=%u  [0x5274]=%u  port(BE)=%u(0x%04x)  [0x5294]=%u(0x%x)  [0x5298]=%u\n",
			idx, state, v204, v5274, port, port, v5294, v5294, v5298);
	}
	CloseHandle(h);
	return 0;
}


