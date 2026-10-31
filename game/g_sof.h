/* g_sof.h - Soldier of Fortune game data ported onto stock Quake II 3.21.
 *
 * All values in this file were recovered by static analysis of
 * Base\gamex86.dll (see analysis\REPORT.md). Field *names* are inferred;
 * the numeric values are observed.
 *
 * IMPORTANT: this module keeps the STOCK Q2 3.21 game_export_t layout.
 * SoF's own module used an extended 26-slot table, which its modified engine
 * expected. Stock Q2 has no such slots, so SoF-only callbacks are folded
 * into the standard entry points instead (see g_sof.c).
 */
#ifndef G_SOF_H
#define G_SOF_H

/* ------------------------------------------------------------------ *
 * Item index enum - recovered from FUN_50012550 / FUN_50069D40
 * (SoF 0x50012550). These index the item manager array directly.
 * ------------------------------------------------------------------ */
typedef enum {
	SOF_ITEM_NONE			= 0x00,
	SOF_ITEM_KNIFE			= 0x01,	/* melee  */
	SOF_ITEM_AMMO_9MM		= 0x02,
	SOF_ITEM_AMMO_12GAUGE		= 0x03,
	SOF_ITEM_AMMO_44			= 0x04,
	SOF_ITEM_AMMO_556		= 0x05,
	SOF_ITEM_AMMO_ROCKET		= 0x06,
	SOF_ITEM_AMMO_BATTERY		= 0x07,
	SOF_ITEM_AMMO_GAS		= 0x08,
	SOF_ITEM_AMMO_SLUG		= 0x09,
	SOF_ITEM_AMMO_SP_0A		= 0x0A,	/* sp_* ammo variants */
	SOF_ITEM_AMMO_SP_0B		= 0x0B,
	SOF_ITEM_AMMO_SP_0C		= 0x0C,
	SOF_ITEM_AMMO_SP_0D		= 0x0D,
	SOF_ITEM_AMMO_SP_0E		= 0x0E,
	SOF_ITEM_AMMO_SP_0F		= 0x0F,
	SOF_ITEM_AMMO_SP_10		= 0x10,
	SOF_ITEM_AMMO_SP_11		= 0x11,
	SOF_ITEM_AMMO_9MM_SUPPRESSED	= 0x14,
	SOF_ITEM_AMMO_556_SMG		= 0x15,
	SOF_ITEM_AMMO_556_SNIPER		= 0x16,
	SOF_ITEM_AMMO_REPEATING_SLUG	= 0x17,
	SOF_ITEM_AMMO_12GAUGE_SHOTGUN	= 0x18,
	SOF_ITEM_AMMO_556_HEAVY_MG	= 0x19,
	SOF_ITEM_AMMO_ROCKET_M1943	= 0x1A,
	SOF_ITEM_AMMO_MICROWAVE		= 0x1B,
	SOF_ITEM_AMMO_FLAME_L32		= 0x1C,
	SOF_ITEM_ARMOR			= 0x1D,
	SOF_ITEM_FLASHPACK		= 0x1E,
	SOF_ITEM_C4			= 0x1F,
	SOF_ITEM_GOGGLES			= 0x20,	/* Light Amplification Goggles */
	SOF_ITEM_CLAYMORE		= 0x21,
	SOF_ITEM_MEDKIT			= 0x22,
	SOF_ITEM_GRENADE			= 0x23,
	SOF_ITEM_CTF_FLAG		= 0x24,
	SOF_ITEM_HEALTH_SMALL		= 0x25,	/* 25 */
	SOF_ITEM_HEALTH_LARGE		= 0x26,	/* 50 */
	SOF_ITEM_CTF_CONTROL		= 0x27
} sof_item_index_t;

/* ------------------------------------------------------------------ *
 * Weapon ids.
 *
 * In SoF a weapon and its matching ammo share one index space, so these
 * deliberately alias several of the item values above. Recovered from the
 * weapon registration helper FUN_50065470 (SoF 0x50065470), whose final
 * argument is this index.
 * ------------------------------------------------------------------ */
typedef enum {
	SOF_WPN_KNIFE			= 0x01,
	SOF_WPN_PISTOL1			= 0x03,
	SOF_WPN_PISTOL2			= 0x04,
	SOF_WPN_MPISTOL			= 0x05,
	SOF_WPN_ASSAULT			= 0x06,
	SOF_WPN_SNIPER			= 0x07,
	SOF_WPN_AUTOSHOTGUN		= 0x09,
	SOF_WPN_SLUGGER			= 0x0A,
	SOF_WPN_SHOTGUN			= 0x0B,
	SOF_WPN_MACHINEGUN		= 0x0C,
	SOF_WPN_PHOSGRENADE		= 0x0D,
	SOF_WPN_ROCKET			= 0x0E,
	SOF_WPN_ROCKET_ALT		= 0x0F,
	SOF_WPN_MPG				= 0x10,
	SOF_WPN_MPG_ALT			= 0x11,
	SOF_WPN_FLAMETHROWER		= 0x12,
	SOF_WPN_DEAGLE			= 0x1D
} sof_weapon_id_t;

