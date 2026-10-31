/*
 * cksum2.c - figure out the exact relationship between SoF.exe's checksum
 * function (0x2001F1B0) and its inner hash (0x2004D150).
 *
 * Prints, for several (text, seq):
 *   ck(text,len,seq)                       - the engine's checksum fn
 *   eng_sha1(text || keybytes(seq))        - the engine's own hash over
 *                                            text + the 4 key bytes taken
 *                                            from 0x20120648 + seq%3000
 */

#include <windows.h>
#include <stdio.h>
#include <string.h>

typedef unsigned int (*ckfn_t)(unsigned char *data, unsigned int len, unsigned int seq);
typedef unsigned int (*hfn_t)(unsigned char *data, unsigned int len);

static void hexdump(const char *tag, unsigned int v) {
	printf("%-34s 0x%08x   low byte 0x%02x\n", tag, v, v & 0xff);
}

int main(int argc, char **argv) {
	const char *sofexe = (argc > 1) ? argv[1] : "C:\\Users\\User\\Soldier of Fortune\\SoF.exe";
	HMODULE h = LoadLibraryA(sofexe);
	if (!h) { printf("LoadLibrary failed %lu\n", GetLastError()); return 1; }
	unsigned char *base = (unsigned char *)h;
	ckfn_t ck   = (ckfn_t)(base + 0x1F1B0);
	hfn_t  eng  = (hfn_t)(base + 0x4D150);
	unsigned char *KEY = base + 0x120648;

	const char *texts[] = { "new", "info", "configstrings 42 0" };
	unsigned int seqs[] = { 0, 1, 7 };

	for (int i = 0; i < 3; i++) {
		unsigned int len = (unsigned int)strlen(texts[i]);
		unsigned int seq = seqs[i];
		unsigned char body[128], buf[256];
		unsigned int r, k = seq % 3000;
		memcpy(body, texts[i], len);
		r = ck(body, len, seq);

		/* variant A: key bytes appended verbatim */
		memcpy(buf, body, len);
		memcpy(buf + len, KEY + k, 4);
		unsigned int ha = eng(buf, len + 4);

		/* variant B: key byte0 xor seq, key byte2 xor seq>>8 */
		memcpy(buf, body, len);
		buf[len+0] = (unsigned char)(KEY[k+0] ^ (seq & 0xff));
		buf[len+1] = KEY[k+1];
		buf[len+2] = (unsigned char)(KEY[k+2] ^ ((seq >> 8) & 0xff));
		buf[len+3] = KEY[k+3];
		unsigned int hb = eng(buf, len + 4);

		/* variant C: no key bytes at all */
		unsigned int hc = eng(body, len);

		printf("--- text=\"%s\" len=%u seq=%u\n", texts[i], len, seq);
		hexdump("ck()", r);
		hexdump("eng(text||key)", ha);
		hexdump("eng(text||key^seq)", hb);
		hexdump("eng(text)", hc);
		printf("    match A:%d  B:%d  C:%d\n",
			((r & 0xff) == (ha & 0xff)), ((r & 0xff) == (hb & 0xff)), ((r & 0xff) == (hc & 0xff)));
	}
	return 0;
}
