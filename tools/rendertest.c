/*
 * rendertest.c - mimic the engine's renderer loading (VID_LoadRefresh) for
 * both ref_gl.dll and ref_soft.dll and report exactly what fails.
 *
 * The engine loads the renderer with:
 *     reflibrary = LoadLibrary(name);
 *     refAPI = GetProcAddress(reflibrary, "GetRefAPI");
 *     refAPI(&ri);              -> fills a refexport_t whose first int is
 *                                   api_version
 * and compares that version against REF_API_VERSION.
 *
 * usage: rendertest <ref_gl.dll|ref_soft.dll>
 */

#include <windows.h>
#include <stdio.h>

#define REF_API_VERSION 3

typedef struct {
	int		api_version;
	char	pad[4096];
} refexport_t;

typedef int (*REFAPI)(void *);

int main(int argc, char **argv)
{
	HMODULE lib;
	REFAPI api;
	refexport_t re;
	DWORD err;
	char fname[MAX_PATH];
	const char *base;

	if (argc < 2) {
		printf ("usage: rendertest <dll>\n");
		return 2;
	}

	base = argv[1];
	if (GetFileAttributesA (base) == INVALID_FILE_ATTRIBUTES) {
		/* try alongside the exe */
		char dir[MAX_PATH];
		DWORD n = GetModuleFileNameA (NULL, dir, sizeof (dir));
		char *slash;
		(void)n;
		slash = strrchr (dir, '\\');
		if (slash) {
			*slash = 0;
			_snprintf (fname, sizeof (fname), "%s\\%s", dir, base);
			base = fname;
		}
	}

	printf ("loading %s\n", base);
	lib = LoadLibraryA (base);
	if (!lib) {
		err = GetLastError ();
		printf ("  LoadLibrary FAILED, GetLastError=%lu\n", err);
		return 1;
	}
	printf ("  LoadLibrary OK (base 0x%08X)\n", (unsigned)(ULONG_PTR)lib);

	api = (REFAPI)GetProcAddress (lib, "GetRefAPI");
	if (!api) {
		err = GetLastError ();
		printf ("  GetProcAddress('GetRefAPI') FAILED, err=%lu\n", err);
		return 1;
	}
	printf ("  GetProcAddress OK\n");

	memset (&re, 0, sizeof (re));
	api (&re);
	printf ("  GetRefAPI returned api_version=%d (engine wants %d) -> %s\n",
		re.api_version, REF_API_VERSION,
		re.api_version == REF_API_VERSION ? "MATCH" : "MISMATCH");

	if (re.api_version != REF_API_VERSION) {
		printf ("  RESULT: FAIL (version mismatch)\n");
		return 1;
	}

	/* now try Init, which is where the renderer touches the window */
	{
		/* refexport_t.Init is the 3rd pointer slot in Q2's layout; find it by
		   scanning the returned struct is fragile, so just report success of
		   the API call and let the engine test the rest. */
		printf ("  RESULT: OK (renderer API reachable)\n");
	}
	return 0;
}
