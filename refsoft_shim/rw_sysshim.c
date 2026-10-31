/*
 * rw_sysshim.c - self-contained platform helpers for ref_soft.dll
 *
 * The Quake II software renderer needs four engine-side helpers that are not
 * reachable through the refimport_t interface it is handed by GetRefAPI():
 *
 *     Sys_Milliseconds()   - frame timing (r_main.c, r_misc.c)
 *     Sys_Mkdir()          - screenshot directory creation (r_misc.c)
 *     Hunk_Begin/Alloc/End/Free - model extra-data allocator (r_model.c)
 *
 * In the stock tree these live in win32/q_shwin.c, which belongs to the
 * engine executable. The engine exports nothing (quake2.mak builds it with an
 * empty DEF_FILE), so a standalone ref_soft.dll cannot import them - and
 * adding an export table to the engine turns out to produce an image the
 * Windows loader rejects with ERROR_BAD_EXE_FORMAT.
 *
 * The original Q2 3.21 ref_soft link (quake2.mak) also omits vid_dll.c and
 * q_shwin.c and carries no import library at all, so this shim reproduces
 * the same arrangement: the renderer module is self-contained, and every other
 * engine service (Cvar_Get, FS_LoadFile, Com_Error, Con_Printf, ...) reaches
 * the renderer through the refimport_t struct passed to GetRefAPI().
 *
 * The implementations below are copied from win32/q_shwin.c
 * (Copyright (C) 1997-2001 Id Software, Inc., GPL).
 *
 * Sys_Error() is supplied by ref_soft/r_main.c in this same module.
 */

#include <windows.h>
#include <time.h>
#include <direct.h>

void Sys_Error (char *error, ...);

typedef unsigned char byte;

int		hunkcount;

byte	*membase;
int		hunkmaxsize;
int		cursize;

void *Hunk_Begin (int maxsize)
{
	// reserve a huge chunk of memory, but don't commit any yet
	cursize = 0;
	hunkmaxsize = maxsize;
	membase = VirtualAlloc (NULL, maxsize, MEM_RESERVE, PAGE_NOACCESS);
	if (!membase)
		Sys_Error ("VirtualAlloc reserve failed");
	return (void *)membase;
}

void *Hunk_Alloc (int size)
{
	void	*buf;

	// round to cacheline
	size = (size+31)&~31;

	// commit pages as needed
	buf = VirtualAlloc (membase, cursize+size, MEM_COMMIT, PAGE_READWRITE);
	if (!buf)
		Sys_Error ("VirtualAlloc commit failed");

	cursize += size;
	if (cursize > hunkmaxsize)
		Sys_Error ("Hunk_Alloc overflow");

	return (void *)(membase+cursize-size);
}

int Hunk_End (void)
{
	hunkcount++;
	return cursize;
}

void Hunk_Free (void *base)
{
	if (base)
		VirtualFree (base, 0, MEM_RELEASE);

	hunkcount--;
}

int	curtime;

int Sys_Milliseconds (void)
{
	static int		base;
	static int		initialized = 0;

	if (!initialized)
	{	// let base retain 16 bits of effectively random data
		base = timeGetTime() & 0xffff0000;
		initialized = 1;
	}
	curtime = timeGetTime() - base;

	return curtime;
}

void Sys_Mkdir (char *path)
{
	_mkdir (path);
}
