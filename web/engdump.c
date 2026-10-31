/* engdump.c - dump SoF.exe's hash function (0x2004D150) output for a set
 * of inputs so the algorithm can be identified offline. */
#include <windows.h>
#include <stdio.h>
#include <string.h>

typedef unsigned int (*hfn_t)(unsigned char *data, unsigned int len);
typedef unsigned int (*ckfn_t)(unsigned char *data, unsigned int len, unsigned int seq);

int main(int argc, char **argv) {
	const char *sofexe = (argc > 1) ? argv[1] : "C:\\Users\\User\\Soldier of Fortune\\SoF.exe";
	HMODULE h = LoadLibraryA(sofexe);
	if (!h) { printf("LoadLibrary failed %lu\n", GetLastError()); return 1; }
	unsigned char *base = (unsigned char *)h;
	hfn_t eng = (hfn_t)(base + 0x4D150);
	unsigned int lens[] = { 0, 1, 2, 3, 4, 55, 56, 63, 64, 65, 100 };
	for (int i = 0; i < 11; i++) {
		unsigned int len = lens[i];
		unsigned char buf[256];
		for (unsigned int j = 0; j < len; j++) buf[j] = (unsigned char)('A' + (j % 26));
		unsigned int r = eng(buf, len);
		printf("len=%u ret=0x%08x data=", len, r);
		for (unsigned int j = 0; j < len && j < 24; j++) printf("%02x", buf[j]);
		printf("\n");
	}
	/* also: does it mutate the buffer? */
	{
		unsigned char buf[64];
		memset(buf, 0x5a, sizeof(buf));
		unsigned int r = eng(buf, 8);
		printf("mutate len=8 ret=0x%08x buf:", r);
		for (int j = 0; j < 16; j++) printf("%02x", buf[j]);
		printf("\n");
	}
	return 0;
}
