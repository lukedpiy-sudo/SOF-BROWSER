/* g_sof_combat.c - Soldier of Fortune combat rules layered onto stock Q2 3.21.
 *
 * Recovered from T_Damage at SoF 0x5008BB10 (1803 bytes) and the death chain
 * at 0x500F0D30 / 0x5001EAA0 / 0x50007F9B / 0x50025030.
 *
 * Stock Q2 3.21 already matches SoF on several points (notably the -999 health
 * floor and the damage_armor / damage_blood / damage_from client fields), which
 * is expected: both derive from the same 3.21 lineage. Everything below is a
 * genuine SoF-only delta.
 */

#include "g_local.h"
#include "g_sof.h"

/* ------------------------------------------------------------------ *
 * Gib handoff
 *
 * T_Damage computes the SoF gib level on lethal damage. Stock Q2 3.21 has no
 * player gib/consume path (player dismemberment is absent from the game/ module),
 * so this slot is the handoff the future SoF gib/death routine will read.
 * ------------------------------------------------------------------ */
int sof_gib_override = 0;

/* ------------------------------------------------------------------ *
 * Boss immunity
 *
 * SoF 0x5008BB10 checks the target's classname and refuses damage unless the
 * entity's boss-state value equals SOF_BOSS_DAMAGE_THRESHOLD (100). This is
 * how a scripted boss is made vulnerable only during specific story beats.
 *
 * The original read that value at edict+0x318, but SoF's edict_t is a
 * different, larger layout than stock Q2's (0x464 vs 0x37C) and stock's
 * +0x318 lands on monsterinfo.idle, so the raw offset is not portable. It is
 * modelled as the named field edict_t::sof_boss_state.
 * ------------------------------------------------------------------ */

static const char *const sof_boss_classnames[] = {
	"m/x/mskinboss",
	"m/x/mraiderboss1",
	NULL
};

qboolean SofIsBossEntity (edict_t *e)
{
	int i;

	if (!e)
		return false;

	for (i = 0; sof_boss_classnames[i]; i++)
	{
		if (e->classname && !Q_stricmp(e->classname, sof_boss_classnames[i]))
			return true;
	}
	return false;
}

/* Returns the SoF boss-state value (edict_t::sof_boss_state). */
int SofBossState (edict_t *e)
{
	if (!e)
		return 0;
	return e->sof_boss_state;
}

void SofSetBossState (edict_t *e, int state)
{
	if (!e)
		return;
	e->sof_boss_state = state;
}

/* true when this damage should be ignored outright */
qboolean SofBossImmune (edict_t *targ)
{
	if (!SofIsBossEntity(targ))
		return false;

	/* vulnerable only once the state field reaches the threshold */
	return (SofBossState(targ) != SOF_BOSS_DAMAGE_THRESHOLD);
}

/* ------------------------------------------------------------------ *
 * Gibbing
 *
 * SoF does not use Q2's per-weapon giblevel. It gibs anything that drops
 * below SOF_GIB_THRESHOLD (25) health, which is why dismemberment in SoF is
 * far more frequent than in stock Quake II.
 * ------------------------------------------------------------------ */
int SofGibLevel (edict_t *targ, int take)
{
	int resulting;

	if (!targ)
		return 0;

	resulting = targ->health - take;

	if (resulting <= SOF_GIB_THRESHOLD)
		return 3;			/* highest gib level: head + limbs + guts */

	return 0;
}

/* ------------------------------------------------------------------ *
 * Damage accounting
 *
 * SoF tracks three separate accumulators per client (recovered at
 * gclient+0x494 modded, +0x498 accumulated, +0x49C absorbed by armor) and
 * stores the last damage direction at +0x4A0..+0x4A8 for the view kick.
 * Stock Q2 already has damage_armor / damage_blood / damage_knockback and
 * damage_from, so we route into those rather than adding new fields.
 * ------------------------------------------------------------------ */
void SofAccumulateDamage (edict_t *targ, vec3_t dir, int take, int absorbed)
{
	gclient_t *client = targ->client;

	if (!client)
		return;

	client->damage_armor += absorbed;
	client->damage_blood += take;
	client->damage_knockback += take;

	VectorCopy(dir, client->damage_from);
}

/* ------------------------------------------------------------------ *
 * Armor
 *
 * SoF models armor as a flat scalar: cap 200, +50 per pickup (recovered
 * from the pickup handler at SoF 0x500A9350 and the T_Damage armor
 * accumulate at 0x5008BB10).
 *
 * Stock Q2 models armor as a per-item inventory quantity and picks the
 * strongest worn tier (ArmorIndex: jacket -> combat -> body). The green
 * jacket armor's own max_count is 200, which is exactly SoF's cap, so we
 * carry SoF's flat armor on the jacket slot and clamp to the item cap.
 * ------------------------------------------------------------------ */
int SofClampArmor (int armor)
{
	if (armor < 0)
		return 0;
	if (armor > SOF_ARMOR_MAX)
		return SOF_ARMOR_MAX;
	return armor;
}

/* Returns the resulting armor value, or -1 when the target carries no armor slot. */
int SofAddArmor (edict_t *targ, int amount)
{
	gclient_t	*client;
	gitem_t		*armor_item;
	gitem_armor_t *info;
	int			index;
	int			armor;
	int			cap;

	if (!targ || !targ->client || amount <= 0)
		return -1;

	client = targ->client;
	index = JacketArmorIndex ();
	if (index <= 0)
		return -1;

	armor_item = GetItemByIndex (index);
	if (!armor_item || !armor_item->info)
		return -1;

	info = (gitem_armor_t *)armor_item->info;

	armor = SofClampArmor (client->pers.inventory[index] + amount);

	/* never exceed the item's own capacity */
	cap = info->max_count;
	if (cap > 0 && armor > cap)
		armor = cap;

	client->pers.inventory[index] = armor;

	return armor;
}