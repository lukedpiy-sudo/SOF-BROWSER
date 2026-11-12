// rea decompile_all
// name: FUN_50069d40
// address: 0x50069d40
// body: available
// range: 0x50069d40-0x5006a256 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50069d40(void *this,int param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  switch(param_1) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    puVar1 = *(undefined4 **)(*(int *)((int)this + param_1 * 4 + 4) + 0xa4);
    if ((puVar1 != (undefined4 *)0x0) && (pcVar2 = (char *)*puVar1, pcVar2 != (char *)0x0)) {
      FUN_500a5c10(&DAT_5015c79c,pcVar2,&DAT_50143ce4,1,(char *)0x0,(char *)0x0,'\0');
    }
    pcVar2 = s_fade_box_50144c08;
    break;
  default:
    return;
  case 0xd:
    puVar1 = *(undefined4 **)(*(int *)((int)this + param_1 * 4 + 4) + 0xa4);
    if ((puVar1 != (undefined4 *)0x0) && (pcVar2 = (char *)*puVar1, pcVar2 != (char *)0x0)) {
      FUN_500a5c10(&DAT_5015c79c,pcVar2,s_ammo_556_50143c94,1,(char *)0x0,(char *)0x0,'\0');
    }
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0x104),s_fade_ammo_556_50144bf8,0x40);
    return;
  case 0x10:
    puVar1 = *(undefined4 **)(*(int *)((int)this + param_1 * 4 + 4) + 0xa4);
    if ((puVar1 != (undefined4 *)0x0) && (pcVar2 = (char *)*puVar1, pcVar2 != (char *)0x0)) {
      FUN_500a5c10(&DAT_5015c79c,pcVar2,s_ammo_rocket_50143c6c,1,(char *)0x0,(char *)0x0,'\0');
    }
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0x104),s_fade_ammo_rocket_50144be4,
             0x40);
    return;
  case 0x12:
    puVar1 = *(undefined4 **)(*(int *)((int)this + param_1 * 4 + 4) + 0xa4);
    if ((puVar1 != (undefined4 *)0x0) && (pcVar2 = (char *)*puVar1, pcVar2 != (char *)0x0)) {
      FUN_500a5c10(&DAT_5015c79c,pcVar2,s_pistol2_50144bdc,1,(char *)0x0,(char *)0x0,'\0');
    }
    pcVar2 = s_fade_pistol2_50144bcc;
    break;
  case 0x13:
    puVar1 = *(undefined4 **)(*(int *)((int)this + param_1 * 4 + 4) + 0xa4);
    if ((puVar1 != (undefined4 *)0x0) && (pcVar2 = (char *)*puVar1, pcVar2 != (char *)0x0)) {
      FUN_500a5c10(&DAT_5015c79c,pcVar2,s_pistol1_50144bc4,1,(char *)0x0,(char *)0x0,'\0');
    }
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0x104),s_fade_pistol1_50144bb4,0x40);
    return;
  case 0x14:
    puVar1 = *(undefined4 **)(*(int *)((int)this + param_1 * 4 + 4) + 0xa4);
    if ((puVar1 != (undefined4 *)0x0) && (pcVar2 = (char *)*puVar1, pcVar2 != (char *)0x0)) {
      FUN_500a5c10(&DAT_5015c79c,pcVar2,s_machinepistol_50144ba4,1,(char *)0x0,(char *)0x0,'\0');
    }
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0x104),s_fade_machinepistol_50144b90,
             0x40);
    return;
  case 0x15:
    puVar1 = *(undefined4 **)(*(int *)((int)this + param_1 * 4 + 4) + 0xa4);
    if ((puVar1 != (undefined4 *)0x0) && (pcVar2 = (char *)*puVar1, pcVar2 != (char *)0x0)) {
      FUN_500a5c10(&DAT_5015c79c,pcVar2,s_assault_rifle_50144b80,1,(char *)0x0,(char *)0x0,'\0');
    }
    pcVar2 = s_fade_assault_rifle_50144b6c;
    break;
  case 0x16:
    puVar1 = *(undefined4 **)(*(int *)((int)this + param_1 * 4 + 4) + 0xa4);
    if ((puVar1 != (undefined4 *)0x0) && (pcVar2 = (char *)*puVar1, pcVar2 != (char *)0x0)) {
      FUN_500a5c10(&DAT_5015c79c,pcVar2,s_sniperrifle_50144b60,1,(char *)0x0,(char *)0x0,'\0');
    }
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0x104),s_fade_sniperrifle_50144b4c,
             0x40);
    return;
  case 0x17:
    puVar1 = *(undefined4 **)(*(int *)((int)this + param_1 * 4 + 4) + 0xa4);
    if ((puVar1 != (undefined4 *)0x0) && (pcVar2 = (char *)*puVar1, pcVar2 != (char *)0x0)) {
      FUN_500a5c10(&DAT_5015c79c,pcVar2,s_autoshotgun_50144b40,1,(char *)0x0,(char *)0x0,'\0');
    }
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0x104),s_fade_autoshotgun_50144b2c,
             0x40);
    return;
  case 0x18:
    puVar1 = *(undefined4 **)(*(int *)((int)this + param_1 * 4 + 4) + 0xa4);
    if ((puVar1 != (undefined4 *)0x0) && (pcVar2 = (char *)*puVar1, pcVar2 != (char *)0x0)) {
      FUN_500a5c10(&DAT_5015c79c,pcVar2,s_shotgun_50144b24,1,(char *)0x0,(char *)0x0,'\0');
    }
    pcVar2 = s_fade_shotgun_50144b14;
    break;
  case 0x19:
    puVar1 = *(undefined4 **)(*(int *)((int)this + param_1 * 4 + 4) + 0xa4);
    if ((puVar1 != (undefined4 *)0x0) && (pcVar2 = (char *)*puVar1, pcVar2 != (char *)0x0)) {
      FUN_500a5c10(&DAT_5015c79c,pcVar2,s_machinegun_50144b08,1,(char *)0x0,(char *)0x0,'\0');
    }
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0x104),s_fade_machinegun_50144af8,0x40
            );
    return;
  case 0x1a:
    puVar1 = *(undefined4 **)(*(int *)((int)this + param_1 * 4 + 4) + 0xa4);
    if ((puVar1 != (undefined4 *)0x0) && (pcVar2 = (char *)*puVar1, pcVar2 != (char *)0x0)) {
      FUN_500a5c10(&DAT_5015c79c,pcVar2,s_rocket_50144af0,1,(char *)0x0,(char *)0x0,'\0');
    }
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0x104),s_fade_rocket_50144ae4,0x40);
    return;
  case 0x1b:
    puVar1 = *(undefined4 **)(*(int *)((int)this + param_1 * 4 + 4) + 0xa4);
    if ((puVar1 != (undefined4 *)0x0) && (pcVar2 = (char *)*puVar1, pcVar2 != (char *)0x0)) {
      FUN_500a5c10(&DAT_5015c79c,pcVar2,&DAT_50144ae0,1,(char *)0x0,(char *)0x0,'\0');
    }
    pcVar2 = s_fade_mpg_50144ad4;
    break;
  case 0x1c:
    puVar1 = *(undefined4 **)(*(int *)((int)this + param_1 * 4 + 4) + 0xa4);
    if ((puVar1 != (undefined4 *)0x0) && (pcVar2 = (char *)*puVar1, pcVar2 != (char *)0x0)) {
      FUN_500a5c10(&DAT_5015c79c,pcVar2,s_flamethrower_50144ac4,1,(char *)0x0,(char *)0x0,'\0');
    }
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0x104),s_fade_flamethrower_50144ab0,
             0x40);
    return;
  case 0x1d:
    puVar1 = *(undefined4 **)(*(int *)((int)this + param_1 * 4 + 4) + 0xa4);
    if ((puVar1 != (undefined4 *)0x0) && (pcVar2 = (char *)*puVar1, pcVar2 != (char *)0x0)) {
      FUN_500a5c10(&DAT_5015c79c,pcVar2,s_armor_50143c4c,1,(char *)0x0,(char *)0x0,'\0');
    }
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0x104),s_armorfade_50144aa4,0x40);
    return;
  case 0x1e:
    FUN_50066430(*(void **)((int)this + param_1 * 4 + 4),s_flashpak_50143c40);
    pcVar2 = s_fade_flashpak_50144a94;
    break;
  case 0x1f:
    FUN_50066430(*(void **)((int)this + param_1 * 4 + 4),&DAT_50143c3c);
    FUN_50066410(*(void **)((int)this + param_1 * 4 + 4),s_fade_c4_50144a8c);
    return;
  case 0x20:
    FUN_50066430(*(void **)((int)this + param_1 * 4 + 4),s_nightvision_50144a80);
    FUN_50066410(*(void **)((int)this + param_1 * 4 + 4),s_fade_nightvision_50144a6c);
    return;
  case 0x21:
    FUN_50066430(*(void **)((int)this + param_1 * 4 + 4),s_claymore_50143c20);
    FUN_50066410(*(void **)((int)this + param_1 * 4 + 4),s_fade_claymore_50144a5c);
    return;
  case 0x22:
    FUN_50066430(*(void **)((int)this + param_1 * 4 + 4),s_medkit_50143c00);
    FUN_50066410(*(void **)((int)this + param_1 * 4 + 4),s_fade_medkit_50144a50);
    return;
  case 0x23:
    FUN_50066430(*(void **)((int)this + param_1 * 4 + 4),s_grenade_501338e8);
    FUN_50066410(*(void **)((int)this + param_1 * 4 + 4),s_fade_grenade_50144a40);
    return;
  case 0x25:
  case 0x26:
    FUN_50066430(*(void **)((int)this + param_1 * 4 + 4),s_health_50143bbc);
    FUN_50066410(*(void **)((int)this + param_1 * 4 + 4),s_fade_health_50144a34);
    return;
  }
  _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0x104),pcVar2,0x40);
  return;
}

