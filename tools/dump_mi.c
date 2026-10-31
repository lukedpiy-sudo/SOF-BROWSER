#include "../game/g_local.h"
#include <stdio.h>
#include <stddef.h>
#define OFF(f) (unsigned)(offsetof(monsterinfo_t, f) + offsetof(edict_t, monsterinfo))
int main(void){
  printf("monsterinfo_t at 0x%X, size 0x%X\n",(unsigned)offsetof(edict_t,monsterinfo),(unsigned)sizeof(monsterinfo_t));
  printf("  aiflags            0x%03X\n",OFF(aiflags));
  printf("  nextframe          0x%03X\n",OFF(nextframe));
  printf("  scale              0x%03X\n",OFF(scale));
  printf("  pausetime          0x%03X\n",OFF(pausetime));
  printf("  attack_finished    0x%03X\n",OFF(attack_finished));
  printf("  saved_goal         0x%03X\n",OFF(saved_goal));
  printf("  search_time        0x%03X\n",OFF(search_time));
  printf("  trail_time         0x%03X\n",OFF(trail_time));
  printf("  last_sighting      0x%03X\n",OFF(last_sighting));
  printf("  attack_state       0x%03X\n",OFF(attack_state));
  printf("  lefty              0x%03X\n",OFF(lefty));
  printf("  idle_time          0x%03X\n",OFF(idle_time));
  printf("  linkcount          0x%03X\n",OFF(linkcount));
  printf("  power_armor_type   0x%03X\n",OFF(power_armor_type));
  printf("  power_armor_power  0x%03X\n",OFF(power_armor_power));
  return 0;
}
