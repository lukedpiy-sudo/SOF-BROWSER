// rea decompile_all
// name: FUN_500698d0
// address: 0x500698d0
// body: available
// range: 0x500698d0-0x50069a5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500698d0(void *this,int param_1)

{
  char *_Source;
  
  switch(param_1) {
  case 2:
    _Source = s_pistolbox_50144a28;
    break;
  case 3:
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0xb0),s_shotgunbox_50144a1c,0x40);
    return;
  case 4:
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0xb0),s_pistol2box_50144a10,0x40);
    return;
  case 5:
    _Source = s_autobox_50144a08;
    break;
  case 6:
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0xb0),s_batterybox_501449fc,0x40);
    return;
  case 7:
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0xb0),s_gasbox_501449f4,0x40);
    return;
  case 8:
    _Source = s_rocketbox_501449e8;
    break;
  case 9:
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0xb0),s_slugbox_501449e0,0x40);
    return;
  case 10:
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0xb0),s_ammo_9mm_single_501449d0,0x40)
    ;
    return;
  case 0xb:
    _Source = s_ammo_00_single_501449c0;
    break;
  case 0xc:
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0xb0),s_ammo_44_single_501449b0,0x40);
    return;
  case 0xd:
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0xb0),s_ammo_556_single_501449a0,0x40)
    ;
    return;
  case 0xe:
    _Source = s_ammo_bat_50144994;
    break;
  case 0xf:
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0xb0),s_ammo_gas_single_50144984,0x40)
    ;
    return;
  case 0x10:
    _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0xb0),s_ammo_rocket_single_50144970,
             0x40);
    return;
  case 0x11:
    _Source = s_ammo_slug_single_5014495c;
    break;
  default:
    goto switchD_500698e0_default;
  }
  _strncpy((char *)(*(int *)((int)this + param_1 * 4 + 4) + 0xb0),_Source,0x40);
switchD_500698e0_default:
  return;
}

