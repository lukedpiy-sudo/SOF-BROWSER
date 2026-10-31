/* dump_offsets.c - print the layout of the stock Q2 3.21 edict_t and gclient_t.
 *
 * Used to resolve the SoF edict+0x318 boss-state field onto a real stock
 * field instead of an unverified raw offset.
 */

#include "../game/g_local.h"
#include <stdio.h>
#include <stddef.h>

#define OFF(type, field) (unsigned)offsetof(type, field)

static void edict_fields (void)
{
	printf("sizeof(edict_t)  = 0x%X (%u)\n",
		(unsigned)sizeof(edict_t), (unsigned)sizeof(edict_t));
	printf("sizeof(entity_state_t) = 0x%X\n", (unsigned)sizeof(entity_state_t));
	printf("sizeof(gclient_t) = 0x%X (%u)\n",
		(unsigned)sizeof(gclient_t), (unsigned)sizeof(gclient_t));
	printf("sizeof(pmove_state_t) = 0x%X\n", (unsigned)sizeof(pmove_state_t));
	printf("sizeof(client_persistant_t) = 0x%X\n",
		(unsigned)sizeof(client_persistant_t));
	printf("\n== edict_t fields ==\n");
	printf("  %-22s 0x%03X\n", "s",            OFF(edict_t, s));
	printf("  %-22s 0x%03X\n", "client",       OFF(edict_t, client));
	printf("  %-22s 0x%03X\n", "inuse",        OFF(edict_t, inuse));
	printf("  %-22s 0x%03X\n", "linkcount",    OFF(edict_t, linkcount));
	printf("  %-22s 0x%03X\n", "area",         OFF(edict_t, area));
	printf("  %-22s 0x%03X\n", "num_clusters", OFF(edict_t, num_clusters));
	printf("  %-22s 0x%03X\n", "clusternums",  OFF(edict_t, clusternums));
	printf("  %-22s 0x%03X\n", "headnode",     OFF(edict_t, headnode));
	printf("  %-22s 0x%03X\n", "areanum",      OFF(edict_t, areanum));
	printf("  %-22s 0x%03X\n", "areanum2",     OFF(edict_t, areanum2));
	printf("  %-22s 0x%03X\n", "svflags",      OFF(edict_t, svflags));
	printf("  %-22s 0x%03X\n", "mins",         OFF(edict_t, mins));
	printf("  %-22s 0x%03X\n", "maxs",         OFF(edict_t, maxs));
	printf("  %-22s 0x%03X\n", "absmin",       OFF(edict_t, absmin));
	printf("  %-22s 0x%03X\n", "absmax",       OFF(edict_t, absmax));
	printf("  %-22s 0x%03X\n", "size",         OFF(edict_t, size));
	printf("  %-22s 0x%03X\n", "solid",        OFF(edict_t, solid));
	printf("  %-22s 0x%03X\n", "clipmask",     OFF(edict_t, clipmask));
	printf("  %-22s 0x%03X\n", "owner",        OFF(edict_t, owner));
	printf("  %-22s 0x%03X\n", "movetype",     OFF(edict_t, movetype));
	printf("  %-22s 0x%03X\n", "flags",        OFF(edict_t, flags));
	printf("  %-22s 0x%03X\n", "model",        OFF(edict_t, model));
	printf("  %-22s 0x%03X\n", "freetime",     OFF(edict_t, freetime));
	printf("  %-22s 0x%03X\n", "message",      OFF(edict_t, message));
	printf("  %-22s 0x%03X\n", "classname",    OFF(edict_t, classname));
	printf("  %-22s 0x%03X\n", "spawnflags",   OFF(edict_t, spawnflags));
	printf("  %-22s 0x%03X\n", "timestamp",    OFF(edict_t, timestamp));
	printf("  %-22s 0x%03X\n", "angle",        OFF(edict_t, angle));
	printf("  %-22s 0x%03X\n", "target",       OFF(edict_t, target));
	printf("  %-22s 0x%03X\n", "targetname",   OFF(edict_t, targetname));
	printf("  %-22s 0x%03X\n", "killtarget",   OFF(edict_t, killtarget));
	printf("  %-22s 0x%03X\n", "team",         OFF(edict_t, team));
	printf("  %-22s 0x%03X\n", "pathtarget",   OFF(edict_t, pathtarget));
	printf("  %-22s 0x%03X\n", "deathtarget",  OFF(edict_t, deathtarget));
	printf("  %-22s 0x%03X\n", "combattarget", OFF(edict_t, combattarget));
	printf("  %-22s 0x%03X\n", "target_ent",   OFF(edict_t, target_ent));
	printf("  %-22s 0x%03X\n", "speed",        OFF(edict_t, speed));
	printf("  %-22s 0x%03X\n", "accel",        OFF(edict_t, accel));
	printf("  %-22s 0x%03X\n", "decel",        OFF(edict_t, decel));
	printf("  %-22s 0x%03X\n", "movedir",      OFF(edict_t, movedir));
	printf("  %-22s 0x%03X\n", "pos1",         OFF(edict_t, pos1));
	printf("  %-22s 0x%03X\n", "pos2",         OFF(edict_t, pos2));
	printf("  %-22s 0x%03X\n", "velocity",     OFF(edict_t, velocity));
	printf("  %-22s 0x%03X\n", "avelocity",    OFF(edict_t, avelocity));
	printf("  %-22s 0x%03X\n", "mass",         OFF(edict_t, mass));
	printf("  %-22s 0x%03X\n", "gravity",      OFF(edict_t, gravity));
	printf("  %-22s 0x%03X\n", "goalentity",   OFF(edict_t, goalentity));
	printf("  %-22s 0x%03X\n", "movetarget",   OFF(edict_t, movetarget));
	printf("  %-22s 0x%03X\n", "yaw_speed",    OFF(edict_t, yaw_speed));
	printf("  %-22s 0x%03X\n", "ideal_yaw",    OFF(edict_t, ideal_yaw));
	printf("  %-22s 0x%03X\n", "nextthink",    OFF(edict_t, nextthink));
	printf("  %-22s 0x%03X\n", "prethink",     OFF(edict_t, prethink));
	printf("  %-22s 0x%03X\n", "think",        OFF(edict_t, think));
	printf("  %-22s 0x%03X\n", "blocked",      OFF(edict_t, blocked));
	printf("  %-22s 0x%03X\n", "monsterinfo",  OFF(edict_t, monsterinfo));
	printf("  %-22s 0x%03X\n", "takedamage",   OFF(edict_t, takedamage));
	printf("  %-22s 0x%03X\n", "die",          OFF(edict_t, die));
	printf("  %-22s 0x%03X\n", "pain",         OFF(edict_t, pain));
	printf("  %-22s 0x%03X\n", "touch",        OFF(edict_t, touch));
printf("  %-22s 0x%03X\n", "use",          OFF(edict_t, use));
	printf("  %-22s 0x%03X\n", "touch_debounce_time", OFF(edict_t, touch_debounce_time));
	printf("  %-22s 0x%03X\n", "pain_debounce_time",  OFF(edict_t, pain_debounce_time));
	printf("  %-22s 0x%03X\n", "damage_debounce_time",OFF(edict_t, damage_debounce_time));
	printf("  %-22s 0x%03X\n", "fly_sound_debounce_time", OFF(edict_t, fly_sound_debounce_time));
	printf("  %-22s 0x%03X\n", "last_move_time", OFF(edict_t, last_move_time));
	printf("  %-22s 0x%03X\n", "health",       OFF(edict_t, health));
	printf("  %-22s 0x%03X\n", "max_health",   OFF(edict_t, max_health));
	printf("  %-22s 0x%03X\n", "gib_health",   OFF(edict_t, gib_health));
	printf("  %-22s 0x%03X\n", "deadflag",     OFF(edict_t, deadflag));
	printf("  %-22s 0x%03X\n", "show_hostile", OFF(edict_t, show_hostile));
	printf("  %-22s 0x%03X\n", "powerarmor_time", OFF(edict_t, powerarmor_time));
	printf("  %-22s 0x%03X\n", "map",          OFF(edict_t, map));
	printf("  %-22s 0x%03X\n", "viewheight",   OFF(edict_t, viewheight));
	printf("  %-22s 0x%03X\n", "takedamage",   OFF(edict_t, takedamage));
	printf("  %-22s 0x%03X\n", "dmg",          OFF(edict_t, dmg));
	printf("  %-22s 0x%03X\n", "radius_dmg",   OFF(edict_t, radius_dmg));
	printf("  %-22s 0x%03X\n", "dmg_radius",   OFF(edict_t, dmg_radius));
	printf("  %-22s 0x%03X\n", "sounds",       OFF(edict_t, sounds));
	printf("  %-22s 0x%03X\n", "count",        OFF(edict_t, count));
	printf("  %-22s 0x%03X\n", "chain",        OFF(edict_t, chain));
	printf("  %-22s 0x%03X\n", "enemy",        OFF(edict_t, enemy));
	printf("  %-22s 0x%03X\n", "oldenemy",     OFF(edict_t, oldenemy));
	printf("  %-22s 0x%03X\n", "activator",    OFF(edict_t, activator));
	printf("  %-22s 0x%03X\n", "groundentity", OFF(edict_t, groundentity));
	printf("  %-22s 0x%03X\n", "teamchain",    OFF(edict_t, teamchain));
	printf("  %-22s 0x%03X\n", "teammaster",   OFF(edict_t, teammaster));
	printf("  %-22s 0x%03X\n", "mynoise",      OFF(edict_t, mynoise));
	printf("  %-22s 0x%03X\n", "mynoise2",     OFF(edict_t, mynoise2));
	printf("  %-22s 0x%03X\n", "noise_index",  OFF(edict_t, noise_index));
	printf("  %-22s 0x%03X\n", "noise_index2", OFF(edict_t, noise_index2));
	printf("  %-22s 0x%03X\n", "volume",       OFF(edict_t, volume));
	printf("  %-22s 0x%03X\n", "attenuation",  OFF(edict_t, attenuation));
	printf("  %-22s 0x%03X\n", "wait",         OFF(edict_t, wait));
	printf("  %-22s 0x%03X\n", "delay",        OFF(edict_t, delay));
	printf("  %-22s 0x%03X\n", "random",       OFF(edict_t, random));
	printf("  %-22s 0x%03X\n", "teleport_time",OFF(edict_t, teleport_time));
	printf("  %-22s 0x%03X\n", "watertype",    OFF(edict_t, watertype));
	printf("  %-22s 0x%03X\n", "waterlevel",   OFF(edict_t, waterlevel));
	printf("  %-22s 0x%03X\n", "move_origin",  OFF(edict_t, move_origin));
	printf("  %-22s 0x%03X\n", "move_angles",  OFF(edict_t, move_angles));
	printf("  %-22s 0x%03X\n", "light_level",  OFF(edict_t, light_level));
	printf("  %-22s 0x%03X\n", "style",        OFF(edict_t, style));
	printf("  %-22s 0x%03X\n", "item",         OFF(edict_t, item));
	printf("  %-22s 0x%03X\n", "moveinfo",     OFF(edict_t, moveinfo));
	printf("  %-22s 0x%03X\n", "monsterinfo",  OFF(edict_t, monsterinfo));
}

