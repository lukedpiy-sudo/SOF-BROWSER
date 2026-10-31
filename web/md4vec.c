/* md4vec.c - print BCrypt MD4 of a few reference strings */
#include <windows.h>
#include <bcrypt.h>
#include <stdio.h>
#include <string.h>
#pragma comment(lib, "bcrypt.lib")
#ifndef BCRYPT_MD4_ALGORITHM
#define BCRYPT_MD4_ALGORITHM L"MD4"
#endif

static int md4(const unsigned char *data, unsigned int len, unsigned char out[16]) {
	BCRYPT_ALG_HANDLE alg = NULL; BCRYPT_HASH_HANDLE h = NULL;
	ULONG l2 = 0, objlen = 0; unsigned char *obj = NULL; int ok = 0;
	if (BCryptOpenAlgorithmProvider(&alg, BCRYPT_MD4_ALGORITHM, NULL, 0) < 0) return 0;
	BCryptGetProperty(alg, BCRYPT_OBJECT_LENGTH, (PUCHAR)&objlen, sizeof(objlen), &l2, 0);
	obj = (unsigned char *)HeapAlloc(GetProcessHeap(), 0, objlen);
	if (obj && BCryptCreateHash(alg, &h, obj, objlen, NULL, 0, 0) >= 0) {
		if (BCryptHashData(h, (PUCHAR)data, len, 0) >= 0 && BCryptFinishHash(h, out, 16, 0) >= 0) ok = 1;
		BCryptDestroyHash(h);
	}
	if (obj) HeapFree(GetProcessHeap(), 0, obj);
	BCryptCloseAlgorithmProvider(alg, 0);
	return ok;
}
int main(void) {
	const char *v[] = { "", "a", "abc", "message digest" };
	for (int i = 0; i < 4; i++) {
		unsigned char d[16];
		md4((const unsigned char *)v[i], (unsigned int)strlen(v[i]), d);
		printf("md4(\"%s\") = ", v[i]);
		for (int j = 0; j < 16; j++) printf("%02x", d[j]);
		printf("\n");
	}
	return 0;
}
