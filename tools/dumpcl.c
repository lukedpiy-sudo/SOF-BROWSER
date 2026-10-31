/* dumpcl.c - read the live dedicated server's client_t fields.
 * usage: dumpcl.exe <pid> [clientindex]
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

int main(int argc, char **argv)
{
	HANDLE h;
	unsigned long clients_ptr = 0, cl = 0;
	unsigned int idx = 0;
	DWORD pid;

	if (argc < 2) { printf("usage: dumpcl.exe <pid> [idx]\n"); return 2; }
	pid = (DWORD)atoi(argv[1]);
	if (argc > 2) idx = (unsigned int)atoi(argv[2]);

	h = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, pid);
	if (!h) { printf("OpenProcess failed %lu\n", GetLastError()); return 1; }

	if (!rd(h, 0x20396EEC, &clients_ptr, 4)) { printf("read sv.clients failed\n"); return 1; }
	printf("sv.clients = %08x\n", clients_ptr);
	cl = clients_ptr + (unsigned long)idx * 0xD2AC;
	printf("client[%u] = %08x\n", idx, cl);

	{
		static const struct { const char *name; unsigned long off; int size; } F[] = {
			{"state",            0x000, 4},
			{"[0x204] lastseq", 0x204, 4},
			{"[0x208] msgs",     0x208, 24},
			{"[0x264]",          0x264, 4},
			{"[0x298] edict",    0x298, 4},
			{"[0x43CC]",         0x43CC, 4},
			{"[0x5264]",         0x5264, 4},
			{"[0x5268]",         0x5268, 4},
			{"[0x5274] nmsg",    0x5274, 4},
			{"[0x5280] msg",     0x5280, 24},
			{"[0x5292] w",       0x5292, 2},
			{"[0x5294] d",       0x5294, 4},
			{"[0x5298] ckseq",   0x5298, 4},
			{"netchan[0x526C]",  0x526C, 96},
			{NULL, 0, 0}
		};
		int i;
		for (i = 0; F[i].name; i++) {
			BYTES b;
			int j;
			if (!rd(h, cl + F[i].off, b.b, F[i].size)) { printf("%-18s : <fail>\n", F[i].name); continue; }
			printf("%-18s :", F[i].name);
			for (j = 0; j < F[i].size; j++) printf(" %02x", b.b[j]);
			if (F[i].size == 4) { unsigned int v; memcpy(&v, b.b, 4); printf("   (%u / 0x%x)", v, v); }
			if (F[i].size == 2) { unsigned short v; memcpy(&v, b.b, 2); printf("   (%u / 0x%x)", v, v); }
			printf("\n");
		}
	}
	/* the netchan at cl+0x526C */
	{
		BYTES b; int j;
		if (rd(h, cl + 0x526C, b.b, 0x60)) {
			printf("netchan raw 0x526C:");
			for (j = 0; j < 0x60; j++) {
				if (j % 16 == 0) printf("\n  +%02x:", j);
				printf(" %02x", b.b[j]);
			}
			printf("\n");
		}
	}
	/* the server's global word 2036BEE6 and 20396DE4 */
	{
		unsigned short gw; unsigned int gp;
		BYTES na;
		unsigned int c52c0;
		if (rd(h, cl + 0x52C0, &c52c0, 4)) printf("cl->[0x52C0] = %u (0x%x)\n", c52c0, c52c0);
		if (rd(h, cl + 0x52B4, na.b, 64)) {
			int j;
			printf("msgbuf cl+0x52B4:");
			for (j = 0; j < 64; j++) printf(" %02x", na.b[j]);
			printf("\n");
		}
		if (rd(h, 0x2036BEE6, &gw, 2)) printf("global 2036BEE6 = %u (0x%x)\n", gw, gw);
		if (rd(h, 0x20396DE4, &gp, 4)) printf("global 20396DE4 = %08x\n", gp);
		if (rd(h, 0x2036BED4, na.b, 24)) {
			int j;
			printf("global 2036BED4 (last pkt netadr):");
			for (j = 0; j < 24; j++) printf(" %02x", na.b[j]);
			printf("\n");
		}
		if (rd(h, cl + 0x5280, na.b, 24)) {
			int j;
			printf("client netadr   cl+0x5280        :");
			for (j = 0; j < 24; j++) printf(" %02x", na.b[j]);
			printf("\n");
		}
	}
	CloseHandle(h);
	return 0;
}


