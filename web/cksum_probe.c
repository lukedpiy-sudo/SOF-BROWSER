/*
 * cksum_probe.c - call SoF.exe's OWN checksum function directly and compare
 * it with a locally computed SHA-1, so we can pin the exact algorithm
 * without ever launching the GUI client.
 *
 * build (x86!):
 *   cmd /c "vcvarsall.bat x86 && cl /nologo /W3 /O2 cksum_probe.c /Fe:cksum_probe.exe"
 */

#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* SHA-1 (public domain style implementation) */
typedef struct { unsigned int h[5]; unsigned char blk[64]; unsigned int len; int idx; } sha1_t;

static unsigned int rol(unsigned int v, int b) { return (v << b) | (v >> (32 - b)); }

static void sha1_block(sha1_t *s, const unsigned char *p) {
	unsigned int w[80], a, b, c, d, e, f, k, t;
	int i;
	for (i = 0; i < 16; i++)
		w[i] = ((unsigned int)p[i*4] << 24) | ((unsigned int)p[i*4+1] << 16) |
		       ((unsigned int)p[i*4+2] << 8) | (unsigned int)p[i*4+3];
	for (; i < 80; i++) w[i] = rol(w[i-3] ^ w[i-8] ^ w[i-14] ^ w[i-16], 1);
	a = s->h[0]; b = s->h[1]; c = s->h[2]; d = s->h[3]; e = s->h[4];
	for (i = 0; i < 80; i++) {
		if (i < 20)      { f = (b & c) | ((~b) & d);      k = 0x5A827999; }
		else if (i < 40) { f = b ^ c ^ d;                 k = 0x6ED9EBA1; }
		else if (i < 60) { f = (b & c) | (b & d) | (c & d); k = 0x8F1BBCDC; }
		else             { f = b ^ c ^ d;                 k = 0xCA62C1D6; }
		t = rol(a, 5) + f + e + k + w[i];
		e = d; d = c; c = rol(b, 30); b = a; a = t;
	}
	s->h[0] += a; s->h[1] += b; s->h[2] += c; s->h[3] += d; s->h[4] += e;
}

static void sha1(const unsigned char *data, unsigned int len, unsigned char out[20]) {
	sha1_t s;
	unsigned int i, bits = len * 8;
	unsigned char pad[128];
	unsigned int padlen;
	memset(&s, 0, sizeof(s));
	s.h[0] = 0x67452301; s.h[1] = 0xEFCDAB89; s.h[2] = 0x98BADCFE;
	s.h[3] = 0x10325476; s.h[4] = 0xC3D2E1F0;
	for (i = 0; i < len; i += 64) {
		unsigned int n = (len - i < 64) ? (len - i) : 64;
		sha1_block(&s, data + i);
		(void)n;
	}
	padlen = (len % 64 < 56) ? (56 - len % 64) : (120 - len % 64);
	memset(pad, 0, sizeof(pad));
	pad[0] = 0x80;
	sha1_block(&s, pad); /* placeholder, real padding below */
	(void)padlen;
	/* redo properly: */
	memset(&s, 0, sizeof(s));
	s.h[0] = 0x67452301; s.h[1] = 0xEFCDAB89; s.h[2] = 0x98BADCFE;
	s.h[3] = 0x10325476; s.h[4] = 0xC3D2E1F0;
	{
		unsigned int off = 0;
		unsigned char block[64];
		while (off < len) {
			unsigned int n = (len - off < 64) ? (len - off) : 64;
			memcpy(block, data + off, n);
			sha1_block(&s, block);
			off += n;
		}
		{
			unsigned int rem = len % 64;
			unsigned int p2 = (rem < 56) ? (56 - rem) : (120 - rem);
			unsigned char be[4];
			unsigned char block2[64];
			be[0] = (unsigned char)(bits >> 24); be[1] = (unsigned char)(bits >> 16);
			be[2] = (unsigned char)(bits >> 8);  be[3] = (unsigned char)bits;
			memset(block, 0, 64);
			block[0] = 0x80;
			memcpy(block + p2 + 1, be, 4);
			sha1_block(&s, block);
			if (p2 + 1 + 4 > 64) {
				memset(block2, 0, 64);
				memcpy(block2 + (p2 + 1 + 4 - 64), be, 4);
				sha1_block(&s, block2);
			}
		}
	}
	for (i = 0; i < 5; i++) {
		out[i*4+0] = (unsigned char)(s.h[i] >> 24);
		out[i*4+1] = (unsigned char)(s.h[i] >> 16);
		out[i*4+2] = (unsigned char)(s.h[i] >> 8);
		out[i*4+3] = (unsigned char)(s.h[i]);
	}
}

typedef unsigned int (*ckfn_t)(unsigned char *data, unsigned int len, unsigned int seq);

int main(int argc, char **argv) {
	const char *sofexe = (argc > 1) ? argv[1] : "C:\\Users\\User\\Soldier of Fortune\\SoF.exe";
	HMODULE h = LoadLibraryA(sofexe);
	if (!h) { printf("LoadLibrary failed: %lu\n", GetLastError()); return 1; }
	printf("SoF.exe loaded at %p, base=%p\n", (void*)h, (void*)h);
	ckfn_t ck = (ckfn_t)((unsigned char *)h + 0x1F1B0);
	/* key table lives at base + 0x120648 */
	unsigned char *KEY = (unsigned char *)h + 0x120648;

	const char *texts[] = { "new", "info", "configstrings 42 0", "begin 0", "" };
	unsigned int seqs[] = { 0, 1, 2, 5, 2999, 3000 };
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 6; j++) {
			unsigned int len = (unsigned int)strlen(texts[i]);
			unsigned int seq = seqs[j];
			unsigned char body[128];
			unsigned int r;
			memcpy(body, texts[i], len);
			r = ck(body, len, seq);

			/* our reconstruction */
			unsigned char buf[256], dig[20];
			unsigned int k = seq % 3000;
			memcpy(buf, body, len);
			buf[len+0] = (unsigned char)(KEY[k+0] ^ (seq & 0xff));
			buf[len+1] = KEY[k+1];
			buf[len+2] = (unsigned char)(KEY[k+2] ^ ((seq >> 8) & 0xff));
			buf[len+3] = KEY[k+3];
			sha1(buf, len + 4, dig);

			printf("text=\"%s\" len=%u seq=%u  engine=0x%08x  sha1[0]=0x%02x sha1[19]=0x%02x  %s\n",
				texts[i], len, seq, r, dig[0], dig[19],
				((r & 0xff) == dig[0]) ? "<< MATCH sha1[0]" :
				((r & 0xff) == dig[19]) ? "<< MATCH sha1[19]" : "");
		}
	}
	FreeLibrary(h);
	return 0;
}
