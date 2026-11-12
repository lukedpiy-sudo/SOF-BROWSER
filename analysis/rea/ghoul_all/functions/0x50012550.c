// rea decompile_all
// name: FUN_50012550
// address: 0x50012550
// body: available
// range: 0x50012550-0x50012749 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_50012550(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = __strcmpi((char *)(*(int *)(param_1 + 0x24) + 0x48e),s_w_pistol2_5012f97c);
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = __strcmpi((char *)(*(int *)(param_1 + 0x24) + 0x48e),s_w_pistol1_5012f970);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = __strcmpi((char *)(*(int *)(param_1 + 0x24) + 0x48e),s_w_sniperrifle_5012f960);
  if (iVar1 == 0) {
    return 7;
  }
  iVar1 = __strcmpi((char *)(*(int *)(param_1 + 0x24) + 0x48e),s_w_machinegun_5012f950);
  if (iVar1 == 0) {
    return 0xc;
  }
  iVar1 = __strcmpi((char *)(*(int *)(param_1 + 0x24) + 0x48e),&DAT_5012f948);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = __strcmpi((char *)(*(int *)(param_1 + 0x24) + 0x48e),s_w_bat_5012f940);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = __strcmpi((char *)(*(int *)(param_1 + 0x24) + 0x48e),s_w_flamethrower_5012f930);
  if (iVar1 == 0) {
    return 0x12;
  }
  iVar1 = __strcmpi((char *)(*(int *)(param_1 + 0x24) + 0x48e),s_w_assault_rifle_5012f920);
  if (iVar1 == 0) {
    return 6;
  }
  iVar1 = __strcmpi((char *)(*(int *)(param_1 + 0x24) + 0x48e),s_w_machinepistol_5012f910);
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = __strcmpi((char *)(*(int *)(param_1 + 0x24) + 0x48e),s_w_autoshotgun_5012f900);
  if (iVar1 == 0) {
    return 9;
  }
  iVar1 = __strcmpi((char *)(*(int *)(param_1 + 0x24) + 0x48e),s_w_kantana_5012f8f4);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = __strcmpi((char *)(*(int *)(param_1 + 0x24) + 0x48e),s_w_shotgun_5012f8e8);
  if (iVar1 == 0) {
    return 0xb;
  }
  iVar1 = __strcmpi((char *)(*(int *)(param_1 + 0x24) + 0x48e),s_w_rocket_5012f8dc);
  if (iVar1 == 0) {
    return 0xe;
  }
  iVar1 = __strcmpi((char *)(*(int *)(param_1 + 0x24) + 0x48e),s_w_mpg_5012f8d4);
  return (-(uint)(iVar1 != 0) & 0xfffffff0) + 0x10;
}

