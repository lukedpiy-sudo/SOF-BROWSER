// rea decompile_all
// name: FUN_50095c50
// address: 0x50095c50
// body: available
// range: 0x50095c50-0x50095d6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_50095c50(uint param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xc0800000;
  *(undefined4 *)(param_1 + 0x120) = 0xc24c0000;
  *(undefined4 *)(param_1 + 0x124) = 0xc28c0000;
  *(undefined4 *)(param_1 + 0x128) = 0x40800000;
  *(undefined4 *)(param_1 + 300) = 0x424c0000;
  *(undefined4 *)(param_1 + 0x130) = 0x428c0000;
  *(undefined4 *)(param_1 + 0x2ec) = 999999;
  if ((*(uint *)(param_1 + 0x1b8) & 1) != 0) {
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffffe;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
  if (iVar1 == 1) {
    pcVar2 = s_banner2_5014aa60;
  }
  else if (iVar1 == 2) {
    if (DAT_5015c9e8 == '\0') {
      pcVar2 = s_banner3_5014aa68;
    }
    else {
      pcVar2 = s_banner5_5014aa70;
    }
  }
  else if (iVar1 == 3) {
    pcVar2 = s_banner4_5014aa78;
  }
  else {
    pcVar2 = s_banner1_5014aa80;
  }
  *(code **)(param_1 + 0x2cc) = FUN_50095be0;
  FUN_500b3870(param_1,&PTR_s_objects_generic_banner_generic_50147f70,pcVar2,0);
  if ((*(byte *)(param_1 + 0x1b8) & 4) == 0) {
    *(code **)(param_1 + 0x2b8) = FUN_50095b20;
    uVar3 = FUN_50107636();
    *(float *)(param_1 + 0x2b4) = (float)((int)uVar3 % 5) * 0.1 + DAT_5015ccdc;
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x164) + 0x4c))(DAT_5015ccdc);
  }
                    /* WARNING: Could not recover jumptable at 0x50095d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_5015c9f4)();
  return;
}

