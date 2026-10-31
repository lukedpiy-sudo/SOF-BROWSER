/* test_combat.c - unit test for the ported SoF combat rules (g_sof_combat.c).
 *
 * Stubs the few externals g_sof_combat.c needs so the rules can be exercised
 * without booting an engine. Build: see tools/build_test.cmd
 */

#include "../game/g_local.h"
#include "../game/g_sof.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

static int failures = 0;

#define CHECK(cond, msg) do { \
	if (cond) { printf("  ok   %s\n", msg); } \
	else { printf("  FAIL %s\n", msg); failures++; } \
} while (0)

/* ---- stubs for symbols normally provided by the rest of the game module ---- */

int Q_stricmp (char *s1, char *s2)
{
	return strcmp(s1, s2);
}

/* fake "green armor" item with a 200 capacity, matching stock Q2 */
static gitem_armor_t fake_jacket_armor;
static gitem_t fake_armor_item;
static int fake_jacket_index = 1;

gitem_t *GetItemByIndex (int index)
{
	if (index != fake_jacket_index)
		return NULL;
	fake_armor_item.info = &fake_jacket_armor;
	return &fake_armor_item;
}

int JacketArmorIndex (void)
{
	return fake_jacket_index;
}

/* ---- stubs for g_sof_weapon.c ---- */

level_locals_t	level;
game_import_t		gi;
cvar_t				*dmflags;

static cvar_t	fake_dmflags;
void NoAmmoWeaponChange (edict_t *ent)
{
	(void)ent;
}

/* ---------------------------------------------------------------- */

static void test_clamp (void)
{
	printf("SofClampArmor\n");
	CHECK (SofClampArmor(-5) == 0,          "negative clamps to 0");
	CHECK (SofClampArmor(0) == 0,           "zero stays zero");
	CHECK (SofClampArmor(50) == 50,         "value below cap preserved");
	CHECK (SofClampArmor(200) == 200,       "cap value preserved");
	CHECK (SofClampArmor(250) == 200,       "above cap clamps to 200");
	CHECK (SofClampArmor(9999) == 200,      "far above cap clamps to 200");
}

static void test_gib (void)
{
	edict_t targ;

	printf("SofGibLevel\n");
	memset(&targ, 0, sizeof(targ));

	targ.health = 100;
	CHECK (SofGibLevel(&targ, 10) == 0, "100 - 10 -> 90, no gib");

	targ.health = 40;
	CHECK (SofGibLevel(&targ, 14) == 0, "40 - 14 -> 26, no gib (just above threshold)");
	CHECK (SofGibLevel(&targ, 15) == 3, "40 - 15 -> 25, gib (at threshold)");
	CHECK (SofGibLevel(&targ, 20) == 3, "40 - 20 -> 20, gib (below threshold)");

	targ.health = 30;
	CHECK (SofGibLevel(&targ, 10) == 3, "30 - 10 -> 20, gib");

	targ.health = 25;
	CHECK (SofGibLevel(&targ, 5) == 3,  "25 - 5 -> 20, gib");

	targ.health = 100;
	CHECK (SofGibLevel(&targ, 80) == 3, "100 - 80 -> 20, gib");
	CHECK (SofGibLevel(&targ, 100) == 3, "lethal -> gib");
	CHECK (SofGibLevel(NULL, 10) == 0,   "NULL target is safe");
}

static void test_boss (void)
{
	edict_t boss;

	printf("SofBossImmune / SofIsBossEntity\n");
	memset(&boss, 0, sizeof(boss));

	boss.classname = "m/x/mskinboss";
	CHECK (SofIsBossEntity(&boss) == true, "mskinboss recognised as boss");

	SofSetBossState(&boss, 0);
	CHECK (SofBossImmune(&boss) == true, "boss immune below threshold (state 0)");
	CHECK (SofBossState(&boss) == 0,     "state readback is 0");
	CHECK (boss.sof_boss_state == 0,     "state stored in named field");

	SofSetBossState(&boss, SOF_BOSS_DAMAGE_THRESHOLD);
	CHECK (boss.sof_boss_state == SOF_BOSS_DAMAGE_THRESHOLD, "named field holds threshold");
	CHECK (SofBossImmune(&boss) == false, "boss vulnerable at threshold 100");

	SofSetBossState(&boss, 500);
	CHECK (SofBossImmune(&boss) == true, "boss immune again above threshold");

	boss.classname = "player";
	CHECK (SofIsBossEntity(&boss) == false, "player is not a boss");
	CHECK (SofBossImmune(&boss) == false,  "player takes damage normally");

	boss.classname = NULL;
	CHECK (SofIsBossEntity(&boss) == false, "NULL classname is safe");
	SofSetBossState(NULL, 5);
	CHECK (SofBossState(NULL) == 0, "NULL edict boss state reads 0");
}

