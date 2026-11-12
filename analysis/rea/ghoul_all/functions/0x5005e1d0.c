// rea decompile_all
// name: FUN_5005e1d0
// address: 0x5005e1d0
// body: available
// range: 0x5005e1d0-0x5005e287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_5005e1d0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined1 local_38 [48];
  int iStack_8;
  
  local_44 = *param_1;
  local_40 = param_1[1];
  local_3c = (float)param_1[2] - 40.0;
  (*DAT_5015cac0)(param_1,&DAT_5018bf0c,&DAT_5018bf0c,&local_44,0,0x2020003,local_38);
  if (((iStack_8 == 0) || (*(int *)(iStack_8 + 0x78) == 0)) ||
     (*(uint **)(iStack_8 + 0x1b4) == (uint *)0x0)) {
    return 0;
  }
  puVar1 = FUN_50107030(*(uint **)(iStack_8 + 0x1b4),s_func_door_501420e8);
  if (((puVar1 == (uint *)0x0) &&
      (puVar1 = FUN_50107030(*(uint **)(iStack_8 + 0x1b4),s_func_train_501431c4),
      puVar1 == (uint *)0x0)) &&
     (puVar1 = FUN_50107030(*(uint **)(iStack_8 + 0x1b4),s_func_plat_501431b8),
     puVar1 == (uint *)0x0)) {
    return 0;
  }
  return 1;
}

