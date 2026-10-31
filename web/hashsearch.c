/*
 * hashsearch.c - find the exact hash used by SoF.exe.
 *
 * The engine's hash (0x2004D150) has MD4's IVs, MD4's shift schedule and
 * MD4's message-word order, but is NOT stock MD4 (BCrypt's MD4 differs).
 * This program tries every plausible combination of
 *   - round-1 F variant
 *   - round-2 G variant + argument permutation
 *   - round-3 H variant + argument permutation
 *   - length encoding
 *   - digest word order
 * against BOTH the Windows CNG MD4 (to validate the base) and the
 * engine's own function (to find the real algorithm).
 */
#include <windows.h>
#include <bcrypt.h>
#include <stdio.h>
#include <string.h>
#pragma comment(lib, "bcrypt.lib")
#ifndef BCRYPT_MD4_ALGORITHM
#define BCRYPT_MD4_ALGORITHM L"MD4"
#endif

typedef unsigned int u32;
static u32 rol(u32 x, int n) { return (x << n) | (x >> (32 - n)); }

static int bc_md4(const unsigned char *d, unsigned len, unsigned char out[16]) {
	BCRYPT_ALG_HANDLE alg = NULL; BCRYPT_HASH_HANDLE h = NULL;
	ULONG l2 = 0, ol = 0; unsigned char *obj = NULL; int ok = 0;
	if (BCryptOpenAlgorithmProvider(&alg, BCRYPT_MD4_ALGORITHM, NULL, 0) < 0) return 0;
	BCryptGetProperty(alg, BCRYPT_OBJECT_LENGTH, (PUCHAR)&ol, sizeof(ol), &l2, 0);
	obj = (unsigned char *)HeapAlloc(GetProcessHeap(), 0, ol);
	if (obj && BCryptCreateHash(alg, &h, obj, ol, NULL, 0, 0) >= 0) {
		if (BCryptHashData(h, (PUCHAR)d, len, 0) >= 0 && BCryptFinishHash(h, out, 16, 0) >= 0) ok = 1;
		BCryptDestroyHash(h);
	}
	if (obj) HeapFree(GetProcessHeap(), 0, obj);
	BCryptCloseAlgorithmProvider(alg, 0);
	return ok;
}

/* round function variants */
static u32 fvar(int v, u32 x, u32 y, u32 z) {
	switch (v) {
	case 0: return (x & y) | (~x & z);                 /* MD4 F */
	case 1: return z ^ (y & (x ^ y));                 /* RFC FF */
	case 2: return (x & y) | (x & z) | (~y & z);       /* MD4 G (RFC) */
	case 3: return (x & y) | (x & z) | (y & z);        /* MD4 G (Young) */
	case 4: return x ^ y ^ z;                          /* H */
	}
	return 0;
}
static const int PERM[6][3] = {{0,1,2},{0,2,1},{1,0,2},{1,2,0},{2,0,1},{2,1,0}};

static void hash4(const unsigned char *msg, unsigned len, int fv, int gv, int hv,
                  int fp, int gp, int hp, int lenmode, int outrev,
                  unsigned char out[16]) {
	static const int O2[16] = {0,4,8,12,1,5,9,13,2,6,10,14,3,7,11,15};
	static const int O3[16] = {0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15};
	unsigned char blk[256]; u32 X[16], st[4]; unsigned i, off, n;
	u32 a, b, c, d;
	memcpy(blk, msg, len);
	n = len;
	blk[n++] = 0x80;
	while (n % 64 != 56) blk[n++] = 0;
	{
		unsigned long long L = (lenmode == 1) ? (unsigned long long)len
		                  : (lenmode == 2) ? (unsigned long long)len * 8ULL : 0ULL;
		unsigned long long B = (lenmode == 3) ? (unsigned long long)len * 8ULL : L;
		if (lenmode == 0) { for (i = 0; i < 8; i++) blk[n + i] = (unsigned char)(B >> (8 * i)); }
		else if (lenmode == 1) { for (i = 0; i < 8; i++) blk[n + i] = (unsigned char)(B >> (8 * i)); }
		else { for (i = 0; i < 8; i++) blk[n + i] = (unsigned char)(B >> (56 - 8 * i)); }
	}
	st[0] = 0x67452301; st[1] = 0xefcdab89; st[2] = 0x98badcfe; st[3] = 0x10325476;
	for (off = 0; off < n; off += 64) {
		memcpy(X, blk + off, 64);
		a = st[0]; b = st[1]; c = st[2]; d = st[3];
		for (i = 0; i < 16; i++) {
			u32 v[3];
			switch (i & 3) {
			case 0: v[0]=b; v[1]=c; v[2]=d; a = rol(a + fvar(fv, v[PERM[fp][0]], v[PERM[fp][1]], v[PERM[fp][2]]) + X[i], 3); break;
			case 1: v[0]=a; v[1]=b; v[2]=c; d = rol(d + fvar(fv, v[PERM[fp][0]], v[PERM[fp][1]], v[PERM[fp][2]]) + X[i], 7); break;
			case 2: v[0]=d; v[1]=a; v[2]=b; c = rol(c + fvar(fv, v[PERM[fp][0]], v[PERM[fp][1]], v[PERM[fp][2]]) + X[i], 11); break;
			default: v[0]=c; v[1]=d; v[2]=a; b = rol(b + fvar(fv, v[PERM[fp][0]], v[PERM[fp][1]], v[PERM[fp][2]]) + X[i], 19); break;
			}
		}
		for (i = 0; i < 16; i++) {
			u32 v[3]; int k = O2[i];
			switch (i & 3) {
			case 0: v[0]=b; v[1]=c; v[2]=d; a = rol(a + fvar(gv, v[PERM[gp][0]], v[PERM[gp][1]], v[PERM[gp][2]]) + X[k], 3); break;
			case 1: v[0]=a; v[1]=b; v[2]=c; d = rol(d + fvar(gv, v[PERM[gp][0]], v[PERM[gp][1]], v[PERM[gp][2]]) + X[k], 5); break;
			case 2: v[0]=d; v[1]=a; v[2]=b; c = rol(c + fvar(gv, v[PERM[gp][0]], v[PERM[gp][1]], v[PERM[gp][2]]) + X[k], 9); break;
			default: v[0]=c; v[1]=d; v[2]=a; b = rol(b + fvar(gv, v[PERM[gp][0]], v[PERM[gp][1]], v[PERM[gp][2]]) + X[k], 13); break;
			}
		}
		for (i = 0; i < 16; i++) {
			u32 v[3]; int k = O3[i];
			switch (i & 3) {
			case 0: v[0]=b; v[1]=c; v[2]=d; a = rol(a + fvar(hv, v[PERM[hp][0]], v[PERM[hp][1]], v[PERM[hp][2]]) + X[k], 3); break;
			case 1: v[0]=a; v[1]=b; v[2]=c; d = rol(d + fvar(hv, v[PERM[hp][0]], v[PERM[hp][1]], v[PERM[hp][2]]) + X[k], 9); break;
			case 2: v[0]=d; v[1]=a; v[2]=b; c = rol(c + fvar(hv, v[PERM[hp][0]], v[PERM[hp][1]], v[PERM[hp][2]]) + X[k], 11); break;
			default: v[0]=c; v[1]=d; v[2]=a; b = rol(b + fvar(hv, v[PERM[hp][0]], v[PERM[hp][1]], v[PERM[hp][2]]) + X[k], 15); break;
			}
		}
		st[0] += a; st[1] += b; st[2] += c; st[3] += d;
	}
	for (i = 0; i < 4; i++) {
		u32 w = outrev ? st[3 - i] : st[i];
		out[i*4+0] = (unsigned char)(w >> (outrev ? 24 : 0));
		out[i*4+1] = (unsigned char)(w >> (outrev ? 16 : 8));
		out[i*4+2] = (unsigned char)(w >> (outrev ? 8 : 16));
		out[i*4+3] = (unsigned char)(w >> (outrev ? 0 : 24));
	}
}

