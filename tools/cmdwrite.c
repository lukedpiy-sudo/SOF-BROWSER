/* cmdwrite.c - oracle for the SoF usercmd WIRE format.
 *
 * Loads SoF.exe as a library (no GUI) and calls the client's own netchan
 * writer (0x20005D70) with a chosen 24 byte usercmd, then prints the bytes
 * it produces.
 *
 * usage: cmdwrite.exe <msec> <buttons> <p0> <p1> <p2> <d0> <d1> <d2> [x0] [x1]
 *        (p* = the three u16 fields, d* = the three i16 delta angles)
 */
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BASE 0x20000000u

typedef struct {
	unsigned char pad[0x0C];
	unsigned char *pos;  /* +0x0C the write position */
	unsigned char *end;  /* +0x10 the buffer end */
	int pad2;            /* +0x14 */
	int bits;            /* +0x18 the bit offset */
} wbuf_t;

int main(int argc, char **argv)
{
	HMODULE h;
	void (*wr)(void *, void *, void *);
	wbuf_t w;
	unsigned char data[8192];
	unsigned char cmd[24], prev[24];
	int i;

	h = LoadLibraryA("C:\\Users\\User\\Soldier of Fortune\\SoF.exe");
	if (!h) { printf("LoadLibrary failed %lu\n", GetLastError()); return 1; }

	memset(cmd, 0, sizeof(cmd));
	memset(prev, 0, sizeof(prev));
	if (argc > 1) cmd[0] = (unsigned char)atoi(argv[1]);
	if (argc > 2) cmd[1] = (unsigned char)atoi(argv[2]);
	for (i = 0; i < 3 && argc > 3 + i; i++) {
		unsigned short v = (unsigned short)atoi(argv[3 + i]);
		memcpy(cmd + 4 + i * 2, &v, 2);
	}
	for (i = 0; i < 3 && argc > 6 + i; i++) {
		short v = (short)atoi(argv[6 + i]);
		memcpy(cmd + 0x0A + i * 2, &v, 2);
	}
	for (i = 0; i < 2 && argc > 9 + i; i++) {
		int v = atoi(argv[9 + i]);
		memcpy(cmd + 0x10 + i * 4, &v, 4);
	}

	memset(data, 0, sizeof(data));
	memset(&w, 0, sizeof(w));
	w.pos = data;
	w.end = data + sizeof(data);
	w.bits = 0;

	wr = (void (*)(void *, void *, void *))((char *)h + 0x5D70);
	wr(&w, prev, cmd);

	printf("wrote %d bytes, %d bits (pos=%d end=%d)\n",
		(int)(w.pos - data), w.bits,
		(int)(w.pos - data), (int)(w.end - data));
	printf("bits:"); { int b; for (b = 0; b < w.bits && b < 80; b++) printf("%d", (data[b/8] >> (b%8)) & 1); } printf("\n");
	for (i = 0; i < (int)(w.pos - data) && i < 200; i++) printf(" %02x", data[i]);
	printf("\n");
	return 0;
}









