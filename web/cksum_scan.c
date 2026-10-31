/*
 * cksum_scan.c - find the 4 "key" bytes that SoF.exe's checksum function
 * (0x2001F1B0) appends to the message before hashing.
 *
 * Strategy: call the engine's own function as an oracle, then scan every
 * 4-byte window in the module image for a window W such that
 *     SHA1(text || W)[0] == engine(text, seq) & 0xFF
 * Cross-validate with several (text, seq) pairs.
 *
 * build (x86):
 *   cmd /c "vcvarsall.bat x86 && cl /nologo /O2 cksum_scan.c /Fe:cksum_scan.exe"
 */

#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* ---------------- SHA-1 ---------------- */
typedef struct { unsigned int h[5]; unsigned char blk[64]; } sha1_t;

static unsigned int rol(unsigned int v, int b) { return (v << b) | (v >> (32 - b)); }

static void sha1_block(unsigned int h[5], const unsigned char *p) {
	unsigned int w[80], a, b, c, d, e, f, k, t; int i;
	for (i = 0; i < 16; i++)
		w[i] = ((unsigned int)p[i*4] << 24) | ((unsigned int)p[i*4+1] << 16) |
		       ((unsigned int)p[i*4+2] << 8) | (unsigned int)p[i*4+3];
	for (; i < 80; i++) w[i] = rol(w[i-3] ^ w[i-8] ^ w[i-14] ^ w[i-16], 1);
	a=h[0];b=h[1];c=h[2];d=h[3];e=h[4];
	for (i = 0; i < 80; i++) {
		if (i < 20)      { f=(b&c)|((~b)&d);        k=0x5A827999; }
		else if (i < 40) { f=b^c^d;                 k=0x6ED9EBA1; }
		else if (i < 60) { f=(b&c)|(b&d)|(c&d);     k=0x8F1BBCDC; }
		else             { f=b^c^d;                 k=0xCA62C1D6; }
		t = rol(a,5)+f+e+k+w[i]; e=d; d=c; c=rol(b,30); b=a; a=t;
	}
	h[0]+=a;h[1]+=b;h[2]+=c;h[3]+=d;h[4]+=e;
}

static void sha1(const unsigned char *data, unsigned int len, unsigned char out[20]) {
	unsigned int h[5] = {0x67452301,0xEFCDAB89,0x98BADCFE,0x10325476,0xC3D2E1F0};
	unsigned char block[128];
	unsigned int off = 0, rem, p2, i;
	unsigned long long bits = (unsigned long long)len * 8ULL;
	unsigned char be[8];
	while (off < len) {
		unsigned int n = (len - off < 64) ? (len - off) : 64;
		memset(block, 0, 64);
		memcpy(block, data + off, n);
		sha1_block(h, block);
		off += n;
	}
	rem = len % 64;
	p2 = (rem < 56) ? (56 - rem) : (120 - rem);
	memset(block, 0, 64);
	block[0] = 0x80;
	be[0]=(unsigned char)(bits>>56); be[1]=(unsigned char)(bits>>48);
	be[2]=(unsigned char)(bits>>40); be[3]=(unsigned char)(bits>>32);
	be[4]=(unsigned char)(bits>>24); be[5]=(unsigned char)(bits>>16);
	be[6]=(unsigned char)(bits>>8);  be[7]=(unsigned char)bits;
	memcpy(block + p2, be, 8);
	sha1_block(h, block);
	if (p2 + 8 > 64) {
		memset(block, 0, 64);
		memcpy(block + (p2 + 8 - 64), be, 8);
		sha1_block(h, block);
	}
	for (i = 0; i < 5; i++) {
		out[i*4+0]=(unsigned char)(h[i]>>24); out[i*4+1]=(unsigned char)(h[i]>>16);
		out[i*4+2]=(unsigned char)(h[i]>>8);  out[i*4+3]=(unsigned char)h[i];
	}
}

typedef unsigned int (*ckfn_t)(unsigned char *data, unsigned int len, unsigned int seq);
typedef unsigned int (*sha1fn_t)(unsigned char *data, unsigned int len);