int main(int argc, char **argv) {
	const char *sofexe = (argc > 1) ? argv[1] : "C:\\Users\\User\\Soldier of Fortune\\SoF.exe";
	HMODULE hm = LoadLibraryA(sofexe);
	if (!hm) { printf("LoadLibrary failed %lu\n", GetLastError()); return 1; }
	unsigned char *base = (unsigned char *)hm;
	u32 (*eng)(unsigned char *, unsigned int) = (u32 (*)(unsigned char *, unsigned int))(base + 0x4D150);
	unsigned char *KEY = base + 0x120648;

	const char *texts[] = { "", "a", "abc" };
	unsigned int seqs[] = { 0, 0, 0 };
	unsigned char want[3][16];
	for (int i = 0; i < 3; i++) bc_md4((const unsigned char *)texts[i], (unsigned)strlen(texts[i]), want[i]);

	/* the engine's 32-bit returns for the same texts (no key bytes) */
	unsigned int engret[3];
	for (int i = 0; i < 3; i++) {
		unsigned char b[64];
		memset(b, 0, sizeof(b));
		memcpy(b, texts[i], strlen(texts[i]));
		engret[i] = eng(b, (unsigned)strlen(texts[i]));
	}

	int hits_bc = 0, hits_eng = 0;
	for (int fv = 0; fv < 2; fv++)
	for (int fp = 0; fp < 6; fp++)
	for (int gv = 2; gv < 4; gv++)
	for (int gp = 0; gp < 6; gp++)
	for (int hv = 4; hv < 5; hv++)
	for (int hp = 0; hp < 6; hp++)
	for (int lm = 0; lm < 4; lm++)
	for (int rev = 0; rev < 2; rev++) {
		unsigned char dg[3][16];
		int okb = 1, oke = 1;
		for (int i = 0; i < 3; i++) {
			unsigned char b[64];
			memset(b, 0, sizeof(b));
			memcpy(b, texts[i], strlen(texts[i]));
			hash4(b, (unsigned)strlen(texts[i]), fv, gv, hv, fp, gp, hp, lm, rev, dg[i]);
			if (memcmp(dg[i], want[i], 16) != 0) okb = 0;
			/* engine: find which digest byte equals the low byte of the return */
			{
				unsigned int e = eng(b, (unsigned)strlen(texts[i]));
				int found = 0;
				for (int k = 0; k < 16; k++) if (dg[i][k] == (e & 0xff)) found = 1;
				if (!found) oke = 0;
			}
		}
		if (okb) { printf("BCRYPT MATCH: fv=%d fp=%d gv=%d gp=%d hp=%d len=%d rev=%d\n", fv, fp, gv, gp, hp, lm, rev); hits_bc++; }
		if (oke) { printf("ENGINE MATCH: fv=%d fp=%d gv=%d gp=%d hp=%d len=%d rev=%d\n", fv, fp, gv, gp, hp, lm, rev); hits_eng++; }
	}
	printf("bcrypt hits=%d engine hits=%d\n", hits_bc, hits_eng);
	(void)KEY;
	return 0;
}
