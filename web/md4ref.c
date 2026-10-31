/* md4ref.c - compute MD4 with Windows CNG (BCrypt) and compare it with
 * SoF.exe's own hash function (0x2004D150). Tells us whether the engine
 * hash IS stock MD4 and gives us a trusted reference to port to JS. */
#include <windows.h>
#include <bcrypt.h>
#ifndef BCRYPT_MD4_ALGORITHM
#define BCRYPT_MD4_ALGORITHM L"MD4"
#endif
#include <stdio.h>
#include <string.h>

typedef unsigned int (*hfn_t)(unsigned char *data, unsigned int len);
typedef unsigned int (*ckfn_t)(unsigned char *data, unsigned int len, unsigned int seq);

#pragma comment(lib, "bcrypt.lib")

static int md4(const unsigned char *data, unsigned int len, unsigned char out[16]) {
	BCRYPT_ALG_HANDLE alg = NULL; BCRYPT_HASH_HANDLE h = NULL;
	ULONG len2 = 0, objlen = 0; unsigned char *obj = NULL; int ok = 0;
	if (BCryptOpenAlgorithmProvider(&alg, BCRYPT_MD4_ALGORITHM, NULL, 0) < 0) return 0;
	BCryptGetProperty(alg, BCRYPT_OBJECT_LENGTH, (PUCHAR)&objlen, sizeof(objlen), &len2, 0);
	obj = (unsigned char *)HeapAlloc(GetProcessHeap(), 0, objlen);
	if (obj && BCryptCreateHash(alg, &h, obj, objlen, NULL, 0, 0) >= 0) {
		if (BCryptHashData(h, (PUCHAR)data, len, 0) >= 0 &&
		    BCryptFinishHash(h, out, 16, 0) >= 0) ok = 1;
		BCryptDestroyHash(h);
	}
	if (obj) HeapFree(GetProcessHeap(), 0, obj);
	BCryptCloseAlgorithmProvider(alg, 0);
	return ok;
}

int main(int argc, char **argv) {
	const char *sofexe = (argc > 1) ? argv[1] : "C:\\Users\\User\\Soldier of Fortune\\SoF.exe";
	HMODULE hm = LoadLibraryA(sofexe);
	if (!hm) { printf("LoadLibrary failed %lu\n", GetLastError()); return 1; }
	unsigned char *base = (unsigned char *)hm;
	hfn_t eng = (hfn_t)(base + 0x4D150);
	ckfn_t ck = (ckfn_t)(base + 0x1F1B0);
	unsigned char *KEY = base + 0x120648;

	const char *texts[] = { "new", "info", "configstrings 42 0", "begin 0" };
	unsigned int seqs[] = { 0, 1, 7, 3 };
	for (int i = 0; i < 4; i++) {
		unsigned int len = (unsigned int)strlen(texts[i]);
		unsigned int seq = seqs[i], k = seq % 3000;
		unsigned char body[128], buf[256], dig[16];
		unsigned int e, c;
		memcpy(body, texts[i], len);
		c = ck(body, len, seq);
		memcpy(buf, body, len);
		buf[len+0] = (unsigned char)(KEY[k+0] ^ (seq & 0xff));
		buf[len+1] = KEY[k+1];
		buf[len+2] = (unsigned char)(KEY[k+2] ^ ((seq >> 8) & 0xff));
		buf[len+3] = KEY[k+3];
		e = eng(buf, len + 4);
		md4(buf, len + 4, dig);
		printf("text=\"%s\" seq=%u\n", texts[i], seq);
		printf("   engine ck    = 0x%08x  (low byte 0x%02x)\n", c, c & 0xff);
		printf("   engine hash  = 0x%08x  (low byte 0x%02x)\n", e, e & 0xff);
		printf("   BCrypt MD4   = ", 0);
		for (int j = 0; j < 16; j++) printf("%02x", dig[j]);
		printf("\n   MD4[0:4] be  = 0x%08x   le = 0x%08x\n",
			((unsigned)dig[0]<<24)|((unsigned)dig[1]<<16)|((unsigned)dig[2]<<8)|dig[3],
			((unsigned)dig[3]<<24)|((unsigned)dig[2]<<16)|((unsigned)dig[1]<<8)|dig[0]);
	}
	return 0;
}