/* ------------------------------------------------------------------ *
 * Damage rules - recovered from T_Damage at 0x5008BB10
 * ------------------------------------------------------------------ */
#define SOF_HEALTH_FLOOR			(-999)		/* health clamp on death   */
#define SOF_GIB_THRESHOLD			(25)		/* below this -> gib/crit  */
#define SOF_ARMOR_MAX				(200)		/* pickup gives 50, cap 200 */
#define SOF_ARMOR_PICKUP_AMOUNT		(50)
#define SOF_ARMOR_MAX_PICKUP_DELAY		(3.0f)		/* respawn on success      */
#define SOF_ARMOR_FULL_RESPAWN_DELAY		(5.0f)		/* respawn when already max */
#define SOF_MEDKIT_MAX_CARRY			(2)
#define SOF_HEALTH_SMALL_AMOUNT			(25)
#define SOF_HEALTH_LARGE_AMOUNT			(50)

/* boss entities are immune unless this field equals 100 (edict+0x318) */
#define SOF_BOSS_DAMAGE_THRESHOLD		(100)

/* ------------------------------------------------------------------ *
 * Weapon table.
 *
 * Recovered from the data-driven weapon registration helper FUN_50065470,
 * called once per weapon id from the init blocks at 0x50064B73 / 0x50064D14
 * / 0x50064D63 ... 0x500650D1.
 *
 * Field meaning is INFERRED from argument order and from how ClientEndFrame
 * (0x500F53A0) consumes the values. The numbers are observed.
 * ------------------------------------------------------------------ */
typedef struct {
	sof_weapon_id_t	index;		/* weapon id (arg 18 of FUN_50065470) */
	const char *name;
	int			ammo_per_shot;	/* arg 10        */
	float		attack_delay;	/* ms between shots        */
	int			damage;			/* per pellet              */
	int			pellets;		/* projectiles per shot    */
	float		spread;			/* cone spread             */
	float		range;			/* max hitscan range       */
} sof_weapon_t;

extern const sof_weapon_t sof_weapons[];
extern const int			sof_num_weapons;

/* ------------------------------------------------------------------ *
 * Movement / tuning constants observed in the game module.
 * ------------------------------------------------------------------ */
#define SOF_MAXSPEED_FACTOR			(0.005493164f)	/* = 1/182.044, SHORT2RAD-class scale */
#define SOF_SHORT2RAD				(0.005493164f)
#define SOF_HEALTH_REGEN_RATE		(0.02f)		/* per frame, up to 1.0 */

/* ------------------------------------------------------------------ *
 * Combat rules (g_sof_combat.c)
 * ------------------------------------------------------------------ */
extern int	sof_gib_override;		/* set by T_Damage, consumed by the gib routine */
qboolean	SofIsBossEntity (edict_t *e);
int			SofBossState (edict_t *e);
void		SofSetBossState (edict_t *e, int state);
qboolean	SofBossImmune (edict_t *targ);
int			SofGibLevel (edict_t *targ, int take);
void		SofAccumulateDamage (edict_t *targ, vec3_t dir, int take, int absorbed);
int			SofClampArmor (int armor);
int			SofAddArmor (edict_t *targ, int amount);

/* ------------------------------------------------------------------ *
 * Weapon firing rules (g_sof_weapon.c)
 *
 * SoF obtains the per-shot ammo cost from a per-weapon virtual (vtable
 * +0x9C) and decrements the counter at edict+0x2EC by that amount, then
 * triggers a reload via vtable +0xF0 when it reaches zero. Stock Q2
 * hardcodes the decrement to 1, so these helpers replace that with the
 * SoF per-weapon cost.
 * ------------------------------------------------------------------ */
const sof_weapon_t	*Sof_WeaponForClient (edict_t *ent);
int					Sof_AmmoCost (edict_t *ent);
qboolean			Sof_CanFire (edict_t *ent);
void				Sof_ConsumeAmmo (edict_t *ent);

/* ------------------------------------------------------------------ *
 * Debug commands (g_sof_debug.c) - server-side observation/steering
 * helpers used by the automated multiplayer test harness. They arrive
 * through ClientCommand(), so a client types them in its console.
 * ------------------------------------------------------------------ */
qboolean			Sof_DebugCommand (edict_t *ent);
void				Sof_SelfTestHook (edict_t *ent, usercmd_t *ucmd);

#endif /* G_SOF_H */