int main(int argc, char **argv) {
	const char *sofexe = (argc > 1) ? argv[1] : "C:\\Users\\User\\Soldier of Fortune\\SoF.exe";
	HMODULE h = LoadLibraryA(sofexe);
	if (!h) { printf("LoadLibrary failed %lu\n", GetLastError()); return 1; }
	unsigned char *base = (unsigned char *)h;
	ckfn_t ck = (ckfn_t)(base + 0x1F1B0);
	sha1fn_t eng_sha1 = (sha1fn_t)(base + 0x4D150);

	/* self test of our SHA-1 */
	{ unsigned char d[20]; const char *abc = "abc";
	  sha1((const unsigned char*)abc, 3, d);
	  printf("sha1(\"abc\") = ");
	  for (int i=0;i<20;i++) printf("%02x", d[i]);
	  printf("  (want a9993e364706816aba3e25717850c26c9cd0d89d)\n"); }

	/* does the engine's 0x2004D150 behave like SHA-1? */
	{ unsigned char b[128]; unsigned char d[20]; unsigned int r;
	  memset(b, 0, sizeof(b)); memcpy(b, "abc", 3);
	  r = eng_sha1(b, 3);
	  sha1(b, 3, d);
	  printf("engine sha1fn(\"abc\") = 0x%08x ; ours digest:", r);
	  for (int i=0;i<20;i++) printf("%02x", d[i]);
	  printf("\n  ours h0(be)=0x%08x  h0(le)=0x%08x\n",
	         ((unsigned)d[0]<<24)|((unsigned)d[1]<<16)|((unsigned)d[2]<<8)|d[3],
	         ((unsigned)d[3]<<24)|((unsigned)d[2]<<16)|((unsigned)d[1]<<8)|d[0]); }

	/* oracle values */
	const char *texts[] = { "new", "info", "begin 0" };
	unsigned int seqs[] = { 0, 0, 0 };
	unsigned int want[3];
	for (int i = 0; i < 3; i++) {
		unsigned char body[128];
		unsigned int len = (unsigned int)strlen(texts[i]);
		memcpy(body, texts[i], len);
		want[i] = ck(body, len, seqs[i]) & 0xff;
		printf("oracle: text=\"%s\" seq=%u -> low byte 0x%02x\n", texts[i], seqs[i], want[i]);
	}

	/* scan the module image for a 4-byte window that reproduces it */
	{
		unsigned char *img = base;
		size_t imgmax = 0;
		unsigned char body[128];
		unsigned int len = 3;
		memcpy(body, "new", 3);
		/* find the image size */
		{
			IMAGE_DOS_HEADER *d = (IMAGE_DOS_HEADER *)img;
			IMAGE_NT_HEADERS *nt = (IMAGE_NT_HEADERS *)(img + d->e_lfanew);
			imgmax = nt->OptionalHeader.SizeOfImage;
		}
		printf("scanning %lu bytes of the image...\n", (unsigned long)imgmax);
		for (size_t off = 0; off + 4 < imgmax; off++) {
			unsigned char buf[128]; unsigned char d[20];
			memcpy(buf, body, len);
			memcpy(buf + len, img + off, 4);
			sha1(buf, len + 4, d);
			if (d[0] == want[0]) {
				/* cross check with the other texts */
				int ok = 1;
				for (int i = 1; i < 3; i++) {
					unsigned char b2[128]; unsigned char d2[20];
					unsigned int l2 = (unsigned int)strlen(texts[i]);
					memcpy(b2, texts[i], l2);
					memcpy(b2 + l2, img + off, 4);
					sha1(b2, l2 + 4, d2);
					if (d2[0] != want[i]) { ok = 0; break; }
				}
				printf("MATCH at image offset 0x%08zx (VA 0x%08x): %02x %02x %02x %02x  %s\n",
					off, (unsigned)(0x20000000 + off),
					img[off], img[off+1], img[off+2], img[off+3],
					ok ? "CROSS-VALIDATED" : "(single hit)");
				if (ok) return 0;
			}
		}
		printf("no match found for digest byte 0\n");
	}
	return 0;
}
