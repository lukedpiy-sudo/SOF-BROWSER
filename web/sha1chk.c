/*
 * sha1chk.c - a correct SHA-1, verified against the standard test vector
 * and against SoF.exe's own hash function (0x2004D150).
 */

#include <windows.h>
#include <stdio.h>
#include <string.h>

typedef unsigned int u32;

static u32 rol(u32 v, int b) { return (v << b) | (v >> (32 - b)); }

static void sha1_block(u32 h[5], const unsigned char *p) {
	u32 w[80], a, b, c, d, e, f, k, t; int i;
	for (i = 0; i < 16; i++)
		w[i] = ((u32)p[i*4] << 24) | ((u32)p[i*4+1] << 16) | ((u32)p[i*4+2] << 8) | (u32)p[i*4+3];
	for (; i < 80; i++) w[i] = rol(w[i-3] ^ w[i-8] ^ w[i-14] ^ w[i-16], 1);
	a=h[0];b=h[1];c=h[2];d=h[3];e=h[4];
	for (i = 0; i < 80; i++) {
		if (i < 20)      { f=(b&c)|((~b)&d);    k=0x5A827999; }
		else if (i < 40) { f=b^c^d;             k=0x6ED9EBA1; }
		else if (i < 60) { f=(b&c)|(b&d)|(c&d); k=0x8F1BBCDC; }
		else             { f=b^c^d;             k=0xCA62C1D6; }
		t = rol(a,5)+f+e+k+w[i]; e=d; d=c; c=rol(b,30); b=a; a=t;
	}
	h[0]+=a;h[1]+=b;h[2]+=c;h[3]+=d;h[4]+=e;
}

static void sha1(const unsigned char *data, unsigned int len, unsigned char out[20]) {
	u32 h[5] = {0x67452301,0xEFCDAB89,0x98BADCFE,0x10325476,0xC3D2E1F0};
	unsigned char block[64];
	unsigned long long bits = (unsigned long long)len * 8ULL;
	unsigned char be[8];
	unsigned int off = 0, rem, i;
	while (off < len) {
		unsigned int n = (len - off < 64) ? (len - off) : 64;
		memset(block, 0, 64);
		memcpy(block, data + off, n);
		sha1_block(h, block);
		off += n;
	}
	be[0]=(unsigned char)(bits>>56); be[1]=(unsigned char)(bits>>48);
	be[2]=(unsigned char)(bits>>40); be[3]=(unsigned char)(bits>>32);
	be[4]=(unsigned char)(bits>>24); be[5]=(unsigned char)(bits>>16);
	be[6]=(unsigned char)(bits>>8);  be[7]=(unsigned char)bits;
	rem = len % 64;
	memset(block, 0, 64);
	block[0] = 0x80;
	if (rem >= 56) {
		sha1_block(h, block);            /* 0x80 + zeros */
		memset(block, 0, 64);
	}
	memcpy(block + 56, be, 8);          /* length always at offset 56 */
	sha1_block(h, block);
	for (i = 0; i < 5; i++) {
		out[i*4+0]=(unsigned char)(h[i]>>24); out[i*4+1]=(unsigned char)(h[i]>>16);
		out[i*4+2]=(unsigned char)(h[i]>>8);  out[i*4+3]=(unsigned char)h[i];
	}
}

typedef unsigned int (*ckfn_t)(unsigned char *data, unsigned int len, unsigned int seq);
typedef unsigned int (*hfn_t)(unsigned char *data, unsigned int len);

int main(int argc, char **argv) {
	const char *sofexe = (argc > 1) ? argv[1] : "C:\\Users\\User\\Soldier of Fortune\\SoF.exe";
	unsigned char d[20];
	const char *abc = "abc";
	sha1((const unsigned char*)abc, 3, d);
	printf("sha1(\"abc\") = ");
	for (int i=0;i<20;i++) printf("%02x", d[i]);
	printf("\n            want a9993e364706816aba3e25717850c26c9cd0d89d\n\n");

	HMODULE h = LoadLibraryA(sofexe);
	if (!h) { printf("LoadLibrary failed %lu\n", GetLastError()); return 1; }
	unsigned char *base = (unsigned char *)h;
	ckfn_t ck = (ckfn_t)(base + 0x1F1B0);
	hfn_t  eng = (hfn_t)(base + 0x4D150);
	unsigned char *KEY = base + 0x120648;

	const char *texts[] = { "new", "info", "configstrings 42 0", "begin 0" };
	unsigned int seqs[] = { 0, 1, 7, 3 };
	for (int i = 0; i < 4; i++) {
		unsigned int len = (unsigned int)strlen(texts[i]);
		unsigned int seq = seqs[i], k = seq % 3000;
		unsigned char body[128], buf[256], dg[20];
		unsigned int r, e;
		memcpy(body, texts[i], len);
		r = ck(body, len, seq);
		memcpy(buf, body, len);
		buf[len+0] = (unsigned char)(KEY[k+0] ^ (seq & 0xff));
		buf[len+1] = KEY[k+1];
		buf[len+2] = (unsigned char)(KEY[k+2] ^ ((seq>>8) & 0xff));
		buf[len+3] = KEY[k+3];
		e = eng(buf, len + 4);
		sha1(buf, len + 4, dg);
		printf("text=\"%s\" seq=%u\n  engine ck   = 0x%08x (low 0x%02x)\n", texts[i], seq, r, r & 0xff);
		printf("  engine hash = 0x%08x (low 0x%02x)\n", e, e & 0xff);
		printf("  our sha1    = ", 0);
		for (int j=0;j<20;j++) printf("%02x", dg[j]);
		printf("\n  ours h0 be = 0x%08x  -> low byte 0x%02x   match=%d\n",
			((u32)dg[0]<<24)|((u32)dg[1]<<16)|((u32)dg[2]<<8)|dg[3],
			dg[3], ((r & 0xff) == dg[3]));
	}
	return 0;
}
