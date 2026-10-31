/* test_api.c - loads the built game module, calls GetGameAPI with a stub
 * import table, and dumps the export table so it can be diffed against the
 * recovered Soldier of Fortune API (26 slots at 0x5015C8D0).
 *
 * This never calls into the game module's handlers - only GetGameAPI, which
 * in stock Q2 3.21 merely copies the import pointers and fills the table.
 */
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "q_shared.h"
#include "game.h"
#include "g_sof.h"

/* exported from the module's import library so the harness can verify them */
extern const sof_weapon_t sof_weapons[];
extern const int sof_num_weapons;

static int g_stub_calls = 0;
static int stub(void) { g_stub_calls++; return 0; }

int main(int argc, char **argv)
{
	const char *dllpath = (argc > 1) ? argv[1] : "gamex86.dll";
	int nimp = (int) (sizeof(game_import_t) / sizeof(void *));
	int nexp = (int) (sizeof(game_export_t) / sizeof(void *));
	int i;

	printf("== sizes ==\n");
	printf("sizeof(game_import_t) = %u (%d slots)\n",
		   (unsigned) sizeof(game_import_t), nimp);
	printf("sizeof(game_export_t) = %u (%d slots)\n",
		   (unsigned) sizeof(game_export_t), nexp);

	HMODULE h = LoadLibraryA(dllpath);
	if (!h) {
		printf("LoadLibraryA(\"%s\") failed: %lu\n", dllpath, GetLastError());
		return 1;
	}
	printf("\n== loaded ==\n");
	printf("module base = %p\n", (void *) h);

	game_export_t *(*pGetGameAPI) (game_import_t *) =
		(game_export_t *(*) (game_import_t *)) GetProcAddress(h, "GetGameAPI");
	if (!pGetGameAPI) {
		printf("GetProcAddress(GetGameAPI) failed: %lu\n", GetLastError());
		return 1;
	}
	printf("GetGameAPI = %p\n", (void *) pGetGameAPI);

	game_import_t *imp = (game_import_t *) calloc(1, sizeof(game_import_t));
	if (!imp) { printf("oom\n"); return 1; }
	/* fill every pointer slot with the same stub; GetGameAPI only copies them */
	for (i = 0; i < nimp; i++)
		((void **) imp)[i] = (void *) stub;

	game_export_t *exp = pGetGameAPI(imp);
	printf("\n== GetGameAPI ==\n");
	printf("returned export table = %p\n", (void *) exp);
	printf("stub calls during GetGameAPI = %d (expected 0)\n", g_stub_calls);

	if (!exp) {
		printf("NULL export table\n");
		return 1;
	}
	printf("apiversion = %d\n", exp->apiversion);

	printf("\n== export slot table ==\n");
	printf("%-6s %-12s %s\n", "slot", "offset", "address");
	for (i = 0; i < nexp; i++) {
		void *slot;
		if (i == 0) {
			/* slot 0 in stock Q2 is the API version int, not a pointer */
			printf("%-6d %-12s %d (int)\n", i, "+0x00", exp->apiversion);
			continue;
		}
		slot = ((void **) exp)[i];
		printf("%-6d +0x%02X       %p%s\n", i, i * 4, slot,
			   slot ? "" : "   <NULL>");
	}

	FreeLibrary(h);
	free(imp);

	printf("\n== ported SoF weapon table (%d weapons) ==\n", sof_num_weapons);
	printf("%-12s %-6s %-5s %-9s %-5s %-8s %-7s %s\n",
		   "name", "index", "ammo", "delay", "dmg", "pellets", "spread", "range");
	for (i = 0; i < sof_num_weapons; i++) {
		const sof_weapon_t *w = &sof_weapons[i];
		printf("%-12s 0x%02X   %-5d %-9.1f %-5d %-8d %-7.3f %.1f\n",
			   w->name, w->index, w->ammo_per_shot, w->attack_delay,
			   w->damage, w->pellets, w->spread, w->range);
	}

	printf("\n== ported damage rules ==\n");
	printf("health floor      = %d\n", SOF_HEALTH_FLOOR);
	printf("gib threshold     = %d\n", SOF_GIB_THRESHOLD);
	printf("armor max         = %d\n", SOF_ARMOR_MAX);
	printf("armor pickup      = %d (respawn %.1fs / %.1fs when full)\n",
		   SOF_ARMOR_PICKUP_AMOUNT, SOF_ARMOR_MAX_PICKUP_DELAY,
		   SOF_ARMOR_FULL_RESPAWN_DELAY);
	printf("medkit max carry  = %d\n", SOF_MEDKIT_MAX_CARRY);
	printf("health small/large= %d / %d\n",
		   SOF_HEALTH_SMALL_AMOUNT, SOF_HEALTH_LARGE_AMOUNT);
	printf("health regen rate = %.3f per frame\n", SOF_HEALTH_REGEN_RATE);

	return 0;
}