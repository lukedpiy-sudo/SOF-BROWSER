/* g_sof_weapon.c - SoF weapon firing rules on stock Quake II 3.21.
 *
 * Recovered from Base\gamex86.dll (see analysis\REPORT.md section 4.28):
 *
 *   0x500060B2  call [weapon + 0x9C]      ; per-shot ammo cost
 *   0x500061C2  mov  eax, [edi+0x2EC]     ; current ammo
 *   0x500061CA  jle  skip                 ; <= 0 -> cannot fire
 *   0x500061D0  call [weapon + 0x148]     ; can-fire check
 *   0x500061E5  call [weapon + 0x14]      ; alt can-fire check
 *   0x500061FB  sub  [edi+0x2EC], ebx     ; ammo -= perShot
 *   0x50006209  jg   done                 ; still have ammo
 *   0x5000620B  call [weapon + 0xF0]      ; reload
 *
 * Stock Q2 already models "quantity = ammo used per shot" in gitem_t and uses
 * it for the can-fire test, but hardcodes the decrement to 1. These helpers
 * supply the SoF per-weapon cost in both places.
 */

#include "g_local.h"
#include "g_sof.h"

/* ------------------------------------------------------------------ *
 * Stock WEAP_* tag -> SoF weapon mapping.
 *
 * Stock Q2 ships 11 weapons; SoF has 17. Several stock weapons share a SoF
 * entry where the behaviour is equivalent on stock Q2.
 * ------------------------------------------------------------------ */
typedef struct {
	int					stock_tag;	/* WEAP_* from g_local.h */
	sof_weapon_id_t		sof;		/* matching SoF weapon id */
} sof_weapon_map_t;

static const sof_weapon_map_t sof_weapon_map[] = {
	{ WEAP_BLASTER,			SOF_WPN_KNIFE },		/* no ammo cost */
	{ WEAP_SHOTGUN,			SOF_WPN_SHOTGUN },
	{ WEAP_SUPERSHOTGUN,	SOF_WPN_AUTOSHOTGUN },
	{ WEAP_MACHINEGUN,		SOF_WPN_MACHINEGUN },
	{ WEAP_CHAINGUN,		SOF_WPN_MACHINEGUN },
	{ WEAP_GRENADES,		SOF_WPN_PHOSGRENADE },
	{ WEAP_GRENADELAUNCHER,	SOF_WPN_PHOSGRENADE },
	{ WEAP_ROCKETLAUNCHER,	SOF_WPN_ROCKET },
	{ WEAP_HYPERBLASTER,	SOF_WPN_PISTOL1 },
	{ WEAP_RAILGUN,			SOF_WPN_SNIPER },
	{ WEAP_BFG,				SOF_WPN_MPG }
};

/* ------------------------------------------------------------------ *
 * Sof_WeaponForClient - look up the SoF firing data for the weapon the
 * client currently holds. Returns NULL when the weapon has no SoF entry
 * (caller then falls back to stock behaviour).
 * ------------------------------------------------------------------ */
const sof_weapon_t *Sof_WeaponForClient (edict_t *ent)
{
	int						tag;
	int						i;

	if (!ent || !ent->client || !ent->client->pers.weapon)
		return NULL;

	tag = ent->client->pers.weapon->tag;

	for (i = 0; i < (int)(sizeof(sof_weapon_map) / sizeof(sof_weapon_map[0])); i++)
	{
		if (sof_weapon_map[i].stock_tag == tag)
		{
			int j;
			for (j = 0; j < sof_num_weapons; j++)
			{
				if (sof_weapons[j].index == sof_weapon_map[i].sof)
					return &sof_weapons[j];
			}
		}
	}

	return NULL;
}

/* ------------------------------------------------------------------ *
 * Sof_AmmoCost - ammo units consumed by one shot of the current weapon.
 * ------------------------------------------------------------------ */
int Sof_AmmoCost (edict_t *ent)
{
	const sof_weapon_t *w;

	if (!ent || !ent->client)
		return 1;

	w = Sof_WeaponForClient (ent);

	if (w && w->ammo_per_shot > 0)
		return w->ammo_per_shot;

	/* Fall back to the stock per-shot quantity. */
	if (ent->client->pers.weapon && ent->client->pers.weapon->quantity > 0)
		return ent->client->pers.weapon->quantity;

	return 1;
}

/* ------------------------------------------------------------------ *
 * Sof_CanFire - SoF can-fire test.
 *
 * Mirrors stock Weapon_Generic's WEAPON_READY branch but uses the SoF
 * per-shot cost instead of gitem_t::quantity.
 * ------------------------------------------------------------------ */
qboolean Sof_CanFire (edict_t *ent)
{
	if (!ent || !ent->client)
		return false;

	if (!ent->client->ammo_index)
		return true;		/* weapon needs no ammo */

	return ent->client->pers.inventory[ent->client->ammo_index] >= Sof_AmmoCost (ent);
}

/* ------------------------------------------------------------------ *
 * Sof_ConsumeAmmo - decrement ammo by the SoF per-shot cost.
 *
 * Replaces the stock `inventory[ammo_index]--`. The dry-fire sound and
 * weapon change are already handled by stock Weapon_Generic when
 * Sof_CanFire() rejects the shot, so they are deliberately not repeated
 * here.
 * ------------------------------------------------------------------ */
void Sof_ConsumeAmmo (edict_t *ent)
{
	int cost;

	if (!ent || !ent->client)
		return;

	if ((int)dmflags->value & DF_INFINITE_AMMO)
		return;

	if (!ent->client->ammo_index)
		return;

	cost = Sof_AmmoCost (ent);
	if (cost < 1)
		cost = 1;

	ent->client->pers.inventory[ent->client->ammo_index] -= cost;

	if (ent->client->pers.inventory[ent->client->ammo_index] < 0)
		ent->client->pers.inventory[ent->client->ammo_index] = 0;
}
