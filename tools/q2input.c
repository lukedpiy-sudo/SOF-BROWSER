/*
 * q2input.c - inject keyboard/mouse input into a running Quake II client.
 *
 * Quake II 3.21 reads the keyboard from WM_KEYDOWN/WM_KEYUP and derives the
 * key purely from the scan code in lParam (win32/vid_dll.c: MapKey()), using
 * the scantokey[] table. That table only contains lowercase letters, digits
 * and a handful of punctuation characters - there is no '_' and no uppercase.
 *
 * So the injector posts WM_KEYDOWN/WM_KEYUP messages with a hand-built lParam
 * carrying the scan code, which is exactly what Q2 expects. Mouse buttons are
 * polled by Q2 with GetAsyncKeyState, so those are injected for real with
 * SendInput.
 *
 * usage:
 *   q2input.exe list
 *   q2input.exe <pid> console <text>     open the console, type text, Enter
 *   q2input.exe <pid> consoleclose       toggle the console closed
 *   q2input.exe <pid> click              left mouse click (fire)
 *   q2input.exe <pid> shot <n>           n clicks
 */

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Q2_CLASS "Quake 2"

#define SC_ENTER 0x1C
#define SC_BACKQUOTE 0x29
#define SC_SPACE 0x39
#define SC_MINUS 0x0D
#define SC_PERIOD 0x34
#define SC_COMMA 0x33
#define SC_SLASH 0x35

typedef struct {
	HWND	hwnd;
	DWORD	pid;
	char	title[128];
} win_t;

static win_t	g_wins[64];
static int		g_nwins;

/* Q2's scantokey[] table (win32/vid_dll.c), indexed by the ASCII character we
 * want to type. Only characters present in that table can reach the console -
 * there is no '_' and no uppercase.
 *
 *   0x03..0x0B = '1'..'9', 0x0C = '0', 0x0D = '-', 0x0E = '='
 *   0x10..0x1B = q w e r t y u i o p [ ]
 *   0x1C = Enter, 0x1E..0x26 = a s d f g h j k l
 *   0x27 = ';'  0x28 = '\''  0x29 = '`'  0x2B = '\'
 *   0x2C..0x35 = z x c v b n m , . /
 *   0x39 = space
 */
static const char *sc_map =
	"qwertyuiop[]"		/* 0x10..0x1B */
	"asdfghjkl;'"		/* 0x1E..0x28 */
	"`\\zxcvbnm,./";	/* 0x29, 0x2B..0x35 */

static int ieq (const char *a, const char *b)
{
	while (*a && *b) {
		int ca = (*a >= 'a' && *a <= 'z') ? *a - 32 : *a;
		int cb = (*b >= 'a' && *b <= 'z') ? *b - 32 : *b;
		if (ca != cb)
			return 0;
		a++; b++;
	}
	return *a == *b;
}

static int char_to_scan (char c)
{
	int	i;

	if (c >= 'a' && c <= 'z') {
		for (i = 0; sc_map[i]; i++) {
			if (sc_map[i] == c) {
				/* the three string chunks start at 0x10, 0x1E and 0x29 */
				if (i < 12)
					return 0x10 + i;
				if (i < 23)
					return 0x1E + (i - 12);
				return 0x29 + (i - 23);
			}
		}
	}
	if (c >= '1' && c <= '9')
		return 0x02 + (c - '1');
	if (c == '0') return 0x0C;
	if (c == '-') return SC_MINUS;
	if (c == '=') return 0x0E;
	if (c == ' ') return SC_SPACE;
	if (c == '.') return SC_PERIOD;
	if (c == ',') return SC_COMMA;
	if (c == '/') return SC_SLASH;
	if (c == '[') return 0x1A;
	if (c == ']') return 0x1B;
	if (c == ';') return 0x27;
	if (c == '\'') return 0x28;
	if (c == '`') return SC_BACKQUOTE;
	if (c == '\n') return SC_ENTER;
	return 0;
}

static BOOL CALLBACK enum_proc (HWND hwnd, LPARAM lp)
{
	DWORD	pid = 0;
	char	classname[128], title[128];

	(void)lp;

	GetWindowThreadProcessId (hwnd, &pid);
	if (!pid)
		return TRUE;

	GetClassNameA (hwnd, classname, sizeof (classname));
	if (!ieq (classname, Q2_CLASS))
		return TRUE;

	GetWindowTextA (hwnd, title, sizeof (title));

	if (g_nwins < (int)(sizeof (g_wins) / sizeof (g_wins[0]))) {
		g_wins[g_nwins].hwnd = hwnd;
		g_wins[g_nwins].pid = pid;
		strncpy (g_wins[g_nwins].title, title, sizeof (g_wins[g_nwins].title) - 1);
		g_wins[g_nwins].title[sizeof (g_wins[g_nwins].title) - 1] = 0;
		g_nwins++;
	}
	return TRUE;
}