/* The engine reads edict fields at fixed offsets up to `owner`; the server
 * strides the array with ge->edict_size which the module reports. Adding
 * game-private fields is therefore safe, but the shared prefix must not move. */
static void test_layout (void)
{
	printf("edict layout\n");
	CHECK (offsetof(edict_t, s) == 0x000, "s at 0x000");
	CHECK (offsetof(edict_t, client) == 0x054, "client at 0x054");
	CHECK (offsetof(edict_t, svflags) == 0x0B8, "svflags at 0x0B8");
	CHECK (offsetof(edict_t, owner) == 0x100, "owner at 0x100 (engine boundary)");
	CHECK (offsetof(edict_t, sof_boss_state) > offsetof(edict_t, owner),
		"sof_boss_state is in the game-private region");
	CHECK (sizeof(entity_state_t) == 0x54, "sizeof(entity_state_t) == 0x54");
	printf("  info sizeof(edict_t) = 0x%X\n", (unsigned) sizeof(edict_t));
}

static void test_accumulate (void)
{
	edict_t  targ;
	gclient_t client;

	printf("SofAccumulateDamage\n");
	memset(&targ, 0, sizeof(targ));
	memset(&client, 0, sizeof(client));

	targ.client = &client;
	SofAccumulateDamage(&targ, (float[3]){0.0f, 0.0f, 1.0f}, 10, 3);
	CHECK (client.damage_blood == 10,   "blood damage accumulated");
	CHECK (client.damage_armor == 3,    "armor absorption accumulated");
	CHECK (client.damage_knockback == 10, "knockback accumulated");
	CHECK (client.damage_from[2] == 1.0f, "damage direction stored");

	SofAccumulateDamage(&targ, (float[3]){1.0f, 0.0f, 0.0f}, 5, 1);
	CHECK (client.damage_blood == 15,   "blood damage accumulates across calls");
	CHECK (client.damage_armor == 4,    "armor accumulates across calls");

	targ.client = NULL;
	SofAccumulateDamage(&targ, (float[3]){0, 0, 0}, 7, 7);
	CHECK (1, "NULL client is safe");
}

static void test_add_armor (void)
{
	edict_t   targ;
	gclient_t client;

	printf("SofAddArmor\n");
	memset(&targ, 0, sizeof(targ));
	memset(&client, 0, sizeof(client));
	fake_jacket_armor.max_count = 200;

	targ.client = &client;
	client.pers.inventory[fake_jacket_index] = 0;

	CHECK (SofAddArmor(&targ, SOF_ARMOR_PICKUP_AMOUNT) == 50, "first pickup gives 50");
	CHECK (client.pers.inventory[fake_jacket_index] == 50,    "inventory reflects 50");

	SofAddArmor(&targ, SOF_ARMOR_PICKUP_AMOUNT);
	CHECK (SofAddArmor(&targ, SOF_ARMOR_PICKUP_AMOUNT) == 150, "third pickup gives 150");

	client.pers.inventory[fake_jacket_index] = 190;
	CHECK (SofAddArmor(&targ, SOF_ARMOR_PICKUP_AMOUNT) == 200, "clamps at item cap 200");
	CHECK (SofAddArmor(&targ, SOF_ARMOR_PICKUP_AMOUNT) == 200, "already full stays 200");

	client.pers.inventory[fake_jacket_index] = 0;
	targ.client = NULL;
	CHECK (SofAddArmor(&targ, 50) == -1, "NULL client returns -1");
	CHECK (SofAddArmor(NULL, 50) == -1,   "NULL edict returns -1");
}

/* ------------------------------------------------------------------ *
 * Weapon firing rules (g_sof_weapon.c)
 * ------------------------------------------------------------------ */
static edict_t   wpn_ent;
static gclient_t wpn_client;
static gitem_t   wpn_item;

