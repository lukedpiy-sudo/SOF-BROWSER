/* cmdparse.c - oracle for the SoF usercmd wire format.
 *
 * Loads SoF.exe as a library (no GUI) and calls the server's own reliable
 * message parser (0x20005AA0) on a candidate payload, then prints the
 * resulting 24 byte usercmd.
 *
 * usage: cmdparse.exe <payload.hex>
 *        (the payload is the bytes AFTER the type-2 header)
 */
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BASE 0x20000000u

typedef struct {
	unsigned char flags[4];
	unsigned char *data;   /* +0x04 */
	unsigned int pad;      /* +0x08 */
	int maxSize;           /* +0x0C */
	int readcount;         /* +0x10 */
	int bit;               /* +0x14 */
} msg_t;

static unsigned char g_payload[8192];
static int g_len;

static void hexdump(const char *tag, unsigned char *p, int n)
{
	int i;
	printf("%s:", tag);
	for (i = 0; i < n; i++) printf(" %02x", p[i]);
	printf("\n");
}

int main(int argc, char **argv)
{
	HMODULE h;
	void (*parse)(void *, void *, void *);
	msg_t msg;
	unsigned char prev[24], dst[24];
	const char *hex = argc > 1 ? argv[1] : "";
	size_t i, n;

	h = LoadLibraryA("C:\\Users\\User\\Soldier of Fortune\\SoF.exe");
	if (!h) { printf("LoadLibrary failed %lu\n", GetLastError()); return 1; }

	n = strlen(hex) / 2;
	for (i = 0; i < n; i++) {
		unsigned v = 0;
		sscanf(hex + i * 2, "%2x", &v);
		g_payload[i] = (unsigned char)v;
	}
	g_len = (int)n;

	memset(&msg, 0, sizeof(msg));
	msg.data = g_payload;
	msg.maxSize = (int)sizeof(g_payload);
	msg.readcount = 0;
	memset(prev, 0, sizeof(prev));
	memset(dst, 0, sizeof(dst));

	parse = (void (*)(void *, void *, void *))((char *)h + 0x5AA0);
	parse(&msg, prev, dst);

	printf("read %d bytes of %d\n", msg.readcount, g_len);
	hexdump("cmd  ", dst, 24);
	printf("  msec=%u buttons=0x%02x f2=0x%02x f3=0x%02x\n",
		dst[0], dst[1], dst[2], dst[3]);
	printf("  pitch=%d yaw=%d roll=%d\n",
		(short)(dst[4] | (dst[5] << 8)),
		(short)(dst[6] | (dst[7] << 8)),
		(short)(dst[8] | (dst[9] << 8)));
	printf("  dPitch=%d dYaw=%d dRoll=%d\n",
		(short)(dst[0x0A] | (dst[0x0B] << 8)),
		(short)(dst[0x0C] | (dst[0x0D] << 8)),
		(short)(dst[0x0E] | (dst[0x0F] << 8)));
	return 0;
}