static void list_windows (void)
{
	int	i;

	g_nwins = 0;
	EnumWindows (enum_proc, 0);

	printf ("%d quake2 window(s)\n", g_nwins);
	for (i = 0; i < g_nwins; i++)
		printf ("  pid=%lu hwnd=0x%08X title='%s'\n",
			(unsigned long)g_wins[i].pid,
			(unsigned)(ULONG_PTR)g_wins[i].hwnd,
			g_wins[i].title);
}

static HWND find_window (DWORD pid)
{
	int	i;

	g_nwins = 0;
	EnumWindows (enum_proc, 0);

	for (i = 0; i < g_nwins; i++)
		if (g_wins[i].pid == pid)
			return g_wins[i].hwnd;

	return NULL;
}

static void focus (HWND hwnd)
{
	HWND	foreground = GetForegroundWindow ();
	DWORD	fg_tid = foreground ? GetWindowThreadProcessId (foreground, NULL) : 0;
	DWORD	my_tid = GetCurrentThreadId ();

	if (fg_tid && fg_tid != my_tid)
		AttachThreadInput (fg_tid, my_tid, TRUE);

	ShowWindow (hwnd, SW_RESTORE);
	BringWindowToTop (hwnd);
	SetForegroundWindow (hwnd);
	SetFocus (hwnd);

	if (fg_tid && fg_tid != my_tid)
		AttachThreadInput (fg_tid, my_tid, FALSE);

	Sleep (150);
}

/* post one key press (down+up) with an explicit scan code */
static void post_key (HWND hwnd, int scan)
{
	LPARAM	down_lp = (LPARAM)(1 | ((LPARAM)scan << 16) | (1L << 30) | (1L << 31));
	LPARAM	up_lp   = (LPARAM)(1 | ((LPARAM)scan << 16));

	PostMessage (hwnd, WM_KEYDOWN, (WPARAM)scan, down_lp);
	Sleep (30);
	PostMessage (hwnd, WM_KEYUP, (WPARAM)scan, up_lp);
	Sleep (30);
}

static void type_text (HWND hwnd, const char *text)
{
	const char	*p;
	int			bad = 0;

	for (p = text; *p; p++) {
		int scan = char_to_scan (*p);
		if (!scan) {
			bad++;
			continue;
		}
		post_key (hwnd, scan);
		Sleep (25);
	}

	if (bad)
		printf ("  warning: %d character(s) not typeable in the Q2 console\n", bad);
}

static void click_mouse (void)
{
	INPUT	in[2];

	memset (in, 0, sizeof (in));
	in[0].type = INPUT_MOUSE;
	in[0].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
	in[1].type = INPUT_MOUSE;
	in[1].mi.dwFlags = MOUSEEVENTF_LEFTUP;
	SendInput (2, in, sizeof (INPUT));
}

int main (int argc, char **argv)
{
	HWND	hwnd;
	DWORD	pid;

	if (argc < 2) {
		printf ("usage: q2input.exe list | <pid> <action> [args]\n");
		return 2;
	}

	if (!strcmp (argv[1], "list")) {
		list_windows ();
		return 0;
	}

	if (argc < 3) {
		printf ("usage: q2input.exe <pid> <action> [args]\n");
		return 2;
	}

	pid = (DWORD)atoi (argv[1]);
	hwnd = find_window (pid);
	if (!hwnd) {
		printf ("no quake2 window for pid %lu\n", (unsigned long)pid);
		return 1;
	}

	focus (hwnd);

	if (!strcmp (argv[2], "console")) {
		if (argc < 4) {
			printf ("usage: q2input.exe <pid> console <text>\n");
			return 2;
		}
		post_key (hwnd, SC_BACKQUOTE);	/* open the console */
		Sleep (400);
		type_text (hwnd, argv[3]);
		Sleep (200);
		post_key (hwnd, SC_ENTER);
		Sleep (600);
		post_key (hwnd, SC_BACKQUOTE);	/* close it again */
		Sleep (300);
		printf ("typed '%s'\n", argv[3]);
		return 0;
	}

	if (!strcmp (argv[2], "type")) {
		/* open the console and type, but do NOT press Enter */
		if (argc < 4) {
			printf ("usage: q2input.exe <pid> type <text>\n");
			return 2;
		}
		post_key (hwnd, SC_BACKQUOTE);
		Sleep (400);
		type_text (hwnd, argv[3]);
		Sleep (300);
		printf ("typed '%s' (no Enter)\n", argv[3]);
		return 0;
	}

	if (!strcmp (argv[2], "consoleclose")) {
		post_key (hwnd, SC_BACKQUOTE);
		Sleep (250);
		return 0;
	}

	if (!strcmp (argv[2], "click")) {
		click_mouse ();
		Sleep (120);
		return 0;
	}

	if (!strcmp (argv[2], "shot")) {
		int	n = (argc > 3) ? atoi (argv[3]) : 1;
		int	i;
		for (i = 0; i < n; i++) {
			click_mouse ();
			Sleep (180);
		}
		return 0;
	}

	printf ("unknown action '%s'\n", argv[2]);
	return 2;
}