static void wpn_reset (int stock_tag, int ammo_inventory)
{
	memset(&wpn_ent, 0, sizeof(wpn_ent));
	memset(&wpn_client, 0, sizeof(wpn_client));
	memset(&wpn_item, 0, sizeof(wpn_item));

	wpn_ent.client = &wpn_client;
	wpn_item.tag = stock_tag;
	wpn_client.pers.weapon = &wpn_item;
	wpn_client.ammo_index = 1;
	wpn_client.pers.inventory[1] = ammo_inventory;
}

static void test_weapon_map (void)
{
	const sof_weapon_t *w;

	printf("Sof_WeaponForClient\n");

	wpn_reset(WEAP_MACHINEGUN, 10);
	w = Sof_WeaponForClient(&wpn_ent);
	CHECK (w != NULL, "machinegun maps to a SoF weapon");
	CHECK (w->index == SOF_WPN_MACHINEGUN, "machinegun -> SOF_WPN_MACHINEGUN");
	CHECK (Sof_AmmoCost(&wpn_ent) == w->ammo_per_shot, "ammo cost comes from SoF table");

	wpn_reset(WEAP_SHOTGUN, 10);
	w = Sof_WeaponForClient(&wpn_ent);
	CHECK (w != NULL && w->index == SOF_WPN_SHOTGUN, "shotgun -> SOF_WPN_SHOTGUN");

	wpn_reset(WEAP_ROCKETLAUNCHER, 10);
	CHECK (Sof_WeaponForClient(&wpn_ent)->index == SOF_WPN_ROCKET, "rocket -> SOF_WPN_ROCKET");

	wpn_reset(WEAP_BLASTER, 10);
	CHECK (Sof_WeaponForClient(&wpn_ent)->index == SOF_WPN_KNIFE, "blaster -> no-ammo fallback");

	wpn_ent.client = NULL;
	CHECK (Sof_WeaponForClient(&wpn_ent) == NULL, "NULL client is safe");
	CHECK (Sof_AmmoCost(&wpn_ent) == 1, "NULL client falls back to 1");
}

static void test_can_fire (void)
{
	int	cost;

	printf("Sof_CanFire\n");

	wpn_reset(WEAP_MACHINEGUN, 0);
	CHECK (!Sof_CanFire(&wpn_ent), "cannot fire with 0 ammo");

	wpn_reset(WEAP_MACHINEGUN, 1);
	CHECK (!Sof_CanFire(&wpn_ent), "cannot fire with less than one shot");

	wpn_reset(WEAP_MACHINEGUN, 20);
	cost = Sof_AmmoCost(&wpn_ent);
	CHECK (cost > 1, "SoF per-shot cost is greater than stock");
	CHECK (Sof_CanFire(&wpn_ent),  "can fire with ammo above cost");

	wpn_client.ammo_index = 0;
	CHECK (Sof_CanFire(&wpn_ent),  "no ammo requirement always fires");
}

static void test_consume_ammo (void)
{
	int before;
	int cost;

	printf("Sof_ConsumeAmmo\n");

	wpn_reset(WEAP_MACHINEGUN, 20);
	cost  = Sof_AmmoCost(&wpn_ent);
	before = wpn_client.pers.inventory[1];
	Sof_ConsumeAmmo(&wpn_ent);
	CHECK (wpn_client.pers.inventory[1] == before - cost,
		"ammo decremented by SoF per-shot cost");

	wpn_reset(WEAP_MACHINEGUN, 1);
	Sof_ConsumeAmmo(&wpn_ent);
	CHECK (wpn_client.pers.inventory[1] == 0, "ammo clamps at zero, never negative");

	wpn_client.ammo_index = 0;
	wpn_client.pers.inventory[1] = 5;
	Sof_ConsumeAmmo(&wpn_ent);
	CHECK (wpn_client.pers.inventory[1] == 5, "no-ammo weapon does not consume");
}

int main (void)
{
	printf("=== SoF combat rules ===\n");

	setvbuf(stdout, NULL, _IONBF, 0);

	fake_dmflags.value = 0;
	dmflags = &fake_dmflags;

	test_clamp();
	test_gib();
	test_boss();
	test_layout();
	test_accumulate();
	test_add_armor();
	test_weapon_map();
	test_can_fire();
	test_consume_ammo();

	printf("\n%s (%d failure%s)\n", failures ? "FAILED" : "PASSED",
		failures, failures == 1 ? "" : "s");
	return failures ? 1 : 0;
}