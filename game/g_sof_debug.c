/* g_sof_debug.c - server-side debug commands for the SoF multiplayer port.
 *
 * These exist so an automated test harness can observe and steer a live
 * deathmatch without needing a human at the keyboard. The commands arrive
 * through ClientCommand() (the client types them in its console), and all
 * output goes through gi.dprintf so it lands in the server log.
 *
 *   sof_pv                    dump every connected player's state
 *   sof_ammo <name> <slot> <n> set a player's ammo count (inventory slot)
 *   sof_tp <name> <x> <y> <z> teleport a player
 *   sof_front <name>          place <name> straight in front of player 1
 *                             (using player 1's current view angles), so the
 *                             shooter's crosshair is already on the target
 *   sof_aim <name> <yaw> <pitch> set a player's view angles (degrees)
 *
 * Note: this port keeps armour in the inventory (SoF model, see
 * g_items.c:ArmorIndex) rather than in client->armor / client->armorvalue.
 */

#include "g_local.h"
#include "g_sof.h"

int	ArmorIndex (edict_t *ent);

/* ------------------------------------------------------------------ *
 * helpers
 * ------------------------------------------------------------------ */
static edict_t *sof_player_ent (const char *name)
{
	int		i;

	for (i = 0; i < (int)game.maxclients; i++)
	{
		gclient_t	*cl = &game.clients[i];
		edict_t		*e;

		if (!cl->pers.connected || !cl->pers.netname[0])
			continue;

		if (Q_strcasecmp (cl->pers.netname, name) != 0)
			continue;

		e = &g_edicts[i + 1];
		if (e->client == cl)
			return e;
	}

	return NULL;
}

static edict_t *sof_player_by_index (int index)
{
	if (index < 0 || index >= (int)game.maxclients)
		return NULL;

	if (!game.clients[index].pers.connected)
		return NULL;

	return &g_edicts[index + 1];
}

/* ------------------------------------------------------------------ *
 * sof_pv - print the state of every connected player
 * ------------------------------------------------------------------ */
static void sof_cmd_pv (void)
{
	int		i;

	gi.dprintf ("sofpv: %d client slots\n", (int)game.maxclients);

	for (i = 0; i < (int)game.maxclients; i++)
	{
		gclient_t	*cl = &game.clients[i];
		edict_t		*e;
		const sof_weapon_t *w;

		if (!cl->pers.connected || !cl->pers.netname[0])
			continue;

		e = &g_edicts[i + 1];
		w = Sof_WeaponForClient (e);

		gi.dprintf ("sofpv: [%d] name=%s health=%d armor_index=%d "
			"weapon=%s ammo_index=%d ammo=%d sof_cost=%d sof_dmg=%d "
			"pellets=%d spread=%.3f delay=%.1f origin=%.0f %.0f %.0f\n",
			i,
			cl->pers.netname,
			cl->pers.health,
			ArmorIndex (e),
			cl->pers.weapon ? cl->pers.weapon->classname : "(none)",
			cl->ammo_index,
			cl->ammo_index ? cl->pers.inventory[cl->ammo_index] : -1,
			w ? w->ammo_per_shot : -1,
			w ? w->damage : -1,
			w ? w->pellets : -1,
			w ? w->spread : -1.0f,
			w ? w->attack_delay : -1.0f,
			e->s.origin[0], e->s.origin[1], e->s.origin[2]);
	}
}

/* ------------------------------------------------------------------ *
 * sof_ammo <name> <inventory slot> <count>
 * ------------------------------------------------------------------ */
static void sof_cmd_ammo (void)
{
	edict_t		*e;
	int			idx, count;

	if (gi.argc () != 4)
	{
		gi.dprintf ("usage: sof_ammo <name> <slot> <count>\n");
		return;
	}

	e = sof_player_ent (gi.argv (1));
	if (!e)
	{
		gi.dprintf ("sofammo: no such player '%s'\n", gi.argv (1));
		return;
	}

	idx = atoi (gi.argv (2));
	count = atoi (gi.argv (3));

	if (idx < 0 || idx >= MAX_ITEMS)
	{
		gi.dprintf ("sofammo: bad slot %d\n", idx);
		return;
	}

	e->client->pers.inventory[idx] = count;
	gi.dprintf ("sofammo: %s inventory[%d] = %d\n",
		gi.argv (1), idx, count);
}

/* ------------------------------------------------------------------ *
 * sof_tp <name> <x> <y> <z>
 * ------------------------------------------------------------------ */
