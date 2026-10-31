/* g_sof_selftest.c - automatic SoF firing self-test.
 *
 * The self-test runs inside the game module, so it exercises the real
 * server-side path end to end:
 *
 *     ClientThink(ent, ucmd)  ->  Weapon_Generic  ->  Sof_CanFire
 *                             ->  Sof_ConsumeAmmo ->  Fire_* -> T_Damage
 *
 * It never fabricates damage: the only thing it adds is BUTTON_ATTACK on the
 * shooter's usercmd (exactly what a real mouse click produces) plus the view
 * angles that point the shooter at the target.
 *
 * The test is armed automatically once two players are in the game, and is
 * enabled with the cvar "sof_selftest" (default 0, so a normal game never
 * fires on its own).
 *
 * Results are printed to the server console as SOFTEST lines.
 */

#include "g_local.h"
#include "g_sof.h"

typedef enum {
	ST_IDLE = 0,
	ST_ARM,		/* players found, target placed, waiting for the weapon */
	ST_FIRE,	/* overriding the usercmd to aim and fire */
	ST_REPORT,
	ST_DONE
} selftest_state_t;

typedef struct {
	selftest_state_t	state;
	float				arm_time;
	int					ammo_slot;
	int					ammo_before;
	int					health_before;
	int					ammo_after;
	int					health_after;
	int					shots;
	int						probed;
	int						trigger_down;
	edict_t				*shooter;
	edict_t				*target;
	vec3_t					aim_angles;
	vec3_t					fwd;
} selftest_t;

static selftest_t	sof_st;

/* Locate the entity that belongs to a client. The client slot index is not
 * a reliable entity index here, so match on the back pointer instead. */
static edict_t *ent_for_client (gclient_t *cl)
{
	int	i;

	for (i = 0; i < (int)game.maxentities; i++)
	{
		if (g_edicts[i].client == cl && g_edicts[i].inuse)
			return &g_edicts[i];
	}
	return NULL;
}

static edict_t *first_player (void)
{
	int	i;

	for (i = 0; i < (int)game.maxclients; i++) {
		gclient_t	*cl = &game.clients[i];
		edict_t		*e;

		if (!cl->pers.connected || !cl->pers.netname[0])
			continue;
		if (cl->pers.health <= 0)
			continue;
		if (!cl->pers.weapon)
			continue;

		e = ent_for_client (cl);
		if (e)
			return e;
	}
	return NULL;
}

static edict_t *second_player (edict_t *first)
{
	int	i;

	for (i = 0; i < (int)game.maxclients; i++) {
		gclient_t	*cl = &game.clients[i];
		edict_t		*e;

		if (!cl->pers.connected || !cl->pers.netname[0])
			continue;
		if (cl->pers.health <= 0)
			continue;

		e = ent_for_client (cl);
		if (e && e != first)
			return e;
	}
	return NULL;
}

/* aim angles (pitch, yaw) that point from `from` at `to` */
static void angles_to (const vec3_t from, const vec3_t to, vec3_t out)
{
	vec3_t	d;
	float	len, yaw, pitch;

	VectorSubtract (to, from, d);
	len = VectorNormalize (d);

	if (len < 0.001) {
		out[0] = 0;
		out[1] = 0;
		return;
	}

	yaw = atan2 (d[1], d[0]) * 180.0f / M_PI;
	pitch = -asin (d[2]) * 180.0f / M_PI;

	out[0] = pitch;
	out[1] = yaw;
	out[2] = 0;
}

