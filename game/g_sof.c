/* g_sof.c - Soldier of Fortune data tables ported onto stock Quake II 3.21.
 *
 * Values recovered from Base\gamex86.dll by static analysis.
 * See ..\..\Soldier of Fortune\analysis\REPORT.md for provenance.
 */

#include "g_local.h"
#include "g_sof.h"

/* ------------------------------------------------------------------ *
 * Weapon table
 *
 * Order matches the registration order observed at 0x50064B73-0x500650D1.
 * Note several weapons share one fire routine in the original (pistol1,
 * pistol2, mpistol, assault, sniper and machinegun all dispatch through
 * the same handler); that sharing is a SoF data-table artefact and is not
 * reproduced here - each weapon gets its own entry so behaviour can be
 * tuned independently on stock Q2.
 * ------------------------------------------------------------------ */
const sof_weapon_t sof_weapons[] = {
	/* index                       name              ammo  delay  dmg  pellets  spread  range */
	{ SOF_WPN_KNIFE,			"knife",			1,		0.0f,	 30,	 1,	 0.00f,   30.0f },
	{ SOF_WPN_PISTOL1,			"pistol1",			3,	  300.0f,	 45,	 2,	 0.03f,	 512.0f },
	{ SOF_WPN_PISTOL2,			"pistol2",			4,	  680.0f,	120,	 5,	 0.08f,	1024.0f },
	{ SOF_WPN_MPISTOL,			"mpistol",			5,	   40.0f,	  2,	 1,	 0.00f,	 512.0f },
	{ SOF_WPN_ASSAULT,			"assault",			6,	  600.0f,	 45,	 4,	 0.03f,	 512.0f },
	{ SOF_WPN_SNIPER,			"sniper",			7,	   80.0f,	  6,	 1,	 0.00f,	1600.0f },
	{ SOF_WPN_AUTOSHOTGUN,		"autoshotgun",		9,	  400.0f,	 80,	 3,	 0.04f,	 512.0f },
	{ SOF_WPN_SLUGGER,			"slugger",			0x0A,	1280.0f,	200,	 3,	 0.02f,	 256.0f },
	{ SOF_WPN_SHOTGUN,			"shotgun",			0x0B,	1280.0f,	 40,	 1,	 0.20f,	 128.0f },
	{ SOF_WPN_MACHINEGUN,		"machinegun",		0x0C,	2000.0f,	100,	 7,	 0.08f,	2048.0f },
	{ SOF_WPN_PHOSGRENADE,		"phosgrenade",		0x0D,	 500.0f,	 30,	 3,	 0.01f,	  0.0f },
	{ SOF_WPN_ROCKET,			"rocket",			0x0E,	  30.0f,	  5,	 1,	 0.20f,	  0.0f },
	{ SOF_WPN_ROCKET_ALT,		"rocket_alt",		0x0F,	  15.0f,	  5,	 1,	 0.10f,	  0.0f },
	{ SOF_WPN_MPG,				"mpg",				0x10,	  10.0f,	 10,	 1,	 0.00f,	 512.0f },
	{ SOF_WPN_MPG_ALT,			"mpg_alt",			0x11,	 200.0f,	  3,	 1,	 0.00f,	 512.0f },
	{ SOF_WPN_FLAMETHROWER,		"flamethrower",		0x12,	  15.0f,	  3,	 1,	 0.00f,	  0.0f },
	{ SOF_WPN_DEAGLE,			"deagle",			0x1D,	 300.0f,	  3,	 1,	 0.02f,	  0.0f }
};

const int sof_num_weapons = (int) (sizeof(sof_weapons) / sizeof(sof_weapons[0]));
