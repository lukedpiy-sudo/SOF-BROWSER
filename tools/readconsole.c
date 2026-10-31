/*
 * readconsole.c - dump another process's console text.
 *
 * The SoF engine prints to the console window it allocates and never to
 * stdout or OutputDebugString, so the console buffer is the only place its
 * diagnostics appear.  We attach to the target's console and read the
 * screen buffer.
 *
 * usage: readconsole.exe <pid> [lines]
 */

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	DWORD pid;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	CHAR_INFO *cells;
	char *buf;
	HANDLE hOut;
	DWORD read, i, j, rows, cols, top;
	int want;

	if (argc < 2) {
		printf ("usage: readconsole.exe <pid> [lines]\n");
		return 2;
	}
	pid = (DWORD)atoi(argv[1]);
	want = (argc > 2) ? atoi(argv[2]) : 60;

	FreeConsole();
	if (!AttachConsole(pid)) {
		printf ("AttachConsole(%lu) failed: %lu\n", pid, GetLastError());
		return 1;
	}

	/* CONOUT$ is the reliable way to get the attached console's output
	 * buffer handle; GetStdHandle can fail when our own std handles were
	 * replaced before AttachConsole. */
	hOut = CreateFileW(L"CONOUT$", GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);
	if (hOut == INVALID_HANDLE_VALUE) {
		hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		printf ("(CONOUT$ open failed, using std handle: %lu)\n", GetLastError());
	}
	if (hOut == INVALID_HANDLE_VALUE || hOut == NULL) {
		printf ("no output handle\n");
		return 1;
	}

	if (!GetConsoleScreenBufferInfo(hOut, &csbi)) {
		printf ("GetConsoleScreenBufferInfo failed: %lu\n", GetLastError());
		return 1;
	}

	rows = (DWORD)want;
	if (rows > csbi.dwSize.Y)
		rows = csbi.dwSize.Y;
	cols = csbi.dwSize.X;
	top = (csbi.dwCursorPosition.Y + 1 > rows) ? csbi.dwCursorPosition.Y + 1 - rows : 0;

	cells = (CHAR_INFO *)malloc(sizeof(CHAR_INFO) * rows * cols);
	buf = (char *)malloc(cols * rows + 1);
	if (!cells || !buf) {
		printf ("out of memory\n");
		return 1;
	}

	if (!ReadConsoleOutputCharacterA(hOut, buf, (DWORD)(cols * rows),
		(COORD){ 0, (SHORT)top }, &read)) {
		printf ("ReadConsoleOutputCharacter failed: %lu\n", GetLastError());
		return 1;
	}

	for (i = 0; i < rows; i++) {
		DWORD e = cols;
		while (e > 0 && (buf[i * cols + e - 1] == ' ' || buf[i * cols + e - 1] == 0))
			e--;
		for (j = 0; j < e; j++) {
			char c = buf[i * cols + j];
			putchar((c == '\r') ? ' ' : c);
		}
		putchar('\n');
	}

	free(cells);
	free(buf);
	FreeConsole();
	return 0;
}