void Sof_SelfTestHook (edict_t *ent, usercmd_t *ucmd)
{
	cvar_t	*enabled;

	if (sof_st.state == ST_DONE)
		return;

	if (sof_st.state == ST_IDLE) {
		enabled = gi.cvar ("sof_selftest", "0", 0);

		if (!enabled || !enabled->value)
			return;

		if (!sof_st.probed) {
			int		i;
			sof_st.probed = 1;
			gi.dprintf ("SOFTEST: probe enabled=%s value=%f maxclients=%d\n",
				enabled ? "yes" : "no",
				enabled ? enabled->value : -1.0f,
				(int)game.maxclients);
			for (i = 0; i < (int)game.maxclients; i++) {
				gclient_t *cl = &game.clients[i];
				gi.dprintf ("SOFTEST: probe slot %d connected=%d name='%s' "
					"health=%d weapon=%s\n",
					i, (int)cl->pers.connected, cl->pers.netname,
					cl->pers.health,
					cl->pers.weapon ? cl->pers.weapon->classname : "(none)");
			}
		}


		sof_st.shooter = first_player ();
		if (!sof_st.shooter)
			return;

		sof_st.target = second_player (sof_st.shooter);
		if (!sof_st.target)
			return;

		/* the shooter needs a weapon that actually uses ammo - stock Q2
		 * spawns players with the blaster, which has none */
		{
			gitem_t	*wep = FindItem ("Shotgun");
			gitem_t	*ammo = wep ? FindItem (wep->ammo) : NULL;

			if (!wep || !ammo)
			{
				gi.dprintf ("SOFTEST: cannot find shotgun/shells item\n");
				sof_st.state = ST_DONE;
				return;
			}

			sof_st.shooter->client->pers.weapon = wep;
			sof_st.shooter->client->ammo_index = ITEM_INDEX (ammo);
			sof_st.shooter->client->pers.inventory[sof_st.shooter->client->ammo_index] = 25;
			sof_st.shooter->client->weaponstate = WEAPON_READY;
			sof_st.shooter->client->ps.gunindex = gi.modelindex (wep->view_model);
		}

		if (!sof_st.shooter->client->pers.weapon || !sof_st.shooter->client->ammo_index)
			return;

		sof_st.ammo_slot = sof_st.shooter->client->ammo_index;
		sof_st.arm_time = level.time;

		/* Park the target on the ground directly in front of the shooter
		 * with a generous box, so the weapon spread cannot miss it and it
		 * stays inside the map's PVS leafs (an entity floating in the void
		 * is not reachable by the trace). */
		{
			vec3_t	forward;
			float	sy, cy, sp, cp;
			vec3_t	muzzle, aim_point;

			sp = sin (sof_st.shooter->client->v_angle[0]);
			cp = cos (sof_st.shooter->client->v_angle[0]);
			sy = sin (sof_st.shooter->client->v_angle[1]);
			cy = cos (sof_st.shooter->client->v_angle[1]);
			forward[0] = cp * cy;
			forward[1] = cp * sy;
			forward[2] = 0.0f;

			sof_st.target->movetype = MOVETYPE_NONE;
			VectorClear (sof_st.target->velocity);
			VectorSet (sof_st.target->mins, -16.0f, -16.0f, -24.0f);
			VectorSet (sof_st.target->maxs, 16.0f, 16.0f, 32.0f);
			sof_st.target->s.origin[0] = sof_st.shooter->s.origin[0] + forward[0] * 40.0f;
			sof_st.target->s.origin[1] = sof_st.shooter->s.origin[1] + forward[1] * 40.0f;
			sof_st.target->s.origin[2] = sof_st.shooter->s.origin[2] + 8.0f;
			gi.linkentity (sof_st.target);

			/* remember the offset so the target can be kept in place */
			VectorCopy (forward, sof_st.fwd);
			sof_st.fwd[0] *= 40.0f;
			sof_st.fwd[1] *= 40.0f;

			/* aim from the muzzle at the target's chest.
			 * The shotgun's muzzle offset is (0, 8, viewheight-8) and
			 * P_ProjectSource adds it in world axes. */
			VectorSet (muzzle,
				sof_st.shooter->s.origin[0],
				sof_st.shooter->s.origin[1] + 8.0f,
				sof_st.shooter->s.origin[2] + sof_st.shooter->viewheight - 8.0f);
			VectorSet (aim_point,
				sof_st.target->s.origin[0],
				sof_st.target->s.origin[1],
				sof_st.target->s.origin[2] + 16.0f);
			angles_to (muzzle, aim_point, sof_st.aim_angles);
		}

		sof_st.ammo_before = sof_st.shooter->client->pers.inventory[sof_st.ammo_slot];
		sof_st.health_before = sof_st.target->health;

		gi.dprintf ("SOFTEST: armed shooter=%s target=%s ammo_slot=%d "
			"ammo_before=%d target_health_before=%d aim=%.1f %.1f\n",
			sof_st.shooter->client->pers.netname,
			sof_st.target->client->pers.netname,
			sof_st.ammo_slot, sof_st.ammo_before, sof_st.health_before,
			sof_st.aim_angles[0], sof_st.aim_angles[1]);

		gi.dprintf ("SOFTEST: diag shooter_idx=%d target_idx=%d "
			"shooter_ent_health=%d shooter_pers_health=%d shooter_inuse=%d "
			"target_ent_health=%d target_pers_health=%d target_inuse=%d "
			"target_deadflag=%d target_modelindex=%d\n",
			(int)(sof_st.shooter - g_edicts),
			(int)(sof_st.target - g_edicts),
			sof_st.shooter->health, sof_st.shooter->client->pers.health,
			(int)sof_st.shooter->inuse,
			sof_st.target->health, sof_st.target->client->pers.health,
			(int)sof_st.target->inuse,
			sof_st.target->deadflag, sof_st.target->s.modelindex);

		sof_st.state = ST_ARM;
		return;
	}

	if (sof_st.state == ST_ARM) {
		/* wait for the weapon to be raised and ready */
		if (sof_st.shooter->client->weaponstate != WEAPON_READY)
			return;
		if (level.time < sof_st.arm_time + 0.2f)
			return;

		sof_st.state = ST_FIRE;
		return;
	}

	if (sof_st.state == ST_FIRE) {
		if (ent != sof_st.shooter)
			return;

		/* keep the target parked */
		sof_st.target->s.origin[0] = sof_st.shooter->s.origin[0] + sof_st.fwd[0];
		sof_st.target->s.origin[1] = sof_st.shooter->s.origin[1] + sof_st.fwd[1];
		sof_st.target->s.origin[2] = sof_st.shooter->s.origin[2] + 8.0f;
		gi.linkentity (sof_st.target);

		/* aim and pull the trigger - this is the only synthetic part.
		 * The client-side view-angle deltas are cleared, otherwise the
		 * final view angles would be cmd.angles + delta_angles and the
		 * shot would go somewhere else entirely. */
		sof_st.shooter->client->ps.pmove.delta_angles[0] = 0;
		sof_st.shooter->client->ps.pmove.delta_angles[1] = 0;
		sof_st.shooter->client->ps.pmove.delta_angles[2] = 0;

		ucmd->angles[0] = (short)ANGLE2SHORT (sof_st.aim_angles[0]);
		ucmd->angles[1] = (short)ANGLE2SHORT (sof_st.aim_angles[1]);

		/* alternate press/release so each shot is a fresh trigger pull */
		if (sof_st.trigger_down)
		{
			ucmd->buttons &= ~BUTTON_ATTACK;
			sof_st.trigger_down = 0;
		}
		else
		{
			ucmd->buttons |= BUTTON_ATTACK;
			sof_st.trigger_down = 1;
		}

		/* the weapon has to come back up between shots */
		if (sof_st.shooter->client->weaponstate == WEAPON_FIRING)
			return;

		if (sof_st.shooter->client->pers.inventory[sof_st.ammo_slot] < sof_st.ammo_before) {
			sof_st.shots++;
			sof_st.ammo_after = sof_st.shooter->client->pers.inventory[sof_st.ammo_slot];
			sof_st.health_after = sof_st.target->health;

			gi.dprintf ("SOFTEST: shot %d ammo_after=%d target_health_after=%d\n",
				sof_st.shots, sof_st.ammo_after, sof_st.health_after);

			if (sof_st.shots >= 3 && sof_st.ammo_before - sof_st.ammo_after >= 3) {
				gi.dprintf ("SOFTEST: RESULT ammo %d->%d (consumed %d), "
					"target health %d->%d\n",
					sof_st.ammo_before, sof_st.ammo_after,
					sof_st.ammo_before - sof_st.ammo_after,
					sof_st.health_before, sof_st.health_after);
				gi.dprintf ("SOFTEST: VERDICT %s\n",
					(sof_st.ammo_before > sof_st.ammo_after && sof_st.health_after < sof_st.health_before)
						? "PASS" : "FAIL");
				sof_st.state = ST_DONE;
			}
		}
		return;
	}
}