static void sof_cmd_tp (void)
{
	edict_t		*e;

	if (gi.argc () != 5)
	{
		gi.dprintf ("usage: sof_tp <name> <x> <y> <z>\n");
		return;
	}

	e = sof_player_ent (gi.argv (1));
	if (!e)
	{
		gi.dprintf ("softp: no such player '%s'\n", gi.argv (1));
		return;
	}

	e->s.origin[0] = atof (gi.argv (2));
	e->s.origin[1] = atof (gi.argv (3));
	e->s.origin[2] = atof (gi.argv (4));

	gi.linkentity (e);
	gi.dprintf ("softp: %s -> %.0f %.0f %.0f\n",
		gi.argv (1), e->s.origin[0], e->s.origin[1], e->s.origin[2]);
}

/* ------------------------------------------------------------------ *
 * sof_front <name>
 *
 * Put <name> directly in front of player 1, along player 1's current view
 * direction, so that player 1's crosshair is already on the target and a
 * single mouse click produces a hit.
 * ------------------------------------------------------------------ */
static void sof_cmd_front (void)
{
	edict_t		*shooter, *target;
	gclient_t	*cl;
	vec3_t		forward, angles, spot;
	float		dist = 96.0f;
	float		sp, sy, cp, cy;

	if (gi.argc () != 2)
	{
		gi.dprintf ("usage: sof_front <name>\n");
		return;
	}

	shooter = sof_player_by_index (0);
	target = sof_player_ent (gi.argv (1));

	if (!shooter || !target)
	{
		gi.dprintf ("soffront: need a shooter (slot 0) and a target '%s'\n",
			gi.argv (1));
		return;
	}

	cl = shooter->client;

	/* the angles the server last received from the shooter */
	VectorCopy (cl->resp.cmd_angles, angles);

	sp = sin (angles[0]);
	cp = cos (angles[0]);
	sy = sin (angles[1]);
	cy = cos (angles[1]);

	forward[0] = cp * cy;
	forward[1] = cp * sy;
	forward[2] = -sp;

	spot[0] = shooter->s.origin[0] + forward[0] * dist;
	spot[1] = shooter->s.origin[1] + forward[1] * dist;
	spot[2] = shooter->s.origin[2] + forward[2] * dist + 16.0f;

	VectorCopy (spot, target->s.origin);
	gi.linkentity (target);

	gi.dprintf ("soffront: shooter=%s angles=%.1f %.1f %.1f -> target %s at "
		"%.0f %.0f %.0f\n",
		cl->pers.netname, angles[0], angles[1], angles[2],
		target->client->pers.netname,
		target->s.origin[0], target->s.origin[1], target->s.origin[2]);
}

/* ------------------------------------------------------------------ *
 * sof_aim <name> <yaw> <pitch>
 * ------------------------------------------------------------------ */
static void sof_cmd_aim (void)
{
	edict_t		*e;

	if (gi.argc () != 4)
	{
		gi.dprintf ("usage: sof_aim <name> <yaw> <pitch>\n");
		return;
	}

	e = sof_player_ent (gi.argv (1));
	if (!e)
	{
		gi.dprintf ("sofaim: no such player '%s'\n", gi.argv (1));
		return;
	}

	e->client->resp.cmd_angles[1] = atof (gi.argv (2));
	e->client->resp.cmd_angles[0] = atof (gi.argv (3));
	VectorCopy (e->client->resp.cmd_angles, e->client->ps.viewangles);

	gi.dprintf ("sofaim: %s yaw=%.1f pitch=%.1f\n",
		gi.argv (1), e->client->resp.cmd_angles[1],
		e->client->resp.cmd_angles[0]);
}

/* ------------------------------------------------------------------ *
 * dispatch - called from ClientCommand
 * ------------------------------------------------------------------ */
qboolean Sof_DebugCommand (edict_t *ent)
{
	const char	*cmd;

	if (!ent || !ent->client)
		return false;

	cmd = gi.argv (0);

	if (Q_stricmp (cmd, "sofpv") == 0)
	{
		sof_cmd_pv ();
		return true;
	}
	if (Q_stricmp (cmd, "sofammo") == 0)
	{
		sof_cmd_ammo ();
		return true;
	}
	if (Q_stricmp (cmd, "softp") == 0)
	{
		sof_cmd_tp ();
		return true;
	}
	if (Q_stricmp (cmd, "soffront") == 0)
	{
		sof_cmd_front ();
		return true;
	}
	if (Q_stricmp (cmd, "sofaim") == 0)
	{
		sof_cmd_aim ();
		return true;
	}

	return false;
}