static void gclient_fields (void)
{
	printf("\n== gclient_t fields ==\n");
	printf("  %-22s 0x%03X\n", "ps",             OFF(gclient_t, ps));
	printf("  %-22s 0x%03X\n", "ping",           OFF(gclient_t, ping));
	printf("  %-22s 0x%03X\n", "pers",           OFF(gclient_t, pers));
	printf("  %-22s 0x%03X\n", "resp",           OFF(gclient_t, resp));
	printf("  %-22s 0x%03X\n", "old_pmove",      OFF(gclient_t, old_pmove));
	printf("  %-22s 0x%03X\n", "ammo_index",     OFF(gclient_t, ammo_index));
	printf("  %-22s 0x%03X\n", "damage_armor",   OFF(gclient_t, damage_armor));
	printf("  %-22s 0x%03X\n", "damage_parmor",  OFF(gclient_t, damage_parmor));
	printf("  %-22s 0x%03X\n", "damage_blood",   OFF(gclient_t, damage_blood));
	printf("  %-22s 0x%03X\n", "damage_knockback", OFF(gclient_t, damage_knockback));
	printf("  %-22s 0x%03X\n", "damage_from",    OFF(gclient_t, damage_from));
	printf("  %-22s 0x%03X\n", "weaponstate",    OFF(gclient_t, weaponstate));
	printf("  %-22s 0x%03X\n", "kick_angles",    OFF(gclient_t, kick_angles));
	printf("  %-22s 0x%03X\n", "v_dmg_roll",     OFF(gclient_t, v_dmg_roll));
	printf("  %-22s 0x%03X\n", "v_dmg_pitch",    OFF(gclient_t, v_dmg_pitch));
	printf("  %-22s 0x%03X\n", "v_dmg_time",     OFF(gclient_t, v_dmg_time));
	printf("  %-22s 0x%03X\n", "invincible_framenum", OFF(gclient_t, invincible_framenum));
}

int main (void)
{
	edict_fields();
	gclient_fields();
	return 0;
}